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

#include <tencentcloud/live/v20180801/model/CreateLiveStreamMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveStreamMonitorRequest::CreateLiveStreamMonitorRequest() :
    m_outputInfoHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_notifyPolicyHasBeenSet(false),
    m_asrLanguageHasBeenSet(false),
    m_ocrLanguageHasBeenSet(false),
    m_aiAsrInputIndexListHasBeenSet(false),
    m_aiOcrInputIndexListHasBeenSet(false),
    m_checkStreamBrokenHasBeenSet(false),
    m_checkStreamLowFrameRateHasBeenSet(false),
    m_allowMonitorReportHasBeenSet(false),
    m_aiFormatDiagnoseHasBeenSet(false),
    m_aiQualityControlHasBeenSet(false),
    m_casterIdHasBeenSet(false),
    m_pullPushTaskIdHasBeenSet(false)
{
}

string CreateLiveStreamMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_outputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_inputListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputList.begin(); itr != m_inputList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monitorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorName.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_notifyPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_asrLanguage, allocator);
    }

    if (m_ocrLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ocrLanguage, allocator);
    }

    if (m_aiAsrInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAsrInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiAsrInputIndexList.begin(); itr != m_aiAsrInputIndexList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_aiOcrInputIndexListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiOcrInputIndexList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiOcrInputIndexList.begin(); itr != m_aiOcrInputIndexList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_checkStreamBrokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStreamBroken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkStreamBroken, allocator);
    }

    if (m_checkStreamLowFrameRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckStreamLowFrameRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkStreamLowFrameRate, allocator);
    }

    if (m_allowMonitorReportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowMonitorReport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowMonitorReport, allocator);
    }

    if (m_aiFormatDiagnoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiFormatDiagnose";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aiFormatDiagnose, allocator);
    }

    if (m_aiQualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiQualityControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aiQualityControl, allocator);
    }

    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_casterId.c_str(), allocator).Move(), allocator);
    }

    if (m_pullPushTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullPushTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pullPushTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


LiveStreamMonitorOutputInfo CreateLiveStreamMonitorRequest::GetOutputInfo() const
{
    return m_outputInfo;
}

void CreateLiveStreamMonitorRequest::SetOutputInfo(const LiveStreamMonitorOutputInfo& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

vector<LiveStreamMonitorInputInfo> CreateLiveStreamMonitorRequest::GetInputList() const
{
    return m_inputList;
}

void CreateLiveStreamMonitorRequest::SetInputList(const vector<LiveStreamMonitorInputInfo>& _inputList)
{
    m_inputList = _inputList;
    m_inputListHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::InputListHasBeenSet() const
{
    return m_inputListHasBeenSet;
}

string CreateLiveStreamMonitorRequest::GetMonitorName() const
{
    return m_monitorName;
}

void CreateLiveStreamMonitorRequest::SetMonitorName(const string& _monitorName)
{
    m_monitorName = _monitorName;
    m_monitorNameHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::MonitorNameHasBeenSet() const
{
    return m_monitorNameHasBeenSet;
}

LiveStreamMonitorNotifyPolicy CreateLiveStreamMonitorRequest::GetNotifyPolicy() const
{
    return m_notifyPolicy;
}

void CreateLiveStreamMonitorRequest::SetNotifyPolicy(const LiveStreamMonitorNotifyPolicy& _notifyPolicy)
{
    m_notifyPolicy = _notifyPolicy;
    m_notifyPolicyHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::NotifyPolicyHasBeenSet() const
{
    return m_notifyPolicyHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetAsrLanguage() const
{
    return m_asrLanguage;
}

void CreateLiveStreamMonitorRequest::SetAsrLanguage(const uint64_t& _asrLanguage)
{
    m_asrLanguage = _asrLanguage;
    m_asrLanguageHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AsrLanguageHasBeenSet() const
{
    return m_asrLanguageHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetOcrLanguage() const
{
    return m_ocrLanguage;
}

void CreateLiveStreamMonitorRequest::SetOcrLanguage(const uint64_t& _ocrLanguage)
{
    m_ocrLanguage = _ocrLanguage;
    m_ocrLanguageHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::OcrLanguageHasBeenSet() const
{
    return m_ocrLanguageHasBeenSet;
}

vector<uint64_t> CreateLiveStreamMonitorRequest::GetAiAsrInputIndexList() const
{
    return m_aiAsrInputIndexList;
}

void CreateLiveStreamMonitorRequest::SetAiAsrInputIndexList(const vector<uint64_t>& _aiAsrInputIndexList)
{
    m_aiAsrInputIndexList = _aiAsrInputIndexList;
    m_aiAsrInputIndexListHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AiAsrInputIndexListHasBeenSet() const
{
    return m_aiAsrInputIndexListHasBeenSet;
}

vector<uint64_t> CreateLiveStreamMonitorRequest::GetAiOcrInputIndexList() const
{
    return m_aiOcrInputIndexList;
}

void CreateLiveStreamMonitorRequest::SetAiOcrInputIndexList(const vector<uint64_t>& _aiOcrInputIndexList)
{
    m_aiOcrInputIndexList = _aiOcrInputIndexList;
    m_aiOcrInputIndexListHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AiOcrInputIndexListHasBeenSet() const
{
    return m_aiOcrInputIndexListHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetCheckStreamBroken() const
{
    return m_checkStreamBroken;
}

void CreateLiveStreamMonitorRequest::SetCheckStreamBroken(const uint64_t& _checkStreamBroken)
{
    m_checkStreamBroken = _checkStreamBroken;
    m_checkStreamBrokenHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::CheckStreamBrokenHasBeenSet() const
{
    return m_checkStreamBrokenHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetCheckStreamLowFrameRate() const
{
    return m_checkStreamLowFrameRate;
}

void CreateLiveStreamMonitorRequest::SetCheckStreamLowFrameRate(const uint64_t& _checkStreamLowFrameRate)
{
    m_checkStreamLowFrameRate = _checkStreamLowFrameRate;
    m_checkStreamLowFrameRateHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::CheckStreamLowFrameRateHasBeenSet() const
{
    return m_checkStreamLowFrameRateHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetAllowMonitorReport() const
{
    return m_allowMonitorReport;
}

void CreateLiveStreamMonitorRequest::SetAllowMonitorReport(const uint64_t& _allowMonitorReport)
{
    m_allowMonitorReport = _allowMonitorReport;
    m_allowMonitorReportHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AllowMonitorReportHasBeenSet() const
{
    return m_allowMonitorReportHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetAiFormatDiagnose() const
{
    return m_aiFormatDiagnose;
}

void CreateLiveStreamMonitorRequest::SetAiFormatDiagnose(const uint64_t& _aiFormatDiagnose)
{
    m_aiFormatDiagnose = _aiFormatDiagnose;
    m_aiFormatDiagnoseHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AiFormatDiagnoseHasBeenSet() const
{
    return m_aiFormatDiagnoseHasBeenSet;
}

uint64_t CreateLiveStreamMonitorRequest::GetAiQualityControl() const
{
    return m_aiQualityControl;
}

void CreateLiveStreamMonitorRequest::SetAiQualityControl(const uint64_t& _aiQualityControl)
{
    m_aiQualityControl = _aiQualityControl;
    m_aiQualityControlHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::AiQualityControlHasBeenSet() const
{
    return m_aiQualityControlHasBeenSet;
}

string CreateLiveStreamMonitorRequest::GetCasterId() const
{
    return m_casterId;
}

void CreateLiveStreamMonitorRequest::SetCasterId(const string& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string CreateLiveStreamMonitorRequest::GetPullPushTaskId() const
{
    return m_pullPushTaskId;
}

void CreateLiveStreamMonitorRequest::SetPullPushTaskId(const string& _pullPushTaskId)
{
    m_pullPushTaskId = _pullPushTaskId;
    m_pullPushTaskIdHasBeenSet = true;
}

bool CreateLiveStreamMonitorRequest::PullPushTaskIdHasBeenSet() const
{
    return m_pullPushTaskIdHasBeenSet;
}


