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

#include <tencentcloud/ecm/v20190719/model/ISPCounter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ISPCounter::ISPCounter() :
    m_providerNameHasBeenSet(false),
    m_providerNodeNumHasBeenSet(false),
    m_provederInstanceNumHasBeenSet(false),
    m_zoneInstanceInfoSetHasBeenSet(false),
    m_providerInstanceNumHasBeenSet(false)
{
}

CoreInternalOutcome ISPCounter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProviderName") && !value["ProviderName"].IsNull())
    {
        if (!value["ProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISPCounter.ProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_providerName = string(value["ProviderName"].GetString());
        m_providerNameHasBeenSet = true;
    }

    if (value.HasMember("ProviderNodeNum") && !value["ProviderNodeNum"].IsNull())
    {
        if (!value["ProviderNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ISPCounter.ProviderNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerNodeNum = value["ProviderNodeNum"].GetInt64();
        m_providerNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ProvederInstanceNum") && !value["ProvederInstanceNum"].IsNull())
    {
        if (!value["ProvederInstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ISPCounter.ProvederInstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_provederInstanceNum = value["ProvederInstanceNum"].GetInt64();
        m_provederInstanceNumHasBeenSet = true;
    }

    if (value.HasMember("ZoneInstanceInfoSet") && !value["ZoneInstanceInfoSet"].IsNull())
    {
        if (!value["ZoneInstanceInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ISPCounter.ZoneInstanceInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneInstanceInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ZoneInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_zoneInstanceInfoSet.push_back(item);
        }
        m_zoneInstanceInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ProviderInstanceNum") && !value["ProviderInstanceNum"].IsNull())
    {
        if (!value["ProviderInstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ISPCounter.ProviderInstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerInstanceNum = value["ProviderInstanceNum"].GetInt64();
        m_providerInstanceNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ISPCounter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_providerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_providerName.c_str(), allocator).Move(), allocator);
    }

    if (m_providerNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerNodeNum, allocator);
    }

    if (m_provederInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvederInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_provederInstanceNum, allocator);
    }

    if (m_zoneInstanceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInstanceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneInstanceInfoSet.begin(); itr != m_zoneInstanceInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_providerInstanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderInstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerInstanceNum, allocator);
    }

}


string ISPCounter::GetProviderName() const
{
    return m_providerName;
}

void ISPCounter::SetProviderName(const string& _providerName)
{
    m_providerName = _providerName;
    m_providerNameHasBeenSet = true;
}

bool ISPCounter::ProviderNameHasBeenSet() const
{
    return m_providerNameHasBeenSet;
}

int64_t ISPCounter::GetProviderNodeNum() const
{
    return m_providerNodeNum;
}

void ISPCounter::SetProviderNodeNum(const int64_t& _providerNodeNum)
{
    m_providerNodeNum = _providerNodeNum;
    m_providerNodeNumHasBeenSet = true;
}

bool ISPCounter::ProviderNodeNumHasBeenSet() const
{
    return m_providerNodeNumHasBeenSet;
}

int64_t ISPCounter::GetProvederInstanceNum() const
{
    return m_provederInstanceNum;
}

void ISPCounter::SetProvederInstanceNum(const int64_t& _provederInstanceNum)
{
    m_provederInstanceNum = _provederInstanceNum;
    m_provederInstanceNumHasBeenSet = true;
}

bool ISPCounter::ProvederInstanceNumHasBeenSet() const
{
    return m_provederInstanceNumHasBeenSet;
}

vector<ZoneInstanceInfo> ISPCounter::GetZoneInstanceInfoSet() const
{
    return m_zoneInstanceInfoSet;
}

void ISPCounter::SetZoneInstanceInfoSet(const vector<ZoneInstanceInfo>& _zoneInstanceInfoSet)
{
    m_zoneInstanceInfoSet = _zoneInstanceInfoSet;
    m_zoneInstanceInfoSetHasBeenSet = true;
}

bool ISPCounter::ZoneInstanceInfoSetHasBeenSet() const
{
    return m_zoneInstanceInfoSetHasBeenSet;
}

int64_t ISPCounter::GetProviderInstanceNum() const
{
    return m_providerInstanceNum;
}

void ISPCounter::SetProviderInstanceNum(const int64_t& _providerInstanceNum)
{
    m_providerInstanceNum = _providerInstanceNum;
    m_providerInstanceNumHasBeenSet = true;
}

bool ISPCounter::ProviderInstanceNumHasBeenSet() const
{
    return m_providerInstanceNumHasBeenSet;
}

