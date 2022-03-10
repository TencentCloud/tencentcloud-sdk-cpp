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

#include <tencentcloud/tke/v20180525/model/ImageCacheEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ImageCacheEvent::ImageCacheEvent() :
    m_imageCacheIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_firstTimestampHasBeenSet(false),
    m_lastTimestampHasBeenSet(false)
{
}

CoreInternalOutcome ImageCacheEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageCacheId") && !value["ImageCacheId"].IsNull())
    {
        if (!value["ImageCacheId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.ImageCacheId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCacheId = string(value["ImageCacheId"].GetString());
        m_imageCacheIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("FirstTimestamp") && !value["FirstTimestamp"].IsNull())
    {
        if (!value["FirstTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.FirstTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTimestamp = string(value["FirstTimestamp"].GetString());
        m_firstTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastTimestamp") && !value["LastTimestamp"].IsNull())
    {
        if (!value["LastTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCacheEvent.LastTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTimestamp = string(value["LastTimestamp"].GetString());
        m_lastTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageCacheEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageCacheIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCacheId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCacheId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string ImageCacheEvent::GetImageCacheId() const
{
    return m_imageCacheId;
}

void ImageCacheEvent::SetImageCacheId(const string& _imageCacheId)
{
    m_imageCacheId = _imageCacheId;
    m_imageCacheIdHasBeenSet = true;
}

bool ImageCacheEvent::ImageCacheIdHasBeenSet() const
{
    return m_imageCacheIdHasBeenSet;
}

string ImageCacheEvent::GetType() const
{
    return m_type;
}

void ImageCacheEvent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageCacheEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageCacheEvent::GetReason() const
{
    return m_reason;
}

void ImageCacheEvent::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ImageCacheEvent::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ImageCacheEvent::GetMessage() const
{
    return m_message;
}

void ImageCacheEvent::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ImageCacheEvent::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string ImageCacheEvent::GetFirstTimestamp() const
{
    return m_firstTimestamp;
}

void ImageCacheEvent::SetFirstTimestamp(const string& _firstTimestamp)
{
    m_firstTimestamp = _firstTimestamp;
    m_firstTimestampHasBeenSet = true;
}

bool ImageCacheEvent::FirstTimestampHasBeenSet() const
{
    return m_firstTimestampHasBeenSet;
}

string ImageCacheEvent::GetLastTimestamp() const
{
    return m_lastTimestamp;
}

void ImageCacheEvent::SetLastTimestamp(const string& _lastTimestamp)
{
    m_lastTimestamp = _lastTimestamp;
    m_lastTimestampHasBeenSet = true;
}

bool ImageCacheEvent::LastTimestampHasBeenSet() const
{
    return m_lastTimestampHasBeenSet;
}

