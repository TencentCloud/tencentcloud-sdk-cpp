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

#include <tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace rapidjson;
using namespace std;

AddCustomRuleResponse::AddCustomRuleResponse() :
    m_successHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

CoreInternalOutcome AddCustomRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Success") && !rsp["Success"].IsNull())
    {
        if (!rsp["Success"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Success` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_success.Deserialize(rsp["Success"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_successHasBeenSet = true;
    }

    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = rsp["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


ResponseCode AddCustomRuleResponse::GetSuccess() const
{
    return m_success;
}

bool AddCustomRuleResponse::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

int64_t AddCustomRuleResponse::GetRuleId() const
{
    return m_ruleId;
}

bool AddCustomRuleResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


