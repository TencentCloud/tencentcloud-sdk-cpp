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

#include <tencentcloud/aa/v20200224/model/QueryActivityAntiRushResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aa::V20200224::Model;
using namespace std;

QueryActivityAntiRushResponse::QueryActivityAntiRushResponse() :
    m_postTimeHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_associateAccountHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_rootIdHasBeenSet(false),
    m_codeDescHasBeenSet(false)
{
}

CoreInternalOutcome QueryActivityAntiRushResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PostTime") && !rsp["PostTime"].IsNull())
    {
        if (!rsp["PostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = string(rsp["PostTime"].GetString());
        m_postTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UserIp") && !rsp["UserIp"].IsNull())
    {
        if (!rsp["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(rsp["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("RiskType") && !rsp["RiskType"].IsNull())
    {
        if (!rsp["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AssociateAccount") && !rsp["AssociateAccount"].IsNull())
    {
        if (!rsp["AssociateAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssociateAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_associateAccount = string(rsp["AssociateAccount"].GetString());
        m_associateAccountHasBeenSet = true;
    }

    if (rsp.HasMember("Uid") && !rsp["Uid"].IsNull())
    {
        if (!rsp["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(rsp["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (rsp.HasMember("RootId") && !rsp["RootId"].IsNull())
    {
        if (!rsp["RootId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RootId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootId = string(rsp["RootId"].GetString());
        m_rootIdHasBeenSet = true;
    }

    if (rsp.HasMember("CodeDesc") && !rsp["CodeDesc"].IsNull())
    {
        if (!rsp["CodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeDesc = string(rsp["CodeDesc"].GetString());
        m_codeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryActivityAntiRushResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskType.begin(); itr != m_riskType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_associateAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_associateAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_rootIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeDesc.c_str(), allocator).Move(), allocator);
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


string QueryActivityAntiRushResponse::GetPostTime() const
{
    return m_postTime;
}

bool QueryActivityAntiRushResponse::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string QueryActivityAntiRushResponse::GetUserIp() const
{
    return m_userIp;
}

bool QueryActivityAntiRushResponse::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t QueryActivityAntiRushResponse::GetLevel() const
{
    return m_level;
}

bool QueryActivityAntiRushResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<int64_t> QueryActivityAntiRushResponse::GetRiskType() const
{
    return m_riskType;
}

bool QueryActivityAntiRushResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string QueryActivityAntiRushResponse::GetAssociateAccount() const
{
    return m_associateAccount;
}

bool QueryActivityAntiRushResponse::AssociateAccountHasBeenSet() const
{
    return m_associateAccountHasBeenSet;
}

string QueryActivityAntiRushResponse::GetUid() const
{
    return m_uid;
}

bool QueryActivityAntiRushResponse::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string QueryActivityAntiRushResponse::GetRootId() const
{
    return m_rootId;
}

bool QueryActivityAntiRushResponse::RootIdHasBeenSet() const
{
    return m_rootIdHasBeenSet;
}

string QueryActivityAntiRushResponse::GetCodeDesc() const
{
    return m_codeDesc;
}

bool QueryActivityAntiRushResponse::CodeDescHasBeenSet() const
{
    return m_codeDescHasBeenSet;
}


