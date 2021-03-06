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

#include <tencentcloud/vm/v20200709/model/ImageSegments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20200709::Model;
using namespace rapidjson;
using namespace std;

ImageSegments::ImageSegments() :
    m_offsetTimeHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome ImageSegments::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OffsetTime") && !value["OffsetTime"].IsNull())
    {
        if (!value["OffsetTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSegments.OffsetTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offsetTime = string(value["OffsetTime"].GetString());
        m_offsetTimeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ImageSegments.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSegments::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_offsetTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_offsetTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
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

