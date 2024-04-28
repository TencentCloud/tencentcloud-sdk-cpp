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

#include <tencentcloud/ocr/v20181119/model/RecognizeGeneralTextImageWarnResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeGeneralTextImageWarnResponse::RecognizeGeneralTextImageWarnResponse() :
    m_copyHasBeenSet(false),
    m_reprintHasBeenSet(false),
    m_blurHasBeenSet(false),
    m_reflectionHasBeenSet(false),
    m_borderIncompleteHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeGeneralTextImageWarnResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Copy") && !rsp["Copy"].IsNull())
    {
        if (!rsp["Copy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Copy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_copy.Deserialize(rsp["Copy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_copyHasBeenSet = true;
    }

    if (rsp.HasMember("Reprint") && !rsp["Reprint"].IsNull())
    {
        if (!rsp["Reprint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Reprint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reprint.Deserialize(rsp["Reprint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reprintHasBeenSet = true;
    }

    if (rsp.HasMember("Blur") && !rsp["Blur"].IsNull())
    {
        if (!rsp["Blur"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Blur` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blur.Deserialize(rsp["Blur"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blurHasBeenSet = true;
    }

    if (rsp.HasMember("Reflection") && !rsp["Reflection"].IsNull())
    {
        if (!rsp["Reflection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Reflection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reflection.Deserialize(rsp["Reflection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reflectionHasBeenSet = true;
    }

    if (rsp.HasMember("BorderIncomplete") && !rsp["BorderIncomplete"].IsNull())
    {
        if (!rsp["BorderIncomplete"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BorderIncomplete` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_borderIncomplete.Deserialize(rsp["BorderIncomplete"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_borderIncompleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeGeneralTextImageWarnResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_copyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Copy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_copy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reprintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reprint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reprint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blurHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blur";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blur.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reflectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reflection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reflection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_borderIncompleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderIncomplete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_borderIncomplete.ToJsonObject(value[key.c_str()], allocator);
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


GeneralWarnInfo RecognizeGeneralTextImageWarnResponse::GetCopy() const
{
    return m_copy;
}

bool RecognizeGeneralTextImageWarnResponse::CopyHasBeenSet() const
{
    return m_copyHasBeenSet;
}

GeneralWarnInfo RecognizeGeneralTextImageWarnResponse::GetReprint() const
{
    return m_reprint;
}

bool RecognizeGeneralTextImageWarnResponse::ReprintHasBeenSet() const
{
    return m_reprintHasBeenSet;
}

GeneralWarnInfo RecognizeGeneralTextImageWarnResponse::GetBlur() const
{
    return m_blur;
}

bool RecognizeGeneralTextImageWarnResponse::BlurHasBeenSet() const
{
    return m_blurHasBeenSet;
}

GeneralWarnInfo RecognizeGeneralTextImageWarnResponse::GetReflection() const
{
    return m_reflection;
}

bool RecognizeGeneralTextImageWarnResponse::ReflectionHasBeenSet() const
{
    return m_reflectionHasBeenSet;
}

GeneralWarnInfo RecognizeGeneralTextImageWarnResponse::GetBorderIncomplete() const
{
    return m_borderIncomplete;
}

bool RecognizeGeneralTextImageWarnResponse::BorderIncompleteHasBeenSet() const
{
    return m_borderIncompleteHasBeenSet;
}


