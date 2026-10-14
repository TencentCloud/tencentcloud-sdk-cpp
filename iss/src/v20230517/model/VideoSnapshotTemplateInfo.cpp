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

#include <tencentcloud/iss/v20230517/model/VideoSnapshotTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoSnapshotTemplateInfo::VideoSnapshotTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_multiModeHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_relatedConfigCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome VideoSnapshotTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("MultiMode") && !value["MultiMode"].IsNull())
    {
        if (!value["MultiMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.MultiMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiMode.Deserialize(value["MultiMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiModeHasBeenSet = true;
    }

    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.Times` is not array type"));

        const rapidjson::Value &tmpValue = value["Times"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EffectiveTime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_times.push_back(item);
        }
        m_timesHasBeenSet = true;
    }

    if (value.HasMember("RelatedConfigCount") && !value["RelatedConfigCount"].IsNull())
    {
        if (!value["RelatedConfigCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.RelatedConfigCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedConfigCount = value["RelatedConfigCount"].GetInt64();
        m_relatedConfigCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotTemplateInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSnapshotTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_multiModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiMode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_times.begin(); itr != m_times.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relatedConfigCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedConfigCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedConfigCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string VideoSnapshotTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void VideoSnapshotTemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string VideoSnapshotTemplateInfo::GetName() const
{
    return m_name;
}

void VideoSnapshotTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t VideoSnapshotTemplateInfo::GetType() const
{
    return m_type;
}

void VideoSnapshotTemplateInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t VideoSnapshotTemplateInfo::GetInterval() const
{
    return m_interval;
}

void VideoSnapshotTemplateInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

MultiVideoSnapshotMode VideoSnapshotTemplateInfo::GetMultiMode() const
{
    return m_multiMode;
}

void VideoSnapshotTemplateInfo::SetMultiMode(const MultiVideoSnapshotMode& _multiMode)
{
    m_multiMode = _multiMode;
    m_multiModeHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::MultiModeHasBeenSet() const
{
    return m_multiModeHasBeenSet;
}

vector<EffectiveTime> VideoSnapshotTemplateInfo::GetTimes() const
{
    return m_times;
}

void VideoSnapshotTemplateInfo::SetTimes(const vector<EffectiveTime>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

int64_t VideoSnapshotTemplateInfo::GetRelatedConfigCount() const
{
    return m_relatedConfigCount;
}

void VideoSnapshotTemplateInfo::SetRelatedConfigCount(const int64_t& _relatedConfigCount)
{
    m_relatedConfigCount = _relatedConfigCount;
    m_relatedConfigCountHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::RelatedConfigCountHasBeenSet() const
{
    return m_relatedConfigCountHasBeenSet;
}

string VideoSnapshotTemplateInfo::GetCreateTime() const
{
    return m_createTime;
}

void VideoSnapshotTemplateInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VideoSnapshotTemplateInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void VideoSnapshotTemplateInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VideoSnapshotTemplateInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

