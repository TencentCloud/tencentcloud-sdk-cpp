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

#include <tencentcloud/lcic/v20220817/model/SetWatermarkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

SetWatermarkRequest::SetWatermarkRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_teacherUrlHasBeenSet(false),
    m_boardUrlHasBeenSet(false),
    m_videoUrlHasBeenSet(false),
    m_boardWHasBeenSet(false),
    m_boardHHasBeenSet(false),
    m_boardXHasBeenSet(false),
    m_boardYHasBeenSet(false),
    m_teacherWHasBeenSet(false),
    m_teacherHHasBeenSet(false),
    m_teacherXHasBeenSet(false),
    m_teacherYHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textColorHasBeenSet(false)
{
}

string SetWatermarkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_teacherUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_boardUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_boardUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_boardWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardW";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_boardW, allocator);
    }

    if (m_boardHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardH";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_boardH, allocator);
    }

    if (m_boardXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_boardX, allocator);
    }

    if (m_boardYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoardY";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_boardY, allocator);
    }

    if (m_teacherWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherW";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teacherW, allocator);
    }

    if (m_teacherHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherH";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teacherH, allocator);
    }

    if (m_teacherXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherX";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teacherX, allocator);
    }

    if (m_teacherYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherY";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_teacherY, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_textColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextColor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textColor.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetWatermarkRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetWatermarkRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetWatermarkRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SetWatermarkRequest::GetTeacherUrl() const
{
    return m_teacherUrl;
}

void SetWatermarkRequest::SetTeacherUrl(const string& _teacherUrl)
{
    m_teacherUrl = _teacherUrl;
    m_teacherUrlHasBeenSet = true;
}

bool SetWatermarkRequest::TeacherUrlHasBeenSet() const
{
    return m_teacherUrlHasBeenSet;
}

string SetWatermarkRequest::GetBoardUrl() const
{
    return m_boardUrl;
}

void SetWatermarkRequest::SetBoardUrl(const string& _boardUrl)
{
    m_boardUrl = _boardUrl;
    m_boardUrlHasBeenSet = true;
}

bool SetWatermarkRequest::BoardUrlHasBeenSet() const
{
    return m_boardUrlHasBeenSet;
}

string SetWatermarkRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void SetWatermarkRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool SetWatermarkRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

double SetWatermarkRequest::GetBoardW() const
{
    return m_boardW;
}

void SetWatermarkRequest::SetBoardW(const double& _boardW)
{
    m_boardW = _boardW;
    m_boardWHasBeenSet = true;
}

bool SetWatermarkRequest::BoardWHasBeenSet() const
{
    return m_boardWHasBeenSet;
}

double SetWatermarkRequest::GetBoardH() const
{
    return m_boardH;
}

void SetWatermarkRequest::SetBoardH(const double& _boardH)
{
    m_boardH = _boardH;
    m_boardHHasBeenSet = true;
}

bool SetWatermarkRequest::BoardHHasBeenSet() const
{
    return m_boardHHasBeenSet;
}

double SetWatermarkRequest::GetBoardX() const
{
    return m_boardX;
}

void SetWatermarkRequest::SetBoardX(const double& _boardX)
{
    m_boardX = _boardX;
    m_boardXHasBeenSet = true;
}

bool SetWatermarkRequest::BoardXHasBeenSet() const
{
    return m_boardXHasBeenSet;
}

double SetWatermarkRequest::GetBoardY() const
{
    return m_boardY;
}

void SetWatermarkRequest::SetBoardY(const double& _boardY)
{
    m_boardY = _boardY;
    m_boardYHasBeenSet = true;
}

bool SetWatermarkRequest::BoardYHasBeenSet() const
{
    return m_boardYHasBeenSet;
}

double SetWatermarkRequest::GetTeacherW() const
{
    return m_teacherW;
}

void SetWatermarkRequest::SetTeacherW(const double& _teacherW)
{
    m_teacherW = _teacherW;
    m_teacherWHasBeenSet = true;
}

bool SetWatermarkRequest::TeacherWHasBeenSet() const
{
    return m_teacherWHasBeenSet;
}

double SetWatermarkRequest::GetTeacherH() const
{
    return m_teacherH;
}

void SetWatermarkRequest::SetTeacherH(const double& _teacherH)
{
    m_teacherH = _teacherH;
    m_teacherHHasBeenSet = true;
}

bool SetWatermarkRequest::TeacherHHasBeenSet() const
{
    return m_teacherHHasBeenSet;
}

double SetWatermarkRequest::GetTeacherX() const
{
    return m_teacherX;
}

void SetWatermarkRequest::SetTeacherX(const double& _teacherX)
{
    m_teacherX = _teacherX;
    m_teacherXHasBeenSet = true;
}

bool SetWatermarkRequest::TeacherXHasBeenSet() const
{
    return m_teacherXHasBeenSet;
}

double SetWatermarkRequest::GetTeacherY() const
{
    return m_teacherY;
}

void SetWatermarkRequest::SetTeacherY(const double& _teacherY)
{
    m_teacherY = _teacherY;
    m_teacherYHasBeenSet = true;
}

bool SetWatermarkRequest::TeacherYHasBeenSet() const
{
    return m_teacherYHasBeenSet;
}

string SetWatermarkRequest::GetText() const
{
    return m_text;
}

void SetWatermarkRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SetWatermarkRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SetWatermarkRequest::GetTextColor() const
{
    return m_textColor;
}

void SetWatermarkRequest::SetTextColor(const string& _textColor)
{
    m_textColor = _textColor;
    m_textColorHasBeenSet = true;
}

bool SetWatermarkRequest::TextColorHasBeenSet() const
{
    return m_textColorHasBeenSet;
}


