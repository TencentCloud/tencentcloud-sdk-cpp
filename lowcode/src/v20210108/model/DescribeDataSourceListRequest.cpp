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

#include <tencentcloud/lowcode/v20210108/model/DescribeDataSourceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

DescribeDataSourceListRequest::DescribeDataSourceListRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_appidsHasBeenSet(false),
    m_dataSourceIdsHasBeenSet(false),
    m_dataSourceNamesHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_queryOptionHasBeenSet(false),
    m_viewIdsHasBeenSet(false),
    m_appLinkStatusHasBeenSet(false),
    m_queryBindToAppHasBeenSet(false),
    m_queryConnectorHasBeenSet(false),
    m_notQuerySubTypeListHasBeenSet(false),
    m_channelListHasBeenSet(false),
    m_queryDataSourceRelationListHasBeenSet(false),
    m_dbInstanceTypeHasBeenSet(false),
    m_databaseTableNamesHasBeenSet(false),
    m_querySystemModelHasBeenSet(false)
{
}

string DescribeDataSourceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_appidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appids.begin(); itr != m_appids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataSourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataSourceIds.begin(); itr != m_dataSourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataSourceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataSourceNames.begin(); itr != m_dataSourceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_queryOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_queryOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_viewIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_viewIds.begin(); itr != m_viewIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appLinkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppLinkStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_appLinkStatus, allocator);
    }

    if (m_queryBindToAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryBindToApp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryBindToApp, allocator);
    }

    if (m_queryConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryConnector, allocator);
    }

    if (m_notQuerySubTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotQuerySubTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_notQuerySubTypeList.begin(); itr != m_notQuerySubTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelList.begin(); itr != m_channelList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queryDataSourceRelationListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDataSourceRelationList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDataSourceRelationList, allocator);
    }

    if (m_dbInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseTableNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseTableNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databaseTableNames.begin(); itr != m_databaseTableNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_querySystemModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuerySystemModel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_querySystemModel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDataSourceListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDataSourceListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDataSourceListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeDataSourceListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeDataSourceListRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeDataSourceListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

string DescribeDataSourceListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeDataSourceListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeDataSourceListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetAppids() const
{
    return m_appids;
}

void DescribeDataSourceListRequest::SetAppids(const vector<string>& _appids)
{
    m_appids = _appids;
    m_appidsHasBeenSet = true;
}

bool DescribeDataSourceListRequest::AppidsHasBeenSet() const
{
    return m_appidsHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetDataSourceIds() const
{
    return m_dataSourceIds;
}

void DescribeDataSourceListRequest::SetDataSourceIds(const vector<string>& _dataSourceIds)
{
    m_dataSourceIds = _dataSourceIds;
    m_dataSourceIdsHasBeenSet = true;
}

bool DescribeDataSourceListRequest::DataSourceIdsHasBeenSet() const
{
    return m_dataSourceIdsHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetDataSourceNames() const
{
    return m_dataSourceNames;
}

void DescribeDataSourceListRequest::SetDataSourceNames(const vector<string>& _dataSourceNames)
{
    m_dataSourceNames = _dataSourceNames;
    m_dataSourceNamesHasBeenSet = true;
}

bool DescribeDataSourceListRequest::DataSourceNamesHasBeenSet() const
{
    return m_dataSourceNamesHasBeenSet;
}

string DescribeDataSourceListRequest::GetDataSourceType() const
{
    return m_dataSourceType;
}

void DescribeDataSourceListRequest::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool DescribeDataSourceListRequest::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

DataSourceQueryOption DescribeDataSourceListRequest::GetQueryOption() const
{
    return m_queryOption;
}

void DescribeDataSourceListRequest::SetQueryOption(const DataSourceQueryOption& _queryOption)
{
    m_queryOption = _queryOption;
    m_queryOptionHasBeenSet = true;
}

bool DescribeDataSourceListRequest::QueryOptionHasBeenSet() const
{
    return m_queryOptionHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetViewIds() const
{
    return m_viewIds;
}

void DescribeDataSourceListRequest::SetViewIds(const vector<string>& _viewIds)
{
    m_viewIds = _viewIds;
    m_viewIdsHasBeenSet = true;
}

bool DescribeDataSourceListRequest::ViewIdsHasBeenSet() const
{
    return m_viewIdsHasBeenSet;
}

int64_t DescribeDataSourceListRequest::GetAppLinkStatus() const
{
    return m_appLinkStatus;
}

void DescribeDataSourceListRequest::SetAppLinkStatus(const int64_t& _appLinkStatus)
{
    m_appLinkStatus = _appLinkStatus;
    m_appLinkStatusHasBeenSet = true;
}

bool DescribeDataSourceListRequest::AppLinkStatusHasBeenSet() const
{
    return m_appLinkStatusHasBeenSet;
}

int64_t DescribeDataSourceListRequest::GetQueryBindToApp() const
{
    return m_queryBindToApp;
}

void DescribeDataSourceListRequest::SetQueryBindToApp(const int64_t& _queryBindToApp)
{
    m_queryBindToApp = _queryBindToApp;
    m_queryBindToAppHasBeenSet = true;
}

bool DescribeDataSourceListRequest::QueryBindToAppHasBeenSet() const
{
    return m_queryBindToAppHasBeenSet;
}

int64_t DescribeDataSourceListRequest::GetQueryConnector() const
{
    return m_queryConnector;
}

void DescribeDataSourceListRequest::SetQueryConnector(const int64_t& _queryConnector)
{
    m_queryConnector = _queryConnector;
    m_queryConnectorHasBeenSet = true;
}

bool DescribeDataSourceListRequest::QueryConnectorHasBeenSet() const
{
    return m_queryConnectorHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetNotQuerySubTypeList() const
{
    return m_notQuerySubTypeList;
}

void DescribeDataSourceListRequest::SetNotQuerySubTypeList(const vector<string>& _notQuerySubTypeList)
{
    m_notQuerySubTypeList = _notQuerySubTypeList;
    m_notQuerySubTypeListHasBeenSet = true;
}

bool DescribeDataSourceListRequest::NotQuerySubTypeListHasBeenSet() const
{
    return m_notQuerySubTypeListHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetChannelList() const
{
    return m_channelList;
}

void DescribeDataSourceListRequest::SetChannelList(const vector<string>& _channelList)
{
    m_channelList = _channelList;
    m_channelListHasBeenSet = true;
}

bool DescribeDataSourceListRequest::ChannelListHasBeenSet() const
{
    return m_channelListHasBeenSet;
}

bool DescribeDataSourceListRequest::GetQueryDataSourceRelationList() const
{
    return m_queryDataSourceRelationList;
}

void DescribeDataSourceListRequest::SetQueryDataSourceRelationList(const bool& _queryDataSourceRelationList)
{
    m_queryDataSourceRelationList = _queryDataSourceRelationList;
    m_queryDataSourceRelationListHasBeenSet = true;
}

bool DescribeDataSourceListRequest::QueryDataSourceRelationListHasBeenSet() const
{
    return m_queryDataSourceRelationListHasBeenSet;
}

string DescribeDataSourceListRequest::GetDbInstanceType() const
{
    return m_dbInstanceType;
}

void DescribeDataSourceListRequest::SetDbInstanceType(const string& _dbInstanceType)
{
    m_dbInstanceType = _dbInstanceType;
    m_dbInstanceTypeHasBeenSet = true;
}

bool DescribeDataSourceListRequest::DbInstanceTypeHasBeenSet() const
{
    return m_dbInstanceTypeHasBeenSet;
}

vector<string> DescribeDataSourceListRequest::GetDatabaseTableNames() const
{
    return m_databaseTableNames;
}

void DescribeDataSourceListRequest::SetDatabaseTableNames(const vector<string>& _databaseTableNames)
{
    m_databaseTableNames = _databaseTableNames;
    m_databaseTableNamesHasBeenSet = true;
}

bool DescribeDataSourceListRequest::DatabaseTableNamesHasBeenSet() const
{
    return m_databaseTableNamesHasBeenSet;
}

bool DescribeDataSourceListRequest::GetQuerySystemModel() const
{
    return m_querySystemModel;
}

void DescribeDataSourceListRequest::SetQuerySystemModel(const bool& _querySystemModel)
{
    m_querySystemModel = _querySystemModel;
    m_querySystemModelHasBeenSet = true;
}

bool DescribeDataSourceListRequest::QuerySystemModelHasBeenSet() const
{
    return m_querySystemModelHasBeenSet;
}


