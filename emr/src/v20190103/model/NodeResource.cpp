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

#include <tencentcloud/emr/v20190103/model/NodeResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NodeResource::NodeResource() :
    m_resourceConfigIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_maxResourceNumHasBeenSet(false),
    m_prepaidUnderwritePeriodsHasBeenSet(false)
{
}

CoreInternalOutcome NodeResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceConfigId") && !value["ResourceConfigId"].IsNull())
    {
        if (!value["ResourceConfigId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.ResourceConfigId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceConfigId = value["ResourceConfigId"].GetUint64();
        m_resourceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.Resource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resource.Deserialize(value["Resource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.IsDefault` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = string(value["IsDefault"].GetString());
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("MaxResourceNum") && !value["MaxResourceNum"].IsNull())
    {
        if (!value["MaxResourceNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeResource.MaxResourceNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxResourceNum = value["MaxResourceNum"].GetUint64();
        m_maxResourceNumHasBeenSet = true;
    }

    if (value.HasMember("PrepaidUnderwritePeriods") && !value["PrepaidUnderwritePeriods"].IsNull())
    {
        if (!value["PrepaidUnderwritePeriods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeResource.PrepaidUnderwritePeriods` is not array type"));

        const rapidjson::Value &tmpValue = value["PrepaidUnderwritePeriods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_prepaidUnderwritePeriods.push_back((*itr).GetInt64());
        }
        m_prepaidUnderwritePeriodsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceConfigId, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResourceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResourceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxResourceNum, allocator);
    }

    if (m_prepaidUnderwritePeriodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidUnderwritePeriods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_prepaidUnderwritePeriods.begin(); itr != m_prepaidUnderwritePeriods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


uint64_t NodeResource::GetResourceConfigId() const
{
    return m_resourceConfigId;
}

void NodeResource::SetResourceConfigId(const uint64_t& _resourceConfigId)
{
    m_resourceConfigId = _resourceConfigId;
    m_resourceConfigIdHasBeenSet = true;
}

bool NodeResource::ResourceConfigIdHasBeenSet() const
{
    return m_resourceConfigIdHasBeenSet;
}

Resource NodeResource::GetResource() const
{
    return m_resource;
}

void NodeResource::SetResource(const Resource& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool NodeResource::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string NodeResource::GetCreateTime() const
{
    return m_createTime;
}

void NodeResource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NodeResource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NodeResource::GetUpdateTime() const
{
    return m_updateTime;
}

void NodeResource::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NodeResource::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string NodeResource::GetIsDefault() const
{
    return m_isDefault;
}

void NodeResource::SetIsDefault(const string& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool NodeResource::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

uint64_t NodeResource::GetMaxResourceNum() const
{
    return m_maxResourceNum;
}

void NodeResource::SetMaxResourceNum(const uint64_t& _maxResourceNum)
{
    m_maxResourceNum = _maxResourceNum;
    m_maxResourceNumHasBeenSet = true;
}

bool NodeResource::MaxResourceNumHasBeenSet() const
{
    return m_maxResourceNumHasBeenSet;
}

vector<int64_t> NodeResource::GetPrepaidUnderwritePeriods() const
{
    return m_prepaidUnderwritePeriods;
}

void NodeResource::SetPrepaidUnderwritePeriods(const vector<int64_t>& _prepaidUnderwritePeriods)
{
    m_prepaidUnderwritePeriods = _prepaidUnderwritePeriods;
    m_prepaidUnderwritePeriodsHasBeenSet = true;
}

bool NodeResource::PrepaidUnderwritePeriodsHasBeenSet() const
{
    return m_prepaidUnderwritePeriodsHasBeenSet;
}

