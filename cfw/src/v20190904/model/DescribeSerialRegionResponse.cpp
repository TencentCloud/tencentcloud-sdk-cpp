/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfw/v20190904/model/DescribeSerialRegionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeSerialRegionResponse::DescribeSerialRegionResponse() :
    m_serialRegionLstHasBeenSet(false),
    m_unUsedWidthHasBeenSet(false),
    m_unUsedQuotaHasBeenSet(false),
    m_bypassWidthHasBeenSet(false),
    m_sendBypassWidthHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSerialRegionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SerialRegionLst") && !rsp["SerialRegionLst"].IsNull())
    {
        if (!rsp["SerialRegionLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SerialRegionLst` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SerialRegionLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SerialRegionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serialRegionLst.push_back(item);
        }
        m_serialRegionLstHasBeenSet = true;
    }

    if (rsp.HasMember("UnUsedWidth") && !rsp["UnUsedWidth"].IsNull())
    {
        if (!rsp["UnUsedWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnUsedWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unUsedWidth = rsp["UnUsedWidth"].GetInt64();
        m_unUsedWidthHasBeenSet = true;
    }

    if (rsp.HasMember("UnUsedQuota") && !rsp["UnUsedQuota"].IsNull())
    {
        if (!rsp["UnUsedQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UnUsedQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unUsedQuota = rsp["UnUsedQuota"].GetInt64();
        m_unUsedQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("BypassWidth") && !rsp["BypassWidth"].IsNull())
    {
        if (!rsp["BypassWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BypassWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bypassWidth = rsp["BypassWidth"].GetInt64();
        m_bypassWidthHasBeenSet = true;
    }

    if (rsp.HasMember("SendBypassWidth") && !rsp["SendBypassWidth"].IsNull())
    {
        if (!rsp["SendBypassWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SendBypassWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendBypassWidth = rsp["SendBypassWidth"].GetInt64();
        m_sendBypassWidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSerialRegionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_serialRegionLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialRegionLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serialRegionLst.begin(); itr != m_serialRegionLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unUsedWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnUsedWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unUsedWidth, allocator);
    }

    if (m_unUsedQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnUsedQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unUsedQuota, allocator);
    }

    if (m_bypassWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BypassWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bypassWidth, allocator);
    }

    if (m_sendBypassWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendBypassWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendBypassWidth, allocator);
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


vector<SerialRegionInfo> DescribeSerialRegionResponse::GetSerialRegionLst() const
{
    return m_serialRegionLst;
}

bool DescribeSerialRegionResponse::SerialRegionLstHasBeenSet() const
{
    return m_serialRegionLstHasBeenSet;
}

int64_t DescribeSerialRegionResponse::GetUnUsedWidth() const
{
    return m_unUsedWidth;
}

bool DescribeSerialRegionResponse::UnUsedWidthHasBeenSet() const
{
    return m_unUsedWidthHasBeenSet;
}

int64_t DescribeSerialRegionResponse::GetUnUsedQuota() const
{
    return m_unUsedQuota;
}

bool DescribeSerialRegionResponse::UnUsedQuotaHasBeenSet() const
{
    return m_unUsedQuotaHasBeenSet;
}

int64_t DescribeSerialRegionResponse::GetBypassWidth() const
{
    return m_bypassWidth;
}

bool DescribeSerialRegionResponse::BypassWidthHasBeenSet() const
{
    return m_bypassWidthHasBeenSet;
}

int64_t DescribeSerialRegionResponse::GetSendBypassWidth() const
{
    return m_sendBypassWidth;
}

bool DescribeSerialRegionResponse::SendBypassWidthHasBeenSet() const
{
    return m_sendBypassWidthHasBeenSet;
}


