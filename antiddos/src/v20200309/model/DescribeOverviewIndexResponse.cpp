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

#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewIndexResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeOverviewIndexResponse::DescribeOverviewIndexResponse() :
    m_allIpCountHasBeenSet(false),
    m_antiddosIpCountHasBeenSet(false),
    m_attackIpCountHasBeenSet(false),
    m_blockIpCountHasBeenSet(false),
    m_antiddosDomainCountHasBeenSet(false),
    m_attackDomainCountHasBeenSet(false),
    m_maxAttackFlowHasBeenSet(false),
    m_newAttackTimeHasBeenSet(false),
    m_newAttackIpHasBeenSet(false),
    m_newAttackTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOverviewIndexResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AllIpCount") && !rsp["AllIpCount"].IsNull())
    {
        if (!rsp["AllIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AllIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_allIpCount = rsp["AllIpCount"].GetUint64();
        m_allIpCountHasBeenSet = true;
    }

    if (rsp.HasMember("AntiddosIpCount") && !rsp["AntiddosIpCount"].IsNull())
    {
        if (!rsp["AntiddosIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AntiddosIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiddosIpCount = rsp["AntiddosIpCount"].GetUint64();
        m_antiddosIpCountHasBeenSet = true;
    }

    if (rsp.HasMember("AttackIpCount") && !rsp["AttackIpCount"].IsNull())
    {
        if (!rsp["AttackIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackIpCount = rsp["AttackIpCount"].GetUint64();
        m_attackIpCountHasBeenSet = true;
    }

    if (rsp.HasMember("BlockIpCount") && !rsp["BlockIpCount"].IsNull())
    {
        if (!rsp["BlockIpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockIpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_blockIpCount = rsp["BlockIpCount"].GetUint64();
        m_blockIpCountHasBeenSet = true;
    }

    if (rsp.HasMember("AntiddosDomainCount") && !rsp["AntiddosDomainCount"].IsNull())
    {
        if (!rsp["AntiddosDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AntiddosDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_antiddosDomainCount = rsp["AntiddosDomainCount"].GetUint64();
        m_antiddosDomainCountHasBeenSet = true;
    }

    if (rsp.HasMember("AttackDomainCount") && !rsp["AttackDomainCount"].IsNull())
    {
        if (!rsp["AttackDomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackDomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackDomainCount = rsp["AttackDomainCount"].GetUint64();
        m_attackDomainCountHasBeenSet = true;
    }

    if (rsp.HasMember("MaxAttackFlow") && !rsp["MaxAttackFlow"].IsNull())
    {
        if (!rsp["MaxAttackFlow"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxAttackFlow` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAttackFlow = rsp["MaxAttackFlow"].GetUint64();
        m_maxAttackFlowHasBeenSet = true;
    }

    if (rsp.HasMember("NewAttackTime") && !rsp["NewAttackTime"].IsNull())
    {
        if (!rsp["NewAttackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAttackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAttackTime = string(rsp["NewAttackTime"].GetString());
        m_newAttackTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NewAttackIp") && !rsp["NewAttackIp"].IsNull())
    {
        if (!rsp["NewAttackIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAttackIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAttackIp = string(rsp["NewAttackIp"].GetString());
        m_newAttackIpHasBeenSet = true;
    }

    if (rsp.HasMember("NewAttackType") && !rsp["NewAttackType"].IsNull())
    {
        if (!rsp["NewAttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewAttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAttackType = string(rsp["NewAttackType"].GetString());
        m_newAttackTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOverviewIndexResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_allIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allIpCount, allocator);
    }

    if (m_antiddosIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiddosIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiddosIpCount, allocator);
    }

    if (m_attackIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackIpCount, allocator);
    }

    if (m_blockIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockIpCount, allocator);
    }

    if (m_antiddosDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AntiddosDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_antiddosDomainCount, allocator);
    }

    if (m_attackDomainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackDomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackDomainCount, allocator);
    }

    if (m_maxAttackFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAttackFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAttackFlow, allocator);
    }

    if (m_newAttackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAttackTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newAttackIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAttackIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAttackIp.c_str(), allocator).Move(), allocator);
    }

    if (m_newAttackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAttackType.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeOverviewIndexResponse::GetAllIpCount() const
{
    return m_allIpCount;
}

bool DescribeOverviewIndexResponse::AllIpCountHasBeenSet() const
{
    return m_allIpCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetAntiddosIpCount() const
{
    return m_antiddosIpCount;
}

bool DescribeOverviewIndexResponse::AntiddosIpCountHasBeenSet() const
{
    return m_antiddosIpCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetAttackIpCount() const
{
    return m_attackIpCount;
}

bool DescribeOverviewIndexResponse::AttackIpCountHasBeenSet() const
{
    return m_attackIpCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetBlockIpCount() const
{
    return m_blockIpCount;
}

bool DescribeOverviewIndexResponse::BlockIpCountHasBeenSet() const
{
    return m_blockIpCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetAntiddosDomainCount() const
{
    return m_antiddosDomainCount;
}

bool DescribeOverviewIndexResponse::AntiddosDomainCountHasBeenSet() const
{
    return m_antiddosDomainCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetAttackDomainCount() const
{
    return m_attackDomainCount;
}

bool DescribeOverviewIndexResponse::AttackDomainCountHasBeenSet() const
{
    return m_attackDomainCountHasBeenSet;
}

uint64_t DescribeOverviewIndexResponse::GetMaxAttackFlow() const
{
    return m_maxAttackFlow;
}

bool DescribeOverviewIndexResponse::MaxAttackFlowHasBeenSet() const
{
    return m_maxAttackFlowHasBeenSet;
}

string DescribeOverviewIndexResponse::GetNewAttackTime() const
{
    return m_newAttackTime;
}

bool DescribeOverviewIndexResponse::NewAttackTimeHasBeenSet() const
{
    return m_newAttackTimeHasBeenSet;
}

string DescribeOverviewIndexResponse::GetNewAttackIp() const
{
    return m_newAttackIp;
}

bool DescribeOverviewIndexResponse::NewAttackIpHasBeenSet() const
{
    return m_newAttackIpHasBeenSet;
}

string DescribeOverviewIndexResponse::GetNewAttackType() const
{
    return m_newAttackType;
}

bool DescribeOverviewIndexResponse::NewAttackTypeHasBeenSet() const
{
    return m_newAttackTypeHasBeenSet;
}


