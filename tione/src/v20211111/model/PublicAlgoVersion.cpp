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

#include <tencentcloud/tione/v20211111/model/PublicAlgoVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PublicAlgoVersion::PublicAlgoVersion() :
    m_publicAlgoVersionIdHasBeenSet(false),
    m_publicAlgoGroupIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_introductionHasBeenSet(false),
    m_previewInfoHasBeenSet(false),
    m_presetTrainImageInfoHasBeenSet(false),
    m_presetTrainCodeInfoHasBeenSet(false),
    m_presetModelInfoHasBeenSet(false),
    m_isImportedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_defaultResourceSpecHasBeenSet(false),
    m_defaultInferenceResourceSpecHasBeenSet(false),
    m_supportDeployHasBeenSet(false),
    m_presetTrainDatasetHasBeenSet(false),
    m_trainCodeDownloadUrlHasBeenSet(false),
    m_trainDataDownloadUrlHasBeenSet(false),
    m_trainParamsHasBeenSet(false),
    m_presetTrainCodeStartCmdHasBeenSet(false),
    m_isPrivateModelHasBeenSet(false),
    m_presetTrainImageInfoListHasBeenSet(false),
    m_presetInferenceImageInfoListHasBeenSet(false),
    m_presetTrainCodeInfoListHasBeenSet(false),
    m_presetModelInfoListHasBeenSet(false),
    m_modelCategoryHasBeenSet(false),
    m_publicAlgoSeriesIdHasBeenSet(false)
{
}

