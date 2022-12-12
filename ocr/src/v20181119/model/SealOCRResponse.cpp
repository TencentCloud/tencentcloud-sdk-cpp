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

#include <tencentcloud/ocr/v20181119/model/SealOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SealOCRResponse::SealOCRResponse() :
    m_sealBodyHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_otherTextsHasBeenSet(false),
    m_sealInfosHasBeenSet(false),
    m_sealShapeHasBeenSet(false)
{
}

CoreInternalOutcome SealOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SealBody") && !rsp["SealBody"].IsNull())
    {
        if (!rsp["SealBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealBody = string(rsp["SealBody"].GetString());
        m_sealBodyHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(rsp["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("OtherTexts") && !rsp["OtherTexts"].IsNull())
    {
        if (!rsp["OtherTexts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherTexts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OtherTexts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_otherTexts.push_back((*itr).GetString());
        }
        m_otherTextsHasBeenSet = true;
    }

    if (rsp.HasMember("SealInfos") && !rsp["SealInfos"].IsNull())
    {
        if (!rsp["SealInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SealInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SealInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SealInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sealInfos.push_back(item);
        }
        m_sealInfosHasBeenSet = true;
    }

    if (rsp.HasMember("SealShape") && !rsp["SealShape"].IsNull())
    {
        if (!rsp["SealShape"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealShape` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealShape = string(rsp["SealShape"].GetString());
        m_sealShapeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string SealOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sealBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealBody.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_otherTexts.begin(); itr != m_otherTexts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sealInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sealInfos.begin(); itr != m_sealInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sealShapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealShape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealShape.c_str(), allocator).Move(), allocator);
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


string SealOCRResponse::GetSealBody() const
{
    return m_sealBody;
}

bool SealOCRResponse::SealBodyHasBeenSet() const
{
    return m_sealBodyHasBeenSet;
}

Rect SealOCRResponse::GetLocation() const
{
    return m_location;
}

bool SealOCRResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> SealOCRResponse::GetOtherTexts() const
{
    return m_otherTexts;
}

bool SealOCRResponse::OtherTextsHasBeenSet() const
{
    return m_otherTextsHasBeenSet;
}

vector<SealInfo> SealOCRResponse::GetSealInfos() const
{
    return m_sealInfos;
}

bool SealOCRResponse::SealInfosHasBeenSet() const
{
    return m_sealInfosHasBeenSet;
}

string SealOCRResponse::GetSealShape() const
{
    return m_sealShape;
}

bool SealOCRResponse::SealShapeHasBeenSet() const
{
    return m_sealShapeHasBeenSet;
}


