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

#include <tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectReflectLivenessAndCompareResponse::DetectReflectLivenessAndCompareResponse() :
    m_bestFrameUrlHasBeenSet(false),
    m_bestFrameMd5HasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_simHasBeenSet(false)
{
}

CoreInternalOutcome DetectReflectLivenessAndCompareResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BestFrameUrl") && !rsp["BestFrameUrl"].IsNull())
    {
        if (!rsp["BestFrameUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrameUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrameUrl = string(rsp["BestFrameUrl"].GetString());
        m_bestFrameUrlHasBeenSet = true;
    }

    if (rsp.HasMember("BestFrameMd5") && !rsp["BestFrameMd5"].IsNull())
    {
        if (!rsp["BestFrameMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrameMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrameMd5 = string(rsp["BestFrameMd5"].GetString());
        m_bestFrameMd5HasBeenSet = true;
    }

    if (rsp.HasMember("Result") && !rsp["Result"].IsNull())
    {
        if (!rsp["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(rsp["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Sim") && !rsp["Sim"].IsNull())
    {
        if (!rsp["Sim"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Sim` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sim = rsp["Sim"].GetDouble();
        m_simHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DetectReflectLivenessAndCompareResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bestFrameUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrameUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrameUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFrameMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrameMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrameMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_simHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sim, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DetectReflectLivenessAndCompareResponse::GetBestFrameUrl() const
{
    return m_bestFrameUrl;
}

bool DetectReflectLivenessAndCompareResponse::BestFrameUrlHasBeenSet() const
{
    return m_bestFrameUrlHasBeenSet;
}

string DetectReflectLivenessAndCompareResponse::GetBestFrameMd5() const
{
    return m_bestFrameMd5;
}

bool DetectReflectLivenessAndCompareResponse::BestFrameMd5HasBeenSet() const
{
    return m_bestFrameMd5HasBeenSet;
}

string DetectReflectLivenessAndCompareResponse::GetResult() const
{
    return m_result;
}

bool DetectReflectLivenessAndCompareResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DetectReflectLivenessAndCompareResponse::GetDescription() const
{
    return m_description;
}

bool DetectReflectLivenessAndCompareResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double DetectReflectLivenessAndCompareResponse::GetSim() const
{
    return m_sim;
}

bool DetectReflectLivenessAndCompareResponse::SimHasBeenSet() const
{
    return m_simHasBeenSet;
}


