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

#include <tencentcloud/bda/v20200324/model/SearchTraceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace rapidjson;
using namespace std;

SearchTraceResponse::SearchTraceResponse() :
    m_candidatesHasBeenSet(false),
    m_inputRetCodeHasBeenSet(false),
    m_inputRetCodeDetailsHasBeenSet(false),
    m_bodyModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome SearchTraceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Candidates") && !rsp["Candidates"].IsNull())
    {
        if (!rsp["Candidates"].IsArray())
            return CoreInternalOutcome(Error("response `Candidates` is not array type"));

        const Value &tmpValue = rsp["Candidates"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Candidate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_candidates.push_back(item);
        }
        m_candidatesHasBeenSet = true;
    }

    if (rsp.HasMember("InputRetCode") && !rsp["InputRetCode"].IsNull())
    {
        if (!rsp["InputRetCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputRetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputRetCode = rsp["InputRetCode"].GetInt64();
        m_inputRetCodeHasBeenSet = true;
    }

    if (rsp.HasMember("InputRetCodeDetails") && !rsp["InputRetCodeDetails"].IsNull())
    {
        if (!rsp["InputRetCodeDetails"].IsArray())
            return CoreInternalOutcome(Error("response `InputRetCodeDetails` is not array type"));

        const Value &tmpValue = rsp["InputRetCodeDetails"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputRetCodeDetails.push_back((*itr).GetInt64());
        }
        m_inputRetCodeDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("BodyModelVersion") && !rsp["BodyModelVersion"].IsNull())
    {
        if (!rsp["BodyModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `BodyModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyModelVersion = string(rsp["BodyModelVersion"].GetString());
        m_bodyModelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<Candidate> SearchTraceResponse::GetCandidates() const
{
    return m_candidates;
}

bool SearchTraceResponse::CandidatesHasBeenSet() const
{
    return m_candidatesHasBeenSet;
}

int64_t SearchTraceResponse::GetInputRetCode() const
{
    return m_inputRetCode;
}

bool SearchTraceResponse::InputRetCodeHasBeenSet() const
{
    return m_inputRetCodeHasBeenSet;
}

vector<int64_t> SearchTraceResponse::GetInputRetCodeDetails() const
{
    return m_inputRetCodeDetails;
}

bool SearchTraceResponse::InputRetCodeDetailsHasBeenSet() const
{
    return m_inputRetCodeDetailsHasBeenSet;
}

string SearchTraceResponse::GetBodyModelVersion() const
{
    return m_bodyModelVersion;
}

bool SearchTraceResponse::BodyModelVersionHasBeenSet() const
{
    return m_bodyModelVersionHasBeenSet;
}


