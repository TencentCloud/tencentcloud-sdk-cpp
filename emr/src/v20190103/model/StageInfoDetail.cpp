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

#include <tencentcloud/emr/v20190103/model/StageInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

StageInfoDetail::StageInfoDetail() :
    m_stageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isShowHasBeenSet(false),
    m_isSubFlowHasBeenSet(false),
    m_subFlowFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_starttimeHasBeenSet(false),
    m_endtimeHasBeenSet(false),
    m_hadWoodDetailHasBeenSet(false),
    m_woodJobIdHasBeenSet(false),
    m_languageKeyHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_timeConsumingHasBeenSet(false)
{
}

CoreInternalOutcome StageInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(value["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsShow") && !value["IsShow"].IsNull())
    {
        if (!value["IsShow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.IsShow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShow = value["IsShow"].GetBool();
        m_isShowHasBeenSet = true;
    }

    if (value.HasMember("IsSubFlow") && !value["IsSubFlow"].IsNull())
    {
        if (!value["IsSubFlow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.IsSubFlow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSubFlow = value["IsSubFlow"].GetBool();
        m_isSubFlowHasBeenSet = true;
    }

    if (value.HasMember("SubFlowFlag") && !value["SubFlowFlag"].IsNull())
    {
        if (!value["SubFlowFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.SubFlowFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subFlowFlag = string(value["SubFlowFlag"].GetString());
        m_subFlowFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Starttime") && !value["Starttime"].IsNull())
    {
        if (!value["Starttime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Starttime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_starttime = string(value["Starttime"].GetString());
        m_starttimeHasBeenSet = true;
    }

    if (value.HasMember("Endtime") && !value["Endtime"].IsNull())
    {
        if (!value["Endtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.Endtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endtime = string(value["Endtime"].GetString());
        m_endtimeHasBeenSet = true;
    }

    if (value.HasMember("HadWoodDetail") && !value["HadWoodDetail"].IsNull())
    {
        if (!value["HadWoodDetail"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.HadWoodDetail` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hadWoodDetail = value["HadWoodDetail"].GetBool();
        m_hadWoodDetailHasBeenSet = true;
    }

    if (value.HasMember("WoodJobId") && !value["WoodJobId"].IsNull())
    {
        if (!value["WoodJobId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.WoodJobId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_woodJobId = value["WoodJobId"].GetUint64();
        m_woodJobIdHasBeenSet = true;
    }

    if (value.HasMember("LanguageKey") && !value["LanguageKey"].IsNull())
    {
        if (!value["LanguageKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.LanguageKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageKey = string(value["LanguageKey"].GetString());
        m_languageKeyHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("TimeConsuming") && !value["TimeConsuming"].IsNull())
    {
        if (!value["TimeConsuming"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StageInfoDetail.TimeConsuming` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeConsuming = string(value["TimeConsuming"].GetString());
        m_timeConsumingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StageInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShow, allocator);
    }

    if (m_isSubFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSubFlow, allocator);
    }

    if (m_subFlowFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubFlowFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subFlowFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_starttimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Starttime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_starttime.c_str(), allocator).Move(), allocator);
    }

    if (m_endtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endtime.c_str(), allocator).Move(), allocator);
    }

    if (m_hadWoodDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HadWoodDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hadWoodDetail, allocator);
    }

    if (m_woodJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WoodJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_woodJobId, allocator);
    }

    if (m_languageKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageKey.c_str(), allocator).Move(), allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_timeConsumingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeConsuming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeConsuming.c_str(), allocator).Move(), allocator);
    }

}


string StageInfoDetail::GetStage() const
{
    return m_stage;
}

void StageInfoDetail::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool StageInfoDetail::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

string StageInfoDetail::GetName() const
{
    return m_name;
}

void StageInfoDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StageInfoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool StageInfoDetail::GetIsShow() const
{
    return m_isShow;
}

void StageInfoDetail::SetIsShow(const bool& _isShow)
{
    m_isShow = _isShow;
    m_isShowHasBeenSet = true;
}

bool StageInfoDetail::IsShowHasBeenSet() const
{
    return m_isShowHasBeenSet;
}

bool StageInfoDetail::GetIsSubFlow() const
{
    return m_isSubFlow;
}

void StageInfoDetail::SetIsSubFlow(const bool& _isSubFlow)
{
    m_isSubFlow = _isSubFlow;
    m_isSubFlowHasBeenSet = true;
}

bool StageInfoDetail::IsSubFlowHasBeenSet() const
{
    return m_isSubFlowHasBeenSet;
}

string StageInfoDetail::GetSubFlowFlag() const
{
    return m_subFlowFlag;
}

void StageInfoDetail::SetSubFlowFlag(const string& _subFlowFlag)
{
    m_subFlowFlag = _subFlowFlag;
    m_subFlowFlagHasBeenSet = true;
}

bool StageInfoDetail::SubFlowFlagHasBeenSet() const
{
    return m_subFlowFlagHasBeenSet;
}

int64_t StageInfoDetail::GetStatus() const
{
    return m_status;
}

void StageInfoDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StageInfoDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string StageInfoDetail::GetDesc() const
{
    return m_desc;
}

void StageInfoDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool StageInfoDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

double StageInfoDetail::GetProgress() const
{
    return m_progress;
}

void StageInfoDetail::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool StageInfoDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string StageInfoDetail::GetStarttime() const
{
    return m_starttime;
}

void StageInfoDetail::SetStarttime(const string& _starttime)
{
    m_starttime = _starttime;
    m_starttimeHasBeenSet = true;
}

bool StageInfoDetail::StarttimeHasBeenSet() const
{
    return m_starttimeHasBeenSet;
}

string StageInfoDetail::GetEndtime() const
{
    return m_endtime;
}

void StageInfoDetail::SetEndtime(const string& _endtime)
{
    m_endtime = _endtime;
    m_endtimeHasBeenSet = true;
}

bool StageInfoDetail::EndtimeHasBeenSet() const
{
    return m_endtimeHasBeenSet;
}

bool StageInfoDetail::GetHadWoodDetail() const
{
    return m_hadWoodDetail;
}

void StageInfoDetail::SetHadWoodDetail(const bool& _hadWoodDetail)
{
    m_hadWoodDetail = _hadWoodDetail;
    m_hadWoodDetailHasBeenSet = true;
}

bool StageInfoDetail::HadWoodDetailHasBeenSet() const
{
    return m_hadWoodDetailHasBeenSet;
}

uint64_t StageInfoDetail::GetWoodJobId() const
{
    return m_woodJobId;
}

void StageInfoDetail::SetWoodJobId(const uint64_t& _woodJobId)
{
    m_woodJobId = _woodJobId;
    m_woodJobIdHasBeenSet = true;
}

bool StageInfoDetail::WoodJobIdHasBeenSet() const
{
    return m_woodJobIdHasBeenSet;
}

string StageInfoDetail::GetLanguageKey() const
{
    return m_languageKey;
}

void StageInfoDetail::SetLanguageKey(const string& _languageKey)
{
    m_languageKey = _languageKey;
    m_languageKeyHasBeenSet = true;
}

bool StageInfoDetail::LanguageKeyHasBeenSet() const
{
    return m_languageKeyHasBeenSet;
}

string StageInfoDetail::GetFailedReason() const
{
    return m_failedReason;
}

void StageInfoDetail::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool StageInfoDetail::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

string StageInfoDetail::GetTimeConsuming() const
{
    return m_timeConsuming;
}

void StageInfoDetail::SetTimeConsuming(const string& _timeConsuming)
{
    m_timeConsuming = _timeConsuming;
    m_timeConsumingHasBeenSet = true;
}

bool StageInfoDetail::TimeConsumingHasBeenSet() const
{
    return m_timeConsumingHasBeenSet;
}

