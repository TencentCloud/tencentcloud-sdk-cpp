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

#include <tencentcloud/npp/v20190823/model/CreateCallBackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

CreateCallBackRequest::CreateCallBackRequest() :
    m_bizAppIdHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_srcDisplayNumHasBeenSet(false),
    m_dstDisplayNumHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_maxAllowTimeHasBeenSet(false),
    m_statusFlagHasBeenSet(false),
    m_statusUrlHasBeenSet(false),
    m_hangupUrlHasBeenSet(false),
    m_recordUrlHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_lastCallIdHasBeenSet(false),
    m_preCallerHandleHasBeenSet(false),
    m_orderIdHasBeenSet(false)
{
}

string CreateCallBackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_dstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dst.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDisplayNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDisplayNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcDisplayNum.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDisplayNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDisplayNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstDisplayNum.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAllowTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAllowTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxAllowTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_statusUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statusUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_hangupUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HangupUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hangupUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastCallId.c_str(), allocator).Move(), allocator);
    }

    if (m_preCallerHandleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreCallerHandle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_preCallerHandle.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCallBackRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void CreateCallBackRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool CreateCallBackRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string CreateCallBackRequest::GetSrc() const
{
    return m_src;
}

void CreateCallBackRequest::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool CreateCallBackRequest::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string CreateCallBackRequest::GetDst() const
{
    return m_dst;
}

void CreateCallBackRequest::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool CreateCallBackRequest::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string CreateCallBackRequest::GetSrcDisplayNum() const
{
    return m_srcDisplayNum;
}

void CreateCallBackRequest::SetSrcDisplayNum(const string& _srcDisplayNum)
{
    m_srcDisplayNum = _srcDisplayNum;
    m_srcDisplayNumHasBeenSet = true;
}

bool CreateCallBackRequest::SrcDisplayNumHasBeenSet() const
{
    return m_srcDisplayNumHasBeenSet;
}

string CreateCallBackRequest::GetDstDisplayNum() const
{
    return m_dstDisplayNum;
}

void CreateCallBackRequest::SetDstDisplayNum(const string& _dstDisplayNum)
{
    m_dstDisplayNum = _dstDisplayNum;
    m_dstDisplayNumHasBeenSet = true;
}

bool CreateCallBackRequest::DstDisplayNumHasBeenSet() const
{
    return m_dstDisplayNumHasBeenSet;
}

string CreateCallBackRequest::GetRecord() const
{
    return m_record;
}

void CreateCallBackRequest::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool CreateCallBackRequest::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string CreateCallBackRequest::GetMaxAllowTime() const
{
    return m_maxAllowTime;
}

void CreateCallBackRequest::SetMaxAllowTime(const string& _maxAllowTime)
{
    m_maxAllowTime = _maxAllowTime;
    m_maxAllowTimeHasBeenSet = true;
}

bool CreateCallBackRequest::MaxAllowTimeHasBeenSet() const
{
    return m_maxAllowTimeHasBeenSet;
}

string CreateCallBackRequest::GetStatusFlag() const
{
    return m_statusFlag;
}

void CreateCallBackRequest::SetStatusFlag(const string& _statusFlag)
{
    m_statusFlag = _statusFlag;
    m_statusFlagHasBeenSet = true;
}

bool CreateCallBackRequest::StatusFlagHasBeenSet() const
{
    return m_statusFlagHasBeenSet;
}

string CreateCallBackRequest::GetStatusUrl() const
{
    return m_statusUrl;
}

void CreateCallBackRequest::SetStatusUrl(const string& _statusUrl)
{
    m_statusUrl = _statusUrl;
    m_statusUrlHasBeenSet = true;
}

bool CreateCallBackRequest::StatusUrlHasBeenSet() const
{
    return m_statusUrlHasBeenSet;
}

string CreateCallBackRequest::GetHangupUrl() const
{
    return m_hangupUrl;
}

void CreateCallBackRequest::SetHangupUrl(const string& _hangupUrl)
{
    m_hangupUrl = _hangupUrl;
    m_hangupUrlHasBeenSet = true;
}

bool CreateCallBackRequest::HangupUrlHasBeenSet() const
{
    return m_hangupUrlHasBeenSet;
}

string CreateCallBackRequest::GetRecordUrl() const
{
    return m_recordUrl;
}

void CreateCallBackRequest::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool CreateCallBackRequest::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

string CreateCallBackRequest::GetBizId() const
{
    return m_bizId;
}

void CreateCallBackRequest::SetBizId(const string& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CreateCallBackRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string CreateCallBackRequest::GetLastCallId() const
{
    return m_lastCallId;
}

void CreateCallBackRequest::SetLastCallId(const string& _lastCallId)
{
    m_lastCallId = _lastCallId;
    m_lastCallIdHasBeenSet = true;
}

bool CreateCallBackRequest::LastCallIdHasBeenSet() const
{
    return m_lastCallIdHasBeenSet;
}

RreCallerHandle CreateCallBackRequest::GetPreCallerHandle() const
{
    return m_preCallerHandle;
}

void CreateCallBackRequest::SetPreCallerHandle(const RreCallerHandle& _preCallerHandle)
{
    m_preCallerHandle = _preCallerHandle;
    m_preCallerHandleHasBeenSet = true;
}

bool CreateCallBackRequest::PreCallerHandleHasBeenSet() const
{
    return m_preCallerHandleHasBeenSet;
}

string CreateCallBackRequest::GetOrderId() const
{
    return m_orderId;
}

void CreateCallBackRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateCallBackRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}


