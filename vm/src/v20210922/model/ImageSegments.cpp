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

#include <tencentcloud/vm/v20210922/model/ImageSegments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

ImageSegments::ImageSegments() :
    m_offsetTimeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_offsetusTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageSegments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OffsetTime") && !value["OffsetTime"].IsNull())
    {
        if (!value["OffsetTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSegments.OffsetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetTime = string(value["OffsetTime"].GetString());
        m_offsetTimeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSegments.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSegments.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("OffsetusTime") && !value["OffsetusTime"].IsNull())
    {
        if (!value["OffsetusTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSegments.OffsetusTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetusTime = string(value["OffsetusTime"].GetString());
        m_offsetusTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSegments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetusTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetusTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offsetusTime.c_str(), allocator).Move(), allocator);
    }

}


string ImageSegments::GetOffsetTime() const
{
    return m_offsetTime;
}

void ImageSegments::SetOffsetTime(const string& _offsetTime)
{
    m_offsetTime = _offsetTime;
    m_offsetTimeHasBeenSet = true;
}

bool ImageSegments::OffsetTimeHasBeenSet() const
{
    return m_offsetTimeHasBeenSet;
}

ImageResult ImageSegments::GetResult() const
{
    return m_result;
}

void ImageSegments::SetResult(const ImageResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ImageSegments::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ImageSegments::GetCreatedAt() const
{
    return m_createdAt;
}

void ImageSegments::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ImageSegments::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ImageSegments::GetOffsetusTime() const
{
    return m_offsetusTime;
}

void ImageSegments::SetOffsetusTime(const string& _offsetusTime)
{
    m_offsetusTime = _offsetusTime;
    m_offsetusTimeHasBeenSet = true;
}

bool ImageSegments::OffsetusTimeHasBeenSet() const
{
    return m_offsetusTimeHasBeenSet;
}

