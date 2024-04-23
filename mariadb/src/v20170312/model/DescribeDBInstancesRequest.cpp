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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBInstancesRequest::DescribeDBInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_searchNameHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_isFilterVpcHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_originSerialIdsHasBeenSet(false),
    m_isFilterExclusterHasBeenSet(false),
    m_exclusterTypeHasBeenSet(false),
    m_exclusterIdsHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_filterInstanceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_excludeStatusHasBeenSet(false)
{
}

string DescribeDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchName.c_str(), allocator).Move(), allocator);
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
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

    if (m_isFilterVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilterVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterVpc, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
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

    if (m_originSerialIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSerialIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originSerialIds.begin(); itr != m_originSerialIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isFilterExclusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFilterExcluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isFilterExcluster, allocator);
    }

    if (m_exclusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exclusterType, allocator);
    }

    if (m_exclusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_exclusterIds.begin(); itr != m_exclusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_filterInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterInstanceType.c_str(), allocator).Move(), allocator);
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

    if (m_excludeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeStatus.begin(); itr != m_excludeStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeDBInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeDBInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeDBInstancesRequest::GetSearchName() const
{
    return m_searchName;
}

void DescribeDBInstancesRequest::SetSearchName(const string& _searchName)
{
    m_searchName = _searchName;
    m_searchNameHasBeenSet = true;
}

bool DescribeDBInstancesRequest::SearchNameHasBeenSet() const
{
    return m_searchNameHasBeenSet;
}

string DescribeDBInstancesRequest::GetSearchKey() const
{
    return m_searchKey;
}

void DescribeDBInstancesRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool DescribeDBInstancesRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

vector<int64_t> DescribeDBInstancesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeDBInstancesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

bool DescribeDBInstancesRequest::GetIsFilterVpc() const
{
    return m_isFilterVpc;
}

void DescribeDBInstancesRequest::SetIsFilterVpc(const bool& _isFilterVpc)
{
    m_isFilterVpc = _isFilterVpc;
    m_isFilterVpcHasBeenSet = true;
}

bool DescribeDBInstancesRequest::IsFilterVpcHasBeenSet() const
{
    return m_isFilterVpcHasBeenSet;
}

string DescribeDBInstancesRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeDBInstancesRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeDBInstancesRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDBInstancesRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeDBInstancesRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeDBInstancesRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeDBInstancesRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeDBInstancesRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeDBInstancesRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeDBInstancesRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBInstancesRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBInstancesRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetOriginSerialIds() const
{
    return m_originSerialIds;
}

void DescribeDBInstancesRequest::SetOriginSerialIds(const vector<string>& _originSerialIds)
{
    m_originSerialIds = _originSerialIds;
    m_originSerialIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OriginSerialIdsHasBeenSet() const
{
    return m_originSerialIdsHasBeenSet;
}

bool DescribeDBInstancesRequest::GetIsFilterExcluster() const
{
    return m_isFilterExcluster;
}

void DescribeDBInstancesRequest::SetIsFilterExcluster(const bool& _isFilterExcluster)
{
    m_isFilterExcluster = _isFilterExcluster;
    m_isFilterExclusterHasBeenSet = true;
}

bool DescribeDBInstancesRequest::IsFilterExclusterHasBeenSet() const
{
    return m_isFilterExclusterHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetExclusterType() const
{
    return m_exclusterType;
}

void DescribeDBInstancesRequest::SetExclusterType(const int64_t& _exclusterType)
{
    m_exclusterType = _exclusterType;
    m_exclusterTypeHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ExclusterTypeHasBeenSet() const
{
    return m_exclusterTypeHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetExclusterIds() const
{
    return m_exclusterIds;
}

void DescribeDBInstancesRequest::SetExclusterIds(const vector<string>& _exclusterIds)
{
    m_exclusterIds = _exclusterIds;
    m_exclusterIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ExclusterIdsHasBeenSet() const
{
    return m_exclusterIdsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetTagKeys() const
{
    return m_tagKeys;
}

void DescribeDBInstancesRequest::SetTagKeys(const vector<string>& _tagKeys)
{
    m_tagKeys = _tagKeys;
    m_tagKeysHasBeenSet = true;
}

bool DescribeDBInstancesRequest::TagKeysHasBeenSet() const
{
    return m_tagKeysHasBeenSet;
}

vector<Tag> DescribeDBInstancesRequest::GetTags() const
{
    return m_tags;
}

void DescribeDBInstancesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeDBInstancesRequest::GetFilterInstanceType() const
{
    return m_filterInstanceType;
}

void DescribeDBInstancesRequest::SetFilterInstanceType(const string& _filterInstanceType)
{
    m_filterInstanceType = _filterInstanceType;
    m_filterInstanceTypeHasBeenSet = true;
}

bool DescribeDBInstancesRequest::FilterInstanceTypeHasBeenSet() const
{
    return m_filterInstanceTypeHasBeenSet;
}

vector<int64_t> DescribeDBInstancesRequest::GetStatus() const
{
    return m_status;
}

void DescribeDBInstancesRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDBInstancesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<int64_t> DescribeDBInstancesRequest::GetExcludeStatus() const
{
    return m_excludeStatus;
}

void DescribeDBInstancesRequest::SetExcludeStatus(const vector<int64_t>& _excludeStatus)
{
    m_excludeStatus = _excludeStatus;
    m_excludeStatusHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ExcludeStatusHasBeenSet() const
{
    return m_excludeStatusHasBeenSet;
}


