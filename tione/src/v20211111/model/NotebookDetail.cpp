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

#include <tencentcloud/tione/v20211111/model/NotebookDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

NotebookDetail::NotebookDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_lifecycleScriptIdHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_directInternetAccessHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_additionalCodeRepoIdsHasBeenSet(false),
    m_automaticStopTimeHasBeenSet(false),
    m_resourceConfHasBeenSet(false),
    m_defaultCodeRepoIdHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_rootAccessHasBeenSet(false),
    m_billingInfosHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_instanceTypeAliasHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_volumeSourceTypeHasBeenSet(false),
    m_volumeSourceCFSHasBeenSet(false),
    m_dataConfigsHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_imageTypeHasBeenSet(false),
    m_sSHConfigHasBeenSet(false),
    m_volumeSourceGooseFSHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_resourceGroupInstanceIdHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_jobCreateTimeHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome NotebookDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LifecycleScriptId") && !value["LifecycleScriptId"].IsNull())
    {
        if (!value["LifecycleScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.LifecycleScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleScriptId = string(value["LifecycleScriptId"].GetString());
        m_lifecycleScriptIdHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DirectInternetAccess") && !value["DirectInternetAccess"].IsNull())
    {
        if (!value["DirectInternetAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.DirectInternetAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_directInternetAccess = value["DirectInternetAccess"].GetBool();
        m_directInternetAccessHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.Tags` is not array type"));

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

    if (value.HasMember("AutoStopping") && !value["AutoStopping"].IsNull())
    {
        if (!value["AutoStopping"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.AutoStopping` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoStopping = value["AutoStopping"].GetBool();
        m_autoStoppingHasBeenSet = true;
    }

    if (value.HasMember("AdditionalCodeRepoIds") && !value["AdditionalCodeRepoIds"].IsNull())
    {
        if (!value["AdditionalCodeRepoIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.AdditionalCodeRepoIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AdditionalCodeRepoIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_additionalCodeRepoIds.push_back((*itr).GetString());
        }
        m_additionalCodeRepoIdsHasBeenSet = true;
    }

    if (value.HasMember("AutomaticStopTime") && !value["AutomaticStopTime"].IsNull())
    {
        if (!value["AutomaticStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.AutomaticStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_automaticStopTime = value["AutomaticStopTime"].GetInt64();
        m_automaticStopTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceConf") && !value["ResourceConf"].IsNull())
    {
        if (!value["ResourceConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ResourceConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConf.Deserialize(value["ResourceConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfHasBeenSet = true;
    }

    if (value.HasMember("DefaultCodeRepoId") && !value["DefaultCodeRepoId"].IsNull())
    {
        if (!value["DefaultCodeRepoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.DefaultCodeRepoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultCodeRepoId = string(value["DefaultCodeRepoId"].GetString());
        m_defaultCodeRepoIdHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("LogEnable") && !value["LogEnable"].IsNull())
    {
        if (!value["LogEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.LogEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logEnable = value["LogEnable"].GetBool();
        m_logEnableHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.LogConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("RootAccess") && !value["RootAccess"].IsNull())
    {
        if (!value["RootAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.RootAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rootAccess = value["RootAccess"].GetBool();
        m_rootAccessHasBeenSet = true;
    }

    if (value.HasMember("BillingInfos") && !value["BillingInfos"].IsNull())
    {
        if (!value["BillingInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.BillingInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_billingInfos.push_back((*itr).GetString());
        }
        m_billingInfosHasBeenSet = true;
    }

    if (value.HasMember("VolumeSizeInGB") && !value["VolumeSizeInGB"].IsNull())
    {
        if (!value["VolumeSizeInGB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.VolumeSizeInGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSizeInGB = value["VolumeSizeInGB"].GetUint64();
        m_volumeSizeInGBHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeAlias") && !value["InstanceTypeAlias"].IsNull())
    {
        if (!value["InstanceTypeAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.InstanceTypeAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeAlias = string(value["InstanceTypeAlias"].GetString());
        m_instanceTypeAliasHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceType") && !value["VolumeSourceType"].IsNull())
    {
        if (!value["VolumeSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.VolumeSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSourceType = string(value["VolumeSourceType"].GetString());
        m_volumeSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceCFS") && !value["VolumeSourceCFS"].IsNull())
    {
        if (!value["VolumeSourceCFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.VolumeSourceCFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeSourceCFS.Deserialize(value["VolumeSourceCFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeSourceCFSHasBeenSet = true;
    }

    if (value.HasMember("DataConfigs") && !value["DataConfigs"].IsNull())
    {
        if (!value["DataConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.DataConfigs` is not array type"));

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

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(value["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }

    if (value.HasMember("SSHConfig") && !value["SSHConfig"].IsNull())
    {
        if (!value["SSHConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.SSHConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSHConfig.Deserialize(value["SSHConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSHConfigHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceGooseFS") && !value["VolumeSourceGooseFS"].IsNull())
    {
        if (!value["VolumeSourceGooseFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.VolumeSourceGooseFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeSourceGooseFS.Deserialize(value["VolumeSourceGooseFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeSourceGooseFSHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupInstanceId") && !value["ResourceGroupInstanceId"].IsNull())
    {
        if (!value["ResourceGroupInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.ResourceGroupInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupInstanceId = string(value["ResourceGroupInstanceId"].GetString());
        m_resourceGroupInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("JobCreateTime") && !value["JobCreateTime"].IsNull())
    {
        if (!value["JobCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.JobCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobCreateTime = string(value["JobCreateTime"].GetString());
        m_jobCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookDetail.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_lifecycleScriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleScriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_directInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_directInternetAccess, allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoStopping, allocator);
    }

    if (m_additionalCodeRepoIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalCodeRepoIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_additionalCodeRepoIds.begin(); itr != m_additionalCodeRepoIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_automaticStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_automaticStopTime, allocator);
    }

    if (m_resourceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultCodeRepoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultCodeRepoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultCodeRepoId.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_rootAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rootAccess, allocator);
    }

    if (m_billingInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_billingInfos.begin(); itr != m_billingInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTypeAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSourceCFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceCFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeSourceCFS.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

    if (m_sSHConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSHConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumeSourceGooseFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSourceGooseFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeSourceGooseFS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string NotebookDetail::GetId() const
{
    return m_id;
}

void NotebookDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NotebookDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NotebookDetail::GetName() const
{
    return m_name;
}

void NotebookDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotebookDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NotebookDetail::GetLifecycleScriptId() const
{
    return m_lifecycleScriptId;
}

void NotebookDetail::SetLifecycleScriptId(const string& _lifecycleScriptId)
{
    m_lifecycleScriptId = _lifecycleScriptId;
    m_lifecycleScriptIdHasBeenSet = true;
}

bool NotebookDetail::LifecycleScriptIdHasBeenSet() const
{
    return m_lifecycleScriptIdHasBeenSet;
}

string NotebookDetail::GetPodName() const
{
    return m_podName;
}

void NotebookDetail::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool NotebookDetail::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string NotebookDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void NotebookDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NotebookDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool NotebookDetail::GetDirectInternetAccess() const
{
    return m_directInternetAccess;
}

void NotebookDetail::SetDirectInternetAccess(const bool& _directInternetAccess)
{
    m_directInternetAccess = _directInternetAccess;
    m_directInternetAccessHasBeenSet = true;
}

bool NotebookDetail::DirectInternetAccessHasBeenSet() const
{
    return m_directInternetAccessHasBeenSet;
}

string NotebookDetail::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void NotebookDetail::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool NotebookDetail::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<Tag> NotebookDetail::GetTags() const
{
    return m_tags;
}

void NotebookDetail::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NotebookDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool NotebookDetail::GetAutoStopping() const
{
    return m_autoStopping;
}

void NotebookDetail::SetAutoStopping(const bool& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool NotebookDetail::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

vector<string> NotebookDetail::GetAdditionalCodeRepoIds() const
{
    return m_additionalCodeRepoIds;
}

void NotebookDetail::SetAdditionalCodeRepoIds(const vector<string>& _additionalCodeRepoIds)
{
    m_additionalCodeRepoIds = _additionalCodeRepoIds;
    m_additionalCodeRepoIdsHasBeenSet = true;
}

bool NotebookDetail::AdditionalCodeRepoIdsHasBeenSet() const
{
    return m_additionalCodeRepoIdsHasBeenSet;
}

int64_t NotebookDetail::GetAutomaticStopTime() const
{
    return m_automaticStopTime;
}

void NotebookDetail::SetAutomaticStopTime(const int64_t& _automaticStopTime)
{
    m_automaticStopTime = _automaticStopTime;
    m_automaticStopTimeHasBeenSet = true;
}

bool NotebookDetail::AutomaticStopTimeHasBeenSet() const
{
    return m_automaticStopTimeHasBeenSet;
}

ResourceConf NotebookDetail::GetResourceConf() const
{
    return m_resourceConf;
}

void NotebookDetail::SetResourceConf(const ResourceConf& _resourceConf)
{
    m_resourceConf = _resourceConf;
    m_resourceConfHasBeenSet = true;
}

bool NotebookDetail::ResourceConfHasBeenSet() const
{
    return m_resourceConfHasBeenSet;
}

string NotebookDetail::GetDefaultCodeRepoId() const
{
    return m_defaultCodeRepoId;
}

void NotebookDetail::SetDefaultCodeRepoId(const string& _defaultCodeRepoId)
{
    m_defaultCodeRepoId = _defaultCodeRepoId;
    m_defaultCodeRepoIdHasBeenSet = true;
}

bool NotebookDetail::DefaultCodeRepoIdHasBeenSet() const
{
    return m_defaultCodeRepoIdHasBeenSet;
}

string NotebookDetail::GetEndTime() const
{
    return m_endTime;
}

void NotebookDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NotebookDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool NotebookDetail::GetLogEnable() const
{
    return m_logEnable;
}

void NotebookDetail::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool NotebookDetail::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig NotebookDetail::GetLogConfig() const
{
    return m_logConfig;
}

void NotebookDetail::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool NotebookDetail::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

string NotebookDetail::GetVpcId() const
{
    return m_vpcId;
}

void NotebookDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NotebookDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NotebookDetail::GetSubnetId() const
{
    return m_subnetId;
}

void NotebookDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NotebookDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NotebookDetail::GetStatus() const
{
    return m_status;
}

void NotebookDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NotebookDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t NotebookDetail::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void NotebookDetail::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool NotebookDetail::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

string NotebookDetail::GetCreateTime() const
{
    return m_createTime;
}

void NotebookDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NotebookDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NotebookDetail::GetStartTime() const
{
    return m_startTime;
}

void NotebookDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NotebookDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string NotebookDetail::GetChargeStatus() const
{
    return m_chargeStatus;
}

void NotebookDetail::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool NotebookDetail::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

bool NotebookDetail::GetRootAccess() const
{
    return m_rootAccess;
}

void NotebookDetail::SetRootAccess(const bool& _rootAccess)
{
    m_rootAccess = _rootAccess;
    m_rootAccessHasBeenSet = true;
}

bool NotebookDetail::RootAccessHasBeenSet() const
{
    return m_rootAccessHasBeenSet;
}

vector<string> NotebookDetail::GetBillingInfos() const
{
    return m_billingInfos;
}

void NotebookDetail::SetBillingInfos(const vector<string>& _billingInfos)
{
    m_billingInfos = _billingInfos;
    m_billingInfosHasBeenSet = true;
}

bool NotebookDetail::BillingInfosHasBeenSet() const
{
    return m_billingInfosHasBeenSet;
}

uint64_t NotebookDetail::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void NotebookDetail::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool NotebookDetail::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

string NotebookDetail::GetFailureReason() const
{
    return m_failureReason;
}

void NotebookDetail::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool NotebookDetail::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string NotebookDetail::GetChargeType() const
{
    return m_chargeType;
}

void NotebookDetail::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool NotebookDetail::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

string NotebookDetail::GetInstanceTypeAlias() const
{
    return m_instanceTypeAlias;
}

void NotebookDetail::SetInstanceTypeAlias(const string& _instanceTypeAlias)
{
    m_instanceTypeAlias = _instanceTypeAlias;
    m_instanceTypeAliasHasBeenSet = true;
}

bool NotebookDetail::InstanceTypeAliasHasBeenSet() const
{
    return m_instanceTypeAliasHasBeenSet;
}

string NotebookDetail::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void NotebookDetail::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool NotebookDetail::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string NotebookDetail::GetVolumeSourceType() const
{
    return m_volumeSourceType;
}

void NotebookDetail::SetVolumeSourceType(const string& _volumeSourceType)
{
    m_volumeSourceType = _volumeSourceType;
    m_volumeSourceTypeHasBeenSet = true;
}

bool NotebookDetail::VolumeSourceTypeHasBeenSet() const
{
    return m_volumeSourceTypeHasBeenSet;
}

CFSConfig NotebookDetail::GetVolumeSourceCFS() const
{
    return m_volumeSourceCFS;
}

void NotebookDetail::SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS)
{
    m_volumeSourceCFS = _volumeSourceCFS;
    m_volumeSourceCFSHasBeenSet = true;
}

bool NotebookDetail::VolumeSourceCFSHasBeenSet() const
{
    return m_volumeSourceCFSHasBeenSet;
}

vector<DataConfig> NotebookDetail::GetDataConfigs() const
{
    return m_dataConfigs;
}

void NotebookDetail::SetDataConfigs(const vector<DataConfig>& _dataConfigs)
{
    m_dataConfigs = _dataConfigs;
    m_dataConfigsHasBeenSet = true;
}

bool NotebookDetail::DataConfigsHasBeenSet() const
{
    return m_dataConfigsHasBeenSet;
}

string NotebookDetail::GetMessage() const
{
    return m_message;
}

void NotebookDetail::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool NotebookDetail::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string NotebookDetail::GetDataSource() const
{
    return m_dataSource;
}

void NotebookDetail::SetDataSource(const string& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool NotebookDetail::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

ImageInfo NotebookDetail::GetImageInfo() const
{
    return m_imageInfo;
}

void NotebookDetail::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool NotebookDetail::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string NotebookDetail::GetImageType() const
{
    return m_imageType;
}

void NotebookDetail::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool NotebookDetail::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

SSHConfig NotebookDetail::GetSSHConfig() const
{
    return m_sSHConfig;
}

void NotebookDetail::SetSSHConfig(const SSHConfig& _sSHConfig)
{
    m_sSHConfig = _sSHConfig;
    m_sSHConfigHasBeenSet = true;
}

bool NotebookDetail::SSHConfigHasBeenSet() const
{
    return m_sSHConfigHasBeenSet;
}

GooseFS NotebookDetail::GetVolumeSourceGooseFS() const
{
    return m_volumeSourceGooseFS;
}

void NotebookDetail::SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS)
{
    m_volumeSourceGooseFS = _volumeSourceGooseFS;
    m_volumeSourceGooseFSHasBeenSet = true;
}

bool NotebookDetail::VolumeSourceGooseFSHasBeenSet() const
{
    return m_volumeSourceGooseFSHasBeenSet;
}

string NotebookDetail::GetSubUin() const
{
    return m_subUin;
}

void NotebookDetail::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool NotebookDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string NotebookDetail::GetResourceGroupInstanceId() const
{
    return m_resourceGroupInstanceId;
}

void NotebookDetail::SetResourceGroupInstanceId(const string& _resourceGroupInstanceId)
{
    m_resourceGroupInstanceId = _resourceGroupInstanceId;
    m_resourceGroupInstanceIdHasBeenSet = true;
}

bool NotebookDetail::ResourceGroupInstanceIdHasBeenSet() const
{
    return m_resourceGroupInstanceIdHasBeenSet;
}

string NotebookDetail::GetSubUinName() const
{
    return m_subUinName;
}

void NotebookDetail::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool NotebookDetail::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

string NotebookDetail::GetJobCreateTime() const
{
    return m_jobCreateTime;
}

void NotebookDetail::SetJobCreateTime(const string& _jobCreateTime)
{
    m_jobCreateTime = _jobCreateTime;
    m_jobCreateTimeHasBeenSet = true;
}

bool NotebookDetail::JobCreateTimeHasBeenSet() const
{
    return m_jobCreateTimeHasBeenSet;
}

string NotebookDetail::GetAppId() const
{
    return m_appId;
}

void NotebookDetail::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool NotebookDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

