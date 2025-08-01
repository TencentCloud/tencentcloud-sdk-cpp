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

#include <tencentcloud/dlc/v20210125/model/StandardEngineResourceGroupConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

StandardEngineResourceGroupConfigInfo::StandardEngineResourceGroupConfigInfo() :
    m_resourceGroupIdHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_staticConfigPairsHasBeenSet(false),
    m_dynamicConfigPairsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome StandardEngineResourceGroupConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("StaticConfigPairs") && !value["StaticConfigPairs"].IsNull())
    {
        if (!value["StaticConfigPairs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.StaticConfigPairs` is not array type"));

        const rapidjson::Value &tmpValue = value["StaticConfigPairs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EngineResourceGroupConfigPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_staticConfigPairs.push_back(item);
        }
        m_staticConfigPairsHasBeenSet = true;
    }

    if (value.HasMember("DynamicConfigPairs") && !value["DynamicConfigPairs"].IsNull())
    {
        if (!value["DynamicConfigPairs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.DynamicConfigPairs` is not array type"));

        const rapidjson::Value &tmpValue = value["DynamicConfigPairs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EngineResourceGroupConfigPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dynamicConfigPairs.push_back(item);
        }
        m_dynamicConfigPairsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardEngineResourceGroupConfigInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardEngineResourceGroupConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_staticConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_staticConfigPairs.begin(); itr != m_staticConfigPairs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dynamicConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dynamicConfigPairs.begin(); itr != m_dynamicConfigPairs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string StandardEngineResourceGroupConfigInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void StandardEngineResourceGroupConfigInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string StandardEngineResourceGroupConfigInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void StandardEngineResourceGroupConfigInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

vector<EngineResourceGroupConfigPair> StandardEngineResourceGroupConfigInfo::GetStaticConfigPairs() const
{
    return m_staticConfigPairs;
}

void StandardEngineResourceGroupConfigInfo::SetStaticConfigPairs(const vector<EngineResourceGroupConfigPair>& _staticConfigPairs)
{
    m_staticConfigPairs = _staticConfigPairs;
    m_staticConfigPairsHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::StaticConfigPairsHasBeenSet() const
{
    return m_staticConfigPairsHasBeenSet;
}

vector<EngineResourceGroupConfigPair> StandardEngineResourceGroupConfigInfo::GetDynamicConfigPairs() const
{
    return m_dynamicConfigPairs;
}

void StandardEngineResourceGroupConfigInfo::SetDynamicConfigPairs(const vector<EngineResourceGroupConfigPair>& _dynamicConfigPairs)
{
    m_dynamicConfigPairs = _dynamicConfigPairs;
    m_dynamicConfigPairsHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::DynamicConfigPairsHasBeenSet() const
{
    return m_dynamicConfigPairsHasBeenSet;
}

int64_t StandardEngineResourceGroupConfigInfo::GetCreateTime() const
{
    return m_createTime;
}

void StandardEngineResourceGroupConfigInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t StandardEngineResourceGroupConfigInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void StandardEngineResourceGroupConfigInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool StandardEngineResourceGroupConfigInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

