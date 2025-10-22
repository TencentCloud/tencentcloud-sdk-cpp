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

#include <tencentcloud/dayu/v20180709/model/DescribeDDoSDefendStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeDDoSDefendStatusResponse::DescribeDDoSDefendStatusResponse() :
    m_defendStatusHasBeenSet(false),
    m_undefendExpireHasBeenSet(false),
    m_showFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDDoSDefendStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DefendStatus") && !rsp["DefendStatus"].IsNull())
    {
        if (!rsp["DefendStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DefendStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = rsp["DefendStatus"].GetUint64();
        m_defendStatusHasBeenSet = true;
    }

    if (rsp.HasMember("UndefendExpire") && !rsp["UndefendExpire"].IsNull())
    {
        if (!rsp["UndefendExpire"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UndefendExpire` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_undefendExpire = string(rsp["UndefendExpire"].GetString());
        m_undefendExpireHasBeenSet = true;
    }

    if (rsp.HasMember("ShowFlag") && !rsp["ShowFlag"].IsNull())
    {
        if (!rsp["ShowFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShowFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_showFlag = rsp["ShowFlag"].GetUint64();
        m_showFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDDoSDefendStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendStatus, allocator);
    }

    if (m_undefendExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UndefendExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_undefendExpire.c_str(), allocator).Move(), allocator);
    }

    if (m_showFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showFlag, allocator);
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


uint64_t DescribeDDoSDefendStatusResponse::GetDefendStatus() const
{
    return m_defendStatus;
}

bool DescribeDDoSDefendStatusResponse::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

string DescribeDDoSDefendStatusResponse::GetUndefendExpire() const
{
    return m_undefendExpire;
}

bool DescribeDDoSDefendStatusResponse::UndefendExpireHasBeenSet() const
{
    return m_undefendExpireHasBeenSet;
}

uint64_t DescribeDDoSDefendStatusResponse::GetShowFlag() const
{
    return m_showFlag;
}

bool DescribeDDoSDefendStatusResponse::ShowFlagHasBeenSet() const
{
    return m_showFlagHasBeenSet;
}


