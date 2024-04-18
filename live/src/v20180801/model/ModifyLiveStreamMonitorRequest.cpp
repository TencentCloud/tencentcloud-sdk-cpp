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

#include <tencentcloud/live/v20180801/model/ModifyLiveStreamMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveStreamMonitorRequest::ModifyLiveStreamMonitorRequest() :
    m_monitorIdHasBeenSet(false),
    m_monitorNameHasBeenSet(false),
    m_outputInfoHasBeenSet(false),
    m_inputListHasBeenSet(false),
    m_notifyPolicyHasBeenSet(false),
    m_asrLanguageHasBeenSet(false),
    m_ocrLanguageHasBeenSet(false),
    m_aiAsrInputIndexListHasBeenSet(false),
    m_aiOcrInputIndexListHasBeenSet(false),
    m_checkStreamBrokenHasBeenSet(false),
    m_checkStreamLowFrameRateHasBeenSet(false),
    m_allowMonitorReportHasBeenSet(false),
    m_aiFormatDiagnoseHasBeenSet(false),
    m_aiQualityControlHasBeenSet(false)
{
}

string ModifyLiveStreamMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorName.c_str(), allocator).Move(), allocator);
    }

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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLiveStreamMonitorRequest::GetMonitorId() const
{
    return m_monitorId;
}

void ModifyLiveStreamMonitorRequest::SetMonitorId(const string& _monitorId)
{
    m_monitorId = _monitorId;
    m_monitorIdHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::MonitorIdHasBeenSet() const
{
    return m_monitorIdHasBeenSet;
}

string ModifyLiveStreamMonitorRequest::GetMonitorName() const
{
    return m_monitorName;
}

void ModifyLiveStreamMonitorRequest::SetMonitorName(const string& _monitorName)
{
    m_monitorName = _monitorName;
    m_monitorNameHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::MonitorNameHasBeenSet() const
{
    return m_monitorNameHasBeenSet;
}

LiveStreamMonitorOutputInfo ModifyLiveStreamMonitorRequest::GetOutputInfo() const
{
    return m_outputInfo;
}

void ModifyLiveStreamMonitorRequest::SetOutputInfo(const LiveStreamMonitorOutputInfo& _outputInfo)
{
    m_outputInfo = _outputInfo;
    m_outputInfoHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::OutputInfoHasBeenSet() const
{
    return m_outputInfoHasBeenSet;
}

vector<LiveStreamMonitorInputInfo> ModifyLiveStreamMonitorRequest::GetInputList() const
{
    return m_inputList;
}

void ModifyLiveStreamMonitorRequest::SetInputList(const vector<LiveStreamMonitorInputInfo>& _inputList)
{
    m_inputList = _inputList;
    m_inputListHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::InputListHasBeenSet() const
{
    return m_inputListHasBeenSet;
}

LiveStreamMonitorNotifyPolicy ModifyLiveStreamMonitorRequest::GetNotifyPolicy() const
{
    return m_notifyPolicy;
}

void ModifyLiveStreamMonitorRequest::SetNotifyPolicy(const LiveStreamMonitorNotifyPolicy& _notifyPolicy)
{
    m_notifyPolicy = _notifyPolicy;
    m_notifyPolicyHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::NotifyPolicyHasBeenSet() const
{
    return m_notifyPolicyHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetAsrLanguage() const
{
    return m_asrLanguage;
}

void ModifyLiveStreamMonitorRequest::SetAsrLanguage(const uint64_t& _asrLanguage)
{
    m_asrLanguage = _asrLanguage;
    m_asrLanguageHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AsrLanguageHasBeenSet() const
{
    return m_asrLanguageHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetOcrLanguage() const
{
    return m_ocrLanguage;
}

void ModifyLiveStreamMonitorRequest::SetOcrLanguage(const uint64_t& _ocrLanguage)
{
    m_ocrLanguage = _ocrLanguage;
    m_ocrLanguageHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::OcrLanguageHasBeenSet() const
{
    return m_ocrLanguageHasBeenSet;
}

vector<uint64_t> ModifyLiveStreamMonitorRequest::GetAiAsrInputIndexList() const
{
    return m_aiAsrInputIndexList;
}

void ModifyLiveStreamMonitorRequest::SetAiAsrInputIndexList(const vector<uint64_t>& _aiAsrInputIndexList)
{
    m_aiAsrInputIndexList = _aiAsrInputIndexList;
    m_aiAsrInputIndexListHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AiAsrInputIndexListHasBeenSet() const
{
    return m_aiAsrInputIndexListHasBeenSet;
}

vector<uint64_t> ModifyLiveStreamMonitorRequest::GetAiOcrInputIndexList() const
{
    return m_aiOcrInputIndexList;
}

void ModifyLiveStreamMonitorRequest::SetAiOcrInputIndexList(const vector<uint64_t>& _aiOcrInputIndexList)
{
    m_aiOcrInputIndexList = _aiOcrInputIndexList;
    m_aiOcrInputIndexListHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AiOcrInputIndexListHasBeenSet() const
{
    return m_aiOcrInputIndexListHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetCheckStreamBroken() const
{
    return m_checkStreamBroken;
}

void ModifyLiveStreamMonitorRequest::SetCheckStreamBroken(const uint64_t& _checkStreamBroken)
{
    m_checkStreamBroken = _checkStreamBroken;
    m_checkStreamBrokenHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::CheckStreamBrokenHasBeenSet() const
{
    return m_checkStreamBrokenHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetCheckStreamLowFrameRate() const
{
    return m_checkStreamLowFrameRate;
}

void ModifyLiveStreamMonitorRequest::SetCheckStreamLowFrameRate(const uint64_t& _checkStreamLowFrameRate)
{
    m_checkStreamLowFrameRate = _checkStreamLowFrameRate;
    m_checkStreamLowFrameRateHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::CheckStreamLowFrameRateHasBeenSet() const
{
    return m_checkStreamLowFrameRateHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetAllowMonitorReport() const
{
    return m_allowMonitorReport;
}

void ModifyLiveStreamMonitorRequest::SetAllowMonitorReport(const uint64_t& _allowMonitorReport)
{
    m_allowMonitorReport = _allowMonitorReport;
    m_allowMonitorReportHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AllowMonitorReportHasBeenSet() const
{
    return m_allowMonitorReportHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetAiFormatDiagnose() const
{
    return m_aiFormatDiagnose;
}

void ModifyLiveStreamMonitorRequest::SetAiFormatDiagnose(const uint64_t& _aiFormatDiagnose)
{
    m_aiFormatDiagnose = _aiFormatDiagnose;
    m_aiFormatDiagnoseHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AiFormatDiagnoseHasBeenSet() const
{
    return m_aiFormatDiagnoseHasBeenSet;
}

uint64_t ModifyLiveStreamMonitorRequest::GetAiQualityControl() const
{
    return m_aiQualityControl;
}

void ModifyLiveStreamMonitorRequest::SetAiQualityControl(const uint64_t& _aiQualityControl)
{
    m_aiQualityControl = _aiQualityControl;
    m_aiQualityControlHasBeenSet = true;
}

bool ModifyLiveStreamMonitorRequest::AiQualityControlHasBeenSet() const
{
    return m_aiQualityControlHasBeenSet;
}


