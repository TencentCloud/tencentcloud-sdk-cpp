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

#include <tencentcloud/aai/v20180522/model/SimultaneousInterpretingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aai::V20180522::Model;
using namespace rapidjson;
using namespace std;

SimultaneousInterpretingResponse::SimultaneousInterpretingResponse() :
    m_asrTextHasBeenSet(false),
    m_nmtTextHasBeenSet(false)
{
}

CoreInternalOutcome SimultaneousInterpretingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AsrText") && !rsp["AsrText"].IsNull())
    {
        if (!rsp["AsrText"].IsString())
        {
            return CoreInternalOutcome(Error("response `AsrText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrText = string(rsp["AsrText"].GetString());
        m_asrTextHasBeenSet = true;
    }

    if (rsp.HasMember("NmtText") && !rsp["NmtText"].IsNull())
    {
        if (!rsp["NmtText"].IsString())
        {
            return CoreInternalOutcome(Error("response `NmtText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nmtText = string(rsp["NmtText"].GetString());
        m_nmtTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string SimultaneousInterpretingResponse::GetAsrText() const
{
    return m_asrText;
}

bool SimultaneousInterpretingResponse::AsrTextHasBeenSet() const
{
    return m_asrTextHasBeenSet;
}

string SimultaneousInterpretingResponse::GetNmtText() const
{
    return m_nmtText;
}

bool SimultaneousInterpretingResponse::NmtTextHasBeenSet() const
{
    return m_nmtTextHasBeenSet;
}


