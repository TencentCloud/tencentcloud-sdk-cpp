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

#include <tencentcloud/csip/v20221121/model/ScanTaskInfoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ScanTaskInfoList::ScanTaskInfoList() :
    m_taskNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_scanPlanContentHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_selfDefiningAssetsHasBeenSet(false),
    m_predictTimeHasBeenSet(false),
    m_predictEndTimeHasBeenSet(false),
    m_reportNumberHasBeenSet(false),
    m_assetNumberHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_scanItemHasBeenSet(false),
    m_scanAssetTypeHasBeenSet(false),
    m_vSSTaskIdHasBeenSet(false),
    m_cSPMTaskIdHasBeenSet(false),
    m_cWPPOCIdHasBeenSet(false),
    m_cWPBlIdHasBeenSet(false),
    m_vSSTaskProcessHasBeenSet(false),
    m_cSPMTaskProcessHasBeenSet(false),
    m_cWPPOCProcessHasBeenSet(false),
    m_cWPBlProcessHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_startDayHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_completeNumberHasBeenSet(false),
    m_completeAssetNumberHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_assetsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uINHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_taskModeHasBeenSet(false),
    m_scanFromHasBeenSet(false),
    m_isFreeHasBeenSet(false),
    m_isDeleteHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskInfoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanPlanContent") && !value["ScanPlanContent"].IsNull())
    {
        if (!value["ScanPlanContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ScanPlanContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanPlanContent = string(value["ScanPlanContent"].GetString());
        m_scanPlanContentHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("SelfDefiningAssets") && !value["SelfDefiningAssets"].IsNull())
    {
        if (!value["SelfDefiningAssets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.SelfDefiningAssets` is not array type"));

        const rapidjson::Value &tmpValue = value["SelfDefiningAssets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_selfDefiningAssets.push_back((*itr).GetString());
        }
        m_selfDefiningAssetsHasBeenSet = true;
    }

    if (value.HasMember("PredictTime") && !value["PredictTime"].IsNull())
    {
        if (!value["PredictTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.PredictTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_predictTime = value["PredictTime"].GetInt64();
        m_predictTimeHasBeenSet = true;
    }

    if (value.HasMember("PredictEndTime") && !value["PredictEndTime"].IsNull())
    {
        if (!value["PredictEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.PredictEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_predictEndTime = string(value["PredictEndTime"].GetString());
        m_predictEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportNumber") && !value["ReportNumber"].IsNull())
    {
        if (!value["ReportNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ReportNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportNumber = value["ReportNumber"].GetInt64();
        m_reportNumberHasBeenSet = true;
    }

    if (value.HasMember("AssetNumber") && !value["AssetNumber"].IsNull())
    {
        if (!value["AssetNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.AssetNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetNumber = value["AssetNumber"].GetInt64();
        m_assetNumberHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ScanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = value["ScanStatus"].GetInt64();
        m_scanStatusHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("ScanItem") && !value["ScanItem"].IsNull())
    {
        if (!value["ScanItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ScanItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanItem = string(value["ScanItem"].GetString());
        m_scanItemHasBeenSet = true;
    }

    if (value.HasMember("ScanAssetType") && !value["ScanAssetType"].IsNull())
    {
        if (!value["ScanAssetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ScanAssetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scanAssetType = value["ScanAssetType"].GetInt64();
        m_scanAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("VSSTaskId") && !value["VSSTaskId"].IsNull())
    {
        if (!value["VSSTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.VSSTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vSSTaskId = string(value["VSSTaskId"].GetString());
        m_vSSTaskIdHasBeenSet = true;
    }

    if (value.HasMember("CSPMTaskId") && !value["CSPMTaskId"].IsNull())
    {
        if (!value["CSPMTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CSPMTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSPMTaskId = string(value["CSPMTaskId"].GetString());
        m_cSPMTaskIdHasBeenSet = true;
    }

    if (value.HasMember("CWPPOCId") && !value["CWPPOCId"].IsNull())
    {
        if (!value["CWPPOCId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CWPPOCId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPPOCId = string(value["CWPPOCId"].GetString());
        m_cWPPOCIdHasBeenSet = true;
    }

    if (value.HasMember("CWPBlId") && !value["CWPBlId"].IsNull())
    {
        if (!value["CWPBlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CWPBlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPBlId = string(value["CWPBlId"].GetString());
        m_cWPBlIdHasBeenSet = true;
    }

    if (value.HasMember("VSSTaskProcess") && !value["VSSTaskProcess"].IsNull())
    {
        if (!value["VSSTaskProcess"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.VSSTaskProcess` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vSSTaskProcess = value["VSSTaskProcess"].GetInt64();
        m_vSSTaskProcessHasBeenSet = true;
    }

    if (value.HasMember("CSPMTaskProcess") && !value["CSPMTaskProcess"].IsNull())
    {
        if (!value["CSPMTaskProcess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CSPMTaskProcess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cSPMTaskProcess = value["CSPMTaskProcess"].GetUint64();
        m_cSPMTaskProcessHasBeenSet = true;
    }

    if (value.HasMember("CWPPOCProcess") && !value["CWPPOCProcess"].IsNull())
    {
        if (!value["CWPPOCProcess"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CWPPOCProcess` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPPOCProcess = value["CWPPOCProcess"].GetInt64();
        m_cWPPOCProcessHasBeenSet = true;
    }

    if (value.HasMember("CWPBlProcess") && !value["CWPBlProcess"].IsNull())
    {
        if (!value["CWPBlProcess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CWPBlProcess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPBlProcess = value["CWPBlProcess"].GetUint64();
        m_cWPBlProcessHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("StartDay") && !value["StartDay"].IsNull())
    {
        if (!value["StartDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.StartDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startDay = value["StartDay"].GetInt64();
        m_startDayHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.Frequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = value["Frequency"].GetInt64();
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("CompleteNumber") && !value["CompleteNumber"].IsNull())
    {
        if (!value["CompleteNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CompleteNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completeNumber = value["CompleteNumber"].GetInt64();
        m_completeNumberHasBeenSet = true;
    }

    if (value.HasMember("CompleteAssetNumber") && !value["CompleteAssetNumber"].IsNull())
    {
        if (!value["CompleteAssetNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.CompleteAssetNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completeAssetNumber = value["CompleteAssetNumber"].GetInt64();
        m_completeAssetNumberHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("Assets") && !value["Assets"].IsNull())
    {
        if (!value["Assets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.Assets` is not array type"));

        const rapidjson::Value &tmpValue = value["Assets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskAssetObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assets.push_back(item);
        }
        m_assetsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("UIN") && !value["UIN"].IsNull())
    {
        if (!value["UIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.UIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uIN = string(value["UIN"].GetString());
        m_uINHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("TaskMode") && !value["TaskMode"].IsNull())
    {
        if (!value["TaskMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.TaskMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskMode = value["TaskMode"].GetInt64();
        m_taskModeHasBeenSet = true;
    }

    if (value.HasMember("ScanFrom") && !value["ScanFrom"].IsNull())
    {
        if (!value["ScanFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.ScanFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanFrom = string(value["ScanFrom"].GetString());
        m_scanFromHasBeenSet = true;
    }

    if (value.HasMember("IsFree") && !value["IsFree"].IsNull())
    {
        if (!value["IsFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.IsFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFree = value["IsFree"].GetInt64();
        m_isFreeHasBeenSet = true;
    }

    if (value.HasMember("IsDelete") && !value["IsDelete"].IsNull())
    {
        if (!value["IsDelete"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.IsDelete` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelete = value["IsDelete"].GetInt64();
        m_isDeleteHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskInfoList.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskInfoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
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

    if (m_scanPlanContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanPlanContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanPlanContent.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDefiningAssetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDefiningAssets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_selfDefiningAssets.begin(); itr != m_selfDefiningAssets.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_predictTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_predictTime, allocator);
    }

    if (m_predictEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_predictEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportNumber, allocator);
    }

    if (m_assetNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetNumber, allocator);
    }

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanStatus, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_scanItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanItem.c_str(), allocator).Move(), allocator);
    }

    if (m_scanAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanAssetType, allocator);
    }

    if (m_vSSTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VSSTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vSSTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_cSPMTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSPMTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSPMTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPPOCIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPPOCId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPPOCId.c_str(), allocator).Move(), allocator);
    }

    if (m_cWPBlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPBlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPBlId.c_str(), allocator).Move(), allocator);
    }

    if (m_vSSTaskProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VSSTaskProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vSSTaskProcess, allocator);
    }

    if (m_cSPMTaskProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSPMTaskProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cSPMTaskProcess, allocator);
    }

    if (m_cWPPOCProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPPOCProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPPOCProcess, allocator);
    }

    if (m_cWPBlProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPBlProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPBlProcess, allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_startDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startDay, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequency, allocator);
    }

    if (m_completeNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completeNumber, allocator);
    }

    if (m_completeAssetNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteAssetNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completeAssetNumber, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_assetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assets.begin(); itr != m_assets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uIN.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskMode, allocator);
    }

    if (m_scanFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFree, allocator);
    }

    if (m_isDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelete, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

}


string ScanTaskInfoList::GetTaskName() const
{
    return m_taskName;
}

void ScanTaskInfoList::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ScanTaskInfoList::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string ScanTaskInfoList::GetStartTime() const
{
    return m_startTime;
}

void ScanTaskInfoList::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScanTaskInfoList::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScanTaskInfoList::GetEndTime() const
{
    return m_endTime;
}

void ScanTaskInfoList::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScanTaskInfoList::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ScanTaskInfoList::GetScanPlanContent() const
{
    return m_scanPlanContent;
}

void ScanTaskInfoList::SetScanPlanContent(const string& _scanPlanContent)
{
    m_scanPlanContent = _scanPlanContent;
    m_scanPlanContentHasBeenSet = true;
}

bool ScanTaskInfoList::ScanPlanContentHasBeenSet() const
{
    return m_scanPlanContentHasBeenSet;
}

int64_t ScanTaskInfoList::GetTaskType() const
{
    return m_taskType;
}

void ScanTaskInfoList::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool ScanTaskInfoList::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string ScanTaskInfoList::GetInsertTime() const
{
    return m_insertTime;
}

void ScanTaskInfoList::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool ScanTaskInfoList::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string ScanTaskInfoList::GetTaskId() const
{
    return m_taskId;
}

void ScanTaskInfoList::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScanTaskInfoList::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> ScanTaskInfoList::GetSelfDefiningAssets() const
{
    return m_selfDefiningAssets;
}

void ScanTaskInfoList::SetSelfDefiningAssets(const vector<string>& _selfDefiningAssets)
{
    m_selfDefiningAssets = _selfDefiningAssets;
    m_selfDefiningAssetsHasBeenSet = true;
}

bool ScanTaskInfoList::SelfDefiningAssetsHasBeenSet() const
{
    return m_selfDefiningAssetsHasBeenSet;
}

int64_t ScanTaskInfoList::GetPredictTime() const
{
    return m_predictTime;
}

void ScanTaskInfoList::SetPredictTime(const int64_t& _predictTime)
{
    m_predictTime = _predictTime;
    m_predictTimeHasBeenSet = true;
}

bool ScanTaskInfoList::PredictTimeHasBeenSet() const
{
    return m_predictTimeHasBeenSet;
}

string ScanTaskInfoList::GetPredictEndTime() const
{
    return m_predictEndTime;
}

void ScanTaskInfoList::SetPredictEndTime(const string& _predictEndTime)
{
    m_predictEndTime = _predictEndTime;
    m_predictEndTimeHasBeenSet = true;
}

bool ScanTaskInfoList::PredictEndTimeHasBeenSet() const
{
    return m_predictEndTimeHasBeenSet;
}

int64_t ScanTaskInfoList::GetReportNumber() const
{
    return m_reportNumber;
}

void ScanTaskInfoList::SetReportNumber(const int64_t& _reportNumber)
{
    m_reportNumber = _reportNumber;
    m_reportNumberHasBeenSet = true;
}

bool ScanTaskInfoList::ReportNumberHasBeenSet() const
{
    return m_reportNumberHasBeenSet;
}

int64_t ScanTaskInfoList::GetAssetNumber() const
{
    return m_assetNumber;
}

void ScanTaskInfoList::SetAssetNumber(const int64_t& _assetNumber)
{
    m_assetNumber = _assetNumber;
    m_assetNumberHasBeenSet = true;
}

bool ScanTaskInfoList::AssetNumberHasBeenSet() const
{
    return m_assetNumberHasBeenSet;
}

int64_t ScanTaskInfoList::GetScanStatus() const
{
    return m_scanStatus;
}

void ScanTaskInfoList::SetScanStatus(const int64_t& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool ScanTaskInfoList::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

double ScanTaskInfoList::GetPercent() const
{
    return m_percent;
}

void ScanTaskInfoList::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool ScanTaskInfoList::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string ScanTaskInfoList::GetScanItem() const
{
    return m_scanItem;
}

void ScanTaskInfoList::SetScanItem(const string& _scanItem)
{
    m_scanItem = _scanItem;
    m_scanItemHasBeenSet = true;
}

bool ScanTaskInfoList::ScanItemHasBeenSet() const
{
    return m_scanItemHasBeenSet;
}

int64_t ScanTaskInfoList::GetScanAssetType() const
{
    return m_scanAssetType;
}

void ScanTaskInfoList::SetScanAssetType(const int64_t& _scanAssetType)
{
    m_scanAssetType = _scanAssetType;
    m_scanAssetTypeHasBeenSet = true;
}

bool ScanTaskInfoList::ScanAssetTypeHasBeenSet() const
{
    return m_scanAssetTypeHasBeenSet;
}

string ScanTaskInfoList::GetVSSTaskId() const
{
    return m_vSSTaskId;
}

void ScanTaskInfoList::SetVSSTaskId(const string& _vSSTaskId)
{
    m_vSSTaskId = _vSSTaskId;
    m_vSSTaskIdHasBeenSet = true;
}

bool ScanTaskInfoList::VSSTaskIdHasBeenSet() const
{
    return m_vSSTaskIdHasBeenSet;
}

string ScanTaskInfoList::GetCSPMTaskId() const
{
    return m_cSPMTaskId;
}

void ScanTaskInfoList::SetCSPMTaskId(const string& _cSPMTaskId)
{
    m_cSPMTaskId = _cSPMTaskId;
    m_cSPMTaskIdHasBeenSet = true;
}

bool ScanTaskInfoList::CSPMTaskIdHasBeenSet() const
{
    return m_cSPMTaskIdHasBeenSet;
}

string ScanTaskInfoList::GetCWPPOCId() const
{
    return m_cWPPOCId;
}

void ScanTaskInfoList::SetCWPPOCId(const string& _cWPPOCId)
{
    m_cWPPOCId = _cWPPOCId;
    m_cWPPOCIdHasBeenSet = true;
}

bool ScanTaskInfoList::CWPPOCIdHasBeenSet() const
{
    return m_cWPPOCIdHasBeenSet;
}

string ScanTaskInfoList::GetCWPBlId() const
{
    return m_cWPBlId;
}

void ScanTaskInfoList::SetCWPBlId(const string& _cWPBlId)
{
    m_cWPBlId = _cWPBlId;
    m_cWPBlIdHasBeenSet = true;
}

bool ScanTaskInfoList::CWPBlIdHasBeenSet() const
{
    return m_cWPBlIdHasBeenSet;
}

int64_t ScanTaskInfoList::GetVSSTaskProcess() const
{
    return m_vSSTaskProcess;
}

void ScanTaskInfoList::SetVSSTaskProcess(const int64_t& _vSSTaskProcess)
{
    m_vSSTaskProcess = _vSSTaskProcess;
    m_vSSTaskProcessHasBeenSet = true;
}

bool ScanTaskInfoList::VSSTaskProcessHasBeenSet() const
{
    return m_vSSTaskProcessHasBeenSet;
}

uint64_t ScanTaskInfoList::GetCSPMTaskProcess() const
{
    return m_cSPMTaskProcess;
}

void ScanTaskInfoList::SetCSPMTaskProcess(const uint64_t& _cSPMTaskProcess)
{
    m_cSPMTaskProcess = _cSPMTaskProcess;
    m_cSPMTaskProcessHasBeenSet = true;
}

bool ScanTaskInfoList::CSPMTaskProcessHasBeenSet() const
{
    return m_cSPMTaskProcessHasBeenSet;
}

int64_t ScanTaskInfoList::GetCWPPOCProcess() const
{
    return m_cWPPOCProcess;
}

void ScanTaskInfoList::SetCWPPOCProcess(const int64_t& _cWPPOCProcess)
{
    m_cWPPOCProcess = _cWPPOCProcess;
    m_cWPPOCProcessHasBeenSet = true;
}

bool ScanTaskInfoList::CWPPOCProcessHasBeenSet() const
{
    return m_cWPPOCProcessHasBeenSet;
}

uint64_t ScanTaskInfoList::GetCWPBlProcess() const
{
    return m_cWPBlProcess;
}

void ScanTaskInfoList::SetCWPBlProcess(const uint64_t& _cWPBlProcess)
{
    m_cWPBlProcess = _cWPBlProcess;
    m_cWPBlProcessHasBeenSet = true;
}

bool ScanTaskInfoList::CWPBlProcessHasBeenSet() const
{
    return m_cWPBlProcessHasBeenSet;
}

int64_t ScanTaskInfoList::GetErrorCode() const
{
    return m_errorCode;
}

void ScanTaskInfoList::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool ScanTaskInfoList::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string ScanTaskInfoList::GetErrorInfo() const
{
    return m_errorInfo;
}

void ScanTaskInfoList::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool ScanTaskInfoList::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

int64_t ScanTaskInfoList::GetStartDay() const
{
    return m_startDay;
}

void ScanTaskInfoList::SetStartDay(const int64_t& _startDay)
{
    m_startDay = _startDay;
    m_startDayHasBeenSet = true;
}

bool ScanTaskInfoList::StartDayHasBeenSet() const
{
    return m_startDayHasBeenSet;
}

int64_t ScanTaskInfoList::GetFrequency() const
{
    return m_frequency;
}

void ScanTaskInfoList::SetFrequency(const int64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool ScanTaskInfoList::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

int64_t ScanTaskInfoList::GetCompleteNumber() const
{
    return m_completeNumber;
}

void ScanTaskInfoList::SetCompleteNumber(const int64_t& _completeNumber)
{
    m_completeNumber = _completeNumber;
    m_completeNumberHasBeenSet = true;
}

bool ScanTaskInfoList::CompleteNumberHasBeenSet() const
{
    return m_completeNumberHasBeenSet;
}

int64_t ScanTaskInfoList::GetCompleteAssetNumber() const
{
    return m_completeAssetNumber;
}

void ScanTaskInfoList::SetCompleteAssetNumber(const int64_t& _completeAssetNumber)
{
    m_completeAssetNumber = _completeAssetNumber;
    m_completeAssetNumberHasBeenSet = true;
}

bool ScanTaskInfoList::CompleteAssetNumberHasBeenSet() const
{
    return m_completeAssetNumberHasBeenSet;
}

int64_t ScanTaskInfoList::GetRiskCount() const
{
    return m_riskCount;
}

void ScanTaskInfoList::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool ScanTaskInfoList::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

vector<TaskAssetObject> ScanTaskInfoList::GetAssets() const
{
    return m_assets;
}

void ScanTaskInfoList::SetAssets(const vector<TaskAssetObject>& _assets)
{
    m_assets = _assets;
    m_assetsHasBeenSet = true;
}

bool ScanTaskInfoList::AssetsHasBeenSet() const
{
    return m_assetsHasBeenSet;
}

string ScanTaskInfoList::GetAppId() const
{
    return m_appId;
}

void ScanTaskInfoList::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ScanTaskInfoList::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ScanTaskInfoList::GetUIN() const
{
    return m_uIN;
}

void ScanTaskInfoList::SetUIN(const string& _uIN)
{
    m_uIN = _uIN;
    m_uINHasBeenSet = true;
}

bool ScanTaskInfoList::UINHasBeenSet() const
{
    return m_uINHasBeenSet;
}

string ScanTaskInfoList::GetUserName() const
{
    return m_userName;
}

void ScanTaskInfoList::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ScanTaskInfoList::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

int64_t ScanTaskInfoList::GetTaskMode() const
{
    return m_taskMode;
}

void ScanTaskInfoList::SetTaskMode(const int64_t& _taskMode)
{
    m_taskMode = _taskMode;
    m_taskModeHasBeenSet = true;
}

bool ScanTaskInfoList::TaskModeHasBeenSet() const
{
    return m_taskModeHasBeenSet;
}

string ScanTaskInfoList::GetScanFrom() const
{
    return m_scanFrom;
}

void ScanTaskInfoList::SetScanFrom(const string& _scanFrom)
{
    m_scanFrom = _scanFrom;
    m_scanFromHasBeenSet = true;
}

bool ScanTaskInfoList::ScanFromHasBeenSet() const
{
    return m_scanFromHasBeenSet;
}

int64_t ScanTaskInfoList::GetIsFree() const
{
    return m_isFree;
}

void ScanTaskInfoList::SetIsFree(const int64_t& _isFree)
{
    m_isFree = _isFree;
    m_isFreeHasBeenSet = true;
}

bool ScanTaskInfoList::IsFreeHasBeenSet() const
{
    return m_isFreeHasBeenSet;
}

int64_t ScanTaskInfoList::GetIsDelete() const
{
    return m_isDelete;
}

void ScanTaskInfoList::SetIsDelete(const int64_t& _isDelete)
{
    m_isDelete = _isDelete;
    m_isDeleteHasBeenSet = true;
}

bool ScanTaskInfoList::IsDeleteHasBeenSet() const
{
    return m_isDeleteHasBeenSet;
}

int64_t ScanTaskInfoList::GetSourceType() const
{
    return m_sourceType;
}

void ScanTaskInfoList::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ScanTaskInfoList::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

