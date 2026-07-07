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

#include <tencentcloud/tione/v20211111/model/PresetImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

PresetImageInfo::PresetImageInfo() :
    m_imageIdHasBeenSet(false),
    m_imageRepoHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_applicableModuleListHasBeenSet(false),
    m_scenarioHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_chipTypeListHasBeenSet(false),
    m_computeLibVersionHasBeenSet(false),
    m_pythonVersionHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_runtimeLibListHasBeenSet(false),
    m_supportGpuListHasBeenSet(false),
    m_extraAttributeListHasBeenSet(false),
    m_supportDistributedDeployHasBeenSet(false),
    m_isLatestStableHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_imageTypeHasBeenSet(false)
{
}

CoreInternalOutcome PresetImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageRepo") && !value["ImageRepo"].IsNull())
    {
        if (!value["ImageRepo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageRepo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRepo = string(value["ImageRepo"].GetString());
        m_imageRepoHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("ImageSize") && !value["ImageSize"].IsNull())
    {
        if (!value["ImageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = string(value["ImageSize"].GetString());
        m_imageSizeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ApplicableModuleList") && !value["ApplicableModuleList"].IsNull())
    {
        if (!value["ApplicableModuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ApplicableModuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicableModuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicableModuleList.push_back((*itr).GetString());
        }
        m_applicableModuleListHasBeenSet = true;
    }

    if (value.HasMember("Scenario") && !value["Scenario"].IsNull())
    {
        if (!value["Scenario"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.Scenario` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenario = string(value["Scenario"].GetString());
        m_scenarioHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("ChipTypeList") && !value["ChipTypeList"].IsNull())
    {
        if (!value["ChipTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ChipTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChipTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_chipTypeList.push_back((*itr).GetString());
        }
        m_chipTypeListHasBeenSet = true;
    }

    if (value.HasMember("ComputeLibVersion") && !value["ComputeLibVersion"].IsNull())
    {
        if (!value["ComputeLibVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ComputeLibVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeLibVersion = string(value["ComputeLibVersion"].GetString());
        m_computeLibVersionHasBeenSet = true;
    }

    if (value.HasMember("PythonVersion") && !value["PythonVersion"].IsNull())
    {
        if (!value["PythonVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.PythonVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pythonVersion = string(value["PythonVersion"].GetString());
        m_pythonVersionHasBeenSet = true;
    }

    if (value.HasMember("OS") && !value["OS"].IsNull())
    {
        if (!value["OS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.OS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oS = string(value["OS"].GetString());
        m_oSHasBeenSet = true;
    }

    if (value.HasMember("RuntimeLibList") && !value["RuntimeLibList"].IsNull())
    {
        if (!value["RuntimeLibList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.RuntimeLibList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuntimeLibList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuntimeLib item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runtimeLibList.push_back(item);
        }
        m_runtimeLibListHasBeenSet = true;
    }

    if (value.HasMember("SupportGpuList") && !value["SupportGpuList"].IsNull())
    {
        if (!value["SupportGpuList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.SupportGpuList` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportGpuList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportGpuList.push_back((*itr).GetString());
        }
        m_supportGpuListHasBeenSet = true;
    }

    if (value.HasMember("ExtraAttributeList") && !value["ExtraAttributeList"].IsNull())
    {
        if (!value["ExtraAttributeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ExtraAttributeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraAttributeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Attribute item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttributeList.push_back(item);
        }
        m_extraAttributeListHasBeenSet = true;
    }

    if (value.HasMember("SupportDistributedDeploy") && !value["SupportDistributedDeploy"].IsNull())
    {
        if (!value["SupportDistributedDeploy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.SupportDistributedDeploy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDistributedDeploy = value["SupportDistributedDeploy"].GetBool();
        m_supportDistributedDeployHasBeenSet = true;
    }

    if (value.HasMember("IsLatestStable") && !value["IsLatestStable"].IsNull())
    {
        if (!value["IsLatestStable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.IsLatestStable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLatestStable = value["IsLatestStable"].GetBool();
        m_isLatestStableHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PresetImageInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PresetImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRepoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRepo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRepo.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_applicableModuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicableModuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicableModuleList.begin(); itr != m_applicableModuleList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenario.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chipTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChipTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_chipTypeList.begin(); itr != m_chipTypeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_computeLibVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeLibVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeLibVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pythonVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pythonVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeLibListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeLibList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runtimeLibList.begin(); itr != m_runtimeLibList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportGpuListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportGpuList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportGpuList.begin(); itr != m_supportGpuList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extraAttributeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttributeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttributeList.begin(); itr != m_extraAttributeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportDistributedDeployHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDistributedDeploy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDistributedDeploy, allocator);
    }

    if (m_isLatestStableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLatestStable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLatestStable, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
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

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

}


string PresetImageInfo::GetImageId() const
{
    return m_imageId;
}

void PresetImageInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool PresetImageInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string PresetImageInfo::GetImageRepo() const
{
    return m_imageRepo;
}

void PresetImageInfo::SetImageRepo(const string& _imageRepo)
{
    m_imageRepo = _imageRepo;
    m_imageRepoHasBeenSet = true;
}

bool PresetImageInfo::ImageRepoHasBeenSet() const
{
    return m_imageRepoHasBeenSet;
}

string PresetImageInfo::GetImageTag() const
{
    return m_imageTag;
}

void PresetImageInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool PresetImageInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string PresetImageInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void PresetImageInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool PresetImageInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string PresetImageInfo::GetImageSize() const
{
    return m_imageSize;
}

void PresetImageInfo::SetImageSize(const string& _imageSize)
{
    m_imageSize = _imageSize;
    m_imageSizeHasBeenSet = true;
}

bool PresetImageInfo::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string PresetImageInfo::GetDescription() const
{
    return m_description;
}

void PresetImageInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PresetImageInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> PresetImageInfo::GetApplicableModuleList() const
{
    return m_applicableModuleList;
}

void PresetImageInfo::SetApplicableModuleList(const vector<string>& _applicableModuleList)
{
    m_applicableModuleList = _applicableModuleList;
    m_applicableModuleListHasBeenSet = true;
}

bool PresetImageInfo::ApplicableModuleListHasBeenSet() const
{
    return m_applicableModuleListHasBeenSet;
}

string PresetImageInfo::GetScenario() const
{
    return m_scenario;
}

void PresetImageInfo::SetScenario(const string& _scenario)
{
    m_scenario = _scenario;
    m_scenarioHasBeenSet = true;
}

bool PresetImageInfo::ScenarioHasBeenSet() const
{
    return m_scenarioHasBeenSet;
}

string PresetImageInfo::GetFramework() const
{
    return m_framework;
}

void PresetImageInfo::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool PresetImageInfo::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string PresetImageInfo::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void PresetImageInfo::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool PresetImageInfo::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

vector<string> PresetImageInfo::GetChipTypeList() const
{
    return m_chipTypeList;
}

void PresetImageInfo::SetChipTypeList(const vector<string>& _chipTypeList)
{
    m_chipTypeList = _chipTypeList;
    m_chipTypeListHasBeenSet = true;
}

bool PresetImageInfo::ChipTypeListHasBeenSet() const
{
    return m_chipTypeListHasBeenSet;
}

string PresetImageInfo::GetComputeLibVersion() const
{
    return m_computeLibVersion;
}

void PresetImageInfo::SetComputeLibVersion(const string& _computeLibVersion)
{
    m_computeLibVersion = _computeLibVersion;
    m_computeLibVersionHasBeenSet = true;
}

bool PresetImageInfo::ComputeLibVersionHasBeenSet() const
{
    return m_computeLibVersionHasBeenSet;
}

string PresetImageInfo::GetPythonVersion() const
{
    return m_pythonVersion;
}

void PresetImageInfo::SetPythonVersion(const string& _pythonVersion)
{
    m_pythonVersion = _pythonVersion;
    m_pythonVersionHasBeenSet = true;
}

bool PresetImageInfo::PythonVersionHasBeenSet() const
{
    return m_pythonVersionHasBeenSet;
}

string PresetImageInfo::GetOS() const
{
    return m_oS;
}

void PresetImageInfo::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool PresetImageInfo::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

vector<RuntimeLib> PresetImageInfo::GetRuntimeLibList() const
{
    return m_runtimeLibList;
}

void PresetImageInfo::SetRuntimeLibList(const vector<RuntimeLib>& _runtimeLibList)
{
    m_runtimeLibList = _runtimeLibList;
    m_runtimeLibListHasBeenSet = true;
}

bool PresetImageInfo::RuntimeLibListHasBeenSet() const
{
    return m_runtimeLibListHasBeenSet;
}

vector<string> PresetImageInfo::GetSupportGpuList() const
{
    return m_supportGpuList;
}

void PresetImageInfo::SetSupportGpuList(const vector<string>& _supportGpuList)
{
    m_supportGpuList = _supportGpuList;
    m_supportGpuListHasBeenSet = true;
}

bool PresetImageInfo::SupportGpuListHasBeenSet() const
{
    return m_supportGpuListHasBeenSet;
}

vector<Attribute> PresetImageInfo::GetExtraAttributeList() const
{
    return m_extraAttributeList;
}

void PresetImageInfo::SetExtraAttributeList(const vector<Attribute>& _extraAttributeList)
{
    m_extraAttributeList = _extraAttributeList;
    m_extraAttributeListHasBeenSet = true;
}

bool PresetImageInfo::ExtraAttributeListHasBeenSet() const
{
    return m_extraAttributeListHasBeenSet;
}

bool PresetImageInfo::GetSupportDistributedDeploy() const
{
    return m_supportDistributedDeploy;
}

void PresetImageInfo::SetSupportDistributedDeploy(const bool& _supportDistributedDeploy)
{
    m_supportDistributedDeploy = _supportDistributedDeploy;
    m_supportDistributedDeployHasBeenSet = true;
}

bool PresetImageInfo::SupportDistributedDeployHasBeenSet() const
{
    return m_supportDistributedDeployHasBeenSet;
}

bool PresetImageInfo::GetIsLatestStable() const
{
    return m_isLatestStable;
}

void PresetImageInfo::SetIsLatestStable(const bool& _isLatestStable)
{
    m_isLatestStable = _isLatestStable;
    m_isLatestStableHasBeenSet = true;
}

bool PresetImageInfo::IsLatestStableHasBeenSet() const
{
    return m_isLatestStableHasBeenSet;
}

string PresetImageInfo::GetImageName() const
{
    return m_imageName;
}

void PresetImageInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool PresetImageInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

uint64_t PresetImageInfo::GetVersion() const
{
    return m_version;
}

void PresetImageInfo::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool PresetImageInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string PresetImageInfo::GetCreateTime() const
{
    return m_createTime;
}

void PresetImageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PresetImageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PresetImageInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PresetImageInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PresetImageInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PresetImageInfo::GetImageType() const
{
    return m_imageType;
}

void PresetImageInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool PresetImageInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

