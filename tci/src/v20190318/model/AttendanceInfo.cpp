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

#include <tencentcloud/tci/v20190318/model/AttendanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

AttendanceInfo::AttendanceInfo() :
    m_faceHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome AttendanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Face") && !value["Face"].IsNull())
    {
        if (!value["Face"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AttendanceInfo.Face` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_face.Deserialize(value["Face"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttendanceInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttendanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Face";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_face.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


FrameInfo AttendanceInfo::GetFace() const
{
    return m_face;
}

void AttendanceInfo::SetFace(const FrameInfo& _face)
{
    m_face = _face;
    m_faceHasBeenSet = true;
}

bool AttendanceInfo::FaceHasBeenSet() const
{
    return m_faceHasBeenSet;
}

string AttendanceInfo::GetPersonId() const
{
    return m_personId;
}

void AttendanceInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool AttendanceInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

