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

#include <tencentcloud/redis/v20180412/model/DescribeBandwidthRangeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeBandwidthRangeResponse::DescribeBandwidthRangeResponse() :
    m_baseBandwidthHasBeenSet(false),
    m_addBandwidthHasBeenSet(false),
    m_minAddBandwidthHasBeenSet(false),
    m_maxAddBandwidthHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBandwidthRangeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BaseBandwidth") && !rsp["BaseBandwidth"].IsNull())
    {
        if (!rsp["BaseBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baseBandwidth = rsp["BaseBandwidth"].GetInt64();
        m_baseBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("AddBandwidth") && !rsp["AddBandwidth"].IsNull())
    {
        if (!rsp["AddBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addBandwidth = rsp["AddBandwidth"].GetInt64();
        m_addBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("MinAddBandwidth") && !rsp["MinAddBandwidth"].IsNull())
    {
        if (!rsp["MinAddBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MinAddBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minAddBandwidth = rsp["MinAddBandwidth"].GetInt64();
        m_minAddBandwidthHasBeenSet = true;
    }

    if (rsp.HasMember("MaxAddBandwidth") && !rsp["MaxAddBandwidth"].IsNull())
    {
        if (!rsp["MaxAddBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAddBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAddBandwidth = rsp["MaxAddBandwidth"].GetInt64();
        m_maxAddBandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBandwidthRangeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_baseBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseBandwidth, allocator);
    }

    if (m_addBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addBandwidth, allocator);
    }

    if (m_minAddBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinAddBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minAddBandwidth, allocator);
    }

    if (m_maxAddBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAddBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAddBandwidth, allocator);
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


int64_t DescribeBandwidthRangeResponse::GetBaseBandwidth() const
{
    return m_baseBandwidth;
}

bool DescribeBandwidthRangeResponse::BaseBandwidthHasBeenSet() const
{
    return m_baseBandwidthHasBeenSet;
}

int64_t DescribeBandwidthRangeResponse::GetAddBandwidth() const
{
    return m_addBandwidth;
}

bool DescribeBandwidthRangeResponse::AddBandwidthHasBeenSet() const
{
    return m_addBandwidthHasBeenSet;
}

int64_t DescribeBandwidthRangeResponse::GetMinAddBandwidth() const
{
    return m_minAddBandwidth;
}

bool DescribeBandwidthRangeResponse::MinAddBandwidthHasBeenSet() const
{
    return m_minAddBandwidthHasBeenSet;
}

int64_t DescribeBandwidthRangeResponse::GetMaxAddBandwidth() const
{
    return m_maxAddBandwidth;
}

bool DescribeBandwidthRangeResponse::MaxAddBandwidthHasBeenSet() const
{
    return m_maxAddBandwidthHasBeenSet;
}


