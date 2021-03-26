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

#include <tencentcloud/faceid/v20180301/model/GetEidResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

GetEidResultResponse::GetEidResultResponse() :
    m_textHasBeenSet(false),
    m_idCardDataHasBeenSet(false),
    m_bestFrameHasBeenSet(false),
    m_eidInfoHasBeenSet(false)
{
}

CoreInternalOutcome GetEidResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Text") && !rsp["Text"].IsNull())
    {
        if (!rsp["Text"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(rsp["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (rsp.HasMember("IdCardData") && !rsp["IdCardData"].IsNull())
    {
        if (!rsp["IdCardData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `IdCardData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_idCardData.Deserialize(rsp["IdCardData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_idCardDataHasBeenSet = true;
    }

    if (rsp.HasMember("BestFrame") && !rsp["BestFrame"].IsNull())
    {
        if (!rsp["BestFrame"].IsObject())
        {
            return CoreInternalOutcome(Error("response `BestFrame` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bestFrame.Deserialize(rsp["BestFrame"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bestFrameHasBeenSet = true;
    }

    if (rsp.HasMember("EidInfo") && !rsp["EidInfo"].IsNull())
    {
        if (!rsp["EidInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EidInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eidInfo.Deserialize(rsp["EidInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eidInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


DetectInfoText GetEidResultResponse::GetText() const
{
    return m_text;
}

bool GetEidResultResponse::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

DetectInfoIdCardData GetEidResultResponse::GetIdCardData() const
{
    return m_idCardData;
}

bool GetEidResultResponse::IdCardDataHasBeenSet() const
{
    return m_idCardDataHasBeenSet;
}

DetectInfoBestFrame GetEidResultResponse::GetBestFrame() const
{
    return m_bestFrame;
}

bool GetEidResultResponse::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

EidInfo GetEidResultResponse::GetEidInfo() const
{
    return m_eidInfo;
}

bool GetEidResultResponse::EidInfoHasBeenSet() const
{
    return m_eidInfoHasBeenSet;
}


