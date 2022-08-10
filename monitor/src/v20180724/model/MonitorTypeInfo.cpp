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

#include <tencentcloud/monitor/v20180724/model/MonitorTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

MonitorTypeInfo::MonitorTypeInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sortIdHasBeenSet(false)
{
}

CoreInternalOutcome MonitorTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SortId") && !value["SortId"].IsNull())
    {
        if (!value["SortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeInfo.SortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sortId = value["SortId"].GetInt64();
        m_sortIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sortId, allocator);
    }

}


string MonitorTypeInfo::GetId() const
{
    return m_id;
}

void MonitorTypeInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MonitorTypeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MonitorTypeInfo::GetName() const
{
    return m_name;
}

void MonitorTypeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MonitorTypeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t MonitorTypeInfo::GetSortId() const
{
    return m_sortId;
}

void MonitorTypeInfo::SetSortId(const int64_t& _sortId)
{
    m_sortId = _sortId;
    m_sortIdHasBeenSet = true;
}

bool MonitorTypeInfo::SortIdHasBeenSet() const
{
    return m_sortIdHasBeenSet;
}

