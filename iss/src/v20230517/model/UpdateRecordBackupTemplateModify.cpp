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

#include <tencentcloud/iss/v20230517/model/UpdateRecordBackupTemplateModify.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

UpdateRecordBackupTemplateModify::UpdateRecordBackupTemplateModify() :
    m_templateNameHasBeenSet(false),
    m_timeSectionsHasBeenSet(false),
    m_devTimeSectionsHasBeenSet(false),
    m_scaleHasBeenSet(false)
{
}

CoreInternalOutcome UpdateRecordBackupTemplateModify::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupTemplateModify.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("TimeSections") && !value["TimeSections"].IsNull())
    {
        if (!value["TimeSections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupTemplateModify.TimeSections` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeSections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordTemplateTimeSections item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeSections.push_back(item);
        }
        m_timeSectionsHasBeenSet = true;
    }

    if (value.HasMember("DevTimeSections") && !value["DevTimeSections"].IsNull())
    {
        if (!value["DevTimeSections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupTemplateModify.DevTimeSections` is not array type"));

        const rapidjson::Value &tmpValue = value["DevTimeSections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordTemplateTimeSections item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_devTimeSections.push_back(item);
        }
        m_devTimeSectionsHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateRecordBackupTemplateModify.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateRecordBackupTemplateModify::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeSections.begin(); itr != m_timeSections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_devTimeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevTimeSections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devTimeSections.begin(); itr != m_devTimeSections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

}


string UpdateRecordBackupTemplateModify::GetTemplateName() const
{
    return m_templateName;
}

void UpdateRecordBackupTemplateModify::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool UpdateRecordBackupTemplateModify::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<RecordTemplateTimeSections> UpdateRecordBackupTemplateModify::GetTimeSections() const
{
    return m_timeSections;
}

void UpdateRecordBackupTemplateModify::SetTimeSections(const vector<RecordTemplateTimeSections>& _timeSections)
{
    m_timeSections = _timeSections;
    m_timeSectionsHasBeenSet = true;
}

bool UpdateRecordBackupTemplateModify::TimeSectionsHasBeenSet() const
{
    return m_timeSectionsHasBeenSet;
}

vector<RecordTemplateTimeSections> UpdateRecordBackupTemplateModify::GetDevTimeSections() const
{
    return m_devTimeSections;
}

void UpdateRecordBackupTemplateModify::SetDevTimeSections(const vector<RecordTemplateTimeSections>& _devTimeSections)
{
    m_devTimeSections = _devTimeSections;
    m_devTimeSectionsHasBeenSet = true;
}

bool UpdateRecordBackupTemplateModify::DevTimeSectionsHasBeenSet() const
{
    return m_devTimeSectionsHasBeenSet;
}

int64_t UpdateRecordBackupTemplateModify::GetScale() const
{
    return m_scale;
}

void UpdateRecordBackupTemplateModify::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool UpdateRecordBackupTemplateModify::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

