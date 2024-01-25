/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTTABLEDATAREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTTABLEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableHybrisReq.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ImportTableData请求参数结构体
                */
                class ImportTableDataRequest : public AbstractModel
                {
                public:
                    ImportTableDataRequest();
                    ~ImportTableDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    int64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const int64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据表基本信息
                     * @return TableRequest 数据表基本信息
                     * 
                     */
                    TableHybrisReq GetTableRequest() const;

                    /**
                     * 设置数据表基本信息
                     * @param _tableRequest 数据表基本信息
                     * 
                     */
                    void SetTableRequest(const TableHybrisReq& _tableRequest);

                    /**
                     * 判断参数 TableRequest 是否已赋值
                     * @return TableRequest 是否已赋值
                     * 
                     */
                    bool TableRequestHasBeenSet() const;

                    /**
                     * 获取列分隔符
0， \u0001
1, |
2, 空格
3，分号
4，逗号 
                     * @return ColumnDelimiter 列分隔符
0， \u0001
1, |
2, 空格
3，分号
4，逗号 
                     * 
                     */
                    std::string GetColumnDelimiter() const;

                    /**
                     * 设置列分隔符
0， \u0001
1, |
2, 空格
3，分号
4，逗号 
                     * @param _columnDelimiter 列分隔符
0， \u0001
1, |
2, 空格
3，分号
4，逗号 
                     * 
                     */
                    void SetColumnDelimiter(const std::string& _columnDelimiter);

                    /**
                     * 判断参数 ColumnDelimiter 是否已赋值
                     * @return ColumnDelimiter 是否已赋值
                     * 
                     */
                    bool ColumnDelimiterHasBeenSet() const;

                    /**
                     * 获取1 是， 0 否
                     * @return HeaderLine 1 是， 0 否
                     * 
                     */
                    int64_t GetHeaderLine() const;

                    /**
                     * 设置1 是， 0 否
                     * @param _headerLine 1 是， 0 否
                     * 
                     */
                    void SetHeaderLine(const int64_t& _headerLine);

                    /**
                     * 判断参数 HeaderLine 是否已赋值
                     * @return HeaderLine 是否已赋值
                     * 
                     */
                    bool HeaderLineHasBeenSet() const;

                    /**
                     * 获取CSV序列化字段域符,列引号， 
0， 单引号
1，双引号
                     * @return Quote CSV序列化字段域符,列引号， 
0， 单引号
1，双引号
                     * 
                     */
                    std::string GetQuote() const;

                    /**
                     * 设置CSV序列化字段域符,列引号， 
0， 单引号
1，双引号
                     * @param _quote CSV序列化字段域符,列引号， 
0， 单引号
1，双引号
                     * 
                     */
                    void SetQuote(const std::string& _quote);

                    /**
                     * 判断参数 Quote 是否已赋值
                     * @return Quote 是否已赋值
                     * 
                     */
                    bool QuoteHasBeenSet() const;

                    /**
                     * 获取源数据存储路径(如cos，需带上桶名)
                     * @return DatasourcePath 源数据存储路径(如cos，需带上桶名)
                     * 
                     */
                    std::string GetDatasourcePath() const;

                    /**
                     * 设置源数据存储路径(如cos，需带上桶名)
                     * @param _datasourcePath 源数据存储路径(如cos，需带上桶名)
                     * 
                     */
                    void SetDatasourcePath(const std::string& _datasourcePath);

                    /**
                     * 判断参数 DatasourcePath 是否已赋值
                     * @return DatasourcePath 是否已赋值
                     * 
                     */
                    bool DatasourcePathHasBeenSet() const;

                    /**
                     * 获取数据源存储类型（目前仅支持COS，CSP）
                     * @return StorageDataSourceType 数据源存储类型（目前仅支持COS，CSP）
                     * 
                     */
                    std::string GetStorageDataSourceType() const;

                    /**
                     * 设置数据源存储类型（目前仅支持COS，CSP）
                     * @param _storageDataSourceType 数据源存储类型（目前仅支持COS，CSP）
                     * 
                     */
                    void SetStorageDataSourceType(const std::string& _storageDataSourceType);

                    /**
                     * 判断参数 StorageDataSourceType 是否已赋值
                     * @return StorageDataSourceType 是否已赋值
                     * 
                     */
                    bool StorageDataSourceTypeHasBeenSet() const;

                    /**
                     * 获取文件格式（目前仅支持CSV,TSV）
                     * @return FileFormat 文件格式（目前仅支持CSV,TSV）
                     * 
                     */
                    std::string GetFileFormat() const;

                    /**
                     * 设置文件格式（目前仅支持CSV,TSV）
                     * @param _fileFormat 文件格式（目前仅支持CSV,TSV）
                     * 
                     */
                    void SetFileFormat(const std::string& _fileFormat);

                    /**
                     * 判断参数 FileFormat 是否已赋值
                     * @return FileFormat 是否已赋值
                     * 
                     */
                    bool FileFormatHasBeenSet() const;

                    /**
                     * 获取导入表类型（目前仅支持HIVE）
                     * @return ImportTableType 导入表类型（目前仅支持HIVE）
                     * 
                     */
                    std::string GetImportTableType() const;

                    /**
                     * 设置导入表类型（目前仅支持HIVE）
                     * @param _importTableType 导入表类型（目前仅支持HIVE）
                     * 
                     */
                    void SetImportTableType(const std::string& _importTableType);

                    /**
                     * 判断参数 ImportTableType 是否已赋值
                     * @return ImportTableType 是否已赋值
                     * 
                     */
                    bool ImportTableTypeHasBeenSet() const;

                    /**
                     * 获取数据源类型（目前仅支持HIVE）
                     * @return MsType 数据源类型（目前仅支持HIVE）
                     * 
                     */
                    std::string GetMsType() const;

                    /**
                     * 设置数据源类型（目前仅支持HIVE）
                     * @param _msType 数据源类型（目前仅支持HIVE）
                     * 
                     */
                    void SetMsType(const std::string& _msType);

                    /**
                     * 判断参数 MsType 是否已赋值
                     * @return MsType 是否已赋值
                     * 
                     */
                    bool MsTypeHasBeenSet() const;

                    /**
                     * 获取表描述
                     * @return Description 表描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置表描述
                     * @param _description 表描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取nameCn中文名
                     * @return NameCn nameCn中文名
                     * 
                     */
                    std::string GetNameCn() const;

                    /**
                     * 设置nameCn中文名
                     * @param _nameCn nameCn中文名
                     * 
                     */
                    void SetNameCn(const std::string& _nameCn);

                    /**
                     * 判断参数 NameCn 是否已赋值
                     * @return NameCn 是否已赋值
                     * 
                     */
                    bool NameCnHasBeenSet() const;

                    /**
                     * 获取表权限类型：0: owner和项目所有成员都有权限 1: 仅owner和项目管理员有权限
                     * @return Privilege 表权限类型：0: owner和项目所有成员都有权限 1: 仅owner和项目管理员有权限
                     * 
                     */
                    int64_t GetPrivilege() const;

                    /**
                     * 设置表权限类型：0: owner和项目所有成员都有权限 1: 仅owner和项目管理员有权限
                     * @param _privilege 表权限类型：0: owner和项目所有成员都有权限 1: 仅owner和项目管理员有权限
                     * 
                     */
                    void SetPrivilege(const int64_t& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取CSV序列化转义符
                     * @return Escape CSV序列化转义符
                     * 
                     */
                    std::string GetEscape() const;

                    /**
                     * 设置CSV序列化转义符
                     * @param _escape CSV序列化转义符
                     * 
                     */
                    void SetEscape(const std::string& _escape);

                    /**
                     * 判断参数 Escape 是否已赋值
                     * @return Escape 是否已赋值
                     * 
                     */
                    bool EscapeHasBeenSet() const;

                    /**
                     * 获取空值格式
                     * @return NullFormat 空值格式
                     * 
                     */
                    std::string GetNullFormat() const;

                    /**
                     * 设置空值格式
                     * @param _nullFormat 空值格式
                     * 
                     */
                    void SetNullFormat(const std::string& _nullFormat);

                    /**
                     * 判断参数 NullFormat 是否已赋值
                     * @return NullFormat 是否已赋值
                     * 
                     */
                    bool NullFormatHasBeenSet() const;

                    /**
                     * 获取文件编码方式 UTF-8/GBK
                     * @return FileEncode 文件编码方式 UTF-8/GBK
                     * 
                     */
                    std::string GetFileEncode() const;

                    /**
                     * 设置文件编码方式 UTF-8/GBK
                     * @param _fileEncode 文件编码方式 UTF-8/GBK
                     * 
                     */
                    void SetFileEncode(const std::string& _fileEncode);

                    /**
                     * 判断参数 FileEncode 是否已赋值
                     * @return FileEncode 是否已赋值
                     * 
                     */
                    bool FileEncodeHasBeenSet() const;

                    /**
                     * 获取桶名， cos存储是必传
                     * @return BucketName 桶名， cos存储是必传
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名， cos存储是必传
                     * @param _bucketName 桶名， cos存储是必传
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源id
                     */
                    int64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据表基本信息
                     */
                    TableHybrisReq m_tableRequest;
                    bool m_tableRequestHasBeenSet;

                    /**
                     * 列分隔符
0， \u0001
1, |
2, 空格
3，分号
4，逗号 
                     */
                    std::string m_columnDelimiter;
                    bool m_columnDelimiterHasBeenSet;

                    /**
                     * 1 是， 0 否
                     */
                    int64_t m_headerLine;
                    bool m_headerLineHasBeenSet;

                    /**
                     * CSV序列化字段域符,列引号， 
0， 单引号
1，双引号
                     */
                    std::string m_quote;
                    bool m_quoteHasBeenSet;

                    /**
                     * 源数据存储路径(如cos，需带上桶名)
                     */
                    std::string m_datasourcePath;
                    bool m_datasourcePathHasBeenSet;

                    /**
                     * 数据源存储类型（目前仅支持COS，CSP）
                     */
                    std::string m_storageDataSourceType;
                    bool m_storageDataSourceTypeHasBeenSet;

                    /**
                     * 文件格式（目前仅支持CSV,TSV）
                     */
                    std::string m_fileFormat;
                    bool m_fileFormatHasBeenSet;

                    /**
                     * 导入表类型（目前仅支持HIVE）
                     */
                    std::string m_importTableType;
                    bool m_importTableTypeHasBeenSet;

                    /**
                     * 数据源类型（目前仅支持HIVE）
                     */
                    std::string m_msType;
                    bool m_msTypeHasBeenSet;

                    /**
                     * 表描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * nameCn中文名
                     */
                    std::string m_nameCn;
                    bool m_nameCnHasBeenSet;

                    /**
                     * 表权限类型：0: owner和项目所有成员都有权限 1: 仅owner和项目管理员有权限
                     */
                    int64_t m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * CSV序列化转义符
                     */
                    std::string m_escape;
                    bool m_escapeHasBeenSet;

                    /**
                     * 空值格式
                     */
                    std::string m_nullFormat;
                    bool m_nullFormatHasBeenSet;

                    /**
                     * 文件编码方式 UTF-8/GBK
                     */
                    std::string m_fileEncode;
                    bool m_fileEncodeHasBeenSet;

                    /**
                     * 桶名， cos存储是必传
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTTABLEDATAREQUEST_H_
