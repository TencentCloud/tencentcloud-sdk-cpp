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

#include <tencentcloud/vod/v20180717/model/EditMediaOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

EditMediaOutputConfig::EditMediaOutputConfig() :
    m_mediaNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_videoStreamHasBeenSet(false),
    m_tEHDConfigHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoStream") && !value["VideoStream"].IsNull())
    {
        if (!value["VideoStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.VideoStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoStream.Deserialize(value["VideoStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoStreamHasBeenSet = true;
    }

    if (value.HasMember("TEHDConfig") && !value["TEHDConfig"].IsNull())
    {
        if (!value["TEHDConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditMediaOutputConfig.TEHDConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tEHDConfig.Deserialize(value["TEHDConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tEHDConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_videoStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoStream.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tEHDConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TEHDConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tEHDConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EditMediaOutputConfig::GetMediaName() const
{
    return m_mediaName;
}

void EditMediaOutputConfig::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool EditMediaOutputConfig::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

string EditMediaOutputConfig::GetType() const
{
    return m_type;
}

void EditMediaOutputConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EditMediaOutputConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t EditMediaOutputConfig::GetClassId() const
{
    return m_classId;
}

void EditMediaOutputConfig::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool EditMediaOutputConfig::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string EditMediaOutputConfig::GetExpireTime() const
{
    return m_expireTime;
}

void EditMediaOutputConfig::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool EditMediaOutputConfig::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

EditMediaVideoStream EditMediaOutputConfig::GetVideoStream() const
{
    return m_videoStream;
}

void EditMediaOutputConfig::SetVideoStream(const EditMediaVideoStream& _videoStream)
{
    m_videoStream = _videoStream;
    m_videoStreamHasBeenSet = true;
}

bool EditMediaOutputConfig::VideoStreamHasBeenSet() const
{
    return m_videoStreamHasBeenSet;
}

EditMediaTEHDConfig EditMediaOutputConfig::GetTEHDConfig() const
{
    return m_tEHDConfig;
}

void EditMediaOutputConfig::SetTEHDConfig(const EditMediaTEHDConfig& _tEHDConfig)
{
    m_tEHDConfig = _tEHDConfig;
    m_tEHDConfigHasBeenSet = true;
}

bool EditMediaOutputConfig::TEHDConfigHasBeenSet() const
{
    return m_tEHDConfigHasBeenSet;
}

