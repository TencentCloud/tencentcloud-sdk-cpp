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

#include <tencentcloud/vpc/v20170312/model/FlowLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

FlowLog::FlowLog() :
    m_vpcIdHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_cloudLogIdHasBeenSet(false),
    m_cloudLogStateHasBeenSet(false),
    m_flowLogDescriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_flowLogStorageHasBeenSet(false),
    m_cloudLogRegionHasBeenSet(false)
{
}

CoreInternalOutcome FlowLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("FlowLogId") && !value["FlowLogId"].IsNull())
    {
        if (!value["FlowLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.FlowLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowLogId = string(value["FlowLogId"].GetString());
        m_flowLogIdHasBeenSet = true;
    }

    if (value.HasMember("FlowLogName") && !value["FlowLogName"].IsNull())
    {
        if (!value["FlowLogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.FlowLogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowLogName = string(value["FlowLogName"].GetString());
        m_flowLogNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("TrafficType") && !value["TrafficType"].IsNull())
    {
        if (!value["TrafficType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.TrafficType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficType = string(value["TrafficType"].GetString());
        m_trafficTypeHasBeenSet = true;
    }

    if (value.HasMember("CloudLogId") && !value["CloudLogId"].IsNull())
    {
        if (!value["CloudLogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.CloudLogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudLogId = string(value["CloudLogId"].GetString());
        m_cloudLogIdHasBeenSet = true;
    }

    if (value.HasMember("CloudLogState") && !value["CloudLogState"].IsNull())
    {
        if (!value["CloudLogState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.CloudLogState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudLogState = string(value["CloudLogState"].GetString());
        m_cloudLogStateHasBeenSet = true;
    }

    if (value.HasMember("FlowLogDescription") && !value["FlowLogDescription"].IsNull())
    {
        if (!value["FlowLogDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.FlowLogDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowLogDescription = string(value["FlowLogDescription"].GetString());
        m_flowLogDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowLog.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("FlowLogStorage") && !value["FlowLogStorage"].IsNull())
    {
        if (!value["FlowLogStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.FlowLogStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_flowLogStorage.Deserialize(value["FlowLogStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_flowLogStorageHasBeenSet = true;
    }

    if (value.HasMember("CloudLogRegion") && !value["CloudLogRegion"].IsNull())
    {
        if (!value["CloudLogRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowLog.CloudLogRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudLogRegion = string(value["CloudLogRegion"].GetString());
        m_cloudLogRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowLogName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudLogId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudLogStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudLogState.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowLogDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowLogStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLogStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_flowLogStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cloudLogRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudLogRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudLogRegion.c_str(), allocator).Move(), allocator);
    }

}


string FlowLog::GetVpcId() const
{
    return m_vpcId;
}

void FlowLog::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool FlowLog::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string FlowLog::GetFlowLogId() const
{
    return m_flowLogId;
}

void FlowLog::SetFlowLogId(const string& _flowLogId)
{
    m_flowLogId = _flowLogId;
    m_flowLogIdHasBeenSet = true;
}

bool FlowLog::FlowLogIdHasBeenSet() const
{
    return m_flowLogIdHasBeenSet;
}

string FlowLog::GetFlowLogName() const
{
    return m_flowLogName;
}

void FlowLog::SetFlowLogName(const string& _flowLogName)
{
    m_flowLogName = _flowLogName;
    m_flowLogNameHasBeenSet = true;
}

bool FlowLog::FlowLogNameHasBeenSet() const
{
    return m_flowLogNameHasBeenSet;
}

string FlowLog::GetResourceType() const
{
    return m_resourceType;
}

void FlowLog::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool FlowLog::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string FlowLog::GetResourceId() const
{
    return m_resourceId;
}

void FlowLog::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool FlowLog::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string FlowLog::GetTrafficType() const
{
    return m_trafficType;
}

void FlowLog::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool FlowLog::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

string FlowLog::GetCloudLogId() const
{
    return m_cloudLogId;
}

void FlowLog::SetCloudLogId(const string& _cloudLogId)
{
    m_cloudLogId = _cloudLogId;
    m_cloudLogIdHasBeenSet = true;
}

bool FlowLog::CloudLogIdHasBeenSet() const
{
    return m_cloudLogIdHasBeenSet;
}

string FlowLog::GetCloudLogState() const
{
    return m_cloudLogState;
}

void FlowLog::SetCloudLogState(const string& _cloudLogState)
{
    m_cloudLogState = _cloudLogState;
    m_cloudLogStateHasBeenSet = true;
}

bool FlowLog::CloudLogStateHasBeenSet() const
{
    return m_cloudLogStateHasBeenSet;
}

string FlowLog::GetFlowLogDescription() const
{
    return m_flowLogDescription;
}

void FlowLog::SetFlowLogDescription(const string& _flowLogDescription)
{
    m_flowLogDescription = _flowLogDescription;
    m_flowLogDescriptionHasBeenSet = true;
}

bool FlowLog::FlowLogDescriptionHasBeenSet() const
{
    return m_flowLogDescriptionHasBeenSet;
}

string FlowLog::GetCreatedTime() const
{
    return m_createdTime;
}

void FlowLog::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool FlowLog::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

vector<Tag> FlowLog::GetTagSet() const
{
    return m_tagSet;
}

void FlowLog::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool FlowLog::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

bool FlowLog::GetEnable() const
{
    return m_enable;
}

void FlowLog::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool FlowLog::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string FlowLog::GetStorageType() const
{
    return m_storageType;
}

void FlowLog::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool FlowLog::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

FlowLogStorage FlowLog::GetFlowLogStorage() const
{
    return m_flowLogStorage;
}

void FlowLog::SetFlowLogStorage(const FlowLogStorage& _flowLogStorage)
{
    m_flowLogStorage = _flowLogStorage;
    m_flowLogStorageHasBeenSet = true;
}

bool FlowLog::FlowLogStorageHasBeenSet() const
{
    return m_flowLogStorageHasBeenSet;
}

string FlowLog::GetCloudLogRegion() const
{
    return m_cloudLogRegion;
}

void FlowLog::SetCloudLogRegion(const string& _cloudLogRegion)
{
    m_cloudLogRegion = _cloudLogRegion;
    m_cloudLogRegionHasBeenSet = true;
}

bool FlowLog::CloudLogRegionHasBeenSet() const
{
    return m_cloudLogRegionHasBeenSet;
}

