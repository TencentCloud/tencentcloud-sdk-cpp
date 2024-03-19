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

#include <tencentcloud/waf/v20180125/model/DescribeAttackOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeAttackOverviewResponse::DescribeAttackOverviewResponse() :
    m_accessCountHasBeenSet(false),
    m_attackCountHasBeenSet(false),
    m_aCLCountHasBeenSet(false),
    m_cCCountHasBeenSet(false),
    m_botCountHasBeenSet(false),
    m_apiAssetsCountHasBeenSet(false),
    m_apiRiskEventCountHasBeenSet(false),
    m_iPBlackCountHasBeenSet(false),
    m_tamperCountHasBeenSet(false),
    m_leakCountHasBeenSet(false),
    m_apiRiskEventCircleCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAttackOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AccessCount") && !rsp["AccessCount"].IsNull())
    {
        if (!rsp["AccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCount = rsp["AccessCount"].GetUint64();
        m_accessCountHasBeenSet = true;
    }

    if (rsp.HasMember("AttackCount") && !rsp["AttackCount"].IsNull())
    {
        if (!rsp["AttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = rsp["AttackCount"].GetUint64();
        m_attackCountHasBeenSet = true;
    }

    if (rsp.HasMember("ACLCount") && !rsp["ACLCount"].IsNull())
    {
        if (!rsp["ACLCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ACLCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aCLCount = rsp["ACLCount"].GetUint64();
        m_aCLCountHasBeenSet = true;
    }

    if (rsp.HasMember("CCCount") && !rsp["CCCount"].IsNull())
    {
        if (!rsp["CCCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCCount = rsp["CCCount"].GetUint64();
        m_cCCountHasBeenSet = true;
    }

    if (rsp.HasMember("BotCount") && !rsp["BotCount"].IsNull())
    {
        if (!rsp["BotCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BotCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_botCount = rsp["BotCount"].GetUint64();
        m_botCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApiAssetsCount") && !rsp["ApiAssetsCount"].IsNull())
    {
        if (!rsp["ApiAssetsCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiAssetsCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiAssetsCount = rsp["ApiAssetsCount"].GetUint64();
        m_apiAssetsCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApiRiskEventCount") && !rsp["ApiRiskEventCount"].IsNull())
    {
        if (!rsp["ApiRiskEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRiskEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiRiskEventCount = rsp["ApiRiskEventCount"].GetUint64();
        m_apiRiskEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("IPBlackCount") && !rsp["IPBlackCount"].IsNull())
    {
        if (!rsp["IPBlackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IPBlackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iPBlackCount = rsp["IPBlackCount"].GetUint64();
        m_iPBlackCountHasBeenSet = true;
    }

    if (rsp.HasMember("TamperCount") && !rsp["TamperCount"].IsNull())
    {
        if (!rsp["TamperCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TamperCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tamperCount = rsp["TamperCount"].GetUint64();
        m_tamperCountHasBeenSet = true;
    }

    if (rsp.HasMember("LeakCount") && !rsp["LeakCount"].IsNull())
    {
        if (!rsp["LeakCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeakCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leakCount = rsp["LeakCount"].GetUint64();
        m_leakCountHasBeenSet = true;
    }

    if (rsp.HasMember("ApiRiskEventCircleCount") && !rsp["ApiRiskEventCircleCount"].IsNull())
    {
        if (!rsp["ApiRiskEventCircleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRiskEventCircleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiRiskEventCircleCount = rsp["ApiRiskEventCircleCount"].GetInt64();
        m_apiRiskEventCircleCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAttackOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_accessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCount, allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

    if (m_aCLCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ACLCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aCLCount, allocator);
    }

    if (m_cCCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCCount, allocator);
    }

    if (m_botCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botCount, allocator);
    }

    if (m_apiAssetsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAssetsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiAssetsCount, allocator);
    }

    if (m_apiRiskEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRiskEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiRiskEventCount, allocator);
    }

    if (m_iPBlackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPBlackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iPBlackCount, allocator);
    }

    if (m_tamperCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TamperCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tamperCount, allocator);
    }

    if (m_leakCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leakCount, allocator);
    }

    if (m_apiRiskEventCircleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiRiskEventCircleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiRiskEventCircleCount, allocator);
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


uint64_t DescribeAttackOverviewResponse::GetAccessCount() const
{
    return m_accessCount;
}

bool DescribeAttackOverviewResponse::AccessCountHasBeenSet() const
{
    return m_accessCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetAttackCount() const
{
    return m_attackCount;
}

bool DescribeAttackOverviewResponse::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetACLCount() const
{
    return m_aCLCount;
}

bool DescribeAttackOverviewResponse::ACLCountHasBeenSet() const
{
    return m_aCLCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetCCCount() const
{
    return m_cCCount;
}

bool DescribeAttackOverviewResponse::CCCountHasBeenSet() const
{
    return m_cCCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetBotCount() const
{
    return m_botCount;
}

bool DescribeAttackOverviewResponse::BotCountHasBeenSet() const
{
    return m_botCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetApiAssetsCount() const
{
    return m_apiAssetsCount;
}

bool DescribeAttackOverviewResponse::ApiAssetsCountHasBeenSet() const
{
    return m_apiAssetsCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetApiRiskEventCount() const
{
    return m_apiRiskEventCount;
}

bool DescribeAttackOverviewResponse::ApiRiskEventCountHasBeenSet() const
{
    return m_apiRiskEventCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetIPBlackCount() const
{
    return m_iPBlackCount;
}

bool DescribeAttackOverviewResponse::IPBlackCountHasBeenSet() const
{
    return m_iPBlackCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetTamperCount() const
{
    return m_tamperCount;
}

bool DescribeAttackOverviewResponse::TamperCountHasBeenSet() const
{
    return m_tamperCountHasBeenSet;
}

uint64_t DescribeAttackOverviewResponse::GetLeakCount() const
{
    return m_leakCount;
}

bool DescribeAttackOverviewResponse::LeakCountHasBeenSet() const
{
    return m_leakCountHasBeenSet;
}

int64_t DescribeAttackOverviewResponse::GetApiRiskEventCircleCount() const
{
    return m_apiRiskEventCircleCount;
}

bool DescribeAttackOverviewResponse::ApiRiskEventCircleCountHasBeenSet() const
{
    return m_apiRiskEventCircleCountHasBeenSet;
}


