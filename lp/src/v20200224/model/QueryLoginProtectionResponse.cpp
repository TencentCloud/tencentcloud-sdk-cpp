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

#include <tencentcloud/lp/v20200224/model/QueryLoginProtectionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lp::V20200224::Model;
using namespace rapidjson;
using namespace std;

QueryLoginProtectionResponse::QueryLoginProtectionResponse() :
    m_codeDescHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_loginIpHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_rootIdHasBeenSet(false)
{
}

CoreInternalOutcome QueryLoginProtectionResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("LoginTime") && !rsp["LoginTime"].IsNull())
    {
        if (!rsp["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(rsp["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
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

    if (rsp.HasMember("LoginIp") && !rsp["LoginIp"].IsNull())
    {
        if (!rsp["LoginIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `LoginIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginIp = string(rsp["LoginIp"].GetString());
        m_loginIpHasBeenSet = true;
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

    if (rsp.HasMember("RootId") && !rsp["RootId"].IsNull())
    {
        if (!rsp["RootId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RootId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootId = string(rsp["RootId"].GetString());
        m_rootIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryLoginProtectionResponse::GetCodeDesc() const
{
    return m_codeDesc;
}

bool QueryLoginProtectionResponse::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}

string QueryLoginProtectionResponse::GetAssociateAccount() const
{
    return m_associateAccount;
}

bool QueryLoginProtectionResponse::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QueryLoginProtectionResponse::GetLoginTime() const
{
    return m_loginTime;
}

bool QueryLoginProtectionResponse::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string QueryLoginProtectionResponse::GetUid() const
{
    return m_uid;
}

bool QueryLoginProtectionResponse::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryLoginProtectionResponse::GetLoginIp() const
{
    return m_loginIp;
}

bool QueryLoginProtectionResponse::LoginIpHasBeenSet() const
{
    return m_loginIpHasBeenSet;
}

int64_t QueryLoginProtectionResponse::GetLevel() const
{
    return m_level;
}

bool QueryLoginProtectionResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<int64_t> QueryLoginProtectionResponse::GetRiskType() const
{
    return m_riskType;
}

bool QueryLoginProtectionResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string QueryLoginProtectionResponse::GetRootId() const
{
    return m_rootId;
}

bool QueryLoginProtectionResponse::RootIdHasBeenSet() const
{
    return m_rootIdHasBeenSet;
}


