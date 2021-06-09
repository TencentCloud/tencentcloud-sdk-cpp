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

#include <tencentcloud/cfw/v20190904/model/DescribeVpcRuleOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeVpcRuleOverviewResponse::DescribeVpcRuleOverviewResponse() :
    m_strategyNumHasBeenSet(false),
    m_startRuleNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVpcRuleOverviewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("StrategyNum") && !rsp["StrategyNum"].IsNull())
    {
        if (!rsp["StrategyNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StrategyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyNum = rsp["StrategyNum"].GetUint64();
        m_strategyNumHasBeenSet = true;
    }

    if (rsp.HasMember("StartRuleNum") && !rsp["StartRuleNum"].IsNull())
    {
        if (!rsp["StartRuleNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StartRuleNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startRuleNum = rsp["StartRuleNum"].GetUint64();
        m_startRuleNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeVpcRuleOverviewResponse::GetStrategyNum() const
{
    return m_strategyNum;
}

bool DescribeVpcRuleOverviewResponse::StrategyNumHasBeenSet() const
{
    return m_strategyNumHasBeenSet;
}

uint64_t DescribeVpcRuleOverviewResponse::GetStartRuleNum() const
{
    return m_startRuleNum;
}

bool DescribeVpcRuleOverviewResponse::StartRuleNumHasBeenSet() const
{
    return m_startRuleNumHasBeenSet;
}


