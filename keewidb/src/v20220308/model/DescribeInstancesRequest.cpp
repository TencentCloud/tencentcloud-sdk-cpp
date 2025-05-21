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

#include <tencentcloud/keewidb/v20220308/model/DescribeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

DescribeInstancesRequest::DescribeInstancesRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_uniqVpcIdsHasBeenSet(false),
    m_uniqSubnetIdsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_searchKeysHasBeenSet(false),
    m_typeListHasBeenSet(false),
    m_monitorVersionHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string DescribeInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uniqVpcIds.begin(); itr != m_uniqVpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniqSubnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uniqSubnetIds.begin(); itr != m_uniqSubnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_autoRenew.begin(); itr != m_autoRenew.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_billingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_searchKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_searchKeys.begin(); itr != m_searchKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeList.begin(); itr != m_typeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_monitorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTags.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagKeys.begin(); itr != m_tagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
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


uint64_t DescribeInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeInstancesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeInstancesRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeInstancesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeInstancesRequest::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void DescribeInstancesRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeInstancesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

string DescribeInstancesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeInstancesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeInstancesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string DescribeInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetUniqVpcIds() const
{
    return m_uniqVpcIds;
}

void DescribeInstancesRequest::SetUniqVpcIds(const vector<string>& _uniqVpcIds)
{
    m_uniqVpcIds = _uniqVpcIds;
    m_uniqVpcIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::UniqVpcIdsHasBeenSet() const
{
    return m_uniqVpcIdsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetUniqSubnetIds() const
{
    return m_uniqSubnetIds;
}

void DescribeInstancesRequest::SetUniqSubnetIds(const vector<string>& _uniqSubnetIds)
{
    m_uniqSubnetIds = _uniqSubnetIds;
    m_uniqSubnetIdsHasBeenSet = true;
}

bool DescribeInstancesRequest::UniqSubnetIdsHasBeenSet() const
{
    return m_uniqSubnetIdsHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstancesRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstancesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetAutoRenew() const
{
    return m_autoRenew;
}

void DescribeInstancesRequest::SetAutoRenew(const vector<int64_t>& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool DescribeInstancesRequest::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string DescribeInstancesRequest::GetBillingMode() const
{
    return m_billingMode;
}

void DescribeInstancesRequest::SetBillingMode(const string& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool DescribeInstancesRequest::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

int64_t DescribeInstancesRequest::GetType() const
{
    return m_type;
}

void DescribeInstancesRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeInstancesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetSearchKeys() const
{
    return m_searchKeys;
}

void DescribeInstancesRequest::SetSearchKeys(const vector<string>& _searchKeys)
{
    m_searchKeys = _searchKeys;
    m_searchKeysHasBeenSet = true;
}

bool DescribeInstancesRequest::SearchKeysHasBeenSet() const
{
    return m_searchKeysHasBeenSet;
}

vector<int64_t> DescribeInstancesRequest::GetTypeList() const
{
    return m_typeList;
}

void DescribeInstancesRequest::SetTypeList(const vector<int64_t>& _typeList)
{
    m_typeList = _typeList;
    m_typeListHasBeenSet = true;
}

bool DescribeInstancesRequest::TypeListHasBeenSet() const
{
    return m_typeListHasBeenSet;
}

string DescribeInstancesRequest::GetMonitorVersion() const
{
    return m_monitorVersion;
}

void DescribeInstancesRequest::SetMonitorVersion(const string& _monitorVersion)
{
    m_monitorVersion = _monitorVersion;
    m_monitorVersionHasBeenSet = true;
}

bool DescribeInstancesRequest::MonitorVersionHasBeenSet() const
{
    return m_monitorVersionHasBeenSet;
}

InstanceTagInfo DescribeInstancesRequest::GetInstanceTags() const
{
    return m_instanceTags;
}

void DescribeInstancesRequest::SetInstanceTags(const InstanceTagInfo& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool DescribeInstancesRequest::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

vector<string> DescribeInstancesRequest::GetTagKeys() const
{
    return m_tagKeys;
}

void DescribeInstancesRequest::SetTagKeys(const vector<string>& _tagKeys)
{
    m_tagKeys = _tagKeys;
    m_tagKeysHasBeenSet = true;
}

bool DescribeInstancesRequest::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

vector<InstanceTagInfo> DescribeInstancesRequest::GetTagList() const
{
    return m_tagList;
}

void DescribeInstancesRequest::SetTagList(const vector<InstanceTagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DescribeInstancesRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


