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

#include <tencentcloud/iotvideoindustry/v20201201/model/RecordPlanDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

RecordPlanDetail::RecordPlanDetail() :
    m_planIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_timeTemplateIdHasBeenSet(false),
    m_timeTemplateNameHasBeenSet(false),
    m_channelsHasBeenSet(false),
    m_recordStorageTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecordPlanDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TimeTemplateId") && !value["TimeTemplateId"].IsNull())
    {
        if (!value["TimeTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.TimeTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeTemplateId = string(value["TimeTemplateId"].GetString());
        m_timeTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("TimeTemplateName") && !value["TimeTemplateName"].IsNull())
    {
        if (!value["TimeTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.TimeTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeTemplateName = string(value["TimeTemplateName"].GetString());
        m_timeTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("Channels") && !value["Channels"].IsNull())
    {
        if (!value["Channels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.Channels` is not array type"));

        const rapidjson::Value &tmpValue = value["Channels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_channels.push_back(item);
        }
        m_channelsHasBeenSet = true;
    }

    if (value.HasMember("RecordStorageTime") && !value["RecordStorageTime"].IsNull())
    {
        if (!value["RecordStorageTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlanDetail.RecordStorageTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStorageTime = value["RecordStorageTime"].GetInt64();
        m_recordStorageTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordPlanDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_channels.begin(); itr != m_channels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recordStorageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStorageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStorageTime, allocator);
    }

}


string RecordPlanDetail::GetPlanId() const
{
    return m_planId;
}

void RecordPlanDetail::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool RecordPlanDetail::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string RecordPlanDetail::GetName() const
{
    return m_name;
}

void RecordPlanDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RecordPlanDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RecordPlanDetail::GetTimeTemplateId() const
{
    return m_timeTemplateId;
}

void RecordPlanDetail::SetTimeTemplateId(const string& _timeTemplateId)
{
    m_timeTemplateId = _timeTemplateId;
    m_timeTemplateIdHasBeenSet = true;
}

bool RecordPlanDetail::TimeTemplateIdHasBeenSet() const
{
    return m_timeTemplateIdHasBeenSet;
}

string RecordPlanDetail::GetTimeTemplateName() const
{
    return m_timeTemplateName;
}

void RecordPlanDetail::SetTimeTemplateName(const string& _timeTemplateName)
{
    m_timeTemplateName = _timeTemplateName;
    m_timeTemplateNameHasBeenSet = true;
}

bool RecordPlanDetail::TimeTemplateNameHasBeenSet() const
{
    return m_timeTemplateNameHasBeenSet;
}

vector<ChannelItem> RecordPlanDetail::GetChannels() const
{
    return m_channels;
}

void RecordPlanDetail::SetChannels(const vector<ChannelItem>& _channels)
{
    m_channels = _channels;
    m_channelsHasBeenSet = true;
}

bool RecordPlanDetail::ChannelsHasBeenSet() const
{
    return m_channelsHasBeenSet;
}

int64_t RecordPlanDetail::GetRecordStorageTime() const
{
    return m_recordStorageTime;
}

void RecordPlanDetail::SetRecordStorageTime(const int64_t& _recordStorageTime)
{
    m_recordStorageTime = _recordStorageTime;
    m_recordStorageTimeHasBeenSet = true;
}

bool RecordPlanDetail::RecordStorageTimeHasBeenSet() const
{
    return m_recordStorageTimeHasBeenSet;
}

