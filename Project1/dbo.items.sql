CREATE TABLE [dbo].[items] (
    [Id]     INT          IDENTITY (1, 1) NOT NULL,
    [Name]   VARCHAR (50) NOT NULL,
    [PSmall] NCHAR (10)   NOT NULL,
    [PLarge] NCHAR (10)   NOT NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC)
);

