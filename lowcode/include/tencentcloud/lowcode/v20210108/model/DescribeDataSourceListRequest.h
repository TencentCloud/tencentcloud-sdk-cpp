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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/DataSourceQueryOption.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeDataSourceList请求参数结构体
                */
                class DescribeDataSourceListRequest : public AbstractModel
                {
                public:
                    DescribeDataSourceListRequest();
                    ~DescribeDataSourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageIndex 页码
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置页码
                     * @param _pageIndex 页码
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取环境 id
                     * @return EnvId 环境 id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 id
                     * @param _envId 环境 id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取应用id数组
                     * @return Appids 应用id数组
                     * 
                     */
                    std::vector<std::string> GetAppids() const;

                    /**
                     * 设置应用id数组
                     * @param _appids 应用id数组
                     * 
                     */
                    void SetAppids(const std::vector<std::string>& _appids);

                    /**
                     * 判断参数 Appids 是否已赋值
                     * @return Appids 是否已赋值
                     * 
                     */
                    bool AppidsHasBeenSet() const;

                    /**
                     * 获取数据源id数组
                     * @return DataSourceIds 数据源id数组
                     * 
                     */
                    std::vector<std::string> GetDataSourceIds() const;

                    /**
                     * 设置数据源id数组
                     * @param _dataSourceIds 数据源id数组
                     * 
                     */
                    void SetDataSourceIds(const std::vector<std::string>& _dataSourceIds);

                    /**
                     * 判断参数 DataSourceIds 是否已赋值
                     * @return DataSourceIds 是否已赋值
                     * 
                     */
                    bool DataSourceIdsHasBeenSet() const;

                    /**
                     * 获取数据源名称数组
                     * @return DataSourceNames 数据源名称数组
                     * 
                     */
                    std::vector<std::string> GetDataSourceNames() const;

                    /**
                     * 设置数据源名称数组
                     * @param _dataSourceNames 数据源名称数组
                     * 
                     */
                    void SetDataSourceNames(const std::vector<std::string>& _dataSourceNames);

                    /**
                     * 判断参数 DataSourceNames 是否已赋值
                     * @return DataSourceNames 是否已赋值
                     * 
                     */
                    bool DataSourceNamesHasBeenSet() const;

                    /**
                     * 获取数据源类型 database-自建数据源；cloud-integration-自定义数据源
                     * @return DataSourceType 数据源类型 database-自建数据源；cloud-integration-自定义数据源
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型 database-自建数据源；cloud-integration-自定义数据源
                     * @param _dataSourceType 数据源类型 database-自建数据源；cloud-integration-自定义数据源
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取数据源模糊查询参数
                     * @return QueryOption 数据源模糊查询参数
                     * 
                     */
                    DataSourceQueryOption GetQueryOption() const;

                    /**
                     * 设置数据源模糊查询参数
                     * @param _queryOption 数据源模糊查询参数
                     * 
                     */
                    void SetQueryOption(const DataSourceQueryOption& _queryOption);

                    /**
                     * 判断参数 QueryOption 是否已赋值
                     * @return QueryOption 是否已赋值
                     * 
                     */
                    bool QueryOptionHasBeenSet() const;

                    /**
                     * 获取数据源视图Id数组
                     * @return ViewIds 数据源视图Id数组
                     * 
                     */
                    std::vector<std::string> GetViewIds() const;

                    /**
                     * 设置数据源视图Id数组
                     * @param _viewIds 数据源视图Id数组
                     * 
                     */
                    void SetViewIds(const std::vector<std::string>& _viewIds);

                    /**
                     * 判断参数 ViewIds 是否已赋值
                     * @return ViewIds 是否已赋值
                     * 
                     */
                    bool ViewIdsHasBeenSet() const;

                    /**
                     * 获取查询未关联应用的数据源，0:未关联，该参数配合 AppIds 参数一块使用
                     * @return AppLinkStatus 查询未关联应用的数据源，0:未关联，该参数配合 AppIds 参数一块使用
                     * 
                     */
                    int64_t GetAppLinkStatus() const;

                    /**
                     * 设置查询未关联应用的数据源，0:未关联，该参数配合 AppIds 参数一块使用
                     * @param _appLinkStatus 查询未关联应用的数据源，0:未关联，该参数配合 AppIds 参数一块使用
                     * 
                     */
                    void SetAppLinkStatus(const int64_t& _appLinkStatus);

                    /**
                     * 判断参数 AppLinkStatus 是否已赋值
                     * @return AppLinkStatus 是否已赋值
                     * 
                     */
                    bool AppLinkStatusHasBeenSet() const;

                    /**
                     * 获取查询应用绑定数据源: 0: 否,1: 是
                     * @return QueryBindToApp 查询应用绑定数据源: 0: 否,1: 是
                     * 
                     */
                    int64_t GetQueryBindToApp() const;

                    /**
                     * 设置查询应用绑定数据源: 0: 否,1: 是
                     * @param _queryBindToApp 查询应用绑定数据源: 0: 否,1: 是
                     * 
                     */
                    void SetQueryBindToApp(const int64_t& _queryBindToApp);

                    /**
                     * 判断参数 QueryBindToApp 是否已赋值
                     * @return QueryBindToApp 是否已赋值
                     * 
                     */
                    bool QueryBindToAppHasBeenSet() const;

                    /**
                     * 获取查询连接器 0 数据模型 1 连接器 2 自定义连接器
                     * @return QueryConnector 查询连接器 0 数据模型 1 连接器 2 自定义连接器
                     * 
                     */
                    int64_t GetQueryConnector() const;

                    /**
                     * 设置查询连接器 0 数据模型 1 连接器 2 自定义连接器
                     * @param _queryConnector 查询连接器 0 数据模型 1 连接器 2 自定义连接器
                     * 
                     */
                    void SetQueryConnector(const int64_t& _queryConnector);

                    /**
                     * 判断参数 QueryConnector 是否已赋值
                     * @return QueryConnector 是否已赋值
                     * 
                     */
                    bool QueryConnectorHasBeenSet() const;

                    /**
                     * 获取废弃中
                     * @return NotQuerySubTypeList 废弃中
                     * 
                     */
                    std::vector<std::string> GetNotQuerySubTypeList() const;

                    /**
                     * 设置废弃中
                     * @param _notQuerySubTypeList 废弃中
                     * 
                     */
                    void SetNotQuerySubTypeList(const std::vector<std::string>& _notQuerySubTypeList);

                    /**
                     * 判断参数 NotQuerySubTypeList 是否已赋值
                     * @return NotQuerySubTypeList 是否已赋值
                     * 
                     */
                    bool NotQuerySubTypeListHasBeenSet() const;

                    /**
                     * 获取查询channelList
                     * @return ChannelList 查询channelList
                     * 
                     */
                    std::vector<std::string> GetChannelList() const;

                    /**
                     * 设置查询channelList
                     * @param _channelList 查询channelList
                     * 
                     */
                    void SetChannelList(const std::vector<std::string>& _channelList);

                    /**
                     * 判断参数 ChannelList 是否已赋值
                     * @return ChannelList 是否已赋值
                     * 
                     */
                    bool ChannelListHasBeenSet() const;

                    /**
                     * 获取是否查询数据源关联关系
                     * @return QueryDataSourceRelationList 是否查询数据源关联关系
                     * 
                     */
                    bool GetQueryDataSourceRelationList() const;

                    /**
                     * 设置是否查询数据源关联关系
                     * @param _queryDataSourceRelationList 是否查询数据源关联关系
                     * 
                     */
                    void SetQueryDataSourceRelationList(const bool& _queryDataSourceRelationList);

                    /**
                     * 判断参数 QueryDataSourceRelationList 是否已赋值
                     * @return QueryDataSourceRelationList 是否已赋值
                     * 
                     */
                    bool QueryDataSourceRelationListHasBeenSet() const;

                    /**
                     * 获取db实例类型
                     * @return DbInstanceType db实例类型
                     * 
                     */
                    std::string GetDbInstanceType() const;

                    /**
                     * 设置db实例类型
                     * @param _dbInstanceType db实例类型
                     * 
                     */
                    void SetDbInstanceType(const std::string& _dbInstanceType);

                    /**
                     * 判断参数 DbInstanceType 是否已赋值
                     * @return DbInstanceType 是否已赋值
                     * 
                     */
                    bool DbInstanceTypeHasBeenSet() const;

                    /**
                     * 获取数据库表名列表
                     * @return DatabaseTableNames 数据库表名列表
                     * 
                     */
                    std::vector<std::string> GetDatabaseTableNames() const;

                    /**
                     * 设置数据库表名列表
                     * @param _databaseTableNames 数据库表名列表
                     * 
                     */
                    void SetDatabaseTableNames(const std::vector<std::string>& _databaseTableNames);

                    /**
                     * 判断参数 DatabaseTableNames 是否已赋值
                     * @return DatabaseTableNames 是否已赋值
                     * 
                     */
                    bool DatabaseTableNamesHasBeenSet() const;

                    /**
                     * 获取是否查询系统模型，默认为true，需要显示设置为False才能过滤系统模型
                     * @return QuerySystemModel 是否查询系统模型，默认为true，需要显示设置为False才能过滤系统模型
                     * 
                     */
                    bool GetQuerySystemModel() const;

                    /**
                     * 设置是否查询系统模型，默认为true，需要显示设置为False才能过滤系统模型
                     * @param _querySystemModel 是否查询系统模型，默认为true，需要显示设置为False才能过滤系统模型
                     * 
                     */
                    void SetQuerySystemModel(const bool& _querySystemModel);

                    /**
                     * 判断参数 QuerySystemModel 是否已赋值
                     * @return QuerySystemModel 是否已赋值
                     * 
                     */
                    bool QuerySystemModelHasBeenSet() const;

                private:

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 环境 id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 应用id数组
                     */
                    std::vector<std::string> m_appids;
                    bool m_appidsHasBeenSet;

                    /**
                     * 数据源id数组
                     */
                    std::vector<std::string> m_dataSourceIds;
                    bool m_dataSourceIdsHasBeenSet;

                    /**
                     * 数据源名称数组
                     */
                    std::vector<std::string> m_dataSourceNames;
                    bool m_dataSourceNamesHasBeenSet;

                    /**
                     * 数据源类型 database-自建数据源；cloud-integration-自定义数据源
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 数据源模糊查询参数
                     */
                    DataSourceQueryOption m_queryOption;
                    bool m_queryOptionHasBeenSet;

                    /**
                     * 数据源视图Id数组
                     */
                    std::vector<std::string> m_viewIds;
                    bool m_viewIdsHasBeenSet;

                    /**
                     * 查询未关联应用的数据源，0:未关联，该参数配合 AppIds 参数一块使用
                     */
                    int64_t m_appLinkStatus;
                    bool m_appLinkStatusHasBeenSet;

                    /**
                     * 查询应用绑定数据源: 0: 否,1: 是
                     */
                    int64_t m_queryBindToApp;
                    bool m_queryBindToAppHasBeenSet;

                    /**
                     * 查询连接器 0 数据模型 1 连接器 2 自定义连接器
                     */
                    int64_t m_queryConnector;
                    bool m_queryConnectorHasBeenSet;

                    /**
                     * 废弃中
                     */
                    std::vector<std::string> m_notQuerySubTypeList;
                    bool m_notQuerySubTypeListHasBeenSet;

                    /**
                     * 查询channelList
                     */
                    std::vector<std::string> m_channelList;
                    bool m_channelListHasBeenSet;

                    /**
                     * 是否查询数据源关联关系
                     */
                    bool m_queryDataSourceRelationList;
                    bool m_queryDataSourceRelationListHasBeenSet;

                    /**
                     * db实例类型
                     */
                    std::string m_dbInstanceType;
                    bool m_dbInstanceTypeHasBeenSet;

                    /**
                     * 数据库表名列表
                     */
                    std::vector<std::string> m_databaseTableNames;
                    bool m_databaseTableNamesHasBeenSet;

                    /**
                     * 是否查询系统模型，默认为true，需要显示设置为False才能过滤系统模型
                     */
                    bool m_querySystemModel;
                    bool m_querySystemModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEDATASOURCELISTREQUEST_H_
