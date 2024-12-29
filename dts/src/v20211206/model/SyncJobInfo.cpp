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

#include <tencentcloud/dts/v20211206/model/SyncJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SyncJobInfo::SyncJobInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_expectRunTimeHasBeenSet(false),
    m_allActionsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_specificationHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_srcNodeTypeHasBeenSet(false),
    m_srcInfosHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_dstNodeTypeHasBeenSet(false),
    m_dstInfosHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_instanceClassHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_optObjStatusHasBeenSet(false),
    m_autoRetryTimeRangeMinutesHasBeenSet(false),
    m_dumperResumeCtrlHasBeenSet(false)
{
}

CoreInternalOutcome SyncJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.RunMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = string(value["RunMode"].GetString());
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("ExpectRunTime") && !value["ExpectRunTime"].IsNull())
    {
        if (!value["ExpectRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.ExpectRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectRunTime = string(value["ExpectRunTime"].GetString());
        m_expectRunTimeHasBeenSet = true;
    }

    if (value.HasMember("AllActions") && !value["AllActions"].IsNull())
    {
        if (!value["AllActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.AllActions` is not array type"));

        const rapidjson::Value &tmpValue = value["AllActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allActions.push_back((*itr).GetString());
        }
        m_allActionsHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Actions` is not array type"));

        const rapidjson::Value &tmpValue = value["Actions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_actions.push_back((*itr).GetString());
        }
        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Options` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_options.Deserialize(value["Options"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("Objects") && !value["Objects"].IsNull())
    {
        if (!value["Objects"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Objects` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objects.Deserialize(value["Objects"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectsHasBeenSet = true;
    }

    if (value.HasMember("Specification") && !value["Specification"].IsNull())
    {
        if (!value["Specification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Specification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specification = string(value["Specification"].GetString());
        m_specificationHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("SrcRegion") && !value["SrcRegion"].IsNull())
    {
        if (!value["SrcRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcRegion = string(value["SrcRegion"].GetString());
        m_srcRegionHasBeenSet = true;
    }

    if (value.HasMember("SrcDatabaseType") && !value["SrcDatabaseType"].IsNull())
    {
        if (!value["SrcDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDatabaseType = string(value["SrcDatabaseType"].GetString());
        m_srcDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcAccessType") && !value["SrcAccessType"].IsNull())
    {
        if (!value["SrcAccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcAccessType = string(value["SrcAccessType"].GetString());
        m_srcAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcInfo") && !value["SrcInfo"].IsNull())
    {
        if (!value["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(value["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (value.HasMember("SrcNodeType") && !value["SrcNodeType"].IsNull())
    {
        if (!value["SrcNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcNodeType = string(value["SrcNodeType"].GetString());
        m_srcNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcInfos") && !value["SrcInfos"].IsNull())
    {
        if (!value["SrcInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.SrcInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfos.Deserialize(value["SrcInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfosHasBeenSet = true;
    }

    if (value.HasMember("DstRegion") && !value["DstRegion"].IsNull())
    {
        if (!value["DstRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstRegion = string(value["DstRegion"].GetString());
        m_dstRegionHasBeenSet = true;
    }

    if (value.HasMember("DstDatabaseType") && !value["DstDatabaseType"].IsNull())
    {
        if (!value["DstDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDatabaseType = string(value["DstDatabaseType"].GetString());
        m_dstDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("DstAccessType") && !value["DstAccessType"].IsNull())
    {
        if (!value["DstAccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAccessType = string(value["DstAccessType"].GetString());
        m_dstAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("DstInfo") && !value["DstInfo"].IsNull())
    {
        if (!value["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(value["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }

    if (value.HasMember("DstNodeType") && !value["DstNodeType"].IsNull())
    {
        if (!value["DstNodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstNodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstNodeType = string(value["DstNodeType"].GetString());
        m_dstNodeTypeHasBeenSet = true;
    }

    if (value.HasMember("DstInfos") && !value["DstInfos"].IsNull())
    {
        if (!value["DstInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DstInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfos.Deserialize(value["DstInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfosHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
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

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }

    if (value.HasMember("TradeStatus") && !value["TradeStatus"].IsNull())
    {
        if (!value["TradeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.TradeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = string(value["TradeStatus"].GetString());
        m_tradeStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceClass") && !value["InstanceClass"].IsNull())
    {
        if (!value["InstanceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.InstanceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceClass = string(value["InstanceClass"].GetString());
        m_instanceClassHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("OptObjStatus") && !value["OptObjStatus"].IsNull())
    {
        if (!value["OptObjStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.OptObjStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optObjStatus = string(value["OptObjStatus"].GetString());
        m_optObjStatusHasBeenSet = true;
    }

    if (value.HasMember("AutoRetryTimeRangeMinutes") && !value["AutoRetryTimeRangeMinutes"].IsNull())
    {
        if (!value["AutoRetryTimeRangeMinutes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.AutoRetryTimeRangeMinutes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRetryTimeRangeMinutes = value["AutoRetryTimeRangeMinutes"].GetInt64();
        m_autoRetryTimeRangeMinutesHasBeenSet = true;
    }

    if (value.HasMember("DumperResumeCtrl") && !value["DumperResumeCtrl"].IsNull())
    {
        if (!value["DumperResumeCtrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SyncJobInfo.DumperResumeCtrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dumperResumeCtrl = string(value["DumperResumeCtrl"].GetString());
        m_dumperResumeCtrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expectRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_allActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allActions.begin(); itr != m_allActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Specification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specification.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstNodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstNodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfos.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_optObjStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptObjStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optObjStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRetryTimeRangeMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRetryTimeRangeMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRetryTimeRangeMinutes, allocator);
    }

    if (m_dumperResumeCtrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumperResumeCtrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dumperResumeCtrl.c_str(), allocator).Move(), allocator);
    }

}


string SyncJobInfo::GetJobId() const
{
    return m_jobId;
}

void SyncJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SyncJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string SyncJobInfo::GetJobName() const
{
    return m_jobName;
}

void SyncJobInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool SyncJobInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string SyncJobInfo::GetPayMode() const
{
    return m_payMode;
}

void SyncJobInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool SyncJobInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string SyncJobInfo::GetRunMode() const
{
    return m_runMode;
}

void SyncJobInfo::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool SyncJobInfo::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string SyncJobInfo::GetExpectRunTime() const
{
    return m_expectRunTime;
}

void SyncJobInfo::SetExpectRunTime(const string& _expectRunTime)
{
    m_expectRunTime = _expectRunTime;
    m_expectRunTimeHasBeenSet = true;
}

bool SyncJobInfo::ExpectRunTimeHasBeenSet() const
{
    return m_expectRunTimeHasBeenSet;
}

vector<string> SyncJobInfo::GetAllActions() const
{
    return m_allActions;
}

void SyncJobInfo::SetAllActions(const vector<string>& _allActions)
{
    m_allActions = _allActions;
    m_allActionsHasBeenSet = true;
}

bool SyncJobInfo::AllActionsHasBeenSet() const
{
    return m_allActionsHasBeenSet;
}

vector<string> SyncJobInfo::GetActions() const
{
    return m_actions;
}

void SyncJobInfo::SetActions(const vector<string>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool SyncJobInfo::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

Options SyncJobInfo::GetOptions() const
{
    return m_options;
}

void SyncJobInfo::SetOptions(const Options& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool SyncJobInfo::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

Objects SyncJobInfo::GetObjects() const
{
    return m_objects;
}

void SyncJobInfo::SetObjects(const Objects& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool SyncJobInfo::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

string SyncJobInfo::GetSpecification() const
{
    return m_specification;
}

void SyncJobInfo::SetSpecification(const string& _specification)
{
    m_specification = _specification;
    m_specificationHasBeenSet = true;
}

bool SyncJobInfo::SpecificationHasBeenSet() const
{
    return m_specificationHasBeenSet;
}

string SyncJobInfo::GetExpireTime() const
{
    return m_expireTime;
}

void SyncJobInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool SyncJobInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string SyncJobInfo::GetSrcRegion() const
{
    return m_srcRegion;
}

void SyncJobInfo::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool SyncJobInfo::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

string SyncJobInfo::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void SyncJobInfo::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool SyncJobInfo::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string SyncJobInfo::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void SyncJobInfo::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool SyncJobInfo::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

Endpoint SyncJobInfo::GetSrcInfo() const
{
    return m_srcInfo;
}

void SyncJobInfo::SetSrcInfo(const Endpoint& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool SyncJobInfo::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string SyncJobInfo::GetSrcNodeType() const
{
    return m_srcNodeType;
}

void SyncJobInfo::SetSrcNodeType(const string& _srcNodeType)
{
    m_srcNodeType = _srcNodeType;
    m_srcNodeTypeHasBeenSet = true;
}

bool SyncJobInfo::SrcNodeTypeHasBeenSet() const
{
    return m_srcNodeTypeHasBeenSet;
}

SyncDBEndpointInfos SyncJobInfo::GetSrcInfos() const
{
    return m_srcInfos;
}

void SyncJobInfo::SetSrcInfos(const SyncDBEndpointInfos& _srcInfos)
{
    m_srcInfos = _srcInfos;
    m_srcInfosHasBeenSet = true;
}

bool SyncJobInfo::SrcInfosHasBeenSet() const
{
    return m_srcInfosHasBeenSet;
}

string SyncJobInfo::GetDstRegion() const
{
    return m_dstRegion;
}

void SyncJobInfo::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool SyncJobInfo::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

string SyncJobInfo::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void SyncJobInfo::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool SyncJobInfo::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string SyncJobInfo::GetDstAccessType() const
{
    return m_dstAccessType;
}

void SyncJobInfo::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool SyncJobInfo::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

Endpoint SyncJobInfo::GetDstInfo() const
{
    return m_dstInfo;
}

void SyncJobInfo::SetDstInfo(const Endpoint& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool SyncJobInfo::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string SyncJobInfo::GetDstNodeType() const
{
    return m_dstNodeType;
}

void SyncJobInfo::SetDstNodeType(const string& _dstNodeType)
{
    m_dstNodeType = _dstNodeType;
    m_dstNodeTypeHasBeenSet = true;
}

bool SyncJobInfo::DstNodeTypeHasBeenSet() const
{
    return m_dstNodeTypeHasBeenSet;
}

SyncDBEndpointInfos SyncJobInfo::GetDstInfos() const
{
    return m_dstInfos;
}

void SyncJobInfo::SetDstInfos(const SyncDBEndpointInfos& _dstInfos)
{
    m_dstInfos = _dstInfos;
    m_dstInfosHasBeenSet = true;
}

bool SyncJobInfo::DstInfosHasBeenSet() const
{
    return m_dstInfosHasBeenSet;
}

string SyncJobInfo::GetCreateTime() const
{
    return m_createTime;
}

void SyncJobInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SyncJobInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SyncJobInfo::GetStartTime() const
{
    return m_startTime;
}

void SyncJobInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SyncJobInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SyncJobInfo::GetStatus() const
{
    return m_status;
}

void SyncJobInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SyncJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SyncJobInfo::GetEndTime() const
{
    return m_endTime;
}

void SyncJobInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SyncJobInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<TagItem> SyncJobInfo::GetTags() const
{
    return m_tags;
}

void SyncJobInfo::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SyncJobInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

SyncDetailInfo SyncJobInfo::GetDetail() const
{
    return m_detail;
}

void SyncJobInfo::SetDetail(const SyncDetailInfo& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SyncJobInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

string SyncJobInfo::GetTradeStatus() const
{
    return m_tradeStatus;
}

void SyncJobInfo::SetTradeStatus(const string& _tradeStatus)
{
    m_tradeStatus = _tradeStatus;
    m_tradeStatusHasBeenSet = true;
}

bool SyncJobInfo::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string SyncJobInfo::GetInstanceClass() const
{
    return m_instanceClass;
}

void SyncJobInfo::SetInstanceClass(const string& _instanceClass)
{
    m_instanceClass = _instanceClass;
    m_instanceClassHasBeenSet = true;
}

bool SyncJobInfo::InstanceClassHasBeenSet() const
{
    return m_instanceClassHasBeenSet;
}

uint64_t SyncJobInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void SyncJobInfo::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool SyncJobInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

string SyncJobInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void SyncJobInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool SyncJobInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string SyncJobInfo::GetOptObjStatus() const
{
    return m_optObjStatus;
}

void SyncJobInfo::SetOptObjStatus(const string& _optObjStatus)
{
    m_optObjStatus = _optObjStatus;
    m_optObjStatusHasBeenSet = true;
}

bool SyncJobInfo::OptObjStatusHasBeenSet() const
{
    return m_optObjStatusHasBeenSet;
}

int64_t SyncJobInfo::GetAutoRetryTimeRangeMinutes() const
{
    return m_autoRetryTimeRangeMinutes;
}

void SyncJobInfo::SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes)
{
    m_autoRetryTimeRangeMinutes = _autoRetryTimeRangeMinutes;
    m_autoRetryTimeRangeMinutesHasBeenSet = true;
}

bool SyncJobInfo::AutoRetryTimeRangeMinutesHasBeenSet() const
{
    return m_autoRetryTimeRangeMinutesHasBeenSet;
}

string SyncJobInfo::GetDumperResumeCtrl() const
{
    return m_dumperResumeCtrl;
}

void SyncJobInfo::SetDumperResumeCtrl(const string& _dumperResumeCtrl)
{
    m_dumperResumeCtrl = _dumperResumeCtrl;
    m_dumperResumeCtrlHasBeenSet = true;
}

bool SyncJobInfo::DumperResumeCtrlHasBeenSet() const
{
    return m_dumperResumeCtrlHasBeenSet;
}

