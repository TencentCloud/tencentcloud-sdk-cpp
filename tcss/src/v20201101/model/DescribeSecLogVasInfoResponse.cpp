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

#include <tencentcloud/tcss/v20201101/model/DescribeSecLogVasInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeSecLogVasInfoResponse::DescribeSecLogVasInfoResponse() :
    m_buyStatusHasBeenSet(false),
    m_logSaveMonthHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logCapacityHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_isPurchasedHasBeenSet(false),
    m_trialCapacityHasBeenSet(false),
    m_resourceDetailListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecLogVasInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BuyStatus") && !rsp["BuyStatus"].IsNull())
    {
        if (!rsp["BuyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyStatus = string(rsp["BuyStatus"].GetString());
        m_buyStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LogSaveMonth") && !rsp["LogSaveMonth"].IsNull())
    {
        if (!rsp["LogSaveMonth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSaveMonth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logSaveMonth = rsp["LogSaveMonth"].GetInt64();
        m_logSaveMonthHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LogCapacity") && !rsp["LogCapacity"].IsNull())
    {
        if (!rsp["LogCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logCapacity = rsp["LogCapacity"].GetUint64();
        m_logCapacityHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceID") && !rsp["ResourceID"].IsNull())
    {
        if (!rsp["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(rsp["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (rsp.HasMember("IsPurchased") && !rsp["IsPurchased"].IsNull())
    {
        if (!rsp["IsPurchased"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPurchased` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPurchased = rsp["IsPurchased"].GetBool();
        m_isPurchasedHasBeenSet = true;
    }

    if (rsp.HasMember("TrialCapacity") && !rsp["TrialCapacity"].IsNull())
    {
        if (!rsp["TrialCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrialCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialCapacity = rsp["TrialCapacity"].GetUint64();
        m_trialCapacityHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceDetailList") && !rsp["ResourceDetailList"].IsNull())
    {
        if (!rsp["ResourceDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceDetailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VasInfoResourceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceDetailList.push_back(item);
        }
        m_resourceDetailListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecLogVasInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_buyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_logSaveMonthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSaveMonth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logSaveMonth, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_logCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logCapacity, allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_isPurchasedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPurchased";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPurchased, allocator);
    }

    if (m_trialCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialCapacity, allocator);
    }

    if (m_resourceDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceDetailList.begin(); itr != m_resourceDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeSecLogVasInfoResponse::GetBuyStatus() const
{
    return m_buyStatus;
}

bool DescribeSecLogVasInfoResponse::BuyStatusHasBeenSet() const
{
    return m_buyStatusHasBeenSet;
}

int64_t DescribeSecLogVasInfoResponse::GetLogSaveMonth() const
{
    return m_logSaveMonth;
}

bool DescribeSecLogVasInfoResponse::LogSaveMonthHasBeenSet() const
{
    return m_logSaveMonthHasBeenSet;
}

string DescribeSecLogVasInfoResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeSecLogVasInfoResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSecLogVasInfoResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeSecLogVasInfoResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeSecLogVasInfoResponse::GetLogCapacity() const
{
    return m_logCapacity;
}

bool DescribeSecLogVasInfoResponse::LogCapacityHasBeenSet() const
{
    return m_logCapacityHasBeenSet;
}

string DescribeSecLogVasInfoResponse::GetResourceID() const
{
    return m_resourceID;
}

bool DescribeSecLogVasInfoResponse::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

bool DescribeSecLogVasInfoResponse::GetIsPurchased() const
{
    return m_isPurchased;
}

bool DescribeSecLogVasInfoResponse::IsPurchasedHasBeenSet() const
{
    return m_isPurchasedHasBeenSet;
}

uint64_t DescribeSecLogVasInfoResponse::GetTrialCapacity() const
{
    return m_trialCapacity;
}

bool DescribeSecLogVasInfoResponse::TrialCapacityHasBeenSet() const
{
    return m_trialCapacityHasBeenSet;
}

vector<VasInfoResourceDetail> DescribeSecLogVasInfoResponse::GetResourceDetailList() const
{
    return m_resourceDetailList;
}

bool DescribeSecLogVasInfoResponse::ResourceDetailListHasBeenSet() const
{
    return m_resourceDetailListHasBeenSet;
}


