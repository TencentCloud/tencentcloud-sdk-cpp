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

#include <tencentcloud/rp/v20200224/model/QueryRegisterProtectionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rp::V20200224::Model;
using namespace rapidjson;
using namespace std;

QueryRegisterProtectionResponse::QueryRegisterProtectionResponse() :
    m_codeDescHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_registerIpHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_riskTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueryRegisterProtectionResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CodeDesc") && !rsp["CodeDesc"].IsNull())
    {
        if (!rsp["CodeDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `CodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDesc = string(rsp["CodeDesc"].GetString());
        m_codeDescHasBeenSet = true;
    }

    if (rsp.HasMember("AssociateAccount") && !rsp["AssociateAccount"].IsNull())
    {
        if (!rsp["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Error("response `AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(rsp["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterTime") && !rsp["RegisterTime"].IsNull())
    {
        if (!rsp["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(rsp["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Uid") && !rsp["Uid"].IsNull())
    {
        if (!rsp["Uid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(rsp["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (rsp.HasMember("RegisterIp") && !rsp["RegisterIp"].IsNull())
    {
        if (!rsp["RegisterIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `RegisterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerIp = string(rsp["RegisterIp"].GetString());
        m_registerIpHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("RiskType") && !rsp["RiskType"].IsNull())
    {
        if (!rsp["RiskType"].IsArray())
            return CoreInternalOutcome(Error("response `RiskType` is not array type"));

        const Value &tmpValue = rsp["RiskType"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryRegisterProtectionResponse::GetCodeDesc() const
{
    return m_codeDesc;
}

bool QueryRegisterProtectionResponse::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}

string QueryRegisterProtectionResponse::GetAssociateAccount() const
{
    return m_associateAccount;
}

bool QueryRegisterProtectionResponse::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QueryRegisterProtectionResponse::GetRegisterTime() const
{
    return m_registerTime;
}

bool QueryRegisterProtectionResponse::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string QueryRegisterProtectionResponse::GetUid() const
{
    return m_uid;
}

bool QueryRegisterProtectionResponse::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryRegisterProtectionResponse::GetRegisterIp() const
{
    return m_registerIp;
}

bool QueryRegisterProtectionResponse::RegisterIpHasBeenSet() const
{
    return m_registerIpHasBeenSet;
}

int64_t QueryRegisterProtectionResponse::GetLevel() const
{
    return m_level;
}

bool QueryRegisterProtectionResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<int64_t> QueryRegisterProtectionResponse::GetRiskType() const
{
    return m_riskType;
}

bool QueryRegisterProtectionResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}


