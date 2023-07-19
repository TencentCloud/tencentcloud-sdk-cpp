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

#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralBasicOCRResponse::GeneralBasicOCRResponse() :
    m_textDetectionsHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_angelHasBeenSet(false),
    m_pdfPageSizeHasBeenSet(false),
    m_angleHasBeenSet(false)
{
}

CoreInternalOutcome GeneralBasicOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TextDetections") && !rsp["TextDetections"].IsNull())
    {
        if (!rsp["TextDetections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextDetections` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TextDetections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextDetection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textDetections.push_back(item);
        }
        m_textDetectionsHasBeenSet = true;
    }

    if (rsp.HasMember("Language") && !rsp["Language"].IsNull())
    {
        if (!rsp["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(rsp["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (rsp.HasMember("Angel") && !rsp["Angel"].IsNull())
    {
        if (!rsp["Angel"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angel` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angel = rsp["Angel"].GetDouble();
        m_angelHasBeenSet = true;
    }

    if (rsp.HasMember("PdfPageSize") && !rsp["PdfPageSize"].IsNull())
    {
        if (!rsp["PdfPageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PdfPageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pdfPageSize = rsp["PdfPageSize"].GetInt64();
        m_pdfPageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GeneralBasicOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_textDetectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextDetections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textDetections.begin(); itr != m_textDetections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_angelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angel, allocator);
    }

    if (m_pdfPageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PdfPageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pdfPageSize, allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
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


vector<TextDetection> GeneralBasicOCRResponse::GetTextDetections() const
{
    return m_textDetections;
}

bool GeneralBasicOCRResponse::TextDetectionsHasBeenSet() const
{
    return m_textDetectionsHasBeenSet;
}

string GeneralBasicOCRResponse::GetLanguage() const
{
    return m_language;
}

bool GeneralBasicOCRResponse::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

double GeneralBasicOCRResponse::GetAngel() const
{
    return m_angel;
}

bool GeneralBasicOCRResponse::AngelHasBeenSet() const
{
    return m_angelHasBeenSet;
}

int64_t GeneralBasicOCRResponse::GetPdfPageSize() const
{
    return m_pdfPageSize;
}

bool GeneralBasicOCRResponse::PdfPageSizeHasBeenSet() const
{
    return m_pdfPageSizeHasBeenSet;
}

double GeneralBasicOCRResponse::GetAngle() const
{
    return m_angle;
}

bool GeneralBasicOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}


