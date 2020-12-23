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

#include <tencentcloud/cdn/v20180606/model/DescribeScdnConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DescribeScdnConfigResponse::DescribeScdnConfigResponse() :
    m_aclHasBeenSet(false),
    m_wafHasBeenSet(false),
    m_cCHasBeenSet(false),
    m_ddosHasBeenSet(false),
    m_botHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScdnConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Acl") && !rsp["Acl"].IsNull())
    {
        if (!rsp["Acl"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Acl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_acl.Deserialize(rsp["Acl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aclHasBeenSet = true;
    }

    if (rsp.HasMember("Waf") && !rsp["Waf"].IsNull())
    {
        if (!rsp["Waf"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Waf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waf.Deserialize(rsp["Waf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafHasBeenSet = true;
    }

    if (rsp.HasMember("CC") && !rsp["CC"].IsNull())
    {
        if (!rsp["CC"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cC.Deserialize(rsp["CC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cCHasBeenSet = true;
    }

    if (rsp.HasMember("Ddos") && !rsp["Ddos"].IsNull())
    {
        if (!rsp["Ddos"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Ddos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ddos.Deserialize(rsp["Ddos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ddosHasBeenSet = true;
    }

    if (rsp.HasMember("Bot") && !rsp["Bot"].IsNull())
    {
        if (!rsp["Bot"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Bot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bot.Deserialize(rsp["Bot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


ScdnAclConfig DescribeScdnConfigResponse::GetAcl() const
{
    return m_acl;
}

bool DescribeScdnConfigResponse::AclHasBeenSet() const
{
    return m_aclHasBeenSet;
}

ScdnWafConfig DescribeScdnConfigResponse::GetWaf() const
{
    return m_waf;
}

bool DescribeScdnConfigResponse::WafHasBeenSet() const
{
    return m_wafHasBeenSet;
}

ScdnConfig DescribeScdnConfigResponse::GetCC() const
{
    return m_cC;
}

bool DescribeScdnConfigResponse::CCHasBeenSet() const
{
    return m_cCHasBeenSet;
}

ScdnDdosConfig DescribeScdnConfigResponse::GetDdos() const
{
    return m_ddos;
}

bool DescribeScdnConfigResponse::DdosHasBeenSet() const
{
    return m_ddosHasBeenSet;
}

ScdnBotConfig DescribeScdnConfigResponse::GetBot() const
{
    return m_bot;
}

bool DescribeScdnConfigResponse::BotHasBeenSet() const
{
    return m_botHasBeenSet;
}


