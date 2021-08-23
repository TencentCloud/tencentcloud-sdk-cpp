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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdResultResponse::GetFaceIdResultResponse() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_videoBase64HasBeenSet(false),
    m_bestFrameBase64HasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome GetFaceIdResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IdCard") && !rsp["IdCard"].IsNull())
    {
        if (!rsp["IdCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCard = string(rsp["IdCard"].GetString());
        m_idCardHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
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

    if (rsp.HasMember("Similarity") && !rsp["Similarity"].IsNull())
    {
        if (!rsp["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = rsp["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (rsp.HasMember("VideoBase64") && !rsp["VideoBase64"].IsNull())
    {
        if (!rsp["VideoBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoBase64 = string(rsp["VideoBase64"].GetString());
        m_videoBase64HasBeenSet = true;
    }

    if (rsp.HasMember("BestFrameBase64") && !rsp["BestFrameBase64"].IsNull())
    {
        if (!rsp["BestFrameBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BestFrameBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrameBase64 = string(rsp["BestFrameBase64"].GetString());
        m_bestFrameBase64HasBeenSet = true;
    }

    if (rsp.HasMember("Extra") && !rsp["Extra"].IsNull())
    {
        if (!rsp["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(rsp["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetFaceIdResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

    if (m_videoBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFrameBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrameBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrameBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
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


string GetFaceIdResultResponse::GetIdCard() const
{
    return m_idCard;
}

bool GetFaceIdResultResponse::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string GetFaceIdResultResponse::GetName() const
{
    return m_name;
}

bool GetFaceIdResultResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetFaceIdResultResponse::GetResult() const
{
    return m_result;
}

bool GetFaceIdResultResponse::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string GetFaceIdResultResponse::GetDescription() const
{
    return m_description;
}

bool GetFaceIdResultResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double GetFaceIdResultResponse::GetSimilarity() const
{
    return m_similarity;
}

bool GetFaceIdResultResponse::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

string GetFaceIdResultResponse::GetVideoBase64() const
{
    return m_videoBase64;
}

bool GetFaceIdResultResponse::VideoBase64HasBeenSet() const
{
    return m_videoBase64HasBeenSet;
}

string GetFaceIdResultResponse::GetBestFrameBase64() const
{
    return m_bestFrameBase64;
}

bool GetFaceIdResultResponse::BestFrameBase64HasBeenSet() const
{
    return m_bestFrameBase64HasBeenSet;
}

string GetFaceIdResultResponse::GetExtra() const
{
    return m_extra;
}

bool GetFaceIdResultResponse::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


