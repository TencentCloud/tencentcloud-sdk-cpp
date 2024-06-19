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

#include <tencentcloud/lke/v20231130/model/ReconstructDocumentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ReconstructDocumentResponse::ReconstructDocumentResponse() :
    m_markdownBase64HasBeenSet(false),
    m_insetImagePackageHasBeenSet(false),
    m_documentRecognizeInfoHasBeenSet(false)
{
}

CoreInternalOutcome ReconstructDocumentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MarkdownBase64") && !rsp["MarkdownBase64"].IsNull())
    {
        if (!rsp["MarkdownBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkdownBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markdownBase64 = string(rsp["MarkdownBase64"].GetString());
        m_markdownBase64HasBeenSet = true;
    }

    if (rsp.HasMember("InsetImagePackage") && !rsp["InsetImagePackage"].IsNull())
    {
        if (!rsp["InsetImagePackage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsetImagePackage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insetImagePackage = string(rsp["InsetImagePackage"].GetString());
        m_insetImagePackageHasBeenSet = true;
    }

    if (rsp.HasMember("DocumentRecognizeInfo") && !rsp["DocumentRecognizeInfo"].IsNull())
    {
        if (!rsp["DocumentRecognizeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DocumentRecognizeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DocumentRecognizeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_documentRecognizeInfo.push_back(item);
        }
        m_documentRecognizeInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ReconstructDocumentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_markdownBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkdownBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markdownBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_insetImagePackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsetImagePackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insetImagePackage.c_str(), allocator).Move(), allocator);
    }

    if (m_documentRecognizeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocumentRecognizeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_documentRecognizeInfo.begin(); itr != m_documentRecognizeInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string ReconstructDocumentResponse::GetMarkdownBase64() const
{
    return m_markdownBase64;
}

bool ReconstructDocumentResponse::MarkdownBase64HasBeenSet() const
{
    return m_markdownBase64HasBeenSet;
}

string ReconstructDocumentResponse::GetInsetImagePackage() const
{
    return m_insetImagePackage;
}

bool ReconstructDocumentResponse::InsetImagePackageHasBeenSet() const
{
    return m_insetImagePackageHasBeenSet;
}

vector<DocumentRecognizeInfo> ReconstructDocumentResponse::GetDocumentRecognizeInfo() const
{
    return m_documentRecognizeInfo;
}

bool ReconstructDocumentResponse::DocumentRecognizeInfoHasBeenSet() const
{
    return m_documentRecognizeInfoHasBeenSet;
}


