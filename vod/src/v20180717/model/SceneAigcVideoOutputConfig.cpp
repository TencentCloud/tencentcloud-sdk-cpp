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

#include <tencentcloud/vod/v20180717/model/SceneAigcVideoOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SceneAigcVideoOutputConfig::SceneAigcVideoOutputConfig() :
    m_storageModeHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome SceneAigcVideoOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcVideoOutputConfig.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneAigcVideoOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
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

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string SceneAigcVideoOutputConfig::GetStorageMode() const
{
    return m_storageMode;
}

void SceneAigcVideoOutputConfig::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

string SceneAigcVideoOutputConfig::GetMediaName() const
{
    return m_mediaName;
}

void SceneAigcVideoOutputConfig::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

int64_t SceneAigcVideoOutputConfig::GetClassId() const
{
    return m_classId;
}

void SceneAigcVideoOutputConfig::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string SceneAigcVideoOutputConfig::GetExpireTime() const
{
    return m_expireTime;
}

void SceneAigcVideoOutputConfig::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string SceneAigcVideoOutputConfig::GetAspectRatio() const
{
    return m_aspectRatio;
}

void SceneAigcVideoOutputConfig::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

double SceneAigcVideoOutputConfig::GetDuration() const
{
    return m_duration;
}

void SceneAigcVideoOutputConfig::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool SceneAigcVideoOutputConfig::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