CoreInternalOutcome PublicAlgoVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicAlgoVersionId") && !value["PublicAlgoVersionId"].IsNull())
    {
        if (!value["PublicAlgoVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PublicAlgoVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAlgoVersionId = string(value["PublicAlgoVersionId"].GetString());
        m_publicAlgoVersionIdHasBeenSet = true;
    }

    if (value.HasMember("PublicAlgoGroupId") && !value["PublicAlgoGroupId"].IsNull())
    {
        if (!value["PublicAlgoGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PublicAlgoGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAlgoGroupId = string(value["PublicAlgoGroupId"].GetString());
        m_publicAlgoGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Introduction") && !value["Introduction"].IsNull())
    {
        if (!value["Introduction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.Introduction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introduction = string(value["Introduction"].GetString());
        m_introductionHasBeenSet = true;
    }

    if (value.HasMember("PreviewInfo") && !value["PreviewInfo"].IsNull())
    {
        if (!value["PreviewInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PreviewInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewInfo = string(value["PreviewInfo"].GetString());
        m_previewInfoHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainImageInfo") && !value["PresetTrainImageInfo"].IsNull())
    {
        if (!value["PresetTrainImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetTrainImageInfo.Deserialize(value["PresetTrainImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetTrainImageInfoHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainCodeInfo") && !value["PresetTrainCodeInfo"].IsNull())
    {
        if (!value["PresetTrainCodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainCodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetTrainCodeInfo.Deserialize(value["PresetTrainCodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetTrainCodeInfoHasBeenSet = true;
    }

    if (value.HasMember("PresetModelInfo") && !value["PresetModelInfo"].IsNull())
    {
        if (!value["PresetModelInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetModelInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetModelInfo.Deserialize(value["PresetModelInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetModelInfoHasBeenSet = true;
    }

    if (value.HasMember("IsImported") && !value["IsImported"].IsNull())
    {
        if (!value["IsImported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.IsImported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isImported = value["IsImported"].GetBool();
        m_isImportedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DefaultResourceSpec") && !value["DefaultResourceSpec"].IsNull())
    {
        if (!value["DefaultResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.DefaultResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultResourceSpec.Deserialize(value["DefaultResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("DefaultInferenceResourceSpec") && !value["DefaultInferenceResourceSpec"].IsNull())
    {
        if (!value["DefaultInferenceResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.DefaultInferenceResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_defaultInferenceResourceSpec.Deserialize(value["DefaultInferenceResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_defaultInferenceResourceSpecHasBeenSet = true;
    }

    if (value.HasMember("SupportDeploy") && !value["SupportDeploy"].IsNull())
    {
        if (!value["SupportDeploy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.SupportDeploy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDeploy = value["SupportDeploy"].GetBool();
        m_supportDeployHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainDataset") && !value["PresetTrainDataset"].IsNull())
    {
        if (!value["PresetTrainDataset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainDataset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_presetTrainDataset.Deserialize(value["PresetTrainDataset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_presetTrainDatasetHasBeenSet = true;
    }

    if (value.HasMember("TrainCodeDownloadUrl") && !value["TrainCodeDownloadUrl"].IsNull())
    {
        if (!value["TrainCodeDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.TrainCodeDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainCodeDownloadUrl = string(value["TrainCodeDownloadUrl"].GetString());
        m_trainCodeDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("TrainDataDownloadUrl") && !value["TrainDataDownloadUrl"].IsNull())
    {
        if (!value["TrainDataDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.TrainDataDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainDataDownloadUrl = string(value["TrainDataDownloadUrl"].GetString());
        m_trainDataDownloadUrlHasBeenSet = true;
    }

    if (value.HasMember("TrainParams") && !value["TrainParams"].IsNull())
    {
        if (!value["TrainParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.TrainParams` is not array type"));

        const rapidjson::Value &tmpValue = value["TrainParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrainParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trainParams.push_back(item);
        }
        m_trainParamsHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainCodeStartCmd") && !value["PresetTrainCodeStartCmd"].IsNull())
    {
        if (!value["PresetTrainCodeStartCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainCodeStartCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_presetTrainCodeStartCmd = string(value["PresetTrainCodeStartCmd"].GetString());
        m_presetTrainCodeStartCmdHasBeenSet = true;
    }

    if (value.HasMember("IsPrivateModel") && !value["IsPrivateModel"].IsNull())
    {
        if (!value["IsPrivateModel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.IsPrivateModel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrivateModel = value["IsPrivateModel"].GetBool();
        m_isPrivateModelHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainImageInfoList") && !value["PresetTrainImageInfoList"].IsNull())
    {
        if (!value["PresetTrainImageInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainImageInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetTrainImageInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetTrainImageInfoList.push_back(item);
        }
        m_presetTrainImageInfoListHasBeenSet = true;
    }

    if (value.HasMember("PresetInferenceImageInfoList") && !value["PresetInferenceImageInfoList"].IsNull())
    {
        if (!value["PresetInferenceImageInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetInferenceImageInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetInferenceImageInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetInferenceImageInfoList.push_back(item);
        }
        m_presetInferenceImageInfoListHasBeenSet = true;
    }

    if (value.HasMember("PresetTrainCodeInfoList") && !value["PresetTrainCodeInfoList"].IsNull())
    {
        if (!value["PresetTrainCodeInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetTrainCodeInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetTrainCodeInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceMaterialInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetTrainCodeInfoList.push_back(item);
        }
        m_presetTrainCodeInfoListHasBeenSet = true;
    }

    if (value.HasMember("PresetModelInfoList") && !value["PresetModelInfoList"].IsNull())
    {
        if (!value["PresetModelInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PresetModelInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["PresetModelInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceMaterialInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_presetModelInfoList.push_back(item);
        }
        m_presetModelInfoListHasBeenSet = true;
    }

    if (value.HasMember("ModelCategory") && !value["ModelCategory"].IsNull())
    {
        if (!value["ModelCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.ModelCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelCategory = string(value["ModelCategory"].GetString());
        m_modelCategoryHasBeenSet = true;
    }

    if (value.HasMember("PublicAlgoSeriesId") && !value["PublicAlgoSeriesId"].IsNull())
    {
        if (!value["PublicAlgoSeriesId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicAlgoVersion.PublicAlgoSeriesId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAlgoSeriesId = string(value["PublicAlgoSeriesId"].GetString());
        m_publicAlgoSeriesIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicAlgoVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicAlgoVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAlgoVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAlgoVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAlgoGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAlgoGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAlgoGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_introductionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Introduction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introduction.c_str(), allocator).Move(), allocator);
    }

    if (m_previewInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_previewInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_presetTrainImageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetTrainImageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_presetTrainCodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainCodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetTrainCodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_presetModelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetModelInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetModelInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isImportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsImported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isImported, allocator);
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

    if (m_defaultResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultInferenceResourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultInferenceResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_defaultInferenceResourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_supportDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDeploy, allocator);
    }

    if (m_presetTrainDatasetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainDataset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_presetTrainDataset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trainCodeDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainCodeDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainCodeDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_trainDataDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainDataDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainDataDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_trainParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trainParams.begin(); itr != m_trainParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_presetTrainCodeStartCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainCodeStartCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_presetTrainCodeStartCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrivateModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrivateModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrivateModel, allocator);
    }

    if (m_presetTrainImageInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainImageInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetTrainImageInfoList.begin(); itr != m_presetTrainImageInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_presetInferenceImageInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetInferenceImageInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetInferenceImageInfoList.begin(); itr != m_presetInferenceImageInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_presetTrainCodeInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetTrainCodeInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetTrainCodeInfoList.begin(); itr != m_presetTrainCodeInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_presetModelInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresetModelInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_presetModelInfoList.begin(); itr != m_presetModelInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAlgoSeriesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAlgoSeriesId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAlgoSeriesId.c_str(), allocator).Move(), allocator);
    }

}


string PublicAlgoVersion::GetPublicAlgoVersionId() const
{
    return m_publicAlgoVersionId;
}

void PublicAlgoVersion::SetPublicAlgoVersionId(const string& _publicAlgoVersionId)
{
    m_publicAlgoVersionId = _publicAlgoVersionId;
    m_publicAlgoVersionIdHasBeenSet = true;
}

bool PublicAlgoVersion::PublicAlgoVersionIdHasBeenSet() const
{
    return m_publicAlgoVersionIdHasBeenSet;
}

string PublicAlgoVersion::GetPublicAlgoGroupId() const
{
    return m_publicAlgoGroupId;
}

void PublicAlgoVersion::SetPublicAlgoGroupId(const string& _publicAlgoGroupId)
{
    m_publicAlgoGroupId = _publicAlgoGroupId;
    m_publicAlgoGroupIdHasBeenSet = true;
}

bool PublicAlgoVersion::PublicAlgoGroupIdHasBeenSet() const
{
    return m_publicAlgoGroupIdHasBeenSet;
}

string PublicAlgoVersion::GetVersion() const
{
    return m_version;
}

void PublicAlgoVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PublicAlgoVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string PublicAlgoVersion::GetIntroduction() const
{
    return m_introduction;
}

void PublicAlgoVersion::SetIntroduction(const string& _introduction)
{
    m_introduction = _introduction;
    m_introductionHasBeenSet = true;
}

bool PublicAlgoVersion::IntroductionHasBeenSet() const
{
    return m_introductionHasBeenSet;
}

string PublicAlgoVersion::GetPreviewInfo() const
{
    return m_previewInfo;
}

void PublicAlgoVersion::SetPreviewInfo(const string& _previewInfo)
{
    m_previewInfo = _previewInfo;
    m_previewInfoHasBeenSet = true;
}

bool PublicAlgoVersion::PreviewInfoHasBeenSet() const
{
    return m_previewInfoHasBeenSet;
}

ImageInfo PublicAlgoVersion::GetPresetTrainImageInfo() const
{
    return m_presetTrainImageInfo;
}

void PublicAlgoVersion::SetPresetTrainImageInfo(const ImageInfo& _presetTrainImageInfo)
{
    m_presetTrainImageInfo = _presetTrainImageInfo;
    m_presetTrainImageInfoHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainImageInfoHasBeenSet() const
{
    return m_presetTrainImageInfoHasBeenSet;
}

MaterialInfo PublicAlgoVersion::GetPresetTrainCodeInfo() const
{
    return m_presetTrainCodeInfo;
}

void PublicAlgoVersion::SetPresetTrainCodeInfo(const MaterialInfo& _presetTrainCodeInfo)
{
    m_presetTrainCodeInfo = _presetTrainCodeInfo;
    m_presetTrainCodeInfoHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainCodeInfoHasBeenSet() const
{
    return m_presetTrainCodeInfoHasBeenSet;
}

MaterialInfo PublicAlgoVersion::GetPresetModelInfo() const
{
    return m_presetModelInfo;
}

void PublicAlgoVersion::SetPresetModelInfo(const MaterialInfo& _presetModelInfo)
{
    m_presetModelInfo = _presetModelInfo;
    m_presetModelInfoHasBeenSet = true;
}

bool PublicAlgoVersion::PresetModelInfoHasBeenSet() const
{
    return m_presetModelInfoHasBeenSet;
}

bool PublicAlgoVersion::GetIsImported() const
{
    return m_isImported;
}

void PublicAlgoVersion::SetIsImported(const bool& _isImported)
{
    m_isImported = _isImported;
    m_isImportedHasBeenSet = true;
}

bool PublicAlgoVersion::IsImportedHasBeenSet() const
{
    return m_isImportedHasBeenSet;
}

string PublicAlgoVersion::GetCreateTime() const
{
    return m_createTime;
}

void PublicAlgoVersion::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PublicAlgoVersion::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PublicAlgoVersion::GetUpdateTime() const
{
    return m_updateTime;
}

void PublicAlgoVersion::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PublicAlgoVersion::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

ResourceSpec PublicAlgoVersion::GetDefaultResourceSpec() const
{
    return m_defaultResourceSpec;
}

void PublicAlgoVersion::SetDefaultResourceSpec(const ResourceSpec& _defaultResourceSpec)
{
    m_defaultResourceSpec = _defaultResourceSpec;
    m_defaultResourceSpecHasBeenSet = true;
}

bool PublicAlgoVersion::DefaultResourceSpecHasBeenSet() const
{
    return m_defaultResourceSpecHasBeenSet;
}

ResourceSpec PublicAlgoVersion::GetDefaultInferenceResourceSpec() const
{
    return m_defaultInferenceResourceSpec;
}

void PublicAlgoVersion::SetDefaultInferenceResourceSpec(const ResourceSpec& _defaultInferenceResourceSpec)
{
    m_defaultInferenceResourceSpec = _defaultInferenceResourceSpec;
    m_defaultInferenceResourceSpecHasBeenSet = true;
}

bool PublicAlgoVersion::DefaultInferenceResourceSpecHasBeenSet() const
{
    return m_defaultInferenceResourceSpecHasBeenSet;
}

bool PublicAlgoVersion::GetSupportDeploy() const
{
    return m_supportDeploy;
}

void PublicAlgoVersion::SetSupportDeploy(const bool& _supportDeploy)
{
    m_supportDeploy = _supportDeploy;
    m_supportDeployHasBeenSet = true;
}

bool PublicAlgoVersion::SupportDeployHasBeenSet() const
{
    return m_supportDeployHasBeenSet;
}

MaterialInfo PublicAlgoVersion::GetPresetTrainDataset() const
{
    return m_presetTrainDataset;
}

void PublicAlgoVersion::SetPresetTrainDataset(const MaterialInfo& _presetTrainDataset)
{
    m_presetTrainDataset = _presetTrainDataset;
    m_presetTrainDatasetHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainDatasetHasBeenSet() const
{
    return m_presetTrainDatasetHasBeenSet;
}

string PublicAlgoVersion::GetTrainCodeDownloadUrl() const
{
    return m_trainCodeDownloadUrl;
}

void PublicAlgoVersion::SetTrainCodeDownloadUrl(const string& _trainCodeDownloadUrl)
{
    m_trainCodeDownloadUrl = _trainCodeDownloadUrl;
    m_trainCodeDownloadUrlHasBeenSet = true;
}

bool PublicAlgoVersion::TrainCodeDownloadUrlHasBeenSet() const
{
    return m_trainCodeDownloadUrlHasBeenSet;
}

string PublicAlgoVersion::GetTrainDataDownloadUrl() const
{
    return m_trainDataDownloadUrl;
}

void PublicAlgoVersion::SetTrainDataDownloadUrl(const string& _trainDataDownloadUrl)
{
    m_trainDataDownloadUrl = _trainDataDownloadUrl;
    m_trainDataDownloadUrlHasBeenSet = true;
}

bool PublicAlgoVersion::TrainDataDownloadUrlHasBeenSet() const
{
    return m_trainDataDownloadUrlHasBeenSet;
}

vector<TrainParam> PublicAlgoVersion::GetTrainParams() const
{
    return m_trainParams;
}

void PublicAlgoVersion::SetTrainParams(const vector<TrainParam>& _trainParams)
{
    m_trainParams = _trainParams;
    m_trainParamsHasBeenSet = true;
}

bool PublicAlgoVersion::TrainParamsHasBeenSet() const
{
    return m_trainParamsHasBeenSet;
}

string PublicAlgoVersion::GetPresetTrainCodeStartCmd() const
{
    return m_presetTrainCodeStartCmd;
}

void PublicAlgoVersion::SetPresetTrainCodeStartCmd(const string& _presetTrainCodeStartCmd)
{
    m_presetTrainCodeStartCmd = _presetTrainCodeStartCmd;
    m_presetTrainCodeStartCmdHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainCodeStartCmdHasBeenSet() const
{
    return m_presetTrainCodeStartCmdHasBeenSet;
}

bool PublicAlgoVersion::GetIsPrivateModel() const
{
    return m_isPrivateModel;
}

void PublicAlgoVersion::SetIsPrivateModel(const bool& _isPrivateModel)
{
    m_isPrivateModel = _isPrivateModel;
    m_isPrivateModelHasBeenSet = true;
}

bool PublicAlgoVersion::IsPrivateModelHasBeenSet() const
{
    return m_isPrivateModelHasBeenSet;
}

vector<DeviceImageInfo> PublicAlgoVersion::GetPresetTrainImageInfoList() const
{
    return m_presetTrainImageInfoList;
}

void PublicAlgoVersion::SetPresetTrainImageInfoList(const vector<DeviceImageInfo>& _presetTrainImageInfoList)
{
    m_presetTrainImageInfoList = _presetTrainImageInfoList;
    m_presetTrainImageInfoListHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainImageInfoListHasBeenSet() const
{
    return m_presetTrainImageInfoListHasBeenSet;
}

vector<DeviceImageInfo> PublicAlgoVersion::GetPresetInferenceImageInfoList() const
{
    return m_presetInferenceImageInfoList;
}

void PublicAlgoVersion::SetPresetInferenceImageInfoList(const vector<DeviceImageInfo>& _presetInferenceImageInfoList)
{
    m_presetInferenceImageInfoList = _presetInferenceImageInfoList;
    m_presetInferenceImageInfoListHasBeenSet = true;
}

bool PublicAlgoVersion::PresetInferenceImageInfoListHasBeenSet() const
{
    return m_presetInferenceImageInfoListHasBeenSet;
}

vector<DeviceMaterialInfo> PublicAlgoVersion::GetPresetTrainCodeInfoList() const
{
    return m_presetTrainCodeInfoList;
}

void PublicAlgoVersion::SetPresetTrainCodeInfoList(const vector<DeviceMaterialInfo>& _presetTrainCodeInfoList)
{
    m_presetTrainCodeInfoList = _presetTrainCodeInfoList;
    m_presetTrainCodeInfoListHasBeenSet = true;
}

bool PublicAlgoVersion::PresetTrainCodeInfoListHasBeenSet() const
{
    return m_presetTrainCodeInfoListHasBeenSet;
}

vector<DeviceMaterialInfo> PublicAlgoVersion::GetPresetModelInfoList() const
{
    return m_presetModelInfoList;
}

void PublicAlgoVersion::SetPresetModelInfoList(const vector<DeviceMaterialInfo>& _presetModelInfoList)
{
    m_presetModelInfoList = _presetModelInfoList;
    m_presetModelInfoListHasBeenSet = true;
}

bool PublicAlgoVersion::PresetModelInfoListHasBeenSet() const
{
    return m_presetModelInfoListHasBeenSet;
}

string PublicAlgoVersion::GetModelCategory() const
{
    return m_modelCategory;
}

void PublicAlgoVersion::SetModelCategory(const string& _modelCategory)
{
    m_modelCategory = _modelCategory;
    m_modelCategoryHasBeenSet = true;
}

bool PublicAlgoVersion::ModelCategoryHasBeenSet() const
{
    return m_modelCategoryHasBeenSet;
}

string PublicAlgoVersion::GetPublicAlgoSeriesId() const
{
    return m_publicAlgoSeriesId;
}

void PublicAlgoVersion::SetPublicAlgoSeriesId(const string& _publicAlgoSeriesId)
{
    m_publicAlgoSeriesId = _publicAlgoSeriesId;
    m_publicAlgoSeriesIdHasBeenSet = true;
}

bool PublicAlgoVersion::PublicAlgoSeriesIdHasBeenSet() const
{
    return m_publicAlgoSeriesIdHasBeenSet;
}

