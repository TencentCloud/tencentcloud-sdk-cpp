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

#include <tencentcloud/live/v20180801/model/LiveStreamMonitorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveStreamMonitorInfo::LiveStreamMonitorInfo() :
    m_monitorIdHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_outputInfoHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stopTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_notifyPolicyHasBeenSet(false),
    m_audibleInputIndexListHasBeenSet(false),
    m_aiAsrInputIndexListHasBeenSet(false),
    m_checkStreamBrokenHasBeenSet(false),
    m_checkStreamLowFrameRateHasBeenSet(false),
    m_asrLanguageHasBeenSet(false),
    m_ocrLanguageHasBeenSet(false),
    m_aiOcrInputIndexListHasBeenSet(false),
    m_allowMonitorReportHasBeenSet(false),
    m_aiFormatDiagnoseHasBeenSet(false),
    m_aiQualityControlHasBeenSet(false),
    m_casterIdHasBeenSet(false),
    m_pullPushTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamMonitorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MonitorId") && !value["MonitorId"].IsNull())
    {
        if (!value["MonitorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.MonitorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorId = string(value["MonitorId"].GetString());
        m_monitorIdHasBeenSet = true;
    }

    if (value.HasMember("MonitorName") && !value["MonitorName"].IsNull())
    {
        if (!value["MonitorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.MonitorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorName = string(value["MonitorName"].GetString());
        m_monitorNameHasBeenSet = true;
    }

    if (value.HasMember("OutputInfo") && !value["OutputInfo"].IsNull())
    {
        if (!value["OutputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.OutputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputInfo.Deserialize(value["OutputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputInfoHasBeenSet = true;
    }

    if (value.HasMember("InputList") && !value["InputList"].IsNull())
    {
        if (!value["InputList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.InputList` is not array type"));

        const rapidjson::Value &tmpValue = value["InputList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LiveStreamMonitorInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputList.push_back(item);
        }
        m_inputListHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.StopTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = value["StopTime"].GetUint64();
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("NotifyPolicy") && !value["NotifyPolicy"].IsNull())
    {
        if (!value["NotifyPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.NotifyPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_notifyPolicy.Deserialize(value["NotifyPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_notifyPolicyHasBeenSet = true;
    }

    if (value.HasMember("AudibleInputIndexList") && !value["AudibleInputIndexList"].IsNull())
    {
        if (!value["AudibleInputIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AudibleInputIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["AudibleInputIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_audibleInputIndexList.push_back((*itr).GetUint64());
        }
        m_audibleInputIndexListHasBeenSet = true;
    }

    if (value.HasMember("AiAsrInputIndexList") && !value["AiAsrInputIndexList"].IsNull())
    {
        if (!value["AiAsrInputIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AiAsrInputIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["AiAsrInputIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aiAsrInputIndexList.push_back((*itr).GetUint64());
        }
        m_aiAsrInputIndexListHasBeenSet = true;
    }

    if (value.HasMember("CheckStreamBroken") && !value["CheckStreamBroken"].IsNull())
    {
        if (!value["CheckStreamBroken"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.CheckStreamBroken` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStreamBroken = value["CheckStreamBroken"].GetUint64();
        m_checkStreamBrokenHasBeenSet = true;
    }

    if (value.HasMember("CheckStreamLowFrameRate") && !value["CheckStreamLowFrameRate"].IsNull())
    {
        if (!value["CheckStreamLowFrameRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.CheckStreamLowFrameRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkStreamLowFrameRate = value["CheckStreamLowFrameRate"].GetUint64();
        m_checkStreamLowFrameRateHasBeenSet = true;
    }

    if (value.HasMember("AsrLanguage") && !value["AsrLanguage"].IsNull())
    {
        if (!value["AsrLanguage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AsrLanguage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_asrLanguage = value["AsrLanguage"].GetUint64();
        m_asrLanguageHasBeenSet = true;
    }

    if (value.HasMember("OcrLanguage") && !value["OcrLanguage"].IsNull())
    {
        if (!value["OcrLanguage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.OcrLanguage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ocrLanguage = value["OcrLanguage"].GetUint64();
        m_ocrLanguageHasBeenSet = true;
    }

    if (value.HasMember("AiOcrInputIndexList") && !value["AiOcrInputIndexList"].IsNull())
    {
        if (!value["AiOcrInputIndexList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AiOcrInputIndexList` is not array type"));

        const rapidjson::Value &tmpValue = value["AiOcrInputIndexList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aiOcrInputIndexList.push_back((*itr).GetUint64());
        }
        m_aiOcrInputIndexListHasBeenSet = true;
    }

    if (value.HasMember("AllowMonitorReport") && !value["AllowMonitorReport"].IsNull())
    {
        if (!value["AllowMonitorReport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AllowMonitorReport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allowMonitorReport = value["AllowMonitorReport"].GetUint64();
        m_allowMonitorReportHasBeenSet = true;
    }

    if (value.HasMember("AiFormatDiagnose") && !value["AiFormatDiagnose"].IsNull())
    {
        if (!value["AiFormatDiagnose"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AiFormatDiagnose` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aiFormatDiagnose = value["AiFormatDiagnose"].GetUint64();
        m_aiFormatDiagnoseHasBeenSet = true;
    }

    if (value.HasMember("AiQualityControl") && !value["AiQualityControl"].IsNull())
    {
        if (!value["AiQualityControl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.AiQualityControl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aiQualityControl = value["AiQualityControl"].GetUint64();
        m_aiQualityControlHasBeenSet = true;
    }

    if (value.HasMember("CasterId") && !value["CasterId"].IsNull())
    {
        if (!value["CasterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.CasterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_casterId = string(value["CasterId"].GetString());
        m_casterIdHasBeenSet = true;
    }

    if (value.HasMember("PullPushTaskId") && !value["PullPushTaskId"].IsNull())
    {
        if (!value["PullPushTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorInfo.PullPushTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pullPushTaskId = string(value["PullPushTaskId"].GetString());
        m_pullPushTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamMonitorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputList.begin(); itr != m_inputList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_notifyPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notifyPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audibleInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudibleInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audibleInputIndexList.begin(); itr != m_audibleInputIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_aiAsrInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAsrInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiAsrInputIndexList.begin(); itr != m_aiAsrInputIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_checkStreamBrokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStreamBroken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStreamBroken, allocator);
    }

    if (m_checkStreamLowFrameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStreamLowFrameRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkStreamLowFrameRate, allocator);
    }

    if (m_asrLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asrLanguage, allocator);
    }

    if (m_ocrLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ocrLanguage, allocator);
    }

    if (m_aiOcrInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiOcrInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiOcrInputIndexList.begin(); itr != m_aiOcrInputIndexList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_allowMonitorReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowMonitorReport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowMonitorReport, allocator);
    }

    if (m_aiFormatDiagnoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiFormatDiagnose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiFormatDiagnose, allocator);
    }

    if (m_aiQualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiQualityControl, allocator);
    }

    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_casterId.c_str(), allocator).Move(), allocator);
    }

    if (m_pullPushTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullPushTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pullPushTaskId.c_str(), allocator).Move(), allocator);
    }

}


string LiveStreamMonitorInfo::GetMonitorId() const
{
    return m_monitorId;
}

void LiveStreamMonitorInfo::SetMonitorId(const string& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool LiveStreamMonitorInfo::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string LiveStreamMonitorInfo::GetMonitorName() const
{
    return m_monitorName;
}

void LiveStreamMonitorInfo::SetMonitorName(const string& _monitorName)
{
    m_monitorName = _monitorName;
    m_monitorNameHasBeenSet = true;
}

bool LiveStreamMonitorInfo::MonitorNameHasBeenSet() const
{
    return m_monitorNameHasBeenSet;
}

LiveStreamMonitorOutputInfo LiveStreamMonitorInfo::GetOutputInfo() const
{
    return m_outputInfo;
}

void LiveStreamMonitorInfo::SetOutputInfo(const LiveStreamMonitorOutputInfo& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool LiveStreamMonitorInfo::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

vector<LiveStreamMonitorInputInfo> LiveStreamMonitorInfo::GetInputList() const
{
    return m_inputList;
}

void LiveStreamMonitorInfo::SetInputList(const vector<LiveStreamMonitorInputInfo>& _inputList)
{
    m_inputList = _inputList;
    m_inputListHasBeenSet = true;
}

bool LiveStreamMonitorInfo::InputListHasBeenSet() const
{
    return m_inputListHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetStatus() const
{
    return m_status;
}

void LiveStreamMonitorInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LiveStreamMonitorInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetStartTime() const
{
    return m_startTime;
}

void LiveStreamMonitorInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LiveStreamMonitorInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetStopTime() const
{
    return m_stopTime;
}

void LiveStreamMonitorInfo::SetStopTime(const uint64_t& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool LiveStreamMonitorInfo::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetCreateTime() const
{
    return m_createTime;
}

void LiveStreamMonitorInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LiveStreamMonitorInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void LiveStreamMonitorInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LiveStreamMonitorInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

LiveStreamMonitorNotifyPolicy LiveStreamMonitorInfo::GetNotifyPolicy() const
{
    return m_notifyPolicy;
}

void LiveStreamMonitorInfo::SetNotifyPolicy(const LiveStreamMonitorNotifyPolicy& _notifyPolicy)
{
    m_notifyPolicy = _notifyPolicy;
    m_notifyPolicyHasBeenSet = true;
}

bool LiveStreamMonitorInfo::NotifyPolicyHasBeenSet() const
{
    return m_notifyPolicyHasBeenSet;
}

vector<uint64_t> LiveStreamMonitorInfo::GetAudibleInputIndexList() const
{
    return m_audibleInputIndexList;
}

void LiveStreamMonitorInfo::SetAudibleInputIndexList(const vector<uint64_t>& _audibleInputIndexList)
{
    m_audibleInputIndexList = _audibleInputIndexList;
    m_audibleInputIndexListHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AudibleInputIndexListHasBeenSet() const
{
    return m_audibleInputIndexListHasBeenSet;
}

vector<uint64_t> LiveStreamMonitorInfo::GetAiAsrInputIndexList() const
{
    return m_aiAsrInputIndexList;
}

void LiveStreamMonitorInfo::SetAiAsrInputIndexList(const vector<uint64_t>& _aiAsrInputIndexList)
{
    m_aiAsrInputIndexList = _aiAsrInputIndexList;
    m_aiAsrInputIndexListHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AiAsrInputIndexListHasBeenSet() const
{
    return m_aiAsrInputIndexListHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetCheckStreamBroken() const
{
    return m_checkStreamBroken;
}

void LiveStreamMonitorInfo::SetCheckStreamBroken(const uint64_t& _checkStreamBroken)
{
    m_checkStreamBroken = _checkStreamBroken;
    m_checkStreamBrokenHasBeenSet = true;
}

bool LiveStreamMonitorInfo::CheckStreamBrokenHasBeenSet() const
{
    return m_checkStreamBrokenHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetCheckStreamLowFrameRate() const
{
    return m_checkStreamLowFrameRate;
}

void LiveStreamMonitorInfo::SetCheckStreamLowFrameRate(const uint64_t& _checkStreamLowFrameRate)
{
    m_checkStreamLowFrameRate = _checkStreamLowFrameRate;
    m_checkStreamLowFrameRateHasBeenSet = true;
}

bool LiveStreamMonitorInfo::CheckStreamLowFrameRateHasBeenSet() const
{
    return m_checkStreamLowFrameRateHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetAsrLanguage() const
{
    return m_asrLanguage;
}

void LiveStreamMonitorInfo::SetAsrLanguage(const uint64_t& _asrLanguage)
{
    m_asrLanguage = _asrLanguage;
    m_asrLanguageHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AsrLanguageHasBeenSet() const
{
    return m_asrLanguageHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetOcrLanguage() const
{
    return m_ocrLanguage;
}

void LiveStreamMonitorInfo::SetOcrLanguage(const uint64_t& _ocrLanguage)
{
    m_ocrLanguage = _ocrLanguage;
    m_ocrLanguageHasBeenSet = true;
}

bool LiveStreamMonitorInfo::OcrLanguageHasBeenSet() const
{
    return m_ocrLanguageHasBeenSet;
}

vector<uint64_t> LiveStreamMonitorInfo::GetAiOcrInputIndexList() const
{
    return m_aiOcrInputIndexList;
}

void LiveStreamMonitorInfo::SetAiOcrInputIndexList(const vector<uint64_t>& _aiOcrInputIndexList)
{
    m_aiOcrInputIndexList = _aiOcrInputIndexList;
    m_aiOcrInputIndexListHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AiOcrInputIndexListHasBeenSet() const
{
    return m_aiOcrInputIndexListHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetAllowMonitorReport() const
{
    return m_allowMonitorReport;
}

void LiveStreamMonitorInfo::SetAllowMonitorReport(const uint64_t& _allowMonitorReport)
{
    m_allowMonitorReport = _allowMonitorReport;
    m_allowMonitorReportHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AllowMonitorReportHasBeenSet() const
{
    return m_allowMonitorReportHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetAiFormatDiagnose() const
{
    return m_aiFormatDiagnose;
}

void LiveStreamMonitorInfo::SetAiFormatDiagnose(const uint64_t& _aiFormatDiagnose)
{
    m_aiFormatDiagnose = _aiFormatDiagnose;
    m_aiFormatDiagnoseHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AiFormatDiagnoseHasBeenSet() const
{
    return m_aiFormatDiagnoseHasBeenSet;
}

uint64_t LiveStreamMonitorInfo::GetAiQualityControl() const
{
    return m_aiQualityControl;
}

void LiveStreamMonitorInfo::SetAiQualityControl(const uint64_t& _aiQualityControl)
{
    m_aiQualityControl = _aiQualityControl;
    m_aiQualityControlHasBeenSet = true;
}

bool LiveStreamMonitorInfo::AiQualityControlHasBeenSet() const
{
    return m_aiQualityControlHasBeenSet;
}

string LiveStreamMonitorInfo::GetCasterId() const
{
    return m_casterId;
}

void LiveStreamMonitorInfo::SetCasterId(const string& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool LiveStreamMonitorInfo::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string LiveStreamMonitorInfo::GetPullPushTaskId() const
{
    return m_pullPushTaskId;
}

void LiveStreamMonitorInfo::SetPullPushTaskId(const string& _pullPushTaskId)
{
    m_pullPushTaskId = _pullPushTaskId;
    m_pullPushTaskIdHasBeenSet = true;
}

bool LiveStreamMonitorInfo::PullPushTaskIdHasBeenSet() const
{
    return m_pullPushTaskIdHasBeenSet;
}

