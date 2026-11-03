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

#include <tencentcloud/emr/v20190103/model/McpPasswordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

McpPasswordInfo::McpPasswordInfo() :
    m_hivePasswordRequiredHasBeenSet(false),
    m_trinoPasswordRequiredHasBeenSet(false)
{
}

CoreInternalOutcome McpPasswordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HivePasswordRequired") && !value["HivePasswordRequired"].IsNull())
    {
        if (!value["HivePasswordRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpPasswordInfo.HivePasswordRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hivePasswordRequired = value["HivePasswordRequired"].GetBool();
        m_hivePasswordRequiredHasBeenSet = true;
    }

    if (value.HasMember("TrinoPasswordRequired") && !value["TrinoPasswordRequired"].IsNull())
    {
        if (!value["TrinoPasswordRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpPasswordInfo.TrinoPasswordRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trinoPasswordRequired = value["TrinoPasswordRequired"].GetBool();
        m_trinoPasswordRequiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpPasswordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hivePasswordRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HivePasswordRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hivePasswordRequired, allocator);
    }

    if (m_trinoPasswordRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrinoPasswordRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trinoPasswordRequired, allocator);
    }

}


bool McpPasswordInfo::GetHivePasswordRequired() const
{
    return m_hivePasswordRequired;
}

void McpPasswordInfo::SetHivePasswordRequired(const bool& _hivePasswordRequired)
{
    m_hivePasswordRequired = _hivePasswordRequired;
    m_hivePasswordRequiredHasBeenSet = true;
}

bool McpPasswordInfo::HivePasswordRequiredHasBeenSet() const
{
    return m_hivePasswordRequiredHasBeenSet;
}

bool McpPasswordInfo::GetTrinoPasswordRequired() const
{
    return m_trinoPasswordRequired;
}

void McpPasswordInfo::SetTrinoPasswordRequired(const bool& _trinoPasswordRequired)
{
    m_trinoPasswordRequired = _trinoPasswordRequired;
    m_trinoPasswordRequiredHasBeenSet = true;
}

bool McpPasswordInfo::TrinoPasswordRequiredHasBeenSet() const
{
    return m_trinoPasswordRequiredHasBeenSet;
}

