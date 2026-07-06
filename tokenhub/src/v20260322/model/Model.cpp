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

#include <tencentcloud/tokenhub/v20260322/model/Model.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

Model::Model() :
    m_modelNameHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_modelImageHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelChargingInfoHasBeenSet(false),
    m_modelSpecHasBeenSet(false),
    m_releaseAtHasBeenSet(false),
    m_recommendWeightHasBeenSet(false),
    m_modelAccessInfoHasBeenSet(false),
    m_freeTrialInfoHasBeenSet(false),
    m_offlineAtHasBeenSet(false)
{
}

CoreInternalOutcome Model::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("ModelType") && !value["ModelType"].IsNull())
    {
        if (!value["ModelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelType = string(value["ModelType"].GetString());
        m_modelTypeHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("ModelImage") && !value["ModelImage"].IsNull())
    {
        if (!value["ModelImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelImage.Deserialize(value["ModelImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelImageHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ModelChargingInfo") && !value["ModelChargingInfo"].IsNull())
    {
        if (!value["ModelChargingInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Model.ModelChargingInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelChargingInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModelChargingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_modelChargingInfo.push_back(item);
        }
        m_modelChargingInfoHasBeenSet = true;
    }

    if (value.HasMember("ModelSpec") && !value["ModelSpec"].IsNull())
    {
        if (!value["ModelSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelSpec.Deserialize(value["ModelSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelSpecHasBeenSet = true;
    }

    if (value.HasMember("ReleaseAt") && !value["ReleaseAt"].IsNull())
    {
        if (!value["ReleaseAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ReleaseAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseAt = string(value["ReleaseAt"].GetString());
        m_releaseAtHasBeenSet = true;
    }

    if (value.HasMember("RecommendWeight") && !value["RecommendWeight"].IsNull())
    {
        if (!value["RecommendWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Model.RecommendWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recommendWeight = value["RecommendWeight"].GetInt64();
        m_recommendWeightHasBeenSet = true;
    }

    if (value.HasMember("ModelAccessInfo") && !value["ModelAccessInfo"].IsNull())
    {
        if (!value["ModelAccessInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.ModelAccessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelAccessInfo.Deserialize(value["ModelAccessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelAccessInfoHasBeenSet = true;
    }

    if (value.HasMember("FreeTrialInfo") && !value["FreeTrialInfo"].IsNull())
    {
        if (!value["FreeTrialInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Model.FreeTrialInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_freeTrialInfo.Deserialize(value["FreeTrialInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_freeTrialInfoHasBeenSet = true;
    }

    if (value.HasMember("OfflineAt") && !value["OfflineAt"].IsNull())
    {
        if (!value["OfflineAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Model.OfflineAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineAt = string(value["OfflineAt"].GetString());
        m_offlineAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Model::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_modelImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_modelChargingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelChargingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelChargingInfo.begin(); itr != m_modelChargingInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_releaseAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseAt.c_str(), allocator).Move(), allocator);
    }

    if (m_recommendWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecommendWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recommendWeight, allocator);
    }

    if (m_modelAccessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelAccessInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_freeTrialInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeTrialInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_freeTrialInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offlineAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineAt.c_str(), allocator).Move(), allocator);
    }

}


string Model::GetModelName() const
{
    return m_modelName;
}

void Model::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool Model::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string Model::GetModelId() const
{
    return m_modelId;
}

void Model::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool Model::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string Model::GetDisplayName() const
{
    return m_displayName;
}

void Model::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool Model::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string Model::GetDescription() const
{
    return m_description;
}

void Model::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Model::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Model::GetSummary() const
{
    return m_summary;
}

void Model::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool Model::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string Model::GetModelType() const
{
    return m_modelType;
}

void Model::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool Model::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string Model::GetBrand() const
{
    return m_brand;
}

void Model::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool Model::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

ModelImage Model::GetModelImage() const
{
    return m_modelImage;
}

void Model::SetModelImage(const ModelImage& _modelImage)
{
    m_modelImage = _modelImage;
    m_modelImageHasBeenSet = true;
}

bool Model::ModelImageHasBeenSet() const
{
    return m_modelImageHasBeenSet;
}

string Model::GetProvider() const
{
    return m_provider;
}

void Model::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool Model::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string Model::GetStatus() const
{
    return m_status;
}

void Model::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Model::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> Model::GetTags() const
{
    return m_tags;
}

void Model::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Model::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<ModelChargingInfo> Model::GetModelChargingInfo() const
{
    return m_modelChargingInfo;
}

void Model::SetModelChargingInfo(const vector<ModelChargingInfo>& _modelChargingInfo)
{
    m_modelChargingInfo = _modelChargingInfo;
    m_modelChargingInfoHasBeenSet = true;
}

bool Model::ModelChargingInfoHasBeenSet() const
{
    return m_modelChargingInfoHasBeenSet;
}

ModelSpec Model::GetModelSpec() const
{
    return m_modelSpec;
}

void Model::SetModelSpec(const ModelSpec& _modelSpec)
{
    m_modelSpec = _modelSpec;
    m_modelSpecHasBeenSet = true;
}

bool Model::ModelSpecHasBeenSet() const
{
    return m_modelSpecHasBeenSet;
}

string Model::GetReleaseAt() const
{
    return m_releaseAt;
}

void Model::SetReleaseAt(const string& _releaseAt)
{
    m_releaseAt = _releaseAt;
    m_releaseAtHasBeenSet = true;
}

bool Model::ReleaseAtHasBeenSet() const
{
    return m_releaseAtHasBeenSet;
}

int64_t Model::GetRecommendWeight() const
{
    return m_recommendWeight;
}

void Model::SetRecommendWeight(const int64_t& _recommendWeight)
{
    m_recommendWeight = _recommendWeight;
    m_recommendWeightHasBeenSet = true;
}

bool Model::RecommendWeightHasBeenSet() const
{
    return m_recommendWeightHasBeenSet;
}

ModelAccessInfo Model::GetModelAccessInfo() const
{
    return m_modelAccessInfo;
}

void Model::SetModelAccessInfo(const ModelAccessInfo& _modelAccessInfo)
{
    m_modelAccessInfo = _modelAccessInfo;
    m_modelAccessInfoHasBeenSet = true;
}

bool Model::ModelAccessInfoHasBeenSet() const
{
    return m_modelAccessInfoHasBeenSet;
}

ModelFreeTrialInfo Model::GetFreeTrialInfo() const
{
    return m_freeTrialInfo;
}

void Model::SetFreeTrialInfo(const ModelFreeTrialInfo& _freeTrialInfo)
{
    m_freeTrialInfo = _freeTrialInfo;
    m_freeTrialInfoHasBeenSet = true;
}

bool Model::FreeTrialInfoHasBeenSet() const
{
    return m_freeTrialInfoHasBeenSet;
}

string Model::GetOfflineAt() const
{
    return m_offlineAt;
}

void Model::SetOfflineAt(const string& _offlineAt)
{
    m_offlineAt = _offlineAt;
    m_offlineAtHasBeenSet = true;
}

bool Model::OfflineAtHasBeenSet() const
{
    return m_offlineAtHasBeenSet;
}

