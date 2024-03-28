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

#include <tencentcloud/lcic/v20220817/model/MsgBody.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

MsgBody::MsgBody() :
    m_msgTypeHasBeenSet(false),
    m_textMsgContentHasBeenSet(false),
    m_faceMsgContentHasBeenSet(false),
    m_imageMsgContentHasBeenSet(false),
    m_customMsgContentHasBeenSet(false)
{
}

CoreInternalOutcome MsgBody::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("TextMsgContent") && !value["TextMsgContent"].IsNull())
    {
        if (!value["TextMsgContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody.TextMsgContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textMsgContent.Deserialize(value["TextMsgContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textMsgContentHasBeenSet = true;
    }

    if (value.HasMember("FaceMsgContent") && !value["FaceMsgContent"].IsNull())
    {
        if (!value["FaceMsgContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody.FaceMsgContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceMsgContent.Deserialize(value["FaceMsgContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceMsgContentHasBeenSet = true;
    }

    if (value.HasMember("ImageMsgContent") && !value["ImageMsgContent"].IsNull())
    {
        if (!value["ImageMsgContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody.ImageMsgContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageMsgContent.Deserialize(value["ImageMsgContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageMsgContentHasBeenSet = true;
    }

    if (value.HasMember("CustomMsgContent") && !value["CustomMsgContent"].IsNull())
    {
        if (!value["CustomMsgContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgBody.CustomMsgContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customMsgContent.Deserialize(value["CustomMsgContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customMsgContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgBody::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_textMsgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextMsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textMsgContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceMsgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceMsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceMsgContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageMsgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageMsgContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customMsgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customMsgContent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MsgBody::GetMsgType() const
{
    return m_msgType;
}

void MsgBody::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool MsgBody::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

TextMsgContent MsgBody::GetTextMsgContent() const
{
    return m_textMsgContent;
}

void MsgBody::SetTextMsgContent(const TextMsgContent& _textMsgContent)
{
    m_textMsgContent = _textMsgContent;
    m_textMsgContentHasBeenSet = true;
}

bool MsgBody::TextMsgContentHasBeenSet() const
{
    return m_textMsgContentHasBeenSet;
}

FaceMsgContent MsgBody::GetFaceMsgContent() const
{
    return m_faceMsgContent;
}

void MsgBody::SetFaceMsgContent(const FaceMsgContent& _faceMsgContent)
{
    m_faceMsgContent = _faceMsgContent;
    m_faceMsgContentHasBeenSet = true;
}

bool MsgBody::FaceMsgContentHasBeenSet() const
{
    return m_faceMsgContentHasBeenSet;
}

ImageMsgContent MsgBody::GetImageMsgContent() const
{
    return m_imageMsgContent;
}

void MsgBody::SetImageMsgContent(const ImageMsgContent& _imageMsgContent)
{
    m_imageMsgContent = _imageMsgContent;
    m_imageMsgContentHasBeenSet = true;
}

bool MsgBody::ImageMsgContentHasBeenSet() const
{
    return m_imageMsgContentHasBeenSet;
}

CustomMsgContent MsgBody::GetCustomMsgContent() const
{
    return m_customMsgContent;
}

void MsgBody::SetCustomMsgContent(const CustomMsgContent& _customMsgContent)
{
    m_customMsgContent = _customMsgContent;
    m_customMsgContentHasBeenSet = true;
}

bool MsgBody::CustomMsgContentHasBeenSet() const
{
    return m_customMsgContentHasBeenSet;
}

