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

#include <tencentcloud/cls/v20201016/model/DescribeLogContextResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace rapidjson;
using namespace std;

DescribeLogContextResponse::DescribeLogContextResponse() :
    m_logContextInfosHasBeenSet(false),
    m_prevOverHasBeenSet(false),
    m_nextOverHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLogContextResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LogContextInfos") && !rsp["LogContextInfos"].IsNull())
    {
        if (!rsp["LogContextInfos"].IsArray())
            return CoreInternalOutcome(Error("response `LogContextInfos` is not array type"));

        const Value &tmpValue = rsp["LogContextInfos"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LogContextInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logContextInfos.push_back(item);
        }
        m_logContextInfosHasBeenSet = true;
    }

    if (rsp.HasMember("PrevOver") && !rsp["PrevOver"].IsNull())
    {
        if (!rsp["PrevOver"].IsBool())
        {
            return CoreInternalOutcome(Error("response `PrevOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_prevOver = rsp["PrevOver"].GetBool();
        m_prevOverHasBeenSet = true;
    }

    if (rsp.HasMember("NextOver") && !rsp["NextOver"].IsNull())
    {
        if (!rsp["NextOver"].IsBool())
        {
            return CoreInternalOutcome(Error("response `NextOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nextOver = rsp["NextOver"].GetBool();
        m_nextOverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<LogContextInfo> DescribeLogContextResponse::GetLogContextInfos() const
{
    return m_logContextInfos;
}

bool DescribeLogContextResponse::LogContextInfosHasBeenSet() const
{
    return m_logContextInfosHasBeenSet;
}

bool DescribeLogContextResponse::GetPrevOver() const
{
    return m_prevOver;
}

bool DescribeLogContextResponse::PrevOverHasBeenSet() const
{
    return m_prevOverHasBeenSet;
}

bool DescribeLogContextResponse::GetNextOver() const
{
    return m_nextOver;
}

bool DescribeLogContextResponse::NextOverHasBeenSet() const
{
    return m_nextOverHasBeenSet;
}


