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

#include <tencentcloud/nlp/v20190408/model/ContentApprovalResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

ContentApprovalResponse::ContentApprovalResponse() :
    m_evilFlagHasBeenSet(false),
    m_evilKeywordsHasBeenSet(false),
    m_evilTypeHasBeenSet(false)
{
}

CoreInternalOutcome ContentApprovalResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EvilFlag") && !rsp["EvilFlag"].IsNull())
    {
        if (!rsp["EvilFlag"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EvilFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilFlag = rsp["EvilFlag"].GetUint64();
        m_evilFlagHasBeenSet = true;
    }

    if (rsp.HasMember("EvilKeywords") && !rsp["EvilKeywords"].IsNull())
    {
        if (!rsp["EvilKeywords"].IsArray())
            return CoreInternalOutcome(Error("response `EvilKeywords` is not array type"));

        const Value &tmpValue = rsp["EvilKeywords"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_evilKeywords.push_back((*itr).GetString());
        }
        m_evilKeywordsHasBeenSet = true;
    }

    if (rsp.HasMember("EvilType") && !rsp["EvilType"].IsNull())
    {
        if (!rsp["EvilType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `EvilType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = rsp["EvilType"].GetUint64();
        m_evilTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t ContentApprovalResponse::GetEvilFlag() const
{
    return m_evilFlag;
}

bool ContentApprovalResponse::EvilFlagHasBeenSet() const
{
    return m_evilFlagHasBeenSet;
}

vector<string> ContentApprovalResponse::GetEvilKeywords() const
{
    return m_evilKeywords;
}

bool ContentApprovalResponse::EvilKeywordsHasBeenSet() const
{
    return m_evilKeywordsHasBeenSet;
}

uint64_t ContentApprovalResponse::GetEvilType() const
{
    return m_evilType;
}

bool ContentApprovalResponse::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}


