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

#include <tencentcloud/bda/v20200324/model/CreatePersonResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

CreatePersonResponse::CreatePersonResponse() :
    m_traceIdHasBeenSet(false),
    m_bodyModelVersionHasBeenSet(false),
    m_inputRetCodeHasBeenSet(false),
    m_inputRetCodeDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CreatePersonResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TraceId") && !rsp["TraceId"].IsNull())
    {
        if (!rsp["TraceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(rsp["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
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

        const rapidjson::Value &tmpValue = rsp["InputRetCodeDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputRetCodeDetails.push_back((*itr).GetInt64());
        }
        m_inputRetCodeDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreatePersonResponse::GetTraceId() const
{
    return m_traceId;
}

bool CreatePersonResponse::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string CreatePersonResponse::GetBodyModelVersion() const
{
    return m_bodyModelVersion;
}

bool CreatePersonResponse::BodyModelVersionHasBeenSet() const
{
    return m_bodyModelVersionHasBeenSet;
}

int64_t CreatePersonResponse::GetInputRetCode() const
{
    return m_inputRetCode;
}

bool CreatePersonResponse::InputRetCodeHasBeenSet() const
{
    return m_inputRetCodeHasBeenSet;
}

vector<int64_t> CreatePersonResponse::GetInputRetCodeDetails() const
{
    return m_inputRetCodeDetails;
}

bool CreatePersonResponse::InputRetCodeDetailsHasBeenSet() const
{
    return m_inputRetCodeDetailsHasBeenSet;
}


