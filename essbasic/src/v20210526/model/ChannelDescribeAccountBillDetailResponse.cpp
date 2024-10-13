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

#include <tencentcloud/essbasic/v20210526/model/ChannelDescribeAccountBillDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelDescribeAccountBillDetailResponse::ChannelDescribeAccountBillDetailResponse() :
    m_boundAccountsNumberHasBeenSet(false),
    m_remainAvailableAccountsNumberHasBeenSet(false),
    m_invalidAccountsNumberHasBeenSet(false),
    m_totalBuyAccountsNumberHasBeenSet(false),
    m_totalGiftAccountsNumberHasBeenSet(false)
{
}

CoreInternalOutcome ChannelDescribeAccountBillDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BoundAccountsNumber") && !rsp["BoundAccountsNumber"].IsNull())
    {
        if (!rsp["BoundAccountsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BoundAccountsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_boundAccountsNumber = rsp["BoundAccountsNumber"].GetInt64();
        m_boundAccountsNumberHasBeenSet = true;
    }

    if (rsp.HasMember("RemainAvailableAccountsNumber") && !rsp["RemainAvailableAccountsNumber"].IsNull())
    {
        if (!rsp["RemainAvailableAccountsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainAvailableAccountsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainAvailableAccountsNumber = rsp["RemainAvailableAccountsNumber"].GetInt64();
        m_remainAvailableAccountsNumberHasBeenSet = true;
    }

    if (rsp.HasMember("InvalidAccountsNumber") && !rsp["InvalidAccountsNumber"].IsNull())
    {
        if (!rsp["InvalidAccountsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvalidAccountsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invalidAccountsNumber = rsp["InvalidAccountsNumber"].GetInt64();
        m_invalidAccountsNumberHasBeenSet = true;
    }

    if (rsp.HasMember("TotalBuyAccountsNumber") && !rsp["TotalBuyAccountsNumber"].IsNull())
    {
        if (!rsp["TotalBuyAccountsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalBuyAccountsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBuyAccountsNumber = rsp["TotalBuyAccountsNumber"].GetInt64();
        m_totalBuyAccountsNumberHasBeenSet = true;
    }

    if (rsp.HasMember("TotalGiftAccountsNumber") && !rsp["TotalGiftAccountsNumber"].IsNull())
    {
        if (!rsp["TotalGiftAccountsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalGiftAccountsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalGiftAccountsNumber = rsp["TotalGiftAccountsNumber"].GetInt64();
        m_totalGiftAccountsNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChannelDescribeAccountBillDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_boundAccountsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundAccountsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boundAccountsNumber, allocator);
    }

    if (m_remainAvailableAccountsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainAvailableAccountsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainAvailableAccountsNumber, allocator);
    }

    if (m_invalidAccountsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidAccountsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalidAccountsNumber, allocator);
    }

    if (m_totalBuyAccountsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBuyAccountsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBuyAccountsNumber, allocator);
    }

    if (m_totalGiftAccountsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalGiftAccountsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalGiftAccountsNumber, allocator);
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


int64_t ChannelDescribeAccountBillDetailResponse::GetBoundAccountsNumber() const
{
    return m_boundAccountsNumber;
}

bool ChannelDescribeAccountBillDetailResponse::BoundAccountsNumberHasBeenSet() const
{
    return m_boundAccountsNumberHasBeenSet;
}

int64_t ChannelDescribeAccountBillDetailResponse::GetRemainAvailableAccountsNumber() const
{
    return m_remainAvailableAccountsNumber;
}

bool ChannelDescribeAccountBillDetailResponse::RemainAvailableAccountsNumberHasBeenSet() const
{
    return m_remainAvailableAccountsNumberHasBeenSet;
}

int64_t ChannelDescribeAccountBillDetailResponse::GetInvalidAccountsNumber() const
{
    return m_invalidAccountsNumber;
}

bool ChannelDescribeAccountBillDetailResponse::InvalidAccountsNumberHasBeenSet() const
{
    return m_invalidAccountsNumberHasBeenSet;
}

int64_t ChannelDescribeAccountBillDetailResponse::GetTotalBuyAccountsNumber() const
{
    return m_totalBuyAccountsNumber;
}

bool ChannelDescribeAccountBillDetailResponse::TotalBuyAccountsNumberHasBeenSet() const
{
    return m_totalBuyAccountsNumberHasBeenSet;
}

int64_t ChannelDescribeAccountBillDetailResponse::GetTotalGiftAccountsNumber() const
{
    return m_totalGiftAccountsNumber;
}

bool ChannelDescribeAccountBillDetailResponse::TotalGiftAccountsNumberHasBeenSet() const
{
    return m_totalGiftAccountsNumberHasBeenSet;
}


