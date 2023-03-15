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

#include <tencentcloud/hasim/v20210716/model/DescribeLinksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

DescribeLinksRequest::DescribeLinksRequest() :
    m_linkIDHasBeenSet(false),
    m_iCCIDHasBeenSet(false),
    m_iMEIHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_teleOperatorHasBeenSet(false),
    m_tagIDHasBeenSet(false),
    m_tacticIDHasBeenSet(false),
    m_linkedStateHasBeenSet(false),
    m_tagIDsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeLinksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_linkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_linkID, allocator);
    }

    if (m_iCCIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICCID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iCCID.c_str(), allocator).Move(), allocator);
    }

    if (m_iMEIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMEI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iMEI.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_teleOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeleOperator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teleOperator, allocator);
    }

    if (m_tagIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tagID, allocator);
    }

    if (m_tacticIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TacticID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tacticID, allocator);
    }

    if (m_linkedStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkedState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_linkedState, allocator);
    }

    if (m_tagIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDs.begin(); itr != m_tagIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeLinksRequest::GetLinkID() const
{
    return m_linkID;
}

void DescribeLinksRequest::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool DescribeLinksRequest::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

string DescribeLinksRequest::GetICCID() const
{
    return m_iCCID;
}

void DescribeLinksRequest::SetICCID(const string& _iCCID)
{
    m_iCCID = _iCCID;
    m_iCCIDHasBeenSet = true;
}

bool DescribeLinksRequest::ICCIDHasBeenSet() const
{
    return m_iCCIDHasBeenSet;
}

string DescribeLinksRequest::GetIMEI() const
{
    return m_iMEI;
}

void DescribeLinksRequest::SetIMEI(const string& _iMEI)
{
    m_iMEI = _iMEI;
    m_iMEIHasBeenSet = true;
}

bool DescribeLinksRequest::IMEIHasBeenSet() const
{
    return m_iMEIHasBeenSet;
}

uint64_t DescribeLinksRequest::GetStatus() const
{
    return m_status;
}

void DescribeLinksRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeLinksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeLinksRequest::GetTeleOperator() const
{
    return m_teleOperator;
}

void DescribeLinksRequest::SetTeleOperator(const uint64_t& _teleOperator)
{
    m_teleOperator = _teleOperator;
    m_teleOperatorHasBeenSet = true;
}

bool DescribeLinksRequest::TeleOperatorHasBeenSet() const
{
    return m_teleOperatorHasBeenSet;
}

uint64_t DescribeLinksRequest::GetTagID() const
{
    return m_tagID;
}

void DescribeLinksRequest::SetTagID(const uint64_t& _tagID)
{
    m_tagID = _tagID;
    m_tagIDHasBeenSet = true;
}

bool DescribeLinksRequest::TagIDHasBeenSet() const
{
    return m_tagIDHasBeenSet;
}

uint64_t DescribeLinksRequest::GetTacticID() const
{
    return m_tacticID;
}

void DescribeLinksRequest::SetTacticID(const uint64_t& _tacticID)
{
    m_tacticID = _tacticID;
    m_tacticIDHasBeenSet = true;
}

bool DescribeLinksRequest::TacticIDHasBeenSet() const
{
    return m_tacticIDHasBeenSet;
}

int64_t DescribeLinksRequest::GetLinkedState() const
{
    return m_linkedState;
}

void DescribeLinksRequest::SetLinkedState(const int64_t& _linkedState)
{
    m_linkedState = _linkedState;
    m_linkedStateHasBeenSet = true;
}

bool DescribeLinksRequest::LinkedStateHasBeenSet() const
{
    return m_linkedStateHasBeenSet;
}

vector<int64_t> DescribeLinksRequest::GetTagIDs() const
{
    return m_tagIDs;
}

void DescribeLinksRequest::SetTagIDs(const vector<int64_t>& _tagIDs)
{
    m_tagIDs = _tagIDs;
    m_tagIDsHasBeenSet = true;
}

bool DescribeLinksRequest::TagIDsHasBeenSet() const
{
    return m_tagIDsHasBeenSet;
}

int64_t DescribeLinksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLinksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLinksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeLinksRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLinksRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLinksRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


