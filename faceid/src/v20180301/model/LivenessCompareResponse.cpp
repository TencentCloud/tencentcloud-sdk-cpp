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

#include <tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

LivenessCompareResponse::LivenessCompareResponse() :
    m_bestFrameBase64HasBeenSet(false),
    m_simHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome LivenessCompareResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BestFrameBase64") && !rsp["BestFrameBase64"].IsNull())
    {
        if (!rsp["BestFrameBase64"].IsString())
        {
            return CoreInternalOutcome(Error("response `BestFrameBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrameBase64 = string(rsp["BestFrameBase64"].GetString());
        m_bestFrameBase64HasBeenSet = true;
    }

    if (rsp.HasMember("Sim") && !rsp["Sim"].IsNull())
    {
        if (!rsp["Sim"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `Sim` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sim = rsp["Sim"].GetDouble();
        m_simHasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string LivenessCompareResponse::GetBestFrameBase64() const
{
    return m_bestFrameBase64;
}

bool LivenessCompareResponse::BestFrameBase64HasBeenSet() const
{
    return m_bestFrameBase64HasBeenSet;
}

double LivenessCompareResponse::GetSim() const
{
    return m_sim;
}

bool LivenessCompareResponse::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}

string LivenessCompareResponse::GetResult() const
{
    return m_result;
}

bool LivenessCompareResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string LivenessCompareResponse::GetDescription() const
{
    return m_description;
}

bool LivenessCompareResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


