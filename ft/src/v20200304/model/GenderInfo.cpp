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

#include <tencentcloud/ft/v20200304/model/GenderInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ft::V20200304::Model;
using namespace rapidjson;
using namespace std;

GenderInfo::GenderInfo() :
    m_genderHasBeenSet(false),
    m_faceRectHasBeenSet(false)
{
}

CoreInternalOutcome GenderInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `GenderInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("FaceRect") && !value["FaceRect"].IsNull())
    {
        if (!value["FaceRect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `GenderInfo.FaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceRect.Deserialize(value["FaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GenderInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_genderHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_faceRectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_faceRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t GenderInfo::GetGender() const
{
    return m_gender;
}

void GenderInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool GenderInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

FaceRect GenderInfo::GetFaceRect() const
{
    return m_faceRect;
}

void GenderInfo::SetFaceRect(const FaceRect& _faceRect)
{
    m_faceRect = _faceRect;
    m_faceRectHasBeenSet = true;
}

bool GenderInfo::FaceRectHasBeenSet() const
{
    return m_faceRectHasBeenSet;
}

