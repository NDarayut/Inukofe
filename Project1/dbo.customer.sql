CREATE TABLE [dbo].[customer] (
    [Id]    INT          IDENTITY (1, 1) NOT NULL,
    [Name] VARCHAR (50) NOT NULL,
    [Gender] NCHAR(10) NOT NULL, 
    [Phone] VARCHAR(50) NULL, 
    [Total] VARCHAR(50) NOT NULL, 
    PRIMARY KEY CLUSTERED ([Id] ASC)
);

