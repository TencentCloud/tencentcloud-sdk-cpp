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

#include <tencentcloud/mall/v20230518/model/ResourceDrawListType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mall::V20230518::Model;
using namespace std;

ResourceDrawListType::ResourceDrawListType() :
    m_idHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_indexIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_bigDealIdHasBeenSet(false),
    m_smallOrderIdHasBeenSet(false),
    m_resourceNewStartTimeHasBeenSet(false),
    m_resourceNewEndTimeHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceDrawListType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.FlowId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = value["FlowId"].GetUint64();
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("IndexId") && !value["IndexId"].IsNull())
    {
        if (!value["IndexId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.IndexId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexId = string(value["IndexId"].GetString());
        m_indexIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("SmallOrderId") && !value["SmallOrderId"].IsNull())
    {
        if (!value["SmallOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.SmallOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_smallOrderId = string(value["SmallOrderId"].GetString());
        m_smallOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceNewStartTime") && !value["ResourceNewStartTime"].IsNull())
    {
        if (!value["ResourceNewStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.ResourceNewStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceNewStartTime = string(value["ResourceNewStartTime"].GetString());
        m_resourceNewStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceNewEndTime") && !value["ResourceNewEndTime"].IsNull())
    {
        if (!value["ResourceNewEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.ResourceNewEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceNewEndTime = string(value["ResourceNewEndTime"].GetString());
        m_resourceNewEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.ResourceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetInt64();
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDrawListType.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceDrawListType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowId, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
    }

    if (m_smallOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_smallOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNewStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNewStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceNewStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNewEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNewEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceNewEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

}


uint64_t ResourceDrawListType::GetId() const
{
    return m_id;
}

void ResourceDrawListType::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ResourceDrawListType::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ResourceDrawListType::GetFlowId() const
{
    return m_flowId;
}

void ResourceDrawListType::SetFlowId(const uint64_t& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ResourceDrawListType::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string ResourceDrawListType::GetResourceId() const
{
    return m_resourceId;
}

void ResourceDrawListType::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceDrawListType::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ResourceDrawListType::GetIndexId() const
{
    return m_indexId;
}

void ResourceDrawListType::SetIndexId(const string& _indexId)
{
    m_indexId = _indexId;
    m_indexIdHasBeenSet = true;
}

bool ResourceDrawListType::IndexIdHasBeenSet() const
{
    return m_indexIdHasBeenSet;
}

string ResourceDrawListType::GetUin() const
{
    return m_uin;
}

void ResourceDrawListType::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ResourceDrawListType::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ResourceDrawListType::GetBigDealId() const
{
    return m_bigDealId;
}

void ResourceDrawListType::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool ResourceDrawListType::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string ResourceDrawListType::GetSmallOrderId() const
{
    return m_smallOrderId;
}

void ResourceDrawListType::SetSmallOrderId(const string& _smallOrderId)
{
    m_smallOrderId = _smallOrderId;
    m_smallOrderIdHasBeenSet = true;
}

bool ResourceDrawListType::SmallOrderIdHasBeenSet() const
{
    return m_smallOrderIdHasBeenSet;
}

string ResourceDrawListType::GetResourceNewStartTime() const
{
    return m_resourceNewStartTime;
}

void ResourceDrawListType::SetResourceNewStartTime(const string& _resourceNewStartTime)
{
    m_resourceNewStartTime = _resourceNewStartTime;
    m_resourceNewStartTimeHasBeenSet = true;
}

bool ResourceDrawListType::ResourceNewStartTimeHasBeenSet() const
{
    return m_resourceNewStartTimeHasBeenSet;
}

string ResourceDrawListType::GetResourceNewEndTime() const
{
    return m_resourceNewEndTime;
}

void ResourceDrawListType::SetResourceNewEndTime(const string& _resourceNewEndTime)
{
    m_resourceNewEndTime = _resourceNewEndTime;
    m_resourceNewEndTimeHasBeenSet = true;
}

bool ResourceDrawListType::ResourceNewEndTimeHasBeenSet() const
{
    return m_resourceNewEndTimeHasBeenSet;
}

int64_t ResourceDrawListType::GetResourceStatus() const
{
    return m_resourceStatus;
}

void ResourceDrawListType::SetResourceStatus(const int64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool ResourceDrawListType::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

uint64_t ResourceDrawListType::GetStatus() const
{
    return m_status;
}

void ResourceDrawListType::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceDrawListType::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ResourceDrawListType::GetResourceType() const
{
    return m_resourceType;
}

void ResourceDrawListType::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceDrawListType::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

