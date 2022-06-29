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

#include <tencentcloud/gaap/v20180529/model/DescribeFirstLinkSessionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeFirstLinkSessionResponse::DescribeFirstLinkSessionResponse() :
    m_statusHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_suiteTypeHasBeenSet(false),
    m_srcPublicIpv4HasBeenSet(false),
    m_destIpv4HasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirstLinkSessionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = rsp["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("SuiteType") && !rsp["SuiteType"].IsNull())
    {
        if (!rsp["SuiteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuiteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suiteType = string(rsp["SuiteType"].GetString());
        m_suiteTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SrcPublicIpv4") && !rsp["SrcPublicIpv4"].IsNull())
    {
        if (!rsp["SrcPublicIpv4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcPublicIpv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPublicIpv4 = string(rsp["SrcPublicIpv4"].GetString());
        m_srcPublicIpv4HasBeenSet = true;
    }

    if (rsp.HasMember("DestIpv4") && !rsp["DestIpv4"].IsNull())
    {
        if (!rsp["DestIpv4"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DestIpv4` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DestIpv4"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_destIpv4.push_back((*itr).GetString());
        }
        m_destIpv4HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFirstLinkSessionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_suiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuiteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suiteType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPublicIpv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPublicIpv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPublicIpv4.c_str(), allocator).Move(), allocator);
    }

    if (m_destIpv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestIpv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destIpv4.begin(); itr != m_destIpv4.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeFirstLinkSessionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeFirstLinkSessionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeFirstLinkSessionResponse::GetDuration() const
{
    return m_duration;
}

bool DescribeFirstLinkSessionResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string DescribeFirstLinkSessionResponse::GetSuiteType() const
{
    return m_suiteType;
}

bool DescribeFirstLinkSessionResponse::SuiteTypeHasBeenSet() const
{
    return m_suiteTypeHasBeenSet;
}

string DescribeFirstLinkSessionResponse::GetSrcPublicIpv4() const
{
    return m_srcPublicIpv4;
}

bool DescribeFirstLinkSessionResponse::SrcPublicIpv4HasBeenSet() const
{
    return m_srcPublicIpv4HasBeenSet;
}

vector<string> DescribeFirstLinkSessionResponse::GetDestIpv4() const
{
    return m_destIpv4;
}

bool DescribeFirstLinkSessionResponse::DestIpv4HasBeenSet() const
{
    return m_destIpv4HasBeenSet;
}


