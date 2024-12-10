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

#include <tencentcloud/ocr/v20181119/model/VehicleLicenseOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VehicleLicenseOCRResponse::VehicleLicenseOCRResponse() :
    m_frontInfoHasBeenSet(false),
    m_backInfoHasBeenSet(false),
    m_recognizeWarnCodeHasBeenSet(false),
    m_recognizeWarnMsgHasBeenSet(false),
    m_vehicleLicenseTypeHasBeenSet(false),
    m_tractorBackInfoHasBeenSet(false)
{
}

CoreInternalOutcome VehicleLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FrontInfo") && !rsp["FrontInfo"].IsNull())
    {
        if (!rsp["FrontInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FrontInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frontInfo.Deserialize(rsp["FrontInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frontInfoHasBeenSet = true;
    }

    if (rsp.HasMember("BackInfo") && !rsp["BackInfo"].IsNull())
    {
        if (!rsp["BackInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backInfo.Deserialize(rsp["BackInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnCode") && !rsp["RecognizeWarnCode"].IsNull())
    {
        if (!rsp["RecognizeWarnCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnCode.push_back((*itr).GetInt64());
        }
        m_recognizeWarnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnMsg") && !rsp["RecognizeWarnMsg"].IsNull())
    {
        if (!rsp["RecognizeWarnMsg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognizeWarnMsg` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognizeWarnMsg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnMsg.push_back((*itr).GetString());
        }
        m_recognizeWarnMsgHasBeenSet = true;
    }

    if (rsp.HasMember("VehicleLicenseType") && !rsp["VehicleLicenseType"].IsNull())
    {
        if (!rsp["VehicleLicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VehicleLicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleLicenseType = string(rsp["VehicleLicenseType"].GetString());
        m_vehicleLicenseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TractorBackInfo") && !rsp["TractorBackInfo"].IsNull())
    {
        if (!rsp["TractorBackInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TractorBackInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tractorBackInfo.Deserialize(rsp["TractorBackInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tractorBackInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VehicleLicenseOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_frontInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frontInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recognizeWarnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnCode.begin(); itr != m_recognizeWarnCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_recognizeWarnMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeWarnMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recognizeWarnMsg.begin(); itr != m_recognizeWarnMsg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vehicleLicenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleLicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleLicenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_tractorBackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TractorBackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tractorBackInfo.ToJsonObject(value[key.c_str()], allocator);
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


TextVehicleFront VehicleLicenseOCRResponse::GetFrontInfo() const
{
    return m_frontInfo;
}

bool VehicleLicenseOCRResponse::FrontInfoHasBeenSet() const
{
    return m_frontInfoHasBeenSet;
}

TextVehicleBack VehicleLicenseOCRResponse::GetBackInfo() const
{
    return m_backInfo;
}

bool VehicleLicenseOCRResponse::BackInfoHasBeenSet() const
{
    return m_backInfoHasBeenSet;
}

vector<int64_t> VehicleLicenseOCRResponse::GetRecognizeWarnCode() const
{
    return m_recognizeWarnCode;
}

bool VehicleLicenseOCRResponse::RecognizeWarnCodeHasBeenSet() const
{
    return m_recognizeWarnCodeHasBeenSet;
}

vector<string> VehicleLicenseOCRResponse::GetRecognizeWarnMsg() const
{
    return m_recognizeWarnMsg;
}

bool VehicleLicenseOCRResponse::RecognizeWarnMsgHasBeenSet() const
{
    return m_recognizeWarnMsgHasBeenSet;
}

string VehicleLicenseOCRResponse::GetVehicleLicenseType() const
{
    return m_vehicleLicenseType;
}

bool VehicleLicenseOCRResponse::VehicleLicenseTypeHasBeenSet() const
{
    return m_vehicleLicenseTypeHasBeenSet;
}

TextTractorVehicleBack VehicleLicenseOCRResponse::GetTractorBackInfo() const
{
    return m_tractorBackInfo;
}

bool VehicleLicenseOCRResponse::TractorBackInfoHasBeenSet() const
{
    return m_tractorBackInfoHasBeenSet;
}


