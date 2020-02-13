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
using namespace rapidjson;
using namespace std;

VehicleLicenseOCRResponse::VehicleLicenseOCRResponse() :
    m_frontInfoHasBeenSet(false),
    m_backInfoHasBeenSet(false),
    m_recognizeWarnCodeHasBeenSet(false),
    m_recognizeWarnMsgHasBeenSet(false)
{
}

CoreInternalOutcome VehicleLicenseOCRResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FrontInfo") && !rsp["FrontInfo"].IsNull())
    {
        if (!rsp["FrontInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `FrontInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `BackInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `RecognizeWarnCode` is not array type"));

        const Value &tmpValue = rsp["RecognizeWarnCode"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnCode.push_back((*itr).GetInt64());
        }
        m_recognizeWarnCodeHasBeenSet = true;
    }

    if (rsp.HasMember("RecognizeWarnMsg") && !rsp["RecognizeWarnMsg"].IsNull())
    {
        if (!rsp["RecognizeWarnMsg"].IsArray())
            return CoreInternalOutcome(Error("response `RecognizeWarnMsg` is not array type"));

        const Value &tmpValue = rsp["RecognizeWarnMsg"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recognizeWarnMsg.push_back((*itr).GetString());
        }
        m_recognizeWarnMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


