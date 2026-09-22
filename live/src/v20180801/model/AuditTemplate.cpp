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

#include <tencentcloud/live/v20180801/model/AuditTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AuditTemplate::AuditTemplate() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_cosFilePathHasBeenSet(false),
    m_auditImageHasBeenSet(false),
    m_auditAudioHasBeenSet(false),
    m_snapshotIntervalHasBeenSet(false),
    m_audioIntervalHasBeenSet(false),
    m_enableFailoverCosHasBeenSet(false),
    m_failoverCosBucketHasBeenSet(false),
    m_failoverCosRegionHasBeenSet(false),
    m_sceneInfosHasBeenSet(false),
    m_auditTextHasBeenSet(false)
{
}

CoreInternalOutcome AuditTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("CosFilePath") && !value["CosFilePath"].IsNull())
    {
        if (!value["CosFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.CosFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFilePath = string(value["CosFilePath"].GetString());
        m_cosFilePathHasBeenSet = true;
    }

    if (value.HasMember("AuditImage") && !value["AuditImage"].IsNull())
    {
        if (!value["AuditImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.AuditImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditImage = value["AuditImage"].GetBool();
        m_auditImageHasBeenSet = true;
    }

    if (value.HasMember("AuditAudio") && !value["AuditAudio"].IsNull())
    {
        if (!value["AuditAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.AuditAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditAudio = value["AuditAudio"].GetBool();
        m_auditAudioHasBeenSet = true;
    }

    if (value.HasMember("SnapshotInterval") && !value["SnapshotInterval"].IsNull())
    {
        if (!value["SnapshotInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.SnapshotInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotInterval = value["SnapshotInterval"].GetInt64();
        m_snapshotIntervalHasBeenSet = true;
    }

    if (value.HasMember("AudioInterval") && !value["AudioInterval"].IsNull())
    {
        if (!value["AudioInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.AudioInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_audioInterval = value["AudioInterval"].GetInt64();
        m_audioIntervalHasBeenSet = true;
    }

    if (value.HasMember("EnableFailoverCos") && !value["EnableFailoverCos"].IsNull())
    {
        if (!value["EnableFailoverCos"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.EnableFailoverCos` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFailoverCos = value["EnableFailoverCos"].GetBool();
        m_enableFailoverCosHasBeenSet = true;
    }

    if (value.HasMember("FailoverCosBucket") && !value["FailoverCosBucket"].IsNull())
    {
        if (!value["FailoverCosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.FailoverCosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failoverCosBucket = string(value["FailoverCosBucket"].GetString());
        m_failoverCosBucketHasBeenSet = true;
    }

    if (value.HasMember("FailoverCosRegion") && !value["FailoverCosRegion"].IsNull())
    {
        if (!value["FailoverCosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.FailoverCosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failoverCosRegion = string(value["FailoverCosRegion"].GetString());
        m_failoverCosRegionHasBeenSet = true;
    }

    if (value.HasMember("SceneInfos") && !value["SceneInfos"].IsNull())
    {
        if (!value["SceneInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.SceneInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["SceneInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CMSSceneDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sceneInfos.push_back(item);
        }
        m_sceneInfosHasBeenSet = true;
    }

    if (value.HasMember("AuditText") && !value["AuditText"].IsNull())
    {
        if (!value["AuditText"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditTemplate.AuditText` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditText = value["AuditText"].GetInt64();
        m_auditTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuditTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_auditImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditImage, allocator);
    }

    if (m_auditAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditAudio, allocator);
    }

    if (m_snapshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotInterval, allocator);
    }

    if (m_audioIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioInterval, allocator);
    }

    if (m_enableFailoverCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFailoverCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFailoverCos, allocator);
    }

    if (m_failoverCosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverCosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failoverCosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_failoverCosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailoverCosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failoverCosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sceneInfos.begin(); itr != m_sceneInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditText, allocator);
    }

}


int64_t AuditTemplate::GetTemplateId() const
{
    return m_templateId;
}

void AuditTemplate::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AuditTemplate::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AuditTemplate::GetTemplateName() const
{
    return m_templateName;
}

void AuditTemplate::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AuditTemplate::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string AuditTemplate::GetDescription() const
{
    return m_description;
}

void AuditTemplate::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AuditTemplate::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AuditTemplate::GetCosBucket() const
{
    return m_cosBucket;
}

void AuditTemplate::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool AuditTemplate::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string AuditTemplate::GetCosRegion() const
{
    return m_cosRegion;
}

void AuditTemplate::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool AuditTemplate::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string AuditTemplate::GetCosFilePath() const
{
    return m_cosFilePath;
}

void AuditTemplate::SetCosFilePath(const string& _cosFilePath)
{
    m_cosFilePath = _cosFilePath;
    m_cosFilePathHasBeenSet = true;
}

bool AuditTemplate::CosFilePathHasBeenSet() const
{
    return m_cosFilePathHasBeenSet;
}

bool AuditTemplate::GetAuditImage() const
{
    return m_auditImage;
}

void AuditTemplate::SetAuditImage(const bool& _auditImage)
{
    m_auditImage = _auditImage;
    m_auditImageHasBeenSet = true;
}

bool AuditTemplate::AuditImageHasBeenSet() const
{
    return m_auditImageHasBeenSet;
}

bool AuditTemplate::GetAuditAudio() const
{
    return m_auditAudio;
}

void AuditTemplate::SetAuditAudio(const bool& _auditAudio)
{
    m_auditAudio = _auditAudio;
    m_auditAudioHasBeenSet = true;
}

bool AuditTemplate::AuditAudioHasBeenSet() const
{
    return m_auditAudioHasBeenSet;
}

int64_t AuditTemplate::GetSnapshotInterval() const
{
    return m_snapshotInterval;
}

void AuditTemplate::SetSnapshotInterval(const int64_t& _snapshotInterval)
{
    m_snapshotInterval = _snapshotInterval;
    m_snapshotIntervalHasBeenSet = true;
}

bool AuditTemplate::SnapshotIntervalHasBeenSet() const
{
    return m_snapshotIntervalHasBeenSet;
}

int64_t AuditTemplate::GetAudioInterval() const
{
    return m_audioInterval;
}

void AuditTemplate::SetAudioInterval(const int64_t& _audioInterval)
{
    m_audioInterval = _audioInterval;
    m_audioIntervalHasBeenSet = true;
}

bool AuditTemplate::AudioIntervalHasBeenSet() const
{
    return m_audioIntervalHasBeenSet;
}

bool AuditTemplate::GetEnableFailoverCos() const
{
    return m_enableFailoverCos;
}

void AuditTemplate::SetEnableFailoverCos(const bool& _enableFailoverCos)
{
    m_enableFailoverCos = _enableFailoverCos;
    m_enableFailoverCosHasBeenSet = true;
}

bool AuditTemplate::EnableFailoverCosHasBeenSet() const
{
    return m_enableFailoverCosHasBeenSet;
}

string AuditTemplate::GetFailoverCosBucket() const
{
    return m_failoverCosBucket;
}

void AuditTemplate::SetFailoverCosBucket(const string& _failoverCosBucket)
{
    m_failoverCosBucket = _failoverCosBucket;
    m_failoverCosBucketHasBeenSet = true;
}

bool AuditTemplate::FailoverCosBucketHasBeenSet() const
{
    return m_failoverCosBucketHasBeenSet;
}

string AuditTemplate::GetFailoverCosRegion() const
{
    return m_failoverCosRegion;
}

void AuditTemplate::SetFailoverCosRegion(const string& _failoverCosRegion)
{
    m_failoverCosRegion = _failoverCosRegion;
    m_failoverCosRegionHasBeenSet = true;
}

bool AuditTemplate::FailoverCosRegionHasBeenSet() const
{
    return m_failoverCosRegionHasBeenSet;
}

vector<CMSSceneDetail> AuditTemplate::GetSceneInfos() const
{
    return m_sceneInfos;
}

void AuditTemplate::SetSceneInfos(const vector<CMSSceneDetail>& _sceneInfos)
{
    m_sceneInfos = _sceneInfos;
    m_sceneInfosHasBeenSet = true;
}

bool AuditTemplate::SceneInfosHasBeenSet() const
{
    return m_sceneInfosHasBeenSet;
}

int64_t AuditTemplate::GetAuditText() const
{
    return m_auditText;
}

void AuditTemplate::SetAuditText(const int64_t& _auditText)
{
    m_auditText = _auditText;
    m_auditTextHasBeenSet = true;
}

bool AuditTemplate::AuditTextHasBeenSet() const
{
    return m_auditTextHasBeenSet;
}

