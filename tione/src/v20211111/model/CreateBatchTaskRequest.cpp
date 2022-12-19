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

#include <tencentcloud/tione/v20211111/model/CreateBatchTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateBatchTaskRequest::CreateBatchTaskRequest() :
    m_batchTaskNameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceConfigInfoHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_cronInfoHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelInfoHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codePackageHasBeenSet(false),
    m_startCmdHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_callbackUrlHasBeenSet(false)
{
}

string CreateBatchTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfigInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_jobType, allocator);
    }

    if (m_cronInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cronInfo.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_modelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codePackage.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCmd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startCmd.c_str(), allocator).Move(), allocator);
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

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBatchTaskRequest::GetBatchTaskName() const
{
    return m_batchTaskName;
}

void CreateBatchTaskRequest::SetBatchTaskName(const string& _batchTaskName)
{
    m_batchTaskName = _batchTaskName;
    m_batchTaskNameHasBeenSet = true;
}

bool CreateBatchTaskRequest::BatchTaskNameHasBeenSet() const
{
    return m_batchTaskNameHasBeenSet;
}

string CreateBatchTaskRequest::GetChargeType() const
{
    return m_chargeType;
}

void CreateBatchTaskRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool CreateBatchTaskRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ResourceConfigInfo CreateBatchTaskRequest::GetResourceConfigInfo() const
{
    return m_resourceConfigInfo;
}

void CreateBatchTaskRequest::SetResourceConfigInfo(const ResourceConfigInfo& _resourceConfigInfo)
{
    m_resourceConfigInfo = _resourceConfigInfo;
    m_resourceConfigInfoHasBeenSet = true;
}

bool CreateBatchTaskRequest::ResourceConfigInfoHasBeenSet() const
{
    return m_resourceConfigInfoHasBeenSet;
}

vector<DataConfig> CreateBatchTaskRequest::GetOutputs() const
{
    return m_outputs;
}

void CreateBatchTaskRequest::SetOutputs(const vector<DataConfig>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool CreateBatchTaskRequest::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

bool CreateBatchTaskRequest::GetLogEnable() const
{
    return m_logEnable;
}

void CreateBatchTaskRequest::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool CreateBatchTaskRequest::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

uint64_t CreateBatchTaskRequest::GetJobType() const
{
    return m_jobType;
}

void CreateBatchTaskRequest::SetJobType(const uint64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool CreateBatchTaskRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

CronInfo CreateBatchTaskRequest::GetCronInfo() const
{
    return m_cronInfo;
}

void CreateBatchTaskRequest::SetCronInfo(const CronInfo& _cronInfo)
{
    m_cronInfo = _cronInfo;
    m_cronInfoHasBeenSet = true;
}

bool CreateBatchTaskRequest::CronInfoHasBeenSet() const
{
    return m_cronInfoHasBeenSet;
}

string CreateBatchTaskRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateBatchTaskRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateBatchTaskRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<Tag> CreateBatchTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateBatchTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateBatchTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ModelInfo CreateBatchTaskRequest::GetModelInfo() const
{
    return m_modelInfo;
}

void CreateBatchTaskRequest::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool CreateBatchTaskRequest::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

ImageInfo CreateBatchTaskRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateBatchTaskRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateBatchTaskRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CosPathInfo CreateBatchTaskRequest::GetCodePackage() const
{
    return m_codePackage;
}

void CreateBatchTaskRequest::SetCodePackage(const CosPathInfo& _codePackage)
{
    m_codePackage = _codePackage;
    m_codePackageHasBeenSet = true;
}

bool CreateBatchTaskRequest::CodePackageHasBeenSet() const
{
    return m_codePackageHasBeenSet;
}

string CreateBatchTaskRequest::GetStartCmd() const
{
    return m_startCmd;
}

void CreateBatchTaskRequest::SetStartCmd(const string& _startCmd)
{
    m_startCmd = _startCmd;
    m_startCmdHasBeenSet = true;
}

bool CreateBatchTaskRequest::StartCmdHasBeenSet() const
{
    return m_startCmdHasBeenSet;
}

vector<DataConfig> CreateBatchTaskRequest::GetDataConfigs() const
{
    return m_dataConfigs;
}

void CreateBatchTaskRequest::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool CreateBatchTaskRequest::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

LogConfig CreateBatchTaskRequest::GetLogConfig() const
{
    return m_logConfig;
}

void CreateBatchTaskRequest::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool CreateBatchTaskRequest::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string CreateBatchTaskRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateBatchTaskRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateBatchTaskRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateBatchTaskRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateBatchTaskRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateBatchTaskRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateBatchTaskRequest::GetRemark() const
{
    return m_remark;
}

void CreateBatchTaskRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateBatchTaskRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateBatchTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateBatchTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateBatchTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}


