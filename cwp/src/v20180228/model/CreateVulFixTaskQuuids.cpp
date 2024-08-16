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

#include <tencentcloud/cwp/v20180228/model/CreateVulFixTaskQuuids.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateVulFixTaskQuuids::CreateVulFixTaskQuuids() :
    m_vulIdHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_fixMethodHasBeenSet(false)
{
}

CoreInternalOutcome CreateVulFixTaskQuuids::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVulFixTaskQuuids.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Quuids") && !value["Quuids"].IsNull())
    {
        if (!value["Quuids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateVulFixTaskQuuids.Quuids` is not array type"));

        const rapidjson::Value &tmpValue = value["Quuids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_quuids.push_back((*itr).GetString());
        }
        m_quuidsHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVulFixTaskQuuids.FixMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixMethod = value["FixMethod"].GetUint64();
        m_fixMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateVulFixTaskQuuids::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixMethod, allocator);
    }

}


uint64_t CreateVulFixTaskQuuids::GetVulId() const
{
    return m_vulId;
}

void CreateVulFixTaskQuuids::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool CreateVulFixTaskQuuids::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<string> CreateVulFixTaskQuuids::GetQuuids() const
{
    return m_quuids;
}

void CreateVulFixTaskQuuids::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool CreateVulFixTaskQuuids::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

uint64_t CreateVulFixTaskQuuids::GetFixMethod() const
{
    return m_fixMethod;
}

void CreateVulFixTaskQuuids::SetFixMethod(const uint64_t& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool CreateVulFixTaskQuuids::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

