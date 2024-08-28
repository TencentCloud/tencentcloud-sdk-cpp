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

#include <tencentcloud/cdb/v20170320/model/DescribeDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDBInstancesRequest::DescribeDBInstancesRequest() :
    m_projectIdHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_vipsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_payTypesHasBeenSet(false),
    m_instanceNamesHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_engineVersionsHasBeenSet(false),
    m_vpcIdsHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_cdbErrorsHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_withSecurityGroupHasBeenSet(false),
    m_withExClusterHasBeenSet(false),
    m_exClusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_initFlagHasBeenSet(false),
    m_withDrHasBeenSet(false),
    m_withRoHasBeenSet(false),
    m_withMasterHasBeenSet(false),
    m_deployGroupIdsHasBeenSet(false),
    m_tagKeysForSearchHasBeenSet(false),
    m_cageIdsHasBeenSet(false),
    m_tagValuesHasBeenSet(false),
    m_uniqueVpcIdsHasBeenSet(false),
    m_uniqSubnetIdsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_proxyVipsHasBeenSet(false),
    m_proxyIdsHasBeenSet(false),
    m_engineTypesHasBeenSet(false),
    m_queryClusterInfoHasBeenSet(false)
{
}

string DescribeDBInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_vipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vips.begin(); itr != m_vips.end(); ++itr)
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
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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

    if (m_securityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_payTypes.begin(); itr != m_payTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_instanceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceNames.begin(); itr != m_instanceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskStatus.begin(); itr != m_taskStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_engineVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineVersions.begin(); itr != m_engineVersions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_cdbErrorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbErrors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cdbErrors.begin(); itr != m_cdbErrors.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_withSecurityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithSecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withSecurityGroup, allocator);
    }

    if (m_withExClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithExCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withExCluster, allocator);
    }

    if (m_exClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exClusterId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_initFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_initFlag, allocator);
    }

    if (m_withDrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithDr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withDr, allocator);
    }

    if (m_withRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withRo, allocator);
    }

    if (m_withMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithMaster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_withMaster, allocator);
    }

    if (m_deployGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deployGroupIds.begin(); itr != m_deployGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagKeysForSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeysForSearch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagKeysForSearch.begin(); itr != m_tagKeysForSearch.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cageIds.begin(); itr != m_cageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagValues.begin(); itr != m_tagValues.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uniqueVpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uniqueVpcIds.begin(); itr != m_uniqueVpcIds.end(); ++itr)
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

    if (m_proxyVipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVips";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyVips.begin(); itr != m_proxyVips.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_proxyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyIds.begin(); itr != m_proxyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_engineTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineTypes.begin(); itr != m_engineTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queryClusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryClusterInfo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDBInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDBInstancesRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void DescribeDBInstancesRequest::SetInstanceTypes(const vector<uint64_t>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool DescribeDBInstancesRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetVips() const
{
    return m_vips;
}

void DescribeDBInstancesRequest::SetVips(const vector<string>& _vips)
{
    m_vips = _vips;
    m_vipsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::VipsHasBeenSet() const
{
    return m_vipsHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetStatus() const
{
    return m_status;
}

void DescribeDBInstancesRequest::SetStatus(const vector<uint64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDBInstancesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeDBInstancesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDBInstancesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeDBInstancesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDBInstancesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDBInstancesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeDBInstancesRequest::GetSecurityGroupId() const
{
    return m_securityGroupId;
}

void DescribeDBInstancesRequest::SetSecurityGroupId(const string& _securityGroupId)
{
    m_securityGroupId = _securityGroupId;
    m_securityGroupIdHasBeenSet = true;
}

bool DescribeDBInstancesRequest::SecurityGroupIdHasBeenSet() const
{
    return m_securityGroupIdHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetPayTypes() const
{
    return m_payTypes;
}

void DescribeDBInstancesRequest::SetPayTypes(const vector<uint64_t>& _payTypes)
{
    m_payTypes = _payTypes;
    m_payTypesHasBeenSet = true;
}

bool DescribeDBInstancesRequest::PayTypesHasBeenSet() const
{
    return m_payTypesHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetInstanceNames() const
{
    return m_instanceNames;
}

void DescribeDBInstancesRequest::SetInstanceNames(const vector<string>& _instanceNames)
{
    m_instanceNames = _instanceNames;
    m_instanceNamesHasBeenSet = true;
}

bool DescribeDBInstancesRequest::InstanceNamesHasBeenSet() const
{
    return m_instanceNamesHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeDBInstancesRequest::SetTaskStatus(const vector<uint64_t>& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeDBInstancesRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetEngineVersions() const
{
    return m_engineVersions;
}

void DescribeDBInstancesRequest::SetEngineVersions(const vector<string>& _engineVersions)
{
    m_engineVersions = _engineVersions;
    m_engineVersionsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::EngineVersionsHasBeenSet() const
{
    return m_engineVersionsHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetVpcIds() const
{
    return m_vpcIds;
}

void DescribeDBInstancesRequest::SetVpcIds(const vector<uint64_t>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetZoneIds() const
{
    return m_zoneIds;
}

void DescribeDBInstancesRequest::SetZoneIds(const vector<uint64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

vector<uint64_t> DescribeDBInstancesRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void DescribeDBInstancesRequest::SetSubnetIds(const vector<uint64_t>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

vector<int64_t> DescribeDBInstancesRequest::GetCdbErrors() const
{
    return m_cdbErrors;
}

void DescribeDBInstancesRequest::SetCdbErrors(const vector<int64_t>& _cdbErrors)
{
    m_cdbErrors = _cdbErrors;
    m_cdbErrorsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::CdbErrorsHasBeenSet() const
{
    return m_cdbErrorsHasBeenSet;
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

string DescribeDBInstancesRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeDBInstancesRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeDBInstancesRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetWithSecurityGroup() const
{
    return m_withSecurityGroup;
}

void DescribeDBInstancesRequest::SetWithSecurityGroup(const int64_t& _withSecurityGroup)
{
    m_withSecurityGroup = _withSecurityGroup;
    m_withSecurityGroupHasBeenSet = true;
}

bool DescribeDBInstancesRequest::WithSecurityGroupHasBeenSet() const
{
    return m_withSecurityGroupHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetWithExCluster() const
{
    return m_withExCluster;
}

void DescribeDBInstancesRequest::SetWithExCluster(const int64_t& _withExCluster)
{
    m_withExCluster = _withExCluster;
    m_withExClusterHasBeenSet = true;
}

bool DescribeDBInstancesRequest::WithExClusterHasBeenSet() const
{
    return m_withExClusterHasBeenSet;
}

string DescribeDBInstancesRequest::GetExClusterId() const
{
    return m_exClusterId;
}

void DescribeDBInstancesRequest::SetExClusterId(const string& _exClusterId)
{
    m_exClusterId = _exClusterId;
    m_exClusterIdHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ExClusterIdHasBeenSet() const
{
    return m_exClusterIdHasBeenSet;
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

int64_t DescribeDBInstancesRequest::GetInitFlag() const
{
    return m_initFlag;
}

void DescribeDBInstancesRequest::SetInitFlag(const int64_t& _initFlag)
{
    m_initFlag = _initFlag;
    m_initFlagHasBeenSet = true;
}

bool DescribeDBInstancesRequest::InitFlagHasBeenSet() const
{
    return m_initFlagHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetWithDr() const
{
    return m_withDr;
}

void DescribeDBInstancesRequest::SetWithDr(const int64_t& _withDr)
{
    m_withDr = _withDr;
    m_withDrHasBeenSet = true;
}

bool DescribeDBInstancesRequest::WithDrHasBeenSet() const
{
    return m_withDrHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetWithRo() const
{
    return m_withRo;
}

void DescribeDBInstancesRequest::SetWithRo(const int64_t& _withRo)
{
    m_withRo = _withRo;
    m_withRoHasBeenSet = true;
}

bool DescribeDBInstancesRequest::WithRoHasBeenSet() const
{
    return m_withRoHasBeenSet;
}

int64_t DescribeDBInstancesRequest::GetWithMaster() const
{
    return m_withMaster;
}

void DescribeDBInstancesRequest::SetWithMaster(const int64_t& _withMaster)
{
    m_withMaster = _withMaster;
    m_withMasterHasBeenSet = true;
}

bool DescribeDBInstancesRequest::WithMasterHasBeenSet() const
{
    return m_withMasterHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetDeployGroupIds() const
{
    return m_deployGroupIds;
}

void DescribeDBInstancesRequest::SetDeployGroupIds(const vector<string>& _deployGroupIds)
{
    m_deployGroupIds = _deployGroupIds;
    m_deployGroupIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::DeployGroupIdsHasBeenSet() const
{
    return m_deployGroupIdsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetTagKeysForSearch() const
{
    return m_tagKeysForSearch;
}

void DescribeDBInstancesRequest::SetTagKeysForSearch(const vector<string>& _tagKeysForSearch)
{
    m_tagKeysForSearch = _tagKeysForSearch;
    m_tagKeysForSearchHasBeenSet = true;
}

bool DescribeDBInstancesRequest::TagKeysForSearchHasBeenSet() const
{
    return m_tagKeysForSearchHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetCageIds() const
{
    return m_cageIds;
}

void DescribeDBInstancesRequest::SetCageIds(const vector<string>& _cageIds)
{
    m_cageIds = _cageIds;
    m_cageIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::CageIdsHasBeenSet() const
{
    return m_cageIdsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetTagValues() const
{
    return m_tagValues;
}

void DescribeDBInstancesRequest::SetTagValues(const vector<string>& _tagValues)
{
    m_tagValues = _tagValues;
    m_tagValuesHasBeenSet = true;
}

bool DescribeDBInstancesRequest::TagValuesHasBeenSet() const
{
    return m_tagValuesHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetUniqueVpcIds() const
{
    return m_uniqueVpcIds;
}

void DescribeDBInstancesRequest::SetUniqueVpcIds(const vector<string>& _uniqueVpcIds)
{
    m_uniqueVpcIds = _uniqueVpcIds;
    m_uniqueVpcIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::UniqueVpcIdsHasBeenSet() const
{
    return m_uniqueVpcIdsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetUniqSubnetIds() const
{
    return m_uniqSubnetIds;
}

void DescribeDBInstancesRequest::SetUniqSubnetIds(const vector<string>& _uniqSubnetIds)
{
    m_uniqSubnetIds = _uniqSubnetIds;
    m_uniqSubnetIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::UniqSubnetIdsHasBeenSet() const
{
    return m_uniqSubnetIdsHasBeenSet;
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

vector<string> DescribeDBInstancesRequest::GetProxyVips() const
{
    return m_proxyVips;
}

void DescribeDBInstancesRequest::SetProxyVips(const vector<string>& _proxyVips)
{
    m_proxyVips = _proxyVips;
    m_proxyVipsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ProxyVipsHasBeenSet() const
{
    return m_proxyVipsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetProxyIds() const
{
    return m_proxyIds;
}

void DescribeDBInstancesRequest::SetProxyIds(const vector<string>& _proxyIds)
{
    m_proxyIds = _proxyIds;
    m_proxyIdsHasBeenSet = true;
}

bool DescribeDBInstancesRequest::ProxyIdsHasBeenSet() const
{
    return m_proxyIdsHasBeenSet;
}

vector<string> DescribeDBInstancesRequest::GetEngineTypes() const
{
    return m_engineTypes;
}

void DescribeDBInstancesRequest::SetEngineTypes(const vector<string>& _engineTypes)
{
    m_engineTypes = _engineTypes;
    m_engineTypesHasBeenSet = true;
}

bool DescribeDBInstancesRequest::EngineTypesHasBeenSet() const
{
    return m_engineTypesHasBeenSet;
}

bool DescribeDBInstancesRequest::GetQueryClusterInfo() const
{
    return m_queryClusterInfo;
}

void DescribeDBInstancesRequest::SetQueryClusterInfo(const bool& _queryClusterInfo)
{
    m_queryClusterInfo = _queryClusterInfo;
    m_queryClusterInfoHasBeenSet = true;
}

bool DescribeDBInstancesRequest::QueryClusterInfoHasBeenSet() const
{
    return m_queryClusterInfoHasBeenSet;
}


