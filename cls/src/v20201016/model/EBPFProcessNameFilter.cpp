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

#include <tencentcloud/cls/v20201016/model/EBPFProcessNameFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EBPFProcessNameFilter::EBPFProcessNameFilter() :
    m_modeHasBeenSet(false),
    m_processNamesHasBeenSet(false)
{
}

CoreInternalOutcome EBPFProcessNameFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFProcessNameFilter.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ProcessNames") && !value["ProcessNames"].IsNull())
    {
        if (!value["ProcessNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EBPFProcessNameFilter.ProcessNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcessNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_processNames.push_back((*itr).GetString());
        }
        m_processNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EBPFProcessNameFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_processNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_processNames.begin(); itr != m_processNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t EBPFProcessNameFilter::GetMode() const
{
    return m_mode;
}

void EBPFProcessNameFilter::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool EBPFProcessNameFilter::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> EBPFProcessNameFilter::GetProcessNames() const
{
    return m_processNames;
}

void EBPFProcessNameFilter::SetProcessNames(const vector<string>& _processNames)
{
    m_processNames = _processNames;
    m_processNamesHasBeenSet = true;
}

bool EBPFProcessNameFilter::ProcessNamesHasBeenSet() const
{
    return m_processNamesHasBeenSet;
}

