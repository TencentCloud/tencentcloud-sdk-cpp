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

#include <tencentcloud/waf/v20180125/model/DescribeDomainCountInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeDomainCountInfoResponse::DescribeDomainCountInfoResponse() :
    m_allDomainHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_wafDomainCountHasBeenSet(false),
    m_leftDomainCountHasBeenSet(false),
    m_openWafDomainHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDomainCountInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllDomain") && !rsp["AllDomain"].IsNull())
    {
        if (!rsp["AllDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allDomain = rsp["AllDomain"].GetUint64();
        m_allDomainHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WafDomainCount") && !rsp["WafDomainCount"].IsNull())
    {
        if (!rsp["WafDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WafDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wafDomainCount = rsp["WafDomainCount"].GetUint64();
        m_wafDomainCountHasBeenSet = true;
    }

    if (rsp.HasMember("LeftDomainCount") && !rsp["LeftDomainCount"].IsNull())
    {
        if (!rsp["LeftDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftDomainCount = rsp["LeftDomainCount"].GetUint64();
        m_leftDomainCountHasBeenSet = true;
    }

    if (rsp.HasMember("OpenWafDomain") && !rsp["OpenWafDomain"].IsNull())
    {
        if (!rsp["OpenWafDomain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenWafDomain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openWafDomain = rsp["OpenWafDomain"].GetUint64();
        m_openWafDomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDomainCountInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allDomain, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_wafDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wafDomainCount, allocator);
    }

    if (m_leftDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftDomainCount, allocator);
    }

    if (m_openWafDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenWafDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openWafDomain, allocator);
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


uint64_t DescribeDomainCountInfoResponse::GetAllDomain() const
{
    return m_allDomain;
}

bool DescribeDomainCountInfoResponse::AllDomainHasBeenSet() const
{
    return m_allDomainHasBeenSet;
}

string DescribeDomainCountInfoResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDomainCountInfoResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t DescribeDomainCountInfoResponse::GetWafDomainCount() const
{
    return m_wafDomainCount;
}

bool DescribeDomainCountInfoResponse::WafDomainCountHasBeenSet() const
{
    return m_wafDomainCountHasBeenSet;
}

uint64_t DescribeDomainCountInfoResponse::GetLeftDomainCount() const
{
    return m_leftDomainCount;
}

bool DescribeDomainCountInfoResponse::LeftDomainCountHasBeenSet() const
{
    return m_leftDomainCountHasBeenSet;
}

uint64_t DescribeDomainCountInfoResponse::GetOpenWafDomain() const
{
    return m_openWafDomain;
}

bool DescribeDomainCountInfoResponse::OpenWafDomainHasBeenSet() const
{
    return m_openWafDomainHasBeenSet;
}


