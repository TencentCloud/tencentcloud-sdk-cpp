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

#include <tencentcloud/ocr/v20181119/model/RecognizeTableOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeTableOCRResponse::RecognizeTableOCRResponse() :
    m_tableDetectionsHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_pdfPageSizeHasBeenSet(false),
    m_angleHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeTableOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TableDetections") && !rsp["TableDetections"].IsNull())
    {
        if (!rsp["TableDetections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableDetections` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TableDetections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableDetectInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableDetections.push_back(item);
        }
        m_tableDetectionsHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(rsp["Data"].GetString());
        m_dataHasBeenSet = true;
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

string RecognizeTableOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tableDetectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableDetections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableDetections.begin(); itr != m_tableDetections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
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


vector<TableDetectInfo> RecognizeTableOCRResponse::GetTableDetections() const
{
    return m_tableDetections;
}

bool RecognizeTableOCRResponse::TableDetectionsHasBeenSet() const
{
    return m_tableDetectionsHasBeenSet;
}

string RecognizeTableOCRResponse::GetData() const
{
    return m_data;
}

bool RecognizeTableOCRResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t RecognizeTableOCRResponse::GetPdfPageSize() const
{
    return m_pdfPageSize;
}

bool RecognizeTableOCRResponse::PdfPageSizeHasBeenSet() const
{
    return m_pdfPageSizeHasBeenSet;
}

double RecognizeTableOCRResponse::GetAngle() const
{
    return m_angle;
}

bool RecognizeTableOCRResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}


