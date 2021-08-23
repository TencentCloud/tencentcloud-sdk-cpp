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

#include <tencentcloud/npp/v20190823/model/CallBackCdr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

CallBackCdr::CallBackCdr() :
    m_callIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_startSrcCallTimeHasBeenSet(false),
    m_startSrcRingTimeHasBeenSet(false),
    m_srcAcceptTimeHasBeenSet(false),
    m_startDstCallTimeHasBeenSet(false),
    m_startDstRingTimeHasBeenSet(false),
    m_dstAcceptTimeHasBeenSet(false),
    m_endCallTimeHasBeenSet(false),
    m_callEndStatusHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_recordUrlHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_orderIdHasBeenSet(false)
{
}

CoreInternalOutcome CallBackCdr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallId") && !value["CallId"].IsNull())
    {
        if (!value["CallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.CallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callId = string(value["CallId"].GetString());
        m_callIdHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Dst") && !value["Dst"].IsNull())
    {
        if (!value["Dst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.Dst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dst = string(value["Dst"].GetString());
        m_dstHasBeenSet = true;
    }

    if (value.HasMember("StartSrcCallTime") && !value["StartSrcCallTime"].IsNull())
    {
        if (!value["StartSrcCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.StartSrcCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startSrcCallTime = string(value["StartSrcCallTime"].GetString());
        m_startSrcCallTimeHasBeenSet = true;
    }

    if (value.HasMember("StartSrcRingTime") && !value["StartSrcRingTime"].IsNull())
    {
        if (!value["StartSrcRingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.StartSrcRingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startSrcRingTime = string(value["StartSrcRingTime"].GetString());
        m_startSrcRingTimeHasBeenSet = true;
    }

    if (value.HasMember("SrcAcceptTime") && !value["SrcAcceptTime"].IsNull())
    {
        if (!value["SrcAcceptTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.SrcAcceptTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcAcceptTime = string(value["SrcAcceptTime"].GetString());
        m_srcAcceptTimeHasBeenSet = true;
    }

    if (value.HasMember("StartDstCallTime") && !value["StartDstCallTime"].IsNull())
    {
        if (!value["StartDstCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.StartDstCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDstCallTime = string(value["StartDstCallTime"].GetString());
        m_startDstCallTimeHasBeenSet = true;
    }

    if (value.HasMember("StartDstRingTime") && !value["StartDstRingTime"].IsNull())
    {
        if (!value["StartDstRingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.StartDstRingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDstRingTime = string(value["StartDstRingTime"].GetString());
        m_startDstRingTimeHasBeenSet = true;
    }

    if (value.HasMember("DstAcceptTime") && !value["DstAcceptTime"].IsNull())
    {
        if (!value["DstAcceptTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.DstAcceptTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAcceptTime = string(value["DstAcceptTime"].GetString());
        m_dstAcceptTimeHasBeenSet = true;
    }

    if (value.HasMember("EndCallTime") && !value["EndCallTime"].IsNull())
    {
        if (!value["EndCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.EndCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endCallTime = string(value["EndCallTime"].GetString());
        m_endCallTimeHasBeenSet = true;
    }

    if (value.HasMember("CallEndStatus") && !value["CallEndStatus"].IsNull())
    {
        if (!value["CallEndStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.CallEndStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callEndStatus = string(value["CallEndStatus"].GetString());
        m_callEndStatusHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }

    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.CallType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callType = string(value["CallType"].GetString());
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.BizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = string(value["BizId"].GetString());
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallBackCdr.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallBackCdr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_dstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dst.c_str(), allocator).Move(), allocator);
    }

    if (m_startSrcCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartSrcCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startSrcCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startSrcRingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartSrcRingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startSrcRingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAcceptTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAcceptTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcAcceptTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startDstCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDstCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDstCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startDstRingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDstRingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDstRingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAcceptTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAcceptTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAcceptTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endCallTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndCallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endCallTime.c_str(), allocator).Move(), allocator);
    }

    if (m_callEndStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallEndStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callEndStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callType.c_str(), allocator).Move(), allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

}


string CallBackCdr::GetCallId() const
{
    return m_callId;
}

void CallBackCdr::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool CallBackCdr::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string CallBackCdr::GetSrc() const
{
    return m_src;
}

void CallBackCdr::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool CallBackCdr::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string CallBackCdr::GetDst() const
{
    return m_dst;
}

void CallBackCdr::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool CallBackCdr::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string CallBackCdr::GetStartSrcCallTime() const
{
    return m_startSrcCallTime;
}

void CallBackCdr::SetStartSrcCallTime(const string& _startSrcCallTime)
{
    m_startSrcCallTime = _startSrcCallTime;
    m_startSrcCallTimeHasBeenSet = true;
}

bool CallBackCdr::StartSrcCallTimeHasBeenSet() const
{
    return m_startSrcCallTimeHasBeenSet;
}

string CallBackCdr::GetStartSrcRingTime() const
{
    return m_startSrcRingTime;
}

void CallBackCdr::SetStartSrcRingTime(const string& _startSrcRingTime)
{
    m_startSrcRingTime = _startSrcRingTime;
    m_startSrcRingTimeHasBeenSet = true;
}

bool CallBackCdr::StartSrcRingTimeHasBeenSet() const
{
    return m_startSrcRingTimeHasBeenSet;
}

string CallBackCdr::GetSrcAcceptTime() const
{
    return m_srcAcceptTime;
}

void CallBackCdr::SetSrcAcceptTime(const string& _srcAcceptTime)
{
    m_srcAcceptTime = _srcAcceptTime;
    m_srcAcceptTimeHasBeenSet = true;
}

bool CallBackCdr::SrcAcceptTimeHasBeenSet() const
{
    return m_srcAcceptTimeHasBeenSet;
}

string CallBackCdr::GetStartDstCallTime() const
{
    return m_startDstCallTime;
}

void CallBackCdr::SetStartDstCallTime(const string& _startDstCallTime)
{
    m_startDstCallTime = _startDstCallTime;
    m_startDstCallTimeHasBeenSet = true;
}

bool CallBackCdr::StartDstCallTimeHasBeenSet() const
{
    return m_startDstCallTimeHasBeenSet;
}

string CallBackCdr::GetStartDstRingTime() const
{
    return m_startDstRingTime;
}

void CallBackCdr::SetStartDstRingTime(const string& _startDstRingTime)
{
    m_startDstRingTime = _startDstRingTime;
    m_startDstRingTimeHasBeenSet = true;
}

bool CallBackCdr::StartDstRingTimeHasBeenSet() const
{
    return m_startDstRingTimeHasBeenSet;
}

string CallBackCdr::GetDstAcceptTime() const
{
    return m_dstAcceptTime;
}

void CallBackCdr::SetDstAcceptTime(const string& _dstAcceptTime)
{
    m_dstAcceptTime = _dstAcceptTime;
    m_dstAcceptTimeHasBeenSet = true;
}

bool CallBackCdr::DstAcceptTimeHasBeenSet() const
{
    return m_dstAcceptTimeHasBeenSet;
}

string CallBackCdr::GetEndCallTime() const
{
    return m_endCallTime;
}

void CallBackCdr::SetEndCallTime(const string& _endCallTime)
{
    m_endCallTime = _endCallTime;
    m_endCallTimeHasBeenSet = true;
}

bool CallBackCdr::EndCallTimeHasBeenSet() const
{
    return m_endCallTimeHasBeenSet;
}

string CallBackCdr::GetCallEndStatus() const
{
    return m_callEndStatus;
}

void CallBackCdr::SetCallEndStatus(const string& _callEndStatus)
{
    m_callEndStatus = _callEndStatus;
    m_callEndStatusHasBeenSet = true;
}

bool CallBackCdr::CallEndStatusHasBeenSet() const
{
    return m_callEndStatusHasBeenSet;
}

string CallBackCdr::GetDuration() const
{
    return m_duration;
}

void CallBackCdr::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CallBackCdr::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CallBackCdr::GetRecordUrl() const
{
    return m_recordUrl;
}

void CallBackCdr::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool CallBackCdr::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

string CallBackCdr::GetCallType() const
{
    return m_callType;
}

void CallBackCdr::SetCallType(const string& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool CallBackCdr::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

string CallBackCdr::GetBizId() const
{
    return m_bizId;
}

void CallBackCdr::SetBizId(const string& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CallBackCdr::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string CallBackCdr::GetOrderId() const
{
    return m_orderId;
}

void CallBackCdr::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CallBackCdr::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

