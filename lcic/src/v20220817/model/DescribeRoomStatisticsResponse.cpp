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

#include <tencentcloud/lcic/v20220817/model/DescribeRoomStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

DescribeRoomStatisticsResponse::DescribeRoomStatisticsResponse() :
    m_peakMemberNumberHasBeenSet(false),
    m_memberNumberHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_memberRecordsHasBeenSet(false),
    m_realStartTimeHasBeenSet(false),
    m_realEndTimeHasBeenSet(false),
    m_messageCountHasBeenSet(false),
    m_micCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRoomStatisticsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("PeakMemberNumber") && !rsp["PeakMemberNumber"].IsNull())
    {
        if (!rsp["PeakMemberNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PeakMemberNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_peakMemberNumber = rsp["PeakMemberNumber"].GetUint64();
        m_peakMemberNumberHasBeenSet = true;
    }

    if (rsp.HasMember("MemberNumber") && !rsp["MemberNumber"].IsNull())
    {
        if (!rsp["MemberNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memberNumber = rsp["MemberNumber"].GetUint64();
        m_memberNumberHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (rsp.HasMember("MemberRecords") && !rsp["MemberRecords"].IsNull())
    {
        if (!rsp["MemberRecords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemberRecords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MemberRecords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberRecord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_memberRecords.push_back(item);
        }
        m_memberRecordsHasBeenSet = true;
    }

    if (rsp.HasMember("RealStartTime") && !rsp["RealStartTime"].IsNull())
    {
        if (!rsp["RealStartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealStartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realStartTime = rsp["RealStartTime"].GetUint64();
        m_realStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RealEndTime") && !rsp["RealEndTime"].IsNull())
    {
        if (!rsp["RealEndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RealEndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_realEndTime = rsp["RealEndTime"].GetUint64();
        m_realEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MessageCount") && !rsp["MessageCount"].IsNull())
    {
        if (!rsp["MessageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_messageCount = rsp["MessageCount"].GetUint64();
        m_messageCountHasBeenSet = true;
    }

    if (rsp.HasMember("MicCount") && !rsp["MicCount"].IsNull())
    {
        if (!rsp["MicCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MicCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_micCount = rsp["MicCount"].GetUint64();
        m_micCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRoomStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_peakMemberNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeakMemberNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_peakMemberNumber, allocator);
    }

    if (m_memberNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberNumber, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_memberRecordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberRecords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_memberRecords.begin(); itr != m_memberRecords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_realStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realStartTime, allocator);
    }

    if (m_realEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realEndTime, allocator);
    }

    if (m_messageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageCount, allocator);
    }

    if (m_micCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_micCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRoomStatisticsResponse::GetPeakMemberNumber() const
{
    return m_peakMemberNumber;
}

bool DescribeRoomStatisticsResponse::PeakMemberNumberHasBeenSet() const
{
    return m_peakMemberNumberHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetMemberNumber() const
{
    return m_memberNumber;
}

bool DescribeRoomStatisticsResponse::MemberNumberHasBeenSet() const
{
    return m_memberNumberHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetTotal() const
{
    return m_total;
}

bool DescribeRoomStatisticsResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<MemberRecord> DescribeRoomStatisticsResponse::GetMemberRecords() const
{
    return m_memberRecords;
}

bool DescribeRoomStatisticsResponse::MemberRecordsHasBeenSet() const
{
    return m_memberRecordsHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetRealStartTime() const
{
    return m_realStartTime;
}

bool DescribeRoomStatisticsResponse::RealStartTimeHasBeenSet() const
{
    return m_realStartTimeHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetRealEndTime() const
{
    return m_realEndTime;
}

bool DescribeRoomStatisticsResponse::RealEndTimeHasBeenSet() const
{
    return m_realEndTimeHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetMessageCount() const
{
    return m_messageCount;
}

bool DescribeRoomStatisticsResponse::MessageCountHasBeenSet() const
{
    return m_messageCountHasBeenSet;
}

uint64_t DescribeRoomStatisticsResponse::GetMicCount() const
{
    return m_micCount;
}

bool DescribeRoomStatisticsResponse::MicCountHasBeenSet() const
{
    return m_micCountHasBeenSet;
}


