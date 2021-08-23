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

#include <tencentcloud/npp/v20190823/model/VirturalNumCdr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

VirturalNumCdr::VirturalNumCdr() :
    m_callIdHasBeenSet(false),
    m_bindIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_dstVirtualNumHasBeenSet(false),
    m_callCenterAcceptTimeHasBeenSet(false),
    m_startDstCallTimeHasBeenSet(false),
    m_startDstRingTimeHasBeenSet(false),
    m_dstAcceptTimeHasBeenSet(false),
    m_endCallTimeHasBeenSet(false),
    m_callEndStatusHasBeenSet(false),
    m_srcDurationHasBeenSet(false),
    m_dstDurationHasBeenSet(false),
    m_recordUrlHasBeenSet(false)
{
}

CoreInternalOutcome VirturalNumCdr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallId") && !value["CallId"].IsNull())
    {
        if (!value["CallId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.CallId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callId = string(value["CallId"].GetString());
        m_callIdHasBeenSet = true;
    }

    if (value.HasMember("BindId") && !value["BindId"].IsNull())
    {
        if (!value["BindId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.BindId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindId = string(value["BindId"].GetString());
        m_bindIdHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Dst") && !value["Dst"].IsNull())
    {
        if (!value["Dst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.Dst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dst = string(value["Dst"].GetString());
        m_dstHasBeenSet = true;
    }

    if (value.HasMember("DstVirtualNum") && !value["DstVirtualNum"].IsNull())
    {
        if (!value["DstVirtualNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.DstVirtualNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVirtualNum = string(value["DstVirtualNum"].GetString());
        m_dstVirtualNumHasBeenSet = true;
    }

    if (value.HasMember("CallCenterAcceptTime") && !value["CallCenterAcceptTime"].IsNull())
    {
        if (!value["CallCenterAcceptTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.CallCenterAcceptTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callCenterAcceptTime = string(value["CallCenterAcceptTime"].GetString());
        m_callCenterAcceptTimeHasBeenSet = true;
    }

    if (value.HasMember("StartDstCallTime") && !value["StartDstCallTime"].IsNull())
    {
        if (!value["StartDstCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.StartDstCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDstCallTime = string(value["StartDstCallTime"].GetString());
        m_startDstCallTimeHasBeenSet = true;
    }

    if (value.HasMember("StartDstRingTime") && !value["StartDstRingTime"].IsNull())
    {
        if (!value["StartDstRingTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.StartDstRingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDstRingTime = string(value["StartDstRingTime"].GetString());
        m_startDstRingTimeHasBeenSet = true;
    }

    if (value.HasMember("DstAcceptTime") && !value["DstAcceptTime"].IsNull())
    {
        if (!value["DstAcceptTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.DstAcceptTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAcceptTime = string(value["DstAcceptTime"].GetString());
        m_dstAcceptTimeHasBeenSet = true;
    }

    if (value.HasMember("EndCallTime") && !value["EndCallTime"].IsNull())
    {
        if (!value["EndCallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.EndCallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endCallTime = string(value["EndCallTime"].GetString());
        m_endCallTimeHasBeenSet = true;
    }

    if (value.HasMember("CallEndStatus") && !value["CallEndStatus"].IsNull())
    {
        if (!value["CallEndStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.CallEndStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callEndStatus = string(value["CallEndStatus"].GetString());
        m_callEndStatusHasBeenSet = true;
    }

    if (value.HasMember("SrcDuration") && !value["SrcDuration"].IsNull())
    {
        if (!value["SrcDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.SrcDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDuration = string(value["SrcDuration"].GetString());
        m_srcDurationHasBeenSet = true;
    }

    if (value.HasMember("DstDuration") && !value["DstDuration"].IsNull())
    {
        if (!value["DstDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.DstDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDuration = string(value["DstDuration"].GetString());
        m_dstDurationHasBeenSet = true;
    }

    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirturalNumCdr.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirturalNumCdr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindId.c_str(), allocator).Move(), allocator);
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

    if (m_dstVirtualNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVirtualNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVirtualNum.c_str(), allocator).Move(), allocator);
    }

    if (m_callCenterAcceptTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallCenterAcceptTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callCenterAcceptTime.c_str(), allocator).Move(), allocator);
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

    if (m_srcDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

}


string VirturalNumCdr::GetCallId() const
{
    return m_callId;
}

void VirturalNumCdr::SetCallId(const string& _callId)
{
    m_callId = _callId;
    m_callIdHasBeenSet = true;
}

bool VirturalNumCdr::CallIdHasBeenSet() const
{
    return m_callIdHasBeenSet;
}

string VirturalNumCdr::GetBindId() const
{
    return m_bindId;
}

void VirturalNumCdr::SetBindId(const string& _bindId)
{
    m_bindId = _bindId;
    m_bindIdHasBeenSet = true;
}

bool VirturalNumCdr::BindIdHasBeenSet() const
{
    return m_bindIdHasBeenSet;
}

string VirturalNumCdr::GetSrc() const
{
    return m_src;
}

void VirturalNumCdr::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool VirturalNumCdr::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string VirturalNumCdr::GetDst() const
{
    return m_dst;
}

void VirturalNumCdr::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool VirturalNumCdr::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string VirturalNumCdr::GetDstVirtualNum() const
{
    return m_dstVirtualNum;
}

void VirturalNumCdr::SetDstVirtualNum(const string& _dstVirtualNum)
{
    m_dstVirtualNum = _dstVirtualNum;
    m_dstVirtualNumHasBeenSet = true;
}

bool VirturalNumCdr::DstVirtualNumHasBeenSet() const
{
    return m_dstVirtualNumHasBeenSet;
}

string VirturalNumCdr::GetCallCenterAcceptTime() const
{
    return m_callCenterAcceptTime;
}

void VirturalNumCdr::SetCallCenterAcceptTime(const string& _callCenterAcceptTime)
{
    m_callCenterAcceptTime = _callCenterAcceptTime;
    m_callCenterAcceptTimeHasBeenSet = true;
}

bool VirturalNumCdr::CallCenterAcceptTimeHasBeenSet() const
{
    return m_callCenterAcceptTimeHasBeenSet;
}

string VirturalNumCdr::GetStartDstCallTime() const
{
    return m_startDstCallTime;
}

void VirturalNumCdr::SetStartDstCallTime(const string& _startDstCallTime)
{
    m_startDstCallTime = _startDstCallTime;
    m_startDstCallTimeHasBeenSet = true;
}

bool VirturalNumCdr::StartDstCallTimeHasBeenSet() const
{
    return m_startDstCallTimeHasBeenSet;
}

string VirturalNumCdr::GetStartDstRingTime() const
{
    return m_startDstRingTime;
}

void VirturalNumCdr::SetStartDstRingTime(const string& _startDstRingTime)
{
    m_startDstRingTime = _startDstRingTime;
    m_startDstRingTimeHasBeenSet = true;
}

bool VirturalNumCdr::StartDstRingTimeHasBeenSet() const
{
    return m_startDstRingTimeHasBeenSet;
}

string VirturalNumCdr::GetDstAcceptTime() const
{
    return m_dstAcceptTime;
}

void VirturalNumCdr::SetDstAcceptTime(const string& _dstAcceptTime)
{
    m_dstAcceptTime = _dstAcceptTime;
    m_dstAcceptTimeHasBeenSet = true;
}

bool VirturalNumCdr::DstAcceptTimeHasBeenSet() const
{
    return m_dstAcceptTimeHasBeenSet;
}

string VirturalNumCdr::GetEndCallTime() const
{
    return m_endCallTime;
}

void VirturalNumCdr::SetEndCallTime(const string& _endCallTime)
{
    m_endCallTime = _endCallTime;
    m_endCallTimeHasBeenSet = true;
}

bool VirturalNumCdr::EndCallTimeHasBeenSet() const
{
    return m_endCallTimeHasBeenSet;
}

string VirturalNumCdr::GetCallEndStatus() const
{
    return m_callEndStatus;
}

void VirturalNumCdr::SetCallEndStatus(const string& _callEndStatus)
{
    m_callEndStatus = _callEndStatus;
    m_callEndStatusHasBeenSet = true;
}

bool VirturalNumCdr::CallEndStatusHasBeenSet() const
{
    return m_callEndStatusHasBeenSet;
}

string VirturalNumCdr::GetSrcDuration() const
{
    return m_srcDuration;
}

void VirturalNumCdr::SetSrcDuration(const string& _srcDuration)
{
    m_srcDuration = _srcDuration;
    m_srcDurationHasBeenSet = true;
}

bool VirturalNumCdr::SrcDurationHasBeenSet() const
{
    return m_srcDurationHasBeenSet;
}

string VirturalNumCdr::GetDstDuration() const
{
    return m_dstDuration;
}

void VirturalNumCdr::SetDstDuration(const string& _dstDuration)
{
    m_dstDuration = _dstDuration;
    m_dstDurationHasBeenSet = true;
}

bool VirturalNumCdr::DstDurationHasBeenSet() const
{
    return m_dstDurationHasBeenSet;
}

string VirturalNumCdr::GetRecordUrl() const
{
    return m_recordUrl;
}

void VirturalNumCdr::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool VirturalNumCdr::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

