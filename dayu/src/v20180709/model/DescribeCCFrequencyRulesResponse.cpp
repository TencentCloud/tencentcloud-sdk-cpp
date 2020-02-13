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

#include <tencentcloud/dayu/v20180709/model/DescribeCCFrequencyRulesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

DescribeCCFrequencyRulesResponse::DescribeCCFrequencyRulesResponse() :
    m_cCFrequencyRuleListHasBeenSet(false),
    m_cCFrequencyRuleStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCCFrequencyRulesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CCFrequencyRuleList") && !rsp["CCFrequencyRuleList"].IsNull())
    {
        if (!rsp["CCFrequencyRuleList"].IsArray())
            return CoreInternalOutcome(Error("response `CCFrequencyRuleList` is not array type"));

        const Value &tmpValue = rsp["CCFrequencyRuleList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCFrequencyRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cCFrequencyRuleList.push_back(item);
        }
        m_cCFrequencyRuleListHasBeenSet = true;
    }

    if (rsp.HasMember("CCFrequencyRuleStatus") && !rsp["CCFrequencyRuleStatus"].IsNull())
    {
        if (!rsp["CCFrequencyRuleStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `CCFrequencyRuleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cCFrequencyRuleStatus = string(rsp["CCFrequencyRuleStatus"].GetString());
        m_cCFrequencyRuleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<CCFrequencyRule> DescribeCCFrequencyRulesResponse::GetCCFrequencyRuleList() const
{
    return m_cCFrequencyRuleList;
}

bool DescribeCCFrequencyRulesResponse::CCFrequencyRuleListHasBeenSet() const
{
    return m_cCFrequencyRuleListHasBeenSet;
}

string DescribeCCFrequencyRulesResponse::GetCCFrequencyRuleStatus() const
{
    return m_cCFrequencyRuleStatus;
}

bool DescribeCCFrequencyRulesResponse::CCFrequencyRuleStatusHasBeenSet() const
{
    return m_cCFrequencyRuleStatusHasBeenSet;
}


