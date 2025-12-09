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

#include <tencentcloud/vod/v20180717/model/AigcImageOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcImageOutputConfig::AigcImageOutputConfig() :
    m_storageModeHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_personGenerationHasBeenSet(false),
    m_inputComplianceCheckHasBeenSet(false),
    m_outputComplianceCheckHasBeenSet(false)
{
}

CoreInternalOutcome AigcImageOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("PersonGeneration") && !value["PersonGeneration"].IsNull())
    {
        if (!value["PersonGeneration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.PersonGeneration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personGeneration = string(value["PersonGeneration"].GetString());
        m_personGenerationHasBeenSet = true;
    }

    if (value.HasMember("InputComplianceCheck") && !value["InputComplianceCheck"].IsNull())
    {
        if (!value["InputComplianceCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.InputComplianceCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputComplianceCheck = string(value["InputComplianceCheck"].GetString());
        m_inputComplianceCheckHasBeenSet = true;
    }

    if (value.HasMember("OutputComplianceCheck") && !value["OutputComplianceCheck"].IsNull())
    {
        if (!value["OutputComplianceCheck"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageOutputConfig.OutputComplianceCheck` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputComplianceCheck = string(value["OutputComplianceCheck"].GetString());
        m_outputComplianceCheckHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcImageOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AigcImageOutputConfig::GetStorageMode() const
{
    return m_storageMode;
}

void AigcImageOutputConfig::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool AigcImageOutputConfig::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

string AigcImageOutputConfig::GetMediaName() const
{
    return m_mediaName;
}

void AigcImageOutputConfig::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool AigcImageOutputConfig::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

int64_t AigcImageOutputConfig::GetClassId() const
{
    return m_classId;
}

void AigcImageOutputConfig::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool AigcImageOutputConfig::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string AigcImageOutputConfig::GetExpireTime() const
{
    return m_expireTime;
}

void AigcImageOutputConfig::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool AigcImageOutputConfig::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string AigcImageOutputConfig::GetResolution() const
{
    return m_resolution;
}

void AigcImageOutputConfig::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AigcImageOutputConfig::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string AigcImageOutputConfig::GetAspectRatio() const
{
    return m_aspectRatio;
}

void AigcImageOutputConfig::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool AigcImageOutputConfig::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string AigcImageOutputConfig::GetPersonGeneration() const
{
    return m_personGeneration;
}

void AigcImageOutputConfig::SetPersonGeneration(const string& _personGeneration)
{
    m_personGeneration = _personGeneration;
    m_personGenerationHasBeenSet = true;
}

bool AigcImageOutputConfig::PersonGenerationHasBeenSet() const
{
    return m_personGenerationHasBeenSet;
}

string AigcImageOutputConfig::GetInputComplianceCheck() const
{
    return m_inputComplianceCheck;
}

void AigcImageOutputConfig::SetInputComplianceCheck(const string& _inputComplianceCheck)
{
    m_inputComplianceCheck = _inputComplianceCheck;
    m_inputComplianceCheckHasBeenSet = true;
}

bool AigcImageOutputConfig::InputComplianceCheckHasBeenSet() const
{
    return m_inputComplianceCheckHasBeenSet;
}

string AigcImageOutputConfig::GetOutputComplianceCheck() const
{
    return m_outputComplianceCheck;
}

void AigcImageOutputConfig::SetOutputComplianceCheck(const string& _outputComplianceCheck)
{
    m_outputComplianceCheck = _outputComplianceCheck;
    m_outputComplianceCheckHasBeenSet = true;
}

bool AigcImageOutputConfig::OutputComplianceCheckHasBeenSet() const
{
    return m_outputComplianceCheckHasBeenSet;
}

