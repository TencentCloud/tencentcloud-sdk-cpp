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

#include <tencentcloud/iss/v20230517/model/ListRecordBackupTemplatesData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListRecordBackupTemplatesData::ListRecordBackupTemplatesData() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_timeSectionsHasBeenSet(false),
    m_devTimeSectionsHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome ListRecordBackupTemplatesData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("TimeSections") && !value["TimeSections"].IsNull())
    {
        if (!value["TimeSections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.TimeSections` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.DevTimeSections` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("CreateAt") && !value["CreateAt"].IsNull())
    {
        if (!value["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(value["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (value.HasMember("UpdateAt") && !value["UpdateAt"].IsNull())
    {
        if (!value["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListRecordBackupTemplatesData.UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(value["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListRecordBackupTemplatesData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
    }

}


string ListRecordBackupTemplatesData::GetTemplateId() const
{
    return m_templateId;
}

void ListRecordBackupTemplatesData::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ListRecordBackupTemplatesData::GetTemplateName() const
{
    return m_templateName;
}

void ListRecordBackupTemplatesData::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<RecordTemplateTimeSections> ListRecordBackupTemplatesData::GetTimeSections() const
{
    return m_timeSections;
}

void ListRecordBackupTemplatesData::SetTimeSections(const vector<RecordTemplateTimeSections>& _timeSections)
{
    m_timeSections = _timeSections;
    m_timeSectionsHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::TimeSectionsHasBeenSet() const
{
    return m_timeSectionsHasBeenSet;
}

vector<RecordTemplateTimeSections> ListRecordBackupTemplatesData::GetDevTimeSections() const
{
    return m_devTimeSections;
}

void ListRecordBackupTemplatesData::SetDevTimeSections(const vector<RecordTemplateTimeSections>& _devTimeSections)
{
    m_devTimeSections = _devTimeSections;
    m_devTimeSectionsHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::DevTimeSectionsHasBeenSet() const
{
    return m_devTimeSectionsHasBeenSet;
}

int64_t ListRecordBackupTemplatesData::GetScale() const
{
    return m_scale;
}

void ListRecordBackupTemplatesData::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

string ListRecordBackupTemplatesData::GetCreateAt() const
{
    return m_createAt;
}

void ListRecordBackupTemplatesData::SetCreateAt(const string& _createAt)
{
    m_createAt = _createAt;
    m_createAtHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string ListRecordBackupTemplatesData::GetUpdateAt() const
{
    return m_updateAt;
}

void ListRecordBackupTemplatesData::SetUpdateAt(const string& _updateAt)
{
    m_updateAt = _updateAt;
    m_updateAtHasBeenSet = true;
}

bool ListRecordBackupTemplatesData::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}

