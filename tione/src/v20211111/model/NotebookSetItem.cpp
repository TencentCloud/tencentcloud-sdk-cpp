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

#include <tencentcloud/tione/v20211111/model/NotebookSetItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

NotebookSetItem::NotebookSetItem() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceConfHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_volumeSizeInGBHasBeenSet(false),
    m_billingInfosHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_runtimeInSecondsHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_instanceTypeAliasHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_autoStoppingHasBeenSet(false),
    m_automaticStopTimeHasBeenSet(false),
    m_volumeSourceTypeHasBeenSet(false),
    m_volumeSourceCFSHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_userTypesHasBeenSet(false),
    m_sSHConfigHasBeenSet(false),
    m_volumeSourceGooseFSHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome NotebookSetItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.ChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = string(value["ChargeType"].GetString());
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceConf") && !value["ResourceConf"].IsNull())
    {
        if (!value["ResourceConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.ResourceConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConf.Deserialize(value["ResourceConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("VolumeSizeInGB") && !value["VolumeSizeInGB"].IsNull())
    {
        if (!value["VolumeSizeInGB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.VolumeSizeInGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSizeInGB = value["VolumeSizeInGB"].GetUint64();
        m_volumeSizeInGBHasBeenSet = true;
    }

    if (value.HasMember("BillingInfos") && !value["BillingInfos"].IsNull())
    {
        if (!value["BillingInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.BillingInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_billingInfos.push_back((*itr).GetString());
        }
        m_billingInfosHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.Tags` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeInSeconds") && !value["RuntimeInSeconds"].IsNull())
    {
        if (!value["RuntimeInSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.RuntimeInSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeInSeconds = value["RuntimeInSeconds"].GetUint64();
        m_runtimeInSecondsHasBeenSet = true;
    }

    if (value.HasMember("ChargeStatus") && !value["ChargeStatus"].IsNull())
    {
        if (!value["ChargeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.ChargeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = string(value["ChargeStatus"].GetString());
        m_chargeStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeAlias") && !value["InstanceTypeAlias"].IsNull())
    {
        if (!value["InstanceTypeAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.InstanceTypeAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTypeAlias = string(value["InstanceTypeAlias"].GetString());
        m_instanceTypeAliasHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("AutoStopping") && !value["AutoStopping"].IsNull())
    {
        if (!value["AutoStopping"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.AutoStopping` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoStopping = value["AutoStopping"].GetBool();
        m_autoStoppingHasBeenSet = true;
    }

    if (value.HasMember("AutomaticStopTime") && !value["AutomaticStopTime"].IsNull())
    {
        if (!value["AutomaticStopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.AutomaticStopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_automaticStopTime = value["AutomaticStopTime"].GetUint64();
        m_automaticStopTimeHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceType") && !value["VolumeSourceType"].IsNull())
    {
        if (!value["VolumeSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.VolumeSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSourceType = string(value["VolumeSourceType"].GetString());
        m_volumeSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("VolumeSourceCFS") && !value["VolumeSourceCFS"].IsNull())
    {
        if (!value["VolumeSourceCFS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.VolumeSourceCFS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_volumeSourceCFS.Deserialize(value["VolumeSourceCFS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_volumeSourceCFSHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("UserTypes") && !value["UserTypes"].IsNull())
    {
        if (!value["UserTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.UserTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["UserTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userTypes.push_back((*itr).GetString());
        }
        m_userTypesHasBeenSet = true;
    }

    if (value.HasMember("SSHConfig") && !value["SSHConfig"].IsNull())
    {
        if (!value["SSHConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.SSHConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.VolumeSourceGooseFS` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotebookSetItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookSetItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeSizeInGB, allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeInSeconds, allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chargeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
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

    if (m_autoStoppingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStopping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoStopping, allocator);
    }

    if (m_automaticStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutomaticStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_automaticStopTime, allocator);
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

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_userTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userTypes.begin(); itr != m_userTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string NotebookSetItem::GetId() const
{
    return m_id;
}

void NotebookSetItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NotebookSetItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NotebookSetItem::GetName() const
{
    return m_name;
}

void NotebookSetItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NotebookSetItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NotebookSetItem::GetChargeType() const
{
    return m_chargeType;
}

void NotebookSetItem::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool NotebookSetItem::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

ResourceConf NotebookSetItem::GetResourceConf() const
{
    return m_resourceConf;
}

void NotebookSetItem::SetResourceConf(const ResourceConf& _resourceConf)
{
    m_resourceConf = _resourceConf;
    m_resourceConfHasBeenSet = true;
}

bool NotebookSetItem::ResourceConfHasBeenSet() const
{
    return m_resourceConfHasBeenSet;
}

string NotebookSetItem::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void NotebookSetItem::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool NotebookSetItem::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

uint64_t NotebookSetItem::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void NotebookSetItem::SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool NotebookSetItem::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

vector<string> NotebookSetItem::GetBillingInfos() const
{
    return m_billingInfos;
}

void NotebookSetItem::SetBillingInfos(const vector<string>& _billingInfos)
{
    m_billingInfos = _billingInfos;
    m_billingInfosHasBeenSet = true;
}

bool NotebookSetItem::BillingInfosHasBeenSet() const
{
    return m_billingInfosHasBeenSet;
}

vector<Tag> NotebookSetItem::GetTags() const
{
    return m_tags;
}

void NotebookSetItem::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NotebookSetItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string NotebookSetItem::GetCreateTime() const
{
    return m_createTime;
}

void NotebookSetItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NotebookSetItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NotebookSetItem::GetStartTime() const
{
    return m_startTime;
}

void NotebookSetItem::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NotebookSetItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string NotebookSetItem::GetUpdateTime() const
{
    return m_updateTime;
}

void NotebookSetItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NotebookSetItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t NotebookSetItem::GetRuntimeInSeconds() const
{
    return m_runtimeInSeconds;
}

void NotebookSetItem::SetRuntimeInSeconds(const uint64_t& _runtimeInSeconds)
{
    m_runtimeInSeconds = _runtimeInSeconds;
    m_runtimeInSecondsHasBeenSet = true;
}

bool NotebookSetItem::RuntimeInSecondsHasBeenSet() const
{
    return m_runtimeInSecondsHasBeenSet;
}

string NotebookSetItem::GetChargeStatus() const
{
    return m_chargeStatus;
}

void NotebookSetItem::SetChargeStatus(const string& _chargeStatus)
{
    m_chargeStatus = _chargeStatus;
    m_chargeStatusHasBeenSet = true;
}

bool NotebookSetItem::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

string NotebookSetItem::GetStatus() const
{
    return m_status;
}

void NotebookSetItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NotebookSetItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NotebookSetItem::GetFailureReason() const
{
    return m_failureReason;
}

void NotebookSetItem::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool NotebookSetItem::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string NotebookSetItem::GetEndTime() const
{
    return m_endTime;
}

void NotebookSetItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool NotebookSetItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string NotebookSetItem::GetPodName() const
{
    return m_podName;
}

void NotebookSetItem::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool NotebookSetItem::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string NotebookSetItem::GetInstanceTypeAlias() const
{
    return m_instanceTypeAlias;
}

void NotebookSetItem::SetInstanceTypeAlias(const string& _instanceTypeAlias)
{
    m_instanceTypeAlias = _instanceTypeAlias;
    m_instanceTypeAliasHasBeenSet = true;
}

bool NotebookSetItem::InstanceTypeAliasHasBeenSet() const
{
    return m_instanceTypeAliasHasBeenSet;
}

string NotebookSetItem::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void NotebookSetItem::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool NotebookSetItem::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

bool NotebookSetItem::GetAutoStopping() const
{
    return m_autoStopping;
}

void NotebookSetItem::SetAutoStopping(const bool& _autoStopping)
{
    m_autoStopping = _autoStopping;
    m_autoStoppingHasBeenSet = true;
}

bool NotebookSetItem::AutoStoppingHasBeenSet() const
{
    return m_autoStoppingHasBeenSet;
}

uint64_t NotebookSetItem::GetAutomaticStopTime() const
{
    return m_automaticStopTime;
}

void NotebookSetItem::SetAutomaticStopTime(const uint64_t& _automaticStopTime)
{
    m_automaticStopTime = _automaticStopTime;
    m_automaticStopTimeHasBeenSet = true;
}

bool NotebookSetItem::AutomaticStopTimeHasBeenSet() const
{
    return m_automaticStopTimeHasBeenSet;
}

string NotebookSetItem::GetVolumeSourceType() const
{
    return m_volumeSourceType;
}

void NotebookSetItem::SetVolumeSourceType(const string& _volumeSourceType)
{
    m_volumeSourceType = _volumeSourceType;
    m_volumeSourceTypeHasBeenSet = true;
}

bool NotebookSetItem::VolumeSourceTypeHasBeenSet() const
{
    return m_volumeSourceTypeHasBeenSet;
}

CFSConfig NotebookSetItem::GetVolumeSourceCFS() const
{
    return m_volumeSourceCFS;
}

void NotebookSetItem::SetVolumeSourceCFS(const CFSConfig& _volumeSourceCFS)
{
    m_volumeSourceCFS = _volumeSourceCFS;
    m_volumeSourceCFSHasBeenSet = true;
}

bool NotebookSetItem::VolumeSourceCFSHasBeenSet() const
{
    return m_volumeSourceCFSHasBeenSet;
}

string NotebookSetItem::GetMessage() const
{
    return m_message;
}

void NotebookSetItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool NotebookSetItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<string> NotebookSetItem::GetUserTypes() const
{
    return m_userTypes;
}

void NotebookSetItem::SetUserTypes(const vector<string>& _userTypes)
{
    m_userTypes = _userTypes;
    m_userTypesHasBeenSet = true;
}

bool NotebookSetItem::UserTypesHasBeenSet() const
{
    return m_userTypesHasBeenSet;
}

SSHConfig NotebookSetItem::GetSSHConfig() const
{
    return m_sSHConfig;
}

void NotebookSetItem::SetSSHConfig(const SSHConfig& _sSHConfig)
{
    m_sSHConfig = _sSHConfig;
    m_sSHConfigHasBeenSet = true;
}

bool NotebookSetItem::SSHConfigHasBeenSet() const
{
    return m_sSHConfigHasBeenSet;
}

GooseFS NotebookSetItem::GetVolumeSourceGooseFS() const
{
    return m_volumeSourceGooseFS;
}

void NotebookSetItem::SetVolumeSourceGooseFS(const GooseFS& _volumeSourceGooseFS)
{
    m_volumeSourceGooseFS = _volumeSourceGooseFS;
    m_volumeSourceGooseFSHasBeenSet = true;
}

bool NotebookSetItem::VolumeSourceGooseFSHasBeenSet() const
{
    return m_volumeSourceGooseFSHasBeenSet;
}

string NotebookSetItem::GetSubUin() const
{
    return m_subUin;
}

void NotebookSetItem::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool NotebookSetItem::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string NotebookSetItem::GetSubUinName() const
{
    return m_subUinName;
}

void NotebookSetItem::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool NotebookSetItem::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

string NotebookSetItem::GetAppId() const
{
    return m_appId;
}

void NotebookSetItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool NotebookSetItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

