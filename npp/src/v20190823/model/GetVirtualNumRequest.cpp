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

#include <tencentcloud/npp/v20190823/model/GetVirtualNumRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Npp::V20190823::Model;
using namespace std;

GetVirtualNumRequest::GetVirtualNumRequest() :
    m_bizAppIdHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_accreditListHasBeenSet(false),
    m_assignVirtualNumHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_cityIdHasBeenSet(false),
    m_bizIdHasBeenSet(false),
    m_maxAssignTimeHasBeenSet(false),
    m_statusFlagHasBeenSet(false),
    m_statusUrlHasBeenSet(false),
    m_hangupUrlHasBeenSet(false),
    m_recordUrlHasBeenSet(false)
{
}

string GetVirtualNumRequest::ToJsonString() const
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

    if (m_dstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dst.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_accreditListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccreditList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accreditList.begin(); itr != m_accreditList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assignVirtualNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignVirtualNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assignVirtualNum.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAssignTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAssignTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_maxAssignTime.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetVirtualNumRequest::GetBizAppId() const
{
    return m_bizAppId;
}

void GetVirtualNumRequest::SetBizAppId(const string& _bizAppId)
{
    m_bizAppId = _bizAppId;
    m_bizAppIdHasBeenSet = true;
}

bool GetVirtualNumRequest::BizAppIdHasBeenSet() const
{
    return m_bizAppIdHasBeenSet;
}

string GetVirtualNumRequest::GetDst() const
{
    return m_dst;
}

void GetVirtualNumRequest::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool GetVirtualNumRequest::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string GetVirtualNumRequest::GetSrc() const
{
    return m_src;
}

void GetVirtualNumRequest::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool GetVirtualNumRequest::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

vector<string> GetVirtualNumRequest::GetAccreditList() const
{
    return m_accreditList;
}

void GetVirtualNumRequest::SetAccreditList(const vector<string>& _accreditList)
{
    m_accreditList = _accreditList;
    m_accreditListHasBeenSet = true;
}

bool GetVirtualNumRequest::AccreditListHasBeenSet() const
{
    return m_accreditListHasBeenSet;
}

string GetVirtualNumRequest::GetAssignVirtualNum() const
{
    return m_assignVirtualNum;
}

void GetVirtualNumRequest::SetAssignVirtualNum(const string& _assignVirtualNum)
{
    m_assignVirtualNum = _assignVirtualNum;
    m_assignVirtualNumHasBeenSet = true;
}

bool GetVirtualNumRequest::AssignVirtualNumHasBeenSet() const
{
    return m_assignVirtualNumHasBeenSet;
}

string GetVirtualNumRequest::GetRecord() const
{
    return m_record;
}

void GetVirtualNumRequest::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool GetVirtualNumRequest::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string GetVirtualNumRequest::GetCityId() const
{
    return m_cityId;
}

void GetVirtualNumRequest::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool GetVirtualNumRequest::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

string GetVirtualNumRequest::GetBizId() const
{
    return m_bizId;
}

void GetVirtualNumRequest::SetBizId(const string& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool GetVirtualNumRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string GetVirtualNumRequest::GetMaxAssignTime() const
{
    return m_maxAssignTime;
}

void GetVirtualNumRequest::SetMaxAssignTime(const string& _maxAssignTime)
{
    m_maxAssignTime = _maxAssignTime;
    m_maxAssignTimeHasBeenSet = true;
}

bool GetVirtualNumRequest::MaxAssignTimeHasBeenSet() const
{
    return m_maxAssignTimeHasBeenSet;
}

string GetVirtualNumRequest::GetStatusFlag() const
{
    return m_statusFlag;
}

void GetVirtualNumRequest::SetStatusFlag(const string& _statusFlag)
{
    m_statusFlag = _statusFlag;
    m_statusFlagHasBeenSet = true;
}

bool GetVirtualNumRequest::StatusFlagHasBeenSet() const
{
    return m_statusFlagHasBeenSet;
}

string GetVirtualNumRequest::GetStatusUrl() const
{
    return m_statusUrl;
}

void GetVirtualNumRequest::SetStatusUrl(const string& _statusUrl)
{
    m_statusUrl = _statusUrl;
    m_statusUrlHasBeenSet = true;
}

bool GetVirtualNumRequest::StatusUrlHasBeenSet() const
{
    return m_statusUrlHasBeenSet;
}

string GetVirtualNumRequest::GetHangupUrl() const
{
    return m_hangupUrl;
}

void GetVirtualNumRequest::SetHangupUrl(const string& _hangupUrl)
{
    m_hangupUrl = _hangupUrl;
    m_hangupUrlHasBeenSet = true;
}

bool GetVirtualNumRequest::HangupUrlHasBeenSet() const
{
    return m_hangupUrlHasBeenSet;
}

string GetVirtualNumRequest::GetRecordUrl() const
{
    return m_recordUrl;
}

void GetVirtualNumRequest::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool GetVirtualNumRequest::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}


