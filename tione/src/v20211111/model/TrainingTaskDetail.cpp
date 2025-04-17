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

#include <tencentcloud/tione/v20211111/model/TrainingTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

TrainingTaskDetail::TrainingTaskDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_frameworkNameHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_frameworkEnvironmentHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_resourceConfigInfosHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trainingModeHasBeenSet(false),
    m_codePackagePathHasBeenSet(false),
    m_startCmdInfoHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_tuningParametersHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_latestInstanceIdHasBeenSet(false),
    m_tensorBoardIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_billingInfoHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_codeReposHasBeenSet(false)
{
}

CoreInternalOutcome TrainingTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("FrameworkName") && !value["FrameworkName"].IsNull())
    {
        if (!value["FrameworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.FrameworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkName = string(value["FrameworkName"].GetString());
        m_frameworkNameHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("FrameworkEnvironment") && !value["FrameworkEnvironment"].IsNull())
    {
        if (!value["FrameworkEnvironment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.FrameworkEnvironment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkEnvironment = string(value["FrameworkEnvironment"].GetString());
        m_frameworkEnvironmentHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfigInfos") && !value["ResourceConfigInfos"].IsNull())
    {
        if (!value["ResourceConfigInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ResourceConfigInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceConfigInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceConfigInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceConfigInfos.push_back(item);
        }
        m_resourceConfigInfosHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Tags` is not array type"));

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

    if (value.HasMember("TrainingMode") && !value["TrainingMode"].IsNull())
    {
        if (!value["TrainingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.TrainingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trainingMode = string(value["TrainingMode"].GetString());
        m_trainingModeHasBeenSet = true;
    }

    if (value.HasMember("CodePackagePath") && !value["CodePackagePath"].IsNull())
    {
        if (!value["CodePackagePath"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.CodePackagePath` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codePackagePath.Deserialize(value["CodePackagePath"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codePackagePathHasBeenSet = true;
    }

    if (value.HasMember("StartCmdInfo") && !value["StartCmdInfo"].IsNull())
    {
        if (!value["StartCmdInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.StartCmdInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_startCmdInfo.Deserialize(value["StartCmdInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_startCmdInfoHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("DataConfigs") && !value["DataConfigs"].IsNull())
    {
        if (!value["DataConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.DataConfigs` is not array type"));

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

    if (value.HasMember("TuningParameters") && !value["TuningParameters"].IsNull())
    {
        if (!value["TuningParameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.TuningParameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tuningParameters = string(value["TuningParameters"].GetString());
        m_tuningParametersHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("LogEnable") && !value["LogEnable"].IsNull())
    {
        if (!value["LogEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.LogEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logEnable = value["LogEnable"].GetBool();
        m_logEnableHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.LogConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("LatestInstanceId") && !value["LatestInstanceId"].IsNull())
    {
        if (!value["LatestInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.LatestInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestInstanceId = string(value["LatestInstanceId"].GetString());
        m_latestInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TensorBoardId") && !value["TensorBoardId"].IsNull())
    {
        if (!value["TensorBoardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.TensorBoardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tensorBoardId = string(value["TensorBoardId"].GetString());
        m_tensorBoardIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("CodeRepos") && !value["CodeRepos"].IsNull())
    {
        if (!value["CodeRepos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrainingTaskDetail.CodeRepos` is not array type"));

        const rapidjson::Value &tmpValue = value["CodeRepos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodeRepoConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codeRepos.push_back(item);
        }
        m_codeReposHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrainingTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkName.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkEnvironment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkEnvironment.c_str(), allocator).Move(), allocator);
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

    if (m_resourceConfigInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfigInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceConfigInfos.begin(); itr != m_resourceConfigInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_trainingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trainingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_codePackagePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePackagePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codePackagePath.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startCmdInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartCmdInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startCmdInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
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

    if (m_tuningParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TuningParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tuningParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
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

    if (m_tensorBoardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TensorBoardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tensorBoardId.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_codeReposHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeRepos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codeRepos.begin(); itr != m_codeRepos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrainingTaskDetail::GetId() const
{
    return m_id;
}

void TrainingTaskDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TrainingTaskDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TrainingTaskDetail::GetName() const
{
    return m_name;
}

void TrainingTaskDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TrainingTaskDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TrainingTaskDetail::GetUin() const
{
    return m_uin;
}

void TrainingTaskDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool TrainingTaskDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string TrainingTaskDetail::GetSubUin() const
{
    return m_subUin;
}

void TrainingTaskDetail::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool TrainingTaskDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string TrainingTaskDetail::GetSubUinName() const
{
    return m_subUinName;
}

void TrainingTaskDetail::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool TrainingTaskDetail::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

string TrainingTaskDetail::GetRegion() const
{
    return m_region;
}

void TrainingTaskDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TrainingTaskDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TrainingTaskDetail::GetFrameworkName() const
{
    return m_frameworkName;
}

void TrainingTaskDetail::SetFrameworkName(const string& _frameworkName)
{
    m_frameworkName = _frameworkName;
    m_frameworkNameHasBeenSet = true;
}

bool TrainingTaskDetail::FrameworkNameHasBeenSet() const
{
    return m_frameworkNameHasBeenSet;
}

string TrainingTaskDetail::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void TrainingTaskDetail::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool TrainingTaskDetail::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

string TrainingTaskDetail::GetFrameworkEnvironment() const
{
    return m_frameworkEnvironment;
}

void TrainingTaskDetail::SetFrameworkEnvironment(const string& _frameworkEnvironment)
{
    m_frameworkEnvironment = _frameworkEnvironment;
    m_frameworkEnvironmentHasBeenSet = true;
}

bool TrainingTaskDetail::FrameworkEnvironmentHasBeenSet() const
{
    return m_frameworkEnvironmentHasBeenSet;
}

string TrainingTaskDetail::GetChargeType() const
{
    return m_chargeType;
}

void TrainingTaskDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool TrainingTaskDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string TrainingTaskDetail::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void TrainingTaskDetail::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool TrainingTaskDetail::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<ResourceConfigInfo> TrainingTaskDetail::GetResourceConfigInfos() const
{
    return m_resourceConfigInfos;
}

void TrainingTaskDetail::SetResourceConfigInfos(const vector<ResourceConfigInfo>& _resourceConfigInfos)
{
    m_resourceConfigInfos = _resourceConfigInfos;
    m_resourceConfigInfosHasBeenSet = true;
}

bool TrainingTaskDetail::ResourceConfigInfosHasBeenSet() const
{
    return m_resourceConfigInfosHasBeenSet;
}

vector<Tag> TrainingTaskDetail::GetTags() const
{
    return m_tags;
}

void TrainingTaskDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TrainingTaskDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string TrainingTaskDetail::GetTrainingMode() const
{
    return m_trainingMode;
}

void TrainingTaskDetail::SetTrainingMode(const string& _trainingMode)
{
    m_trainingMode = _trainingMode;
    m_trainingModeHasBeenSet = true;
}

bool TrainingTaskDetail::TrainingModeHasBeenSet() const
{
    return m_trainingModeHasBeenSet;
}

CosPathInfo TrainingTaskDetail::GetCodePackagePath() const
{
    return m_codePackagePath;
}

void TrainingTaskDetail::SetCodePackagePath(const CosPathInfo& _codePackagePath)
{
    m_codePackagePath = _codePackagePath;
    m_codePackagePathHasBeenSet = true;
}

bool TrainingTaskDetail::CodePackagePathHasBeenSet() const
{
    return m_codePackagePathHasBeenSet;
}

StartCmdInfo TrainingTaskDetail::GetStartCmdInfo() const
{
    return m_startCmdInfo;
}

void TrainingTaskDetail::SetStartCmdInfo(const StartCmdInfo& _startCmdInfo)
{
    m_startCmdInfo = _startCmdInfo;
    m_startCmdInfoHasBeenSet = true;
}

bool TrainingTaskDetail::StartCmdInfoHasBeenSet() const
{
    return m_startCmdInfoHasBeenSet;
}

string TrainingTaskDetail::GetDataSource() const
{
    return m_dataSource;
}

void TrainingTaskDetail::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool TrainingTaskDetail::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

vector<DataConfig> TrainingTaskDetail::GetDataConfigs() const
{
    return m_dataConfigs;
}

void TrainingTaskDetail::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool TrainingTaskDetail::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

string TrainingTaskDetail::GetTuningParameters() const
{
    return m_tuningParameters;
}

void TrainingTaskDetail::SetTuningParameters(const string& _tuningParameters)
{
    m_tuningParameters = _tuningParameters;
    m_tuningParametersHasBeenSet = true;
}

bool TrainingTaskDetail::TuningParametersHasBeenSet() const
{
    return m_tuningParametersHasBeenSet;
}

CosPathInfo TrainingTaskDetail::GetOutput() const
{
    return m_output;
}

void TrainingTaskDetail::SetOutput(const CosPathInfo& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool TrainingTaskDetail::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

bool TrainingTaskDetail::GetLogEnable() const
{
    return m_logEnable;
}

void TrainingTaskDetail::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool TrainingTaskDetail::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig TrainingTaskDetail::GetLogConfig() const
{
    return m_logConfig;
}

void TrainingTaskDetail::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool TrainingTaskDetail::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string TrainingTaskDetail::GetVpcId() const
{
    return m_vpcId;
}

void TrainingTaskDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool TrainingTaskDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string TrainingTaskDetail::GetSubnetId() const
{
    return m_subnetId;
}

void TrainingTaskDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool TrainingTaskDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

ImageInfo TrainingTaskDetail::GetImageInfo() const
{
    return m_imageInfo;
}

void TrainingTaskDetail::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool TrainingTaskDetail::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

uint64_t TrainingTaskDetail::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void TrainingTaskDetail::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool TrainingTaskDetail::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

string TrainingTaskDetail::GetCreateTime() const
{
    return m_createTime;
}

void TrainingTaskDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TrainingTaskDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TrainingTaskDetail::GetStartTime() const
{
    return m_startTime;
}

void TrainingTaskDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool TrainingTaskDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string TrainingTaskDetail::GetChargeStatus() const
{
    return m_chargeStatus;
}

void TrainingTaskDetail::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool TrainingTaskDetail::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string TrainingTaskDetail::GetLatestInstanceId() const
{
    return m_latestInstanceId;
}

void TrainingTaskDetail::SetLatestInstanceId(const string& _latestInstanceId)
{
    m_latestInstanceId = _latestInstanceId;
    m_latestInstanceIdHasBeenSet = true;
}

bool TrainingTaskDetail::LatestInstanceIdHasBeenSet() const
{
    return m_latestInstanceIdHasBeenSet;
}

string TrainingTaskDetail::GetTensorBoardId() const
{
    return m_tensorBoardId;
}

void TrainingTaskDetail::SetTensorBoardId(const string& _tensorBoardId)
{
    m_tensorBoardId = _tensorBoardId;
    m_tensorBoardIdHasBeenSet = true;
}

bool TrainingTaskDetail::TensorBoardIdHasBeenSet() const
{
    return m_tensorBoardIdHasBeenSet;
}

string TrainingTaskDetail::GetRemark() const
{
    return m_remark;
}

void TrainingTaskDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool TrainingTaskDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string TrainingTaskDetail::GetFailureReason() const
{
    return m_failureReason;
}

void TrainingTaskDetail::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool TrainingTaskDetail::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string TrainingTaskDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void TrainingTaskDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TrainingTaskDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TrainingTaskDetail::GetEndTime() const
{
    return m_endTime;
}

void TrainingTaskDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool TrainingTaskDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string TrainingTaskDetail::GetBillingInfo() const
{
    return m_billingInfo;
}

void TrainingTaskDetail::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool TrainingTaskDetail::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

string TrainingTaskDetail::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void TrainingTaskDetail::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool TrainingTaskDetail::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string TrainingTaskDetail::GetMessage() const
{
    return m_message;
}

void TrainingTaskDetail::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool TrainingTaskDetail::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string TrainingTaskDetail::GetStatus() const
{
    return m_status;
}

void TrainingTaskDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TrainingTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string TrainingTaskDetail::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void TrainingTaskDetail::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool TrainingTaskDetail::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<CodeRepoConfig> TrainingTaskDetail::GetCodeRepos() const
{
    return m_codeRepos;
}

void TrainingTaskDetail::SetCodeRepos(const vector<CodeRepoConfig>& _codeRepos)
{
    m_codeRepos = _codeRepos;
    m_codeReposHasBeenSet = true;
}

bool TrainingTaskDetail::CodeReposHasBeenSet() const
{
    return m_codeReposHasBeenSet;
}

