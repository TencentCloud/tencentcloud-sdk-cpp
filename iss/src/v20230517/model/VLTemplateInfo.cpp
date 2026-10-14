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

#include <tencentcloud/iss/v20230517/model/VLTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VLTemplateInfo::VLTemplateInfo() :
    m_vLTemplateIdHasBeenSet(false),
    m_aIModelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_analysisModeHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_isUsedHasBeenSet(false),
    m_videoConfigHasBeenSet(false)
{
}

CoreInternalOutcome VLTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VLTemplateId") && !value["VLTemplateId"].IsNull())
    {
        if (!value["VLTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.VLTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLTemplateId = string(value["VLTemplateId"].GetString());
        m_vLTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("AIModel") && !value["AIModel"].IsNull())
    {
        if (!value["AIModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.AIModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aIModel = string(value["AIModel"].GetString());
        m_aIModelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("AnalysisMode") && !value["AnalysisMode"].IsNull())
    {
        if (!value["AnalysisMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.AnalysisMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisMode = string(value["AnalysisMode"].GetString());
        m_analysisModeHasBeenSet = true;
    }

    if (value.HasMember("ImageConfig") && !value["ImageConfig"].IsNull())
    {
        if (!value["ImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.ImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageConfig.Deserialize(value["ImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageConfigHasBeenSet = true;
    }

    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.Times` is not array type"));

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

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("IsUsed") && !value["IsUsed"].IsNull())
    {
        if (!value["IsUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.IsUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUsed = value["IsUsed"].GetBool();
        m_isUsedHasBeenSet = true;
    }

    if (value.HasMember("VideoConfig") && !value["VideoConfig"].IsNull())
    {
        if (!value["VideoConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VLTemplateInfo.VideoConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoConfig.Deserialize(value["VideoConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VLTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vLTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_aIModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aIModel.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisMode.c_str(), allocator).Move(), allocator);
    }

    if (m_imageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageConfig.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUsed, allocator);
    }

    if (m_videoConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string VLTemplateInfo::GetVLTemplateId() const
{
    return m_vLTemplateId;
}

void VLTemplateInfo::SetVLTemplateId(const string& _vLTemplateId)
{
    m_vLTemplateId = _vLTemplateId;
    m_vLTemplateIdHasBeenSet = true;
}

bool VLTemplateInfo::VLTemplateIdHasBeenSet() const
{
    return m_vLTemplateIdHasBeenSet;
}

string VLTemplateInfo::GetAIModel() const
{
    return m_aIModel;
}

void VLTemplateInfo::SetAIModel(const string& _aIModel)
{
    m_aIModel = _aIModel;
    m_aIModelHasBeenSet = true;
}

bool VLTemplateInfo::AIModelHasBeenSet() const
{
    return m_aIModelHasBeenSet;
}

string VLTemplateInfo::GetName() const
{
    return m_name;
}

void VLTemplateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VLTemplateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VLTemplateInfo::GetDescribe() const
{
    return m_describe;
}

void VLTemplateInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool VLTemplateInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string VLTemplateInfo::GetPrompt() const
{
    return m_prompt;
}

void VLTemplateInfo::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool VLTemplateInfo::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string VLTemplateInfo::GetAnalysisMode() const
{
    return m_analysisMode;
}

void VLTemplateInfo::SetAnalysisMode(const string& _analysisMode)
{
    m_analysisMode = _analysisMode;
    m_analysisModeHasBeenSet = true;
}

bool VLTemplateInfo::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}

ImageSceneInfo VLTemplateInfo::GetImageConfig() const
{
    return m_imageConfig;
}

void VLTemplateInfo::SetImageConfig(const ImageSceneInfo& _imageConfig)
{
    m_imageConfig = _imageConfig;
    m_imageConfigHasBeenSet = true;
}

bool VLTemplateInfo::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}

vector<EffectiveTime> VLTemplateInfo::GetTimes() const
{
    return m_times;
}

void VLTemplateInfo::SetTimes(const vector<EffectiveTime>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool VLTemplateInfo::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

string VLTemplateInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void VLTemplateInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool VLTemplateInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string VLTemplateInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void VLTemplateInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool VLTemplateInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

bool VLTemplateInfo::GetIsUsed() const
{
    return m_isUsed;
}

void VLTemplateInfo::SetIsUsed(const bool& _isUsed)
{
    m_isUsed = _isUsed;
    m_isUsedHasBeenSet = true;
}

bool VLTemplateInfo::IsUsedHasBeenSet() const
{
    return m_isUsedHasBeenSet;
}

VideoSceneInfo VLTemplateInfo::GetVideoConfig() const
{
    return m_videoConfig;
}

void VLTemplateInfo::SetVideoConfig(const VideoSceneInfo& _videoConfig)
{
    m_videoConfig = _videoConfig;
    m_videoConfigHasBeenSet = true;
}

bool VLTemplateInfo::VideoConfigHasBeenSet() const
{
    return m_videoConfigHasBeenSet;
}

