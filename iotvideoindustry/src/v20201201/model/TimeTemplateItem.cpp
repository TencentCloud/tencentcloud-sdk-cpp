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

#include <tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

TimeTemplateItem::TimeTemplateItem() :
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isAllWeekHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeTemplateSpecsHasBeenSet(false)
{
}

CoreInternalOutcome TimeTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateItem.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsAllWeek") && !value["IsAllWeek"].IsNull())
    {
        if (!value["IsAllWeek"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateItem.IsAllWeek` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAllWeek = value["IsAllWeek"].GetInt64();
        m_isAllWeekHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeTemplateItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TimeTemplateSpecs") && !value["TimeTemplateSpecs"].IsNull())
    {
        if (!value["TimeTemplateSpecs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeTemplateItem.TimeTemplateSpecs` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeTemplateSpecs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeTemplateSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeTemplateSpecs.push_back(item);
        }
        m_timeTemplateSpecsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isAllWeekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAllWeek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAllWeek, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_timeTemplateSpecsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateSpecs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeTemplateSpecs.begin(); itr != m_timeTemplateSpecs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TimeTemplateItem::GetTemplateId() const
{
    return m_templateId;
}

void TimeTemplateItem::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TimeTemplateItem::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string TimeTemplateItem::GetName() const
{
    return m_name;
}

void TimeTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TimeTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t TimeTemplateItem::GetIsAllWeek() const
{
    return m_isAllWeek;
}

void TimeTemplateItem::SetIsAllWeek(const int64_t& _isAllWeek)
{
    m_isAllWeek = _isAllWeek;
    m_isAllWeekHasBeenSet = true;
}

bool TimeTemplateItem::IsAllWeekHasBeenSet() const
{
    return m_isAllWeekHasBeenSet;
}

int64_t TimeTemplateItem::GetType() const
{
    return m_type;
}

void TimeTemplateItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TimeTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<TimeTemplateSpec> TimeTemplateItem::GetTimeTemplateSpecs() const
{
    return m_timeTemplateSpecs;
}

void TimeTemplateItem::SetTimeTemplateSpecs(const vector<TimeTemplateSpec>& _timeTemplateSpecs)
{
    m_timeTemplateSpecs = _timeTemplateSpecs;
    m_timeTemplateSpecsHasBeenSet = true;
}

bool TimeTemplateItem::TimeTemplateSpecsHasBeenSet() const
{
    return m_timeTemplateSpecsHasBeenSet;
}

