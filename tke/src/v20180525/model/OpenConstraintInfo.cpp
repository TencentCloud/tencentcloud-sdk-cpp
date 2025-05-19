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

#include <tencentcloud/tke/v20180525/model/OpenConstraintInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

OpenConstraintInfo::OpenConstraintInfo() :
    m_eventNumsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_yamlDetailHasBeenSet(false)
{
}

CoreInternalOutcome OpenConstraintInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventNums") && !value["EventNums"].IsNull())
    {
        if (!value["EventNums"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenConstraintInfo.EventNums` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventNums = value["EventNums"].GetUint64();
        m_eventNumsHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenConstraintInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("YamlDetail") && !value["YamlDetail"].IsNull())
    {
        if (!value["YamlDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenConstraintInfo.YamlDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yamlDetail = string(value["YamlDetail"].GetString());
        m_yamlDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenConstraintInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventNums, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_yamlDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YamlDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yamlDetail.c_str(), allocator).Move(), allocator);
    }

}


uint64_t OpenConstraintInfo::GetEventNums() const
{
    return m_eventNums;
}

void OpenConstraintInfo::SetEventNums(const uint64_t& _eventNums)
{
    m_eventNums = _eventNums;
    m_eventNumsHasBeenSet = true;
}

bool OpenConstraintInfo::EventNumsHasBeenSet() const
{
    return m_eventNumsHasBeenSet;
}

string OpenConstraintInfo::GetName() const
{
    return m_name;
}

void OpenConstraintInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OpenConstraintInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OpenConstraintInfo::GetYamlDetail() const
{
    return m_yamlDetail;
}

void OpenConstraintInfo::SetYamlDetail(const string& _yamlDetail)
{
    m_yamlDetail = _yamlDetail;
    m_yamlDetailHasBeenSet = true;
}

bool OpenConstraintInfo::YamlDetailHasBeenSet() const
{
    return m_yamlDetailHasBeenSet;
}

