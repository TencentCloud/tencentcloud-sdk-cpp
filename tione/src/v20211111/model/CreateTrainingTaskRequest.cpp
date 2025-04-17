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

#include <tencentcloud/tione/v20211111/model/CreateTrainingTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateTrainingTaskRequest::CreateTrainingTaskRequest() :
    m_nameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceConfigInfosHasBeenSet(false),
    m_frameworkNameHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkEnvironmentHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codePackagePathHasBeenSet(false),
    m_startCmdInfoHasBeenSet(false),
    m_trainingModeHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_tuningParametersHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_encodedStartCmdInfoHasBeenSet(false),
    m_codeReposHasBeenSet(false)
{
}

string CreateTrainingTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConfigInfos.begin(); itr != m_resourceConfigInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_frameworkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameworkName.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_frameworkEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codePackagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackagePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codePackagePath.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startCmdInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCmdInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startCmdInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trainingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trainingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataConfigs.begin(); itr != m_dataConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tuningParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuningParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tuningParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedStartCmdInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedStartCmdInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encodedStartCmdInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codeReposHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeRepos.begin(); itr != m_codeRepos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTrainingTaskRequest::GetName() const
{
    return m_name;
}

void CreateTrainingTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTrainingTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateTrainingTaskRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateTrainingTaskRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateTrainingTaskRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

vector<ResourceConfigInfo> CreateTrainingTaskRequest::GetResourceConfigInfos() const
{
    return m_resourceConfigInfos;
}

void CreateTrainingTaskRequest::SetResourceConfigInfos(const vector<ResourceConfigInfo>& _resourceConfigInfos)
{
    m_resourceConfigInfos = _resourceConfigInfos;
    m_resourceConfigInfosHasBeenSet = true;
}

bool CreateTrainingTaskRequest::ResourceConfigInfosHasBeenSet() const
{
    return m_resourceConfigInfosHasBeenSet;
}

string CreateTrainingTaskRequest::GetFrameworkName() const
{
    return m_frameworkName;
}

void CreateTrainingTaskRequest::SetFrameworkName(const string& _frameworkName)
{
    m_frameworkName = _frameworkName;
    m_frameworkNameHasBeenSet = true;
}

bool CreateTrainingTaskRequest::FrameworkNameHasBeenSet() const
{
    return m_frameworkNameHasBeenSet;
}

string CreateTrainingTaskRequest::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void CreateTrainingTaskRequest::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool CreateTrainingTaskRequest::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

string CreateTrainingTaskRequest::GetFrameworkEnvironment() const
{
    return m_frameworkEnvironment;
}

void CreateTrainingTaskRequest::SetFrameworkEnvironment(const string& _frameworkEnvironment)
{
    m_frameworkEnvironment = _frameworkEnvironment;
    m_frameworkEnvironmentHasBeenSet = true;
}

bool CreateTrainingTaskRequest::FrameworkEnvironmentHasBeenSet() const
{
    return m_frameworkEnvironmentHasBeenSet;
}

string CreateTrainingTaskRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateTrainingTaskRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateTrainingTaskRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<Tag> CreateTrainingTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateTrainingTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateTrainingTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ImageInfo CreateTrainingTaskRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateTrainingTaskRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateTrainingTaskRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CosPathInfo CreateTrainingTaskRequest::GetCodePackagePath() const
{
    return m_codePackagePath;
}

void CreateTrainingTaskRequest::SetCodePackagePath(const CosPathInfo& _codePackagePath)
{
    m_codePackagePath = _codePackagePath;
    m_codePackagePathHasBeenSet = true;
}

bool CreateTrainingTaskRequest::CodePackagePathHasBeenSet() const
{
    return m_codePackagePathHasBeenSet;
}

StartCmdInfo CreateTrainingTaskRequest::GetStartCmdInfo() const
{
    return m_startCmdInfo;
}

void CreateTrainingTaskRequest::SetStartCmdInfo(const StartCmdInfo& _startCmdInfo)
{
    m_startCmdInfo = _startCmdInfo;
    m_startCmdInfoHasBeenSet = true;
}

bool CreateTrainingTaskRequest::StartCmdInfoHasBeenSet() const
{
    return m_startCmdInfoHasBeenSet;
}

string CreateTrainingTaskRequest::GetTrainingMode() const
{
    return m_trainingMode;
}

void CreateTrainingTaskRequest::SetTrainingMode(const string& _trainingMode)
{
    m_trainingMode = _trainingMode;
    m_trainingModeHasBeenSet = true;
}

bool CreateTrainingTaskRequest::TrainingModeHasBeenSet() const
{
    return m_trainingModeHasBeenSet;
}

vector<DataConfig> CreateTrainingTaskRequest::GetDataConfigs() const
{
    return m_dataConfigs;
}

void CreateTrainingTaskRequest::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool CreateTrainingTaskRequest::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

string CreateTrainingTaskRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateTrainingTaskRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateTrainingTaskRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateTrainingTaskRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateTrainingTaskRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateTrainingTaskRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

CosPathInfo CreateTrainingTaskRequest::GetOutput() const
{
    return m_output;
}

void CreateTrainingTaskRequest::SetOutput(const CosPathInfo& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool CreateTrainingTaskRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

LogConfig CreateTrainingTaskRequest::GetLogConfig() const
{
    return m_logConfig;
}

void CreateTrainingTaskRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool CreateTrainingTaskRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string CreateTrainingTaskRequest::GetTuningParameters() const
{
    return m_tuningParameters;
}

void CreateTrainingTaskRequest::SetTuningParameters(const string& _tuningParameters)
{
    m_tuningParameters = _tuningParameters;
    m_tuningParametersHasBeenSet = true;
}

bool CreateTrainingTaskRequest::TuningParametersHasBeenSet() const
{
    return m_tuningParametersHasBeenSet;
}

bool CreateTrainingTaskRequest::GetLogEnable() const
{
    return m_logEnable;
}

void CreateTrainingTaskRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool CreateTrainingTaskRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

string CreateTrainingTaskRequest::GetRemark() const
{
    return m_remark;
}

void CreateTrainingTaskRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateTrainingTaskRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateTrainingTaskRequest::GetDataSource() const
{
    return m_dataSource;
}

void CreateTrainingTaskRequest::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool CreateTrainingTaskRequest::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string CreateTrainingTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateTrainingTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateTrainingTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

EncodedStartCmdInfo CreateTrainingTaskRequest::GetEncodedStartCmdInfo() const
{
    return m_encodedStartCmdInfo;
}

void CreateTrainingTaskRequest::SetEncodedStartCmdInfo(const EncodedStartCmdInfo& _encodedStartCmdInfo)
{
    m_encodedStartCmdInfo = _encodedStartCmdInfo;
    m_encodedStartCmdInfoHasBeenSet = true;
}

bool CreateTrainingTaskRequest::EncodedStartCmdInfoHasBeenSet() const
{
    return m_encodedStartCmdInfoHasBeenSet;
}

vector<CodeRepoConfig> CreateTrainingTaskRequest::GetCodeRepos() const
{
    return m_codeRepos;
}

void CreateTrainingTaskRequest::SetCodeRepos(const vector<CodeRepoConfig>& _codeRepos)
{
    m_codeRepos = _codeRepos;
    m_codeReposHasBeenSet = true;
}

bool CreateTrainingTaskRequest::CodeReposHasBeenSet() const
{
    return m_codeReposHasBeenSet;
}


