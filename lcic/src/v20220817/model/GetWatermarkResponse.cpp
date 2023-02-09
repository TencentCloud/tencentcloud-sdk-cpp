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

#include <tencentcloud/lcic/v20220817/model/GetWatermarkResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

GetWatermarkResponse::GetWatermarkResponse() :
    m_teacherLogoHasBeenSet(false),
    m_boardLogoHasBeenSet(false),
    m_backgroundPictureHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome GetWatermarkResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TeacherLogo") && !rsp["TeacherLogo"].IsNull())
    {
        if (!rsp["TeacherLogo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TeacherLogo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_teacherLogo.Deserialize(rsp["TeacherLogo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_teacherLogoHasBeenSet = true;
    }

    if (rsp.HasMember("BoardLogo") && !rsp["BoardLogo"].IsNull())
    {
        if (!rsp["BoardLogo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BoardLogo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_boardLogo.Deserialize(rsp["BoardLogo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boardLogoHasBeenSet = true;
    }

    if (rsp.HasMember("BackgroundPicture") && !rsp["BackgroundPicture"].IsNull())
    {
        if (!rsp["BackgroundPicture"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackgroundPicture` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backgroundPicture.Deserialize(rsp["BackgroundPicture"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backgroundPictureHasBeenSet = true;
    }

    if (rsp.HasMember("Text") && !rsp["Text"].IsNull())
    {
        if (!rsp["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(rsp["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetWatermarkResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_teacherLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_teacherLogo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_boardLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_boardLogo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundPictureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundPicture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backgroundPicture.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
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


WatermarkConfig GetWatermarkResponse::GetTeacherLogo() const
{
    return m_teacherLogo;
}

bool GetWatermarkResponse::TeacherLogoHasBeenSet() const
{
    return m_teacherLogoHasBeenSet;
}

WatermarkConfig GetWatermarkResponse::GetBoardLogo() const
{
    return m_boardLogo;
}

bool GetWatermarkResponse::BoardLogoHasBeenSet() const
{
    return m_boardLogoHasBeenSet;
}

BackgroundPictureConfig GetWatermarkResponse::GetBackgroundPicture() const
{
    return m_backgroundPicture;
}

bool GetWatermarkResponse::BackgroundPictureHasBeenSet() const
{
    return m_backgroundPictureHasBeenSet;
}

TextMarkConfig GetWatermarkResponse::GetText() const
{
    return m_text;
}

bool GetWatermarkResponse::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}


