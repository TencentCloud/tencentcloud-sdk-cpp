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

#include <tencentcloud/iotvideo/v20211125/model/DescribeCloudStorageOrderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DescribeCloudStorageOrderResponse::DescribeCloudStorageOrderResponse() :
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_amountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudStorageOrderResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = rsp["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PackageId") && !rsp["PackageId"].IsNull())
    {
        if (!rsp["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(rsp["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelId") && !rsp["ChannelId"].IsNull())
    {
        if (!rsp["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = rsp["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetUint64();
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("Amount") && !rsp["Amount"].IsNull())
    {
        if (!rsp["Amount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Amount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = rsp["Amount"].GetUint64();
        m_amountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudStorageOrderResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
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


uint64_t DescribeCloudStorageOrderResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeCloudStorageOrderResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeCloudStorageOrderResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeCloudStorageOrderResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeCloudStorageOrderResponse::GetPackageId() const
{
    return m_packageId;
}

bool DescribeCloudStorageOrderResponse::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t DescribeCloudStorageOrderResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCloudStorageOrderResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeCloudStorageOrderResponse::GetChannelId() const
{
    return m_channelId;
}

bool DescribeCloudStorageOrderResponse::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

uint64_t DescribeCloudStorageOrderResponse::GetPrice() const
{
    return m_price;
}

bool DescribeCloudStorageOrderResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

uint64_t DescribeCloudStorageOrderResponse::GetAmount() const
{
    return m_amount;
}

bool DescribeCloudStorageOrderResponse::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}


