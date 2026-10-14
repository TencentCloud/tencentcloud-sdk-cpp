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

#include <tencentcloud/iss/v20230517/model/VideoSnapshotConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VideoSnapshotConfigInfo::VideoSnapshotConfigInfo() :
    m_configIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileExpiresHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_relatedChannelCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome VideoSnapshotConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileExpires") && !value["FileExpires"].IsNull())
    {
        if (!value["FileExpires"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.FileExpires` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileExpires = value["FileExpires"].GetInt64();
        m_fileExpiresHasBeenSet = true;
    }

    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("RelatedChannelCount") && !value["RelatedChannelCount"].IsNull())
    {
        if (!value["RelatedChannelCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.RelatedChannelCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedChannelCount = value["RelatedChannelCount"].GetInt64();
        m_relatedChannelCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSnapshotConfigInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSnapshotConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_fileExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExpires";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileExpires, allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_relatedChannelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedChannelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedChannelCount, allocator);
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


string VideoSnapshotConfigInfo::GetConfigId() const
{
    return m_configId;
}

void VideoSnapshotConfigInfo::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string VideoSnapshotConfigInfo::GetName() const
{
    return m_name;
}

void VideoSnapshotConfigInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VideoSnapshotConfigInfo::GetTemplateId() const
{
    return m_templateId;
}

void VideoSnapshotConfigInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string VideoSnapshotConfigInfo::GetTemplateName() const
{
    return m_templateName;
}

void VideoSnapshotConfigInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t VideoSnapshotConfigInfo::GetType() const
{
    return m_type;
}

void VideoSnapshotConfigInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t VideoSnapshotConfigInfo::GetFileExpires() const
{
    return m_fileExpires;
}

void VideoSnapshotConfigInfo::SetFileExpires(const int64_t& _fileExpires)
{
    m_fileExpires = _fileExpires;
    m_fileExpiresHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::FileExpiresHasBeenSet() const
{
    return m_fileExpiresHasBeenSet;
}

CallbackURL VideoSnapshotConfigInfo::GetCallback() const
{
    return m_callback;
}

void VideoSnapshotConfigInfo::SetCallback(const CallbackURL& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

int64_t VideoSnapshotConfigInfo::GetRelatedChannelCount() const
{
    return m_relatedChannelCount;
}

void VideoSnapshotConfigInfo::SetRelatedChannelCount(const int64_t& _relatedChannelCount)
{
    m_relatedChannelCount = _relatedChannelCount;
    m_relatedChannelCountHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::RelatedChannelCountHasBeenSet() const
{
    return m_relatedChannelCountHasBeenSet;
}

string VideoSnapshotConfigInfo::GetCreateTime() const
{
    return m_createTime;
}

void VideoSnapshotConfigInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VideoSnapshotConfigInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void VideoSnapshotConfigInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VideoSnapshotConfigInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

