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

#include <tencentcloud/tione/v20211111/model/BatchTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

BatchTaskDetail::BatchTaskDetail() :
    m_batchTaskIdHasBeenSet(false),
    m_batchTaskNameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_resourceConfigInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_modelInfoHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_codePackagePathHasBeenSet(false),
    m_startCmdHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_latestInstanceIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_billingInfoHasBeenSet(false)
{
}

CoreInternalOutcome BatchTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchTaskId") && !value["BatchTaskId"].IsNull())
    {
        if (!value["BatchTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.BatchTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchTaskId = string(value["BatchTaskId"].GetString());
        m_batchTaskIdHasBeenSet = true;
    }

    if (value.HasMember("BatchTaskName") && !value["BatchTaskName"].IsNull())
    {
        if (!value["BatchTaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.BatchTaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchTaskName = string(value["BatchTaskName"].GetString());
        m_batchTaskNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigInfo") && !value["ResourceConfigInfo"].IsNull())
    {
        if (!value["ResourceConfigInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ResourceConfigInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfigInfo.Deserialize(value["ResourceConfigInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ModelInfo") && !value["ModelInfo"].IsNull())
    {
        if (!value["ModelInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ModelInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelInfo.Deserialize(value["ModelInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelInfoHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("CodePackagePath") && !value["CodePackagePath"].IsNull())
    {
        if (!value["CodePackagePath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.CodePackagePath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codePackagePath.Deserialize(value["CodePackagePath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codePackagePathHasBeenSet = true;
    }

    if (value.HasMember("StartCmd") && !value["StartCmd"].IsNull())
    {
        if (!value["StartCmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.StartCmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startCmd = string(value["StartCmd"].GetString());
        m_startCmdHasBeenSet = true;
    }

    if (value.HasMember("DataConfigs") && !value["DataConfigs"].IsNull())
    {
        if (!value["DataConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.DataConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["DataConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataConfigs.push_back(item);
        }
        m_dataConfigsHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("LogEnable") && !value["LogEnable"].IsNull())
    {
        if (!value["LogEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.LogEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logEnable = value["LogEnable"].GetBool();
        m_logEnableHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.LogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logConfig.Deserialize(value["LogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logConfigHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestInstanceId") && !value["LatestInstanceId"].IsNull())
    {
        if (!value["LatestInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.LatestInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestInstanceId = string(value["LatestInstanceId"].GetString());
        m_latestInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchTaskDetail.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchTaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfigInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codePackagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackagePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codePackagePath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startCmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startCmd.c_str(), allocator).Move(), allocator);
    }

    if (m_dataConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataConfigs.begin(); itr != m_dataConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeInSeconds, allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_latestInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

}


string BatchTaskDetail::GetBatchTaskId() const
{
    return m_batchTaskId;
}

void BatchTaskDetail::SetBatchTaskId(const string& _batchTaskId)
{
    m_batchTaskId = _batchTaskId;
    m_batchTaskIdHasBeenSet = true;
}

bool BatchTaskDetail::BatchTaskIdHasBeenSet() const
{
    return m_batchTaskIdHasBeenSet;
}

string BatchTaskDetail::GetBatchTaskName() const
{
    return m_batchTaskName;
}

void BatchTaskDetail::SetBatchTaskName(const string& _batchTaskName)
{
    m_batchTaskName = _batchTaskName;
    m_batchTaskNameHasBeenSet = true;
}

bool BatchTaskDetail::BatchTaskNameHasBeenSet() const
{
    return m_batchTaskNameHasBeenSet;
}

string BatchTaskDetail::GetUin() const
{
    return m_uin;
}

void BatchTaskDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool BatchTaskDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string BatchTaskDetail::GetSubUin() const
{
    return m_subUin;
}

void BatchTaskDetail::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool BatchTaskDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string BatchTaskDetail::GetRegion() const
{
    return m_region;
}

void BatchTaskDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BatchTaskDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BatchTaskDetail::GetChargeType() const
{
    return m_chargeType;
}

void BatchTaskDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool BatchTaskDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string BatchTaskDetail::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void BatchTaskDetail::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool BatchTaskDetail::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string BatchTaskDetail::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void BatchTaskDetail::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool BatchTaskDetail::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

ResourceConfigInfo BatchTaskDetail::GetResourceConfigInfo() const
{
    return m_resourceConfigInfo;
}

void BatchTaskDetail::SetResourceConfigInfo(const ResourceConfigInfo& _resourceConfigInfo)
{
    m_resourceConfigInfo = _resourceConfigInfo;
    m_resourceConfigInfoHasBeenSet = true;
}

bool BatchTaskDetail::ResourceConfigInfoHasBeenSet() const
{
    return m_resourceConfigInfoHasBeenSet;
}

vector<Tag> BatchTaskDetail::GetTags() const
{
    return m_tags;
}

void BatchTaskDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool BatchTaskDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

ModelInfo BatchTaskDetail::GetModelInfo() const
{
    return m_modelInfo;
}

void BatchTaskDetail::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool BatchTaskDetail::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

ImageInfo BatchTaskDetail::GetImageInfo() const
{
    return m_imageInfo;
}

void BatchTaskDetail::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool BatchTaskDetail::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

CosPathInfo BatchTaskDetail::GetCodePackagePath() const
{
    return m_codePackagePath;
}

void BatchTaskDetail::SetCodePackagePath(const CosPathInfo& _codePackagePath)
{
    m_codePackagePath = _codePackagePath;
    m_codePackagePathHasBeenSet = true;
}

bool BatchTaskDetail::CodePackagePathHasBeenSet() const
{
    return m_codePackagePathHasBeenSet;
}

string BatchTaskDetail::GetStartCmd() const
{
    return m_startCmd;
}

void BatchTaskDetail::SetStartCmd(const string& _startCmd)
{
    m_startCmd = _startCmd;
    m_startCmdHasBeenSet = true;
}

bool BatchTaskDetail::StartCmdHasBeenSet() const
{
    return m_startCmdHasBeenSet;
}

vector<DataConfig> BatchTaskDetail::GetDataConfigs() const
{
    return m_dataConfigs;
}

void BatchTaskDetail::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool BatchTaskDetail::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

vector<DataConfig> BatchTaskDetail::GetOutputs() const
{
    return m_outputs;
}

void BatchTaskDetail::SetOutputs(const vector<DataConfig>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool BatchTaskDetail::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

bool BatchTaskDetail::GetLogEnable() const
{
    return m_logEnable;
}

void BatchTaskDetail::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool BatchTaskDetail::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig BatchTaskDetail::GetLogConfig() const
{
    return m_logConfig;
}

void BatchTaskDetail::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool BatchTaskDetail::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string BatchTaskDetail::GetVpcId() const
{
    return m_vpcId;
}

void BatchTaskDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool BatchTaskDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string BatchTaskDetail::GetSubnetId() const
{
    return m_subnetId;
}

void BatchTaskDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool BatchTaskDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string BatchTaskDetail::GetStatus() const
{
    return m_status;
}

void BatchTaskDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BatchTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BatchTaskDetail::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void BatchTaskDetail::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool BatchTaskDetail::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

string BatchTaskDetail::GetCreateTime() const
{
    return m_createTime;
}

void BatchTaskDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BatchTaskDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BatchTaskDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void BatchTaskDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BatchTaskDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BatchTaskDetail::GetStartTime() const
{
    return m_startTime;
}

void BatchTaskDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool BatchTaskDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string BatchTaskDetail::GetEndTime() const
{
    return m_endTime;
}

void BatchTaskDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool BatchTaskDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string BatchTaskDetail::GetChargeStatus() const
{
    return m_chargeStatus;
}

void BatchTaskDetail::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool BatchTaskDetail::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string BatchTaskDetail::GetLatestInstanceId() const
{
    return m_latestInstanceId;
}

void BatchTaskDetail::SetLatestInstanceId(const string& _latestInstanceId)
{
    m_latestInstanceId = _latestInstanceId;
    m_latestInstanceIdHasBeenSet = true;
}

bool BatchTaskDetail::LatestInstanceIdHasBeenSet() const
{
    return m_latestInstanceIdHasBeenSet;
}

string BatchTaskDetail::GetRemark() const
{
    return m_remark;
}

void BatchTaskDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool BatchTaskDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string BatchTaskDetail::GetFailureReason() const
{
    return m_failureReason;
}

void BatchTaskDetail::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool BatchTaskDetail::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string BatchTaskDetail::GetBillingInfo() const
{
    return m_billingInfo;
}

void BatchTaskDetail::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool BatchTaskDetail::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

