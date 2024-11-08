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

#include <tencentcloud/ocr/v20181119/model/RecognizeValidIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeValidIDCardOCRResponse::RecognizeValidIDCardOCRResponse() :
    m_typeHasBeenSet(false),
    m_iDCardInfoHasBeenSet(false),
    m_temporaryIDCardInfoHasBeenSet(false),
    m_residencePermitInfoHasBeenSet(false),
    m_permanentResidencePermitInfoHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeValidIDCardOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("IDCardInfo") && !rsp["IDCardInfo"].IsNull())
    {
        if (!rsp["IDCardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iDCardInfo.Deserialize(rsp["IDCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iDCardInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TemporaryIDCardInfo") && !rsp["TemporaryIDCardInfo"].IsNull())
    {
        if (!rsp["TemporaryIDCardInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TemporaryIDCardInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_temporaryIDCardInfo.Deserialize(rsp["TemporaryIDCardInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_temporaryIDCardInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ResidencePermitInfo") && !rsp["ResidencePermitInfo"].IsNull())
    {
        if (!rsp["ResidencePermitInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_residencePermitInfo.Deserialize(rsp["ResidencePermitInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_residencePermitInfoHasBeenSet = true;
    }

    if (rsp.HasMember("PermanentResidencePermitInfo") && !rsp["PermanentResidencePermitInfo"].IsNull())
    {
        if (!rsp["PermanentResidencePermitInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PermanentResidencePermitInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permanentResidencePermitInfo.Deserialize(rsp["PermanentResidencePermitInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permanentResidencePermitInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeValidIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_iDCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iDCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_temporaryIDCardInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemporaryIDCardInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_temporaryIDCardInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_residencePermitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidencePermitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_residencePermitInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_permanentResidencePermitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermanentResidencePermitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permanentResidencePermitInfo.ToJsonObject(value[key.c_str()], allocator);
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


string RecognizeValidIDCardOCRResponse::GetType() const
{
    return m_type;
}

bool RecognizeValidIDCardOCRResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

IDCardInfo RecognizeValidIDCardOCRResponse::GetIDCardInfo() const
{
    return m_iDCardInfo;
}

bool RecognizeValidIDCardOCRResponse::IDCardInfoHasBeenSet() const
{
    return m_iDCardInfoHasBeenSet;
}

TemporaryIDCardInfo RecognizeValidIDCardOCRResponse::GetTemporaryIDCardInfo() const
{
    return m_temporaryIDCardInfo;
}

bool RecognizeValidIDCardOCRResponse::TemporaryIDCardInfoHasBeenSet() const
{
    return m_temporaryIDCardInfoHasBeenSet;
}

ResidencePermitInfo RecognizeValidIDCardOCRResponse::GetResidencePermitInfo() const
{
    return m_residencePermitInfo;
}

bool RecognizeValidIDCardOCRResponse::ResidencePermitInfoHasBeenSet() const
{
    return m_residencePermitInfoHasBeenSet;
}

PermanentResidencePermitInfo RecognizeValidIDCardOCRResponse::GetPermanentResidencePermitInfo() const
{
    return m_permanentResidencePermitInfo;
}

bool RecognizeValidIDCardOCRResponse::PermanentResidencePermitInfoHasBeenSet() const
{
    return m_permanentResidencePermitInfoHasBeenSet;
}


