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

#include <tencentcloud/cvm/v20170312/model/GPUInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

GPUInfo::GPUInfo() :
    m_gPUCountHasBeenSet(false),
    m_gPUIdHasBeenSet(false),
    m_gPUTypeHasBeenSet(false)
{
}

CoreInternalOutcome GPUInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GPUCount") && !value["GPUCount"].IsNull())
    {
        if (!value["GPUCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.GPUCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gPUCount = value["GPUCount"].GetDouble();
        m_gPUCountHasBeenSet = true;
    }

    if (value.HasMember("GPUId") && !value["GPUId"].IsNull())
    {
        if (!value["GPUId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GPUInfo.GPUId` is not array type"));

        const rapidjson::Value &tmpValue = value["GPUId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_gPUId.push_back((*itr).GetString());
        }
        m_gPUIdHasBeenSet = true;
    }

    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUInfo.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gPUCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUCount, allocator);
    }

    if (m_gPUIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_gPUId.begin(); itr != m_gPUId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

}


double GPUInfo::GetGPUCount() const
{
    return m_gPUCount;
}

void GPUInfo::SetGPUCount(const double& _gPUCount)
{
    m_gPUCount = _gPUCount;
    m_gPUCountHasBeenSet = true;
}

bool GPUInfo::GPUCountHasBeenSet() const
{
    return m_gPUCountHasBeenSet;
}

vector<string> GPUInfo::GetGPUId() const
{
    return m_gPUId;
}

void GPUInfo::SetGPUId(const vector<string>& _gPUId)
{
    m_gPUId = _gPUId;
    m_gPUIdHasBeenSet = true;
}

bool GPUInfo::GPUIdHasBeenSet() const
{
    return m_gPUIdHasBeenSet;
}

string GPUInfo::GetGPUType() const
{
    return m_gPUType;
}

void GPUInfo::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool GPUInfo::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

