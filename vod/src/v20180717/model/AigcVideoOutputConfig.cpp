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

#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoOutputConfig::AigcVideoOutputConfig() :
    m_storageModeHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_audioGenerationHasBeenSet(false),
    m_personGenerationHasBeenSet(false),
    m_inputComplianceCheckHasBeenSet(false),
    m_outputComplianceCheckHasBeenSet(false),
    m_enhanceSwitchHasBeenSet(false),
    m_frameInterpolateHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("AudioGeneration") && !value["AudioGeneration"].IsNull())
    {
        if (!value["AudioGeneration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.AudioGeneration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioGeneration = string(value["AudioGeneration"].GetString());
        m_audioGenerationHasBeenSet = true;
    }

    if (value.HasMember("PersonGeneration") && !value["PersonGeneration"].IsNull())
    {
        if (!value["PersonGeneration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.PersonGeneration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personGeneration = string(value["PersonGeneration"].GetString());
        m_personGenerationHasBeenSet = true;
    }

    if (value.HasMember("InputComplianceCheck") && !value["InputComplianceCheck"].IsNull())
    {
        if (!value["InputComplianceCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.InputComplianceCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputComplianceCheck = string(value["InputComplianceCheck"].GetString());
        m_inputComplianceCheckHasBeenSet = true;
    }

    if (value.HasMember("OutputComplianceCheck") && !value["OutputComplianceCheck"].IsNull())
    {
        if (!value["OutputComplianceCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.OutputComplianceCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputComplianceCheck = string(value["OutputComplianceCheck"].GetString());
        m_outputComplianceCheckHasBeenSet = true;
    }

    if (value.HasMember("EnhanceSwitch") && !value["EnhanceSwitch"].IsNull())
    {
        if (!value["EnhanceSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.EnhanceSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enhanceSwitch = string(value["EnhanceSwitch"].GetString());
        m_enhanceSwitchHasBeenSet = true;
    }

    if (value.HasMember("FrameInterpolate") && !value["FrameInterpolate"].IsNull())
    {
        if (!value["FrameInterpolate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoOutputConfig.FrameInterpolate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameInterpolate = string(value["FrameInterpolate"].GetString());
        m_frameInterpolateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_audioGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioGeneration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioGeneration.c_str(), allocator).Move(), allocator);
    }

    if (m_personGenerationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonGeneration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personGeneration.c_str(), allocator).Move(), allocator);
    }

    if (m_inputComplianceCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputComplianceCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputComplianceCheck.c_str(), allocator).Move(), allocator);
    }

    if (m_outputComplianceCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputComplianceCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputComplianceCheck.c_str(), allocator).Move(), allocator);
    }

    if (m_enhanceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhanceSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enhanceSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_frameInterpolateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameInterpolate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameInterpolate.c_str(), allocator).Move(), allocator);
    }

}


string AigcVideoOutputConfig::GetStorageMode() const
{
    return m_storageMode;
}

void AigcVideoOutputConfig::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool AigcVideoOutputConfig::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

string AigcVideoOutputConfig::GetMediaName() const
{
    return m_mediaName;
}

void AigcVideoOutputConfig::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool AigcVideoOutputConfig::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

int64_t AigcVideoOutputConfig::GetClassId() const
{
    return m_classId;
}

void AigcVideoOutputConfig::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool AigcVideoOutputConfig::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string AigcVideoOutputConfig::GetExpireTime() const
{
    return m_expireTime;
}

void AigcVideoOutputConfig::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AigcVideoOutputConfig::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

double AigcVideoOutputConfig::GetDuration() const
{
    return m_duration;
}

void AigcVideoOutputConfig::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AigcVideoOutputConfig::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AigcVideoOutputConfig::GetResolution() const
{
    return m_resolution;
}

void AigcVideoOutputConfig::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AigcVideoOutputConfig::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string AigcVideoOutputConfig::GetAspectRatio() const
{
    return m_aspectRatio;
}

void AigcVideoOutputConfig::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool AigcVideoOutputConfig::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string AigcVideoOutputConfig::GetAudioGeneration() const
{
    return m_audioGeneration;
}

void AigcVideoOutputConfig::SetAudioGeneration(const string& _audioGeneration)
{
    m_audioGeneration = _audioGeneration;
    m_audioGenerationHasBeenSet = true;
}

bool AigcVideoOutputConfig::AudioGenerationHasBeenSet() const
{
    return m_audioGenerationHasBeenSet;
}

string AigcVideoOutputConfig::GetPersonGeneration() const
{
    return m_personGeneration;
}

void AigcVideoOutputConfig::SetPersonGeneration(const string& _personGeneration)
{
    m_personGeneration = _personGeneration;
    m_personGenerationHasBeenSet = true;
}

bool AigcVideoOutputConfig::PersonGenerationHasBeenSet() const
{
    return m_personGenerationHasBeenSet;
}

string AigcVideoOutputConfig::GetInputComplianceCheck() const
{
    return m_inputComplianceCheck;
}

void AigcVideoOutputConfig::SetInputComplianceCheck(const string& _inputComplianceCheck)
{
    m_inputComplianceCheck = _inputComplianceCheck;
    m_inputComplianceCheckHasBeenSet = true;
}

bool AigcVideoOutputConfig::InputComplianceCheckHasBeenSet() const
{
    return m_inputComplianceCheckHasBeenSet;
}

string AigcVideoOutputConfig::GetOutputComplianceCheck() const
{
    return m_outputComplianceCheck;
}

void AigcVideoOutputConfig::SetOutputComplianceCheck(const string& _outputComplianceCheck)
{
    m_outputComplianceCheck = _outputComplianceCheck;
    m_outputComplianceCheckHasBeenSet = true;
}

bool AigcVideoOutputConfig::OutputComplianceCheckHasBeenSet() const
{
    return m_outputComplianceCheckHasBeenSet;
}

string AigcVideoOutputConfig::GetEnhanceSwitch() const
{
    return m_enhanceSwitch;
}

void AigcVideoOutputConfig::SetEnhanceSwitch(const string& _enhanceSwitch)
{
    m_enhanceSwitch = _enhanceSwitch;
    m_enhanceSwitchHasBeenSet = true;
}

bool AigcVideoOutputConfig::EnhanceSwitchHasBeenSet() const
{
    return m_enhanceSwitchHasBeenSet;
}

string AigcVideoOutputConfig::GetFrameInterpolate() const
{
    return m_frameInterpolate;
}

void AigcVideoOutputConfig::SetFrameInterpolate(const string& _frameInterpolate)
{
    m_frameInterpolate = _frameInterpolate;
    m_frameInterpolateHasBeenSet = true;
}

bool AigcVideoOutputConfig::FrameInterpolateHasBeenSet() const
{
    return m_frameInterpolateHasBeenSet;
}

