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

#include <tencentcloud/hai/v20230812/model/ModelDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ModelDetail::ModelDetail() :
    m_modelNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_communityUrlHasBeenSet(false),
    m_guideUrlHasBeenSet(false),
    m_modelStateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_configEnvironmentHasBeenSet(false)
{
}

CoreInternalOutcome ModelDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CommunityUrl") && !value["CommunityUrl"].IsNull())
    {
        if (!value["CommunityUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.CommunityUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_communityUrl = string(value["CommunityUrl"].GetString());
        m_communityUrlHasBeenSet = true;
    }

    if (value.HasMember("GuideUrl") && !value["GuideUrl"].IsNull())
    {
        if (!value["GuideUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.GuideUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guideUrl = string(value["GuideUrl"].GetString());
        m_guideUrlHasBeenSet = true;
    }

    if (value.HasMember("ModelState") && !value["ModelState"].IsNull())
    {
        if (!value["ModelState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ModelState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelState = string(value["ModelState"].GetString());
        m_modelStateHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ConfigEnvironment") && !value["ConfigEnvironment"].IsNull())
    {
        if (!value["ConfigEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ConfigEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configEnvironment = string(value["ConfigEnvironment"].GetString());
        m_configEnvironmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_communityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommunityUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_communityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_guideUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuideUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guideUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelState.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_configEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configEnvironment.c_str(), allocator).Move(), allocator);
    }

}


string ModelDetail::GetModelName() const
{
    return m_modelName;
}

void ModelDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelDetail::GetModelId() const
{
    return m_modelId;
}

void ModelDetail::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool ModelDetail::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string ModelDetail::GetDescription() const
{
    return m_description;
}

void ModelDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModelDetail::GetCommunityUrl() const
{
    return m_communityUrl;
}

void ModelDetail::SetCommunityUrl(const string& _communityUrl)
{
    m_communityUrl = _communityUrl;
    m_communityUrlHasBeenSet = true;
}

bool ModelDetail::CommunityUrlHasBeenSet() const
{
    return m_communityUrlHasBeenSet;
}

string ModelDetail::GetGuideUrl() const
{
    return m_guideUrl;
}

void ModelDetail::SetGuideUrl(const string& _guideUrl)
{
    m_guideUrl = _guideUrl;
    m_guideUrlHasBeenSet = true;
}

bool ModelDetail::GuideUrlHasBeenSet() const
{
    return m_guideUrlHasBeenSet;
}

string ModelDetail::GetModelState() const
{
    return m_modelState;
}

void ModelDetail::SetModelState(const string& _modelState)
{
    m_modelState = _modelState;
    m_modelStateHasBeenSet = true;
}

bool ModelDetail::ModelStateHasBeenSet() const
{
    return m_modelStateHasBeenSet;
}

vector<string> ModelDetail::GetTags() const
{
    return m_tags;
}

void ModelDetail::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ModelDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ModelDetail::GetConfigEnvironment() const
{
    return m_configEnvironment;
}

void ModelDetail::SetConfigEnvironment(const string& _configEnvironment)
{
    m_configEnvironment = _configEnvironment;
    m_configEnvironmentHasBeenSet = true;
}

bool ModelDetail::ConfigEnvironmentHasBeenSet() const
{
    return m_configEnvironmentHasBeenSet;
}

