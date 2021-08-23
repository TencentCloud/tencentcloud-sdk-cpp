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

#include <tencentcloud/tiia/v20190529/model/AssessQualityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

AssessQualityResponse::AssessQualityResponse() :
    m_longImageHasBeenSet(false),
    m_blackAndWhiteHasBeenSet(false),
    m_smallImageHasBeenSet(false),
    m_bigImageHasBeenSet(false),
    m_pureImageHasBeenSet(false),
    m_clarityScoreHasBeenSet(false),
    m_aestheticScoreHasBeenSet(false)
{
}

CoreInternalOutcome AssessQualityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LongImage") && !rsp["LongImage"].IsNull())
    {
        if (!rsp["LongImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LongImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_longImage = rsp["LongImage"].GetBool();
        m_longImageHasBeenSet = true;
    }

    if (rsp.HasMember("BlackAndWhite") && !rsp["BlackAndWhite"].IsNull())
    {
        if (!rsp["BlackAndWhite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BlackAndWhite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_blackAndWhite = rsp["BlackAndWhite"].GetBool();
        m_blackAndWhiteHasBeenSet = true;
    }

    if (rsp.HasMember("SmallImage") && !rsp["SmallImage"].IsNull())
    {
        if (!rsp["SmallImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SmallImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_smallImage = rsp["SmallImage"].GetBool();
        m_smallImageHasBeenSet = true;
    }

    if (rsp.HasMember("BigImage") && !rsp["BigImage"].IsNull())
    {
        if (!rsp["BigImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BigImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bigImage = rsp["BigImage"].GetBool();
        m_bigImageHasBeenSet = true;
    }

    if (rsp.HasMember("PureImage") && !rsp["PureImage"].IsNull())
    {
        if (!rsp["PureImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PureImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pureImage = rsp["PureImage"].GetBool();
        m_pureImageHasBeenSet = true;
    }

    if (rsp.HasMember("ClarityScore") && !rsp["ClarityScore"].IsNull())
    {
        if (!rsp["ClarityScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClarityScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clarityScore = rsp["ClarityScore"].GetInt64();
        m_clarityScoreHasBeenSet = true;
    }

    if (rsp.HasMember("AestheticScore") && !rsp["AestheticScore"].IsNull())
    {
        if (!rsp["AestheticScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AestheticScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aestheticScore = rsp["AestheticScore"].GetInt64();
        m_aestheticScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AssessQualityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_longImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longImage, allocator);
    }

    if (m_blackAndWhiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlackAndWhite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blackAndWhite, allocator);
    }

    if (m_smallImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmallImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smallImage, allocator);
    }

    if (m_bigImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bigImage, allocator);
    }

    if (m_pureImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PureImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pureImage, allocator);
    }

    if (m_clarityScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClarityScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clarityScore, allocator);
    }

    if (m_aestheticScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AestheticScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aestheticScore, allocator);
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


bool AssessQualityResponse::GetLongImage() const
{
    return m_longImage;
}

bool AssessQualityResponse::LongImageHasBeenSet() const
{
    return m_longImageHasBeenSet;
}

bool AssessQualityResponse::GetBlackAndWhite() const
{
    return m_blackAndWhite;
}

bool AssessQualityResponse::BlackAndWhiteHasBeenSet() const
{
    return m_blackAndWhiteHasBeenSet;
}

bool AssessQualityResponse::GetSmallImage() const
{
    return m_smallImage;
}

bool AssessQualityResponse::SmallImageHasBeenSet() const
{
    return m_smallImageHasBeenSet;
}

bool AssessQualityResponse::GetBigImage() const
{
    return m_bigImage;
}

bool AssessQualityResponse::BigImageHasBeenSet() const
{
    return m_bigImageHasBeenSet;
}

bool AssessQualityResponse::GetPureImage() const
{
    return m_pureImage;
}

bool AssessQualityResponse::PureImageHasBeenSet() const
{
    return m_pureImageHasBeenSet;
}

int64_t AssessQualityResponse::GetClarityScore() const
{
    return m_clarityScore;
}

bool AssessQualityResponse::ClarityScoreHasBeenSet() const
{
    return m_clarityScoreHasBeenSet;
}

int64_t AssessQualityResponse::GetAestheticScore() const
{
    return m_aestheticScore;
}

bool AssessQualityResponse::AestheticScoreHasBeenSet() const
{
    return m_aestheticScoreHasBeenSet;
}


