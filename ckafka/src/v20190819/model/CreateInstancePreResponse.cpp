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

#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateInstancePreResponse::CreateInstancePreResponse() :
    m_returnCodeHasBeenSet(false),
    m_returnMessageHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome CreateInstancePreResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReturnCode") && !rsp["ReturnCode"].IsNull())
    {
        if (!rsp["ReturnCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = string(rsp["ReturnCode"].GetString());
        m_returnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ReturnMessage") && !rsp["ReturnMessage"].IsNull())
    {
        if (!rsp["ReturnMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReturnMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnMessage = string(rsp["ReturnMessage"].GetString());
        m_returnMessageHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Data` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_data.Deserialize(rsp["Data"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string CreateInstancePreResponse::GetReturnCode() const
{
    return m_returnCode;
}

bool CreateInstancePreResponse::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string CreateInstancePreResponse::GetReturnMessage() const
{
    return m_returnMessage;
}

bool CreateInstancePreResponse::ReturnMessageHasBeenSet() const
{
    return m_returnMessageHasBeenSet;
}

CreateInstancePreData CreateInstancePreResponse::GetData() const
{
    return m_data;
}

bool CreateInstancePreResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


