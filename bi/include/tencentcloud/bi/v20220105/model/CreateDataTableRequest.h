/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/TableField.h>
#include <tencentcloud/bi/v20220105/model/JoinSourceTable.h>
#include <tencentcloud/bi/v20220105/model/JoinRelation.h>
#include <tencentcloud/bi/v20220105/model/ApiDatasourceConfig.h>
#include <tencentcloud/bi/v20220105/model/ParamCreateDTO.h>
#include <tencentcloud/bi/v20220105/model/FieldRemarkDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateDataTable请求参数结构体
                */
                class CreateDataTableRequest : public AbstractModel
                {
                public:
                    CreateDataTableRequest();
                    ~CreateDataTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * @return Type 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * @param _type 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据表名称
                     * @return Name 数据表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据表名称
                     * @param _name 数据表名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProjectId 无
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置无
                     * @param _projectId 无
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取所属文件夹
                     * @return FoldId 所属文件夹
                     * 
                     */
                    uint64_t GetFoldId() const;

                    /**
                     * 设置所属文件夹
                     * @param _foldId 所属文件夹
                     * 
                     */
                    void SetFoldId(const uint64_t& _foldId);

                    /**
                     * 判断参数 FoldId 是否已赋值
                     * @return FoldId 是否已赋值
                     * 
                     */
                    bool FoldIdHasBeenSet() const;

                    /**
                     * 获取数据源Id
                     * @return DatasourceId 数据源Id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _datasourceId 数据源Id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取物理表名
                     * @return TableName 物理表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置物理表名
                     * @param _tableName 物理表名
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取sql语句
                     * @return Sql sql语句
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql语句
                     * @param _sql sql语句
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取excel地址
                     * @return ExcelUrl excel地址
                     * 
                     */
                    std::string GetExcelUrl() const;

                    /**
                     * 设置excel地址
                     * @param _excelUrl excel地址
                     * 
                     */
                    void SetExcelUrl(const std::string& _excelUrl);

                    /**
                     * 判断参数 ExcelUrl 是否已赋值
                     * @return ExcelUrl 是否已赋值
                     * 
                     */
                    bool ExcelUrlHasBeenSet() const;

                    /**
                     * 获取字段配置
                     * @return Fields 字段配置
                     * 
                     */
                    std::vector<TableField> GetFields() const;

                    /**
                     * 设置字段配置
                     * @param _fields 字段配置
                     * 
                     */
                    void SetFields(const std::vector<TableField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取多表关联使用: 1:数据源原表,2:本地表,3:Excel表,4:API表
                     * @return TableNodeType 多表关联使用: 1:数据源原表,2:本地表,3:Excel表,4:API表
                     * 
                     */
                    uint64_t GetTableNodeType() const;

                    /**
                     * 设置多表关联使用: 1:数据源原表,2:本地表,3:Excel表,4:API表
                     * @param _tableNodeType 多表关联使用: 1:数据源原表,2:本地表,3:Excel表,4:API表
                     * 
                     */
                    void SetTableNodeType(const uint64_t& _tableNodeType);

                    /**
                     * 判断参数 TableNodeType 是否已赋值
                     * @return TableNodeType 是否已赋值
                     * 
                     */
                    bool TableNodeTypeHasBeenSet() const;

                    /**
                     * 获取多表关联的原始表信息
                     * @return Tables 多表关联的原始表信息
                     * 
                     */
                    std::vector<JoinSourceTable> GetTables() const;

                    /**
                     * 设置多表关联的原始表信息
                     * @param _tables 多表关联的原始表信息
                     * 
                     */
                    void SetTables(const std::vector<JoinSourceTable>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取多表关联的关联信息
                     * @return Joins 多表关联的关联信息
                     * 
                     */
                    std::vector<JoinRelation> GetJoins() const;

                    /**
                     * 设置多表关联的关联信息
                     * @param _joins 多表关联的关联信息
                     * 
                     */
                    void SetJoins(const std::vector<JoinRelation>& _joins);

                    /**
                     * 判断参数 Joins 是否已赋值
                     * @return Joins 是否已赋值
                     * 
                     */
                    bool JoinsHasBeenSet() const;

                    /**
                     * 获取补充信息，如api数据源信息，腾讯文档接入信息等
                     * @return ExtInfo 补充信息，如api数据源信息，腾讯文档接入信息等
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置补充信息，如api数据源信息，腾讯文档接入信息等
                     * @param _extInfo 补充信息，如api数据源信息，腾讯文档接入信息等
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取是否是异步
                     * @return AsyncRequest 是否是异步
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置是否是异步
                     * @param _asyncRequest 是否是异步
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取依赖的异步事务id
                     * @return ParentTranId 依赖的异步事务id
                     * 
                     */
                    std::string GetParentTranId() const;

                    /**
                     * 设置依赖的异步事务id
                     * @param _parentTranId 依赖的异步事务id
                     * 
                     */
                    void SetParentTranId(const std::string& _parentTranId);

                    /**
                     * 判断参数 ParentTranId 是否已赋值
                     * @return ParentTranId 是否已赋值
                     * 
                     */
                    bool ParentTranIdHasBeenSet() const;

                    /**
                     * 获取API数据源配置
                     * @return ApiDatasourceConfig API数据源配置
                     * 
                     */
                    ApiDatasourceConfig GetApiDatasourceConfig() const;

                    /**
                     * 设置API数据源配置
                     * @param _apiDatasourceConfig API数据源配置
                     * 
                     */
                    void SetApiDatasourceConfig(const ApiDatasourceConfig& _apiDatasourceConfig);

                    /**
                     * 判断参数 ApiDatasourceConfig 是否已赋值
                     * @return ApiDatasourceConfig 是否已赋值
                     * 
                     */
                    bool ApiDatasourceConfigHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ParamList 1
                     * 
                     */
                    std::vector<ParamCreateDTO> GetParamList() const;

                    /**
                     * 设置1
                     * @param _paramList 1
                     * 
                     */
                    void SetParamList(const std::vector<ParamCreateDTO>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取dlc高级参数
                     * @return DlcExtInfo dlc高级参数
                     * 
                     */
                    std::string GetDlcExtInfo() const;

                    /**
                     * 设置dlc高级参数
                     * @param _dlcExtInfo dlc高级参数
                     * 
                     */
                    void SetDlcExtInfo(const std::string& _dlcExtInfo);

                    /**
                     * 判断参数 DlcExtInfo 是否已赋值
                     * @return DlcExtInfo 是否已赋值
                     * 
                     */
                    bool DlcExtInfoHasBeenSet() const;

                    /**
                     * 获取是否查询数据库
                     * @return QueryDbData 是否查询数据库
                     * 
                     */
                    std::string GetQueryDbData() const;

                    /**
                     * 设置是否查询数据库
                     * @param _queryDbData 是否查询数据库
                     * 
                     */
                    void SetQueryDbData(const std::string& _queryDbData);

                    /**
                     * 判断参数 QueryDbData 是否已赋值
                     * @return QueryDbData 是否已赋值
                     * 
                     */
                    bool QueryDbDataHasBeenSet() const;

                    /**
                     * 获取数据表备注
                     * @return TableComment 数据表备注
                     * 
                     */
                    std::string GetTableComment() const;

                    /**
                     * 设置数据表备注
                     * @param _tableComment 数据表备注
                     * 
                     */
                    void SetTableComment(const std::string& _tableComment);

                    /**
                     * 判断参数 TableComment 是否已赋值
                     * @return TableComment 是否已赋值
                     * 
                     */
                    bool TableCommentHasBeenSet() const;

                    /**
                     * 获取是否查询字段备注
                     * @return QueryFieldRemark 是否查询字段备注
                     * 
                     */
                    int64_t GetQueryFieldRemark() const;

                    /**
                     * 设置是否查询字段备注
                     * @param _queryFieldRemark 是否查询字段备注
                     * 
                     */
                    void SetQueryFieldRemark(const int64_t& _queryFieldRemark);

                    /**
                     * 判断参数 QueryFieldRemark 是否已赋值
                     * @return QueryFieldRemark 是否已赋值
                     * 
                     */
                    bool QueryFieldRemarkHasBeenSet() const;

                    /**
                     * 获取字段备注列表
                     * @return FieldRemarkList 字段备注列表
                     * 
                     */
                    std::vector<FieldRemarkDTO> GetFieldRemarkList() const;

                    /**
                     * 设置字段备注列表
                     * @param _fieldRemarkList 字段备注列表
                     * 
                     */
                    void SetFieldRemarkList(const std::vector<FieldRemarkDTO>& _fieldRemarkList);

                    /**
                     * 判断参数 FieldRemarkList 是否已赋值
                     * @return FieldRemarkList 是否已赋值
                     * 
                     */
                    bool FieldRemarkListHasBeenSet() const;

                private:

                    /**
                     * 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 所属文件夹
                     */
                    uint64_t m_foldId;
                    bool m_foldIdHasBeenSet;

                    /**
                     * 数据源Id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 物理表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * excel地址
                     */
                    std::string m_excelUrl;
                    bool m_excelUrlHasBeenSet;

                    /**
                     * 字段配置
                     */
                    std::vector<TableField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * 多表关联使用: 1:数据源原表,2:本地表,3:Excel表,4:API表
                     */
                    uint64_t m_tableNodeType;
                    bool m_tableNodeTypeHasBeenSet;

                    /**
                     * 多表关联的原始表信息
                     */
                    std::vector<JoinSourceTable> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 多表关联的关联信息
                     */
                    std::vector<JoinRelation> m_joins;
                    bool m_joinsHasBeenSet;

                    /**
                     * 补充信息，如api数据源信息，腾讯文档接入信息等
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 是否是异步
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * 依赖的异步事务id
                     */
                    std::string m_parentTranId;
                    bool m_parentTranIdHasBeenSet;

                    /**
                     * API数据源配置
                     */
                    ApiDatasourceConfig m_apiDatasourceConfig;
                    bool m_apiDatasourceConfigHasBeenSet;

                    /**
                     * 1
                     */
                    std::vector<ParamCreateDTO> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * dlc高级参数
                     */
                    std::string m_dlcExtInfo;
                    bool m_dlcExtInfoHasBeenSet;

                    /**
                     * 是否查询数据库
                     */
                    std::string m_queryDbData;
                    bool m_queryDbDataHasBeenSet;

                    /**
                     * 数据表备注
                     */
                    std::string m_tableComment;
                    bool m_tableCommentHasBeenSet;

                    /**
                     * 是否查询字段备注
                     */
                    int64_t m_queryFieldRemark;
                    bool m_queryFieldRemarkHasBeenSet;

                    /**
                     * 字段备注列表
                     */
                    std::vector<FieldRemarkDTO> m_fieldRemarkList;
                    bool m_fieldRemarkListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEDATATABLEREQUEST_H_
