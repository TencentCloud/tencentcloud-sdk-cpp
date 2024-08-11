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

#include <tencentcloud/emr/v20190103/model/DescribeServiceNodeInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeServiceNodeInfosRequest::DescribeServiceNodeInfosRequest() :
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_searchTextHasBeenSet(false),
    m_confStatusHasBeenSet(false),
    m_maintainStateIdHasBeenSet(false),
    m_operatorStateIdHasBeenSet(false),
    m_healthStateIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_nodeTypeNameHasBeenSet(false),
    m_dataNodeMaintenanceIdHasBeenSet(false),
    m_searchFieldsHasBeenSet(false)
{
}

string DescribeServiceNodeInfosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_searchTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchText.c_str(), allocator).Move(), allocator);
    }

    if (m_confStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_confStatus, allocator);
    }

    if (m_maintainStateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maintainStateId, allocator);
    }

    if (m_operatorStateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorStateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operatorStateId, allocator);
    }

    if (m_healthStateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_healthStateId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataNodeMaintenanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNodeMaintenanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataNodeMaintenanceId, allocator);
    }

    if (m_searchFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchFields.begin(); itr != m_searchFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeServiceNodeInfosRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeServiceNodeInfosRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeServiceNodeInfosRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeServiceNodeInfosRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeServiceNodeInfosRequest::GetSearchText() const
{
    return m_searchText;
}

void DescribeServiceNodeInfosRequest::SetSearchText(const string& _searchText)
{
    m_searchText = _searchText;
    m_searchTextHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::SearchTextHasBeenSet() const
{
    return m_searchTextHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetConfStatus() const
{
    return m_confStatus;
}

void DescribeServiceNodeInfosRequest::SetConfStatus(const int64_t& _confStatus)
{
    m_confStatus = _confStatus;
    m_confStatusHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::ConfStatusHasBeenSet() const
{
    return m_confStatusHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetMaintainStateId() const
{
    return m_maintainStateId;
}

void DescribeServiceNodeInfosRequest::SetMaintainStateId(const int64_t& _maintainStateId)
{
    m_maintainStateId = _maintainStateId;
    m_maintainStateIdHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::MaintainStateIdHasBeenSet() const
{
    return m_maintainStateIdHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetOperatorStateId() const
{
    return m_operatorStateId;
}

void DescribeServiceNodeInfosRequest::SetOperatorStateId(const int64_t& _operatorStateId)
{
    m_operatorStateId = _operatorStateId;
    m_operatorStateIdHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::OperatorStateIdHasBeenSet() const
{
    return m_operatorStateIdHasBeenSet;
}

string DescribeServiceNodeInfosRequest::GetHealthStateId() const
{
    return m_healthStateId;
}

void DescribeServiceNodeInfosRequest::SetHealthStateId(const string& _healthStateId)
{
    m_healthStateId = _healthStateId;
    m_healthStateIdHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::HealthStateIdHasBeenSet() const
{
    return m_healthStateIdHasBeenSet;
}

string DescribeServiceNodeInfosRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeServiceNodeInfosRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeServiceNodeInfosRequest::GetNodeTypeName() const
{
    return m_nodeTypeName;
}

void DescribeServiceNodeInfosRequest::SetNodeTypeName(const string& _nodeTypeName)
{
    m_nodeTypeName = _nodeTypeName;
    m_nodeTypeNameHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::NodeTypeNameHasBeenSet() const
{
    return m_nodeTypeNameHasBeenSet;
}

int64_t DescribeServiceNodeInfosRequest::GetDataNodeMaintenanceId() const
{
    return m_dataNodeMaintenanceId;
}

void DescribeServiceNodeInfosRequest::SetDataNodeMaintenanceId(const int64_t& _dataNodeMaintenanceId)
{
    m_dataNodeMaintenanceId = _dataNodeMaintenanceId;
    m_dataNodeMaintenanceIdHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::DataNodeMaintenanceIdHasBeenSet() const
{
    return m_dataNodeMaintenanceIdHasBeenSet;
}

vector<SearchItem> DescribeServiceNodeInfosRequest::GetSearchFields() const
{
    return m_searchFields;
}

void DescribeServiceNodeInfosRequest::SetSearchFields(const vector<SearchItem>& _searchFields)
{
    m_searchFields = _searchFields;
    m_searchFieldsHasBeenSet = true;
}

bool DescribeServiceNodeInfosRequest::SearchFieldsHasBeenSet() const
{
    return m_searchFieldsHasBeenSet;
}


