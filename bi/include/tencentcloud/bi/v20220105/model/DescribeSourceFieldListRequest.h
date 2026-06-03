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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ParamCreateDTO.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeSourceFieldList请求参数结构体
                */
                class DescribeSourceFieldListRequest : public AbstractModel
                {
                public:
                    DescribeSourceFieldListRequest();
                    ~DescribeSourceFieldListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源Id
                     * @return DataSourceId 数据源Id
                     * 
                     */
                    int64_t GetDataSourceId() const;

                    /**
                     * 设置数据源Id
                     * @param _dataSourceId 数据源Id
                     * 
                     */
                    void SetDataSourceId(const int64_t& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
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
                     * 获取sql内容
                     * @return Sql sql内容
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql内容
                     * @param _sql sql内容
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取异步事务id
                     * @return TranId 异步事务id
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置异步事务id
                     * @param _tranId 异步事务id
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取11
                     * @return ParamList 11
                     * 
                     */
                    std::vector<ParamCreateDTO> GetParamList() const;

                    /**
                     * 设置11
                     * @param _paramList 11
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
                     * 获取DLC扩展参数
                     * @return DlcExtInfo DLC扩展参数
                     * 
                     */
                    std::string GetDlcExtInfo() const;

                    /**
                     * 设置DLC扩展参数
                     * @param _dlcExtInfo DLC扩展参数
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
                     * 获取数据表 Id
                     * @return TableId 数据表 Id
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置数据表 Id
                     * @param _tableId 数据表 Id
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * @return TableType 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * 
                     */
                    uint64_t GetTableType() const;

                    /**
                     * 设置后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * @param _tableType 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     * 
                     */
                    void SetTableType(const uint64_t& _tableType);

                    /**
                     * 判断参数 TableType 是否已赋值
                     * @return TableType 是否已赋值
                     * 
                     */
                    bool TableTypeHasBeenSet() const;

                private:

                    /**
                     * 数据源Id
                     */
                    int64_t m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * sql内容
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 项目id
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否是异步
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * 异步事务id
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * 11
                     */
                    std::vector<ParamCreateDTO> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * DLC扩展参数
                     */
                    std::string m_dlcExtInfo;
                    bool m_dlcExtInfoHasBeenSet;

                    /**
                     * 是否查询数据库
                     */
                    std::string m_queryDbData;
                    bool m_queryDbDataHasBeenSet;

                    /**
                     * 数据表 Id
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 后端提供字典：数据表类型，1、数据库建表，2、SQL建表，3、Excel上传，4、API接入，5、腾讯文档，6、云数据库，7、手工输入，8、关联查询
                     */
                    uint64_t m_tableType;
                    bool m_tableTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBESOURCEFIELDLISTREQUEST_H_
