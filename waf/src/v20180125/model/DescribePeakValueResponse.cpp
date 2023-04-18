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

#include <tencentcloud/waf/v20180125/model/DescribePeakValueResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribePeakValueResponse::DescribePeakValueResponse() :
    m_accessHasBeenSet(false),
    m_upHasBeenSet(false),
    m_downHasBeenSet(false),
    m_attackHasBeenSet(false),
    m_ccHasBeenSet(false)
{
}

CoreInternalOutcome DescribePeakValueResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Access") && !rsp["Access"].IsNull())
    {
        if (!rsp["Access"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Access` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_access = rsp["Access"].GetUint64();
        m_accessHasBeenSet = true;
    }

    if (rsp.HasMember("Up") && !rsp["Up"].IsNull())
    {
        if (!rsp["Up"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Up` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_up = rsp["Up"].GetUint64();
        m_upHasBeenSet = true;
    }

    if (rsp.HasMember("Down") && !rsp["Down"].IsNull())
    {
        if (!rsp["Down"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Down` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_down = rsp["Down"].GetUint64();
        m_downHasBeenSet = true;
    }

    if (rsp.HasMember("Attack") && !rsp["Attack"].IsNull())
    {
        if (!rsp["Attack"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Attack` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attack = rsp["Attack"].GetUint64();
        m_attackHasBeenSet = true;
    }

    if (rsp.HasMember("Cc") && !rsp["Cc"].IsNull())
    {
        if (!rsp["Cc"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cc` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cc = rsp["Cc"].GetUint64();
        m_ccHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePeakValueResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_accessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Access";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_access, allocator);
    }

    if (m_upHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Up";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_up, allocator);
    }

    if (m_downHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Down";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_down, allocator);
    }

    if (m_attackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attack";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attack, allocator);
    }

    if (m_ccHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cc, allocator);
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


uint64_t DescribePeakValueResponse::GetAccess() const
{
    return m_access;
}

bool DescribePeakValueResponse::AccessHasBeenSet() const
{
    return m_accessHasBeenSet;
}

uint64_t DescribePeakValueResponse::GetUp() const
{
    return m_up;
}

bool DescribePeakValueResponse::UpHasBeenSet() const
{
    return m_upHasBeenSet;
}

uint64_t DescribePeakValueResponse::GetDown() const
{
    return m_down;
}

bool DescribePeakValueResponse::DownHasBeenSet() const
{
    return m_downHasBeenSet;
}

uint64_t DescribePeakValueResponse::GetAttack() const
{
    return m_attack;
}

bool DescribePeakValueResponse::AttackHasBeenSet() const
{
    return m_attackHasBeenSet;
}

uint64_t DescribePeakValueResponse::GetCc() const
{
    return m_cc;
}

bool DescribePeakValueResponse::CcHasBeenSet() const
{
    return m_ccHasBeenSet;
}


