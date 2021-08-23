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

#include <tencentcloud/youmall/v20180228/model/CameraPersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

CameraPersonInfo::CameraPersonInfo() :
    m_tempIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_facePicHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_personInfoHasBeenSet(false)
{
}

CoreInternalOutcome CameraPersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TempId") && !value["TempId"].IsNull())
    {
        if (!value["TempId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.TempId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempId = string(value["TempId"].GetString());
        m_tempIdHasBeenSet = true;
    }

    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.FaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = value["FaceId"].GetInt64();
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.IdType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idType = value["IdType"].GetInt64();
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("FacePic") && !value["FacePic"].IsNull())
    {
        if (!value["FacePic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.FacePic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_facePic = string(value["FacePic"].GetString());
        m_facePicHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("PersonInfo") && !value["PersonInfo"].IsNull())
    {
        if (!value["PersonInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CameraPersonInfo.PersonInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personInfo.Deserialize(value["PersonInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CameraPersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tempIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceId, allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idType, allocator);
    }

    if (m_facePicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FacePic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_facePic.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_personInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CameraPersonInfo::GetTempId() const
{
    return m_tempId;
}

void CameraPersonInfo::SetTempId(const string& _tempId)
{
    m_tempId = _tempId;
    m_tempIdHasBeenSet = true;
}

bool CameraPersonInfo::TempIdHasBeenSet() const
{
    return m_tempIdHasBeenSet;
}

int64_t CameraPersonInfo::GetFaceId() const
{
    return m_faceId;
}

void CameraPersonInfo::SetFaceId(const int64_t& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool CameraPersonInfo::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

int64_t CameraPersonInfo::GetIdType() const
{
    return m_idType;
}

void CameraPersonInfo::SetIdType(const int64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool CameraPersonInfo::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string CameraPersonInfo::GetFacePic() const
{
    return m_facePic;
}

void CameraPersonInfo::SetFacePic(const string& _facePic)
{
    m_facePic = _facePic;
    m_facePicHasBeenSet = true;
}

bool CameraPersonInfo::FacePicHasBeenSet() const
{
    return m_facePicHasBeenSet;
}

int64_t CameraPersonInfo::GetTime() const
{
    return m_time;
}

void CameraPersonInfo::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CameraPersonInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

PersonInfo CameraPersonInfo::GetPersonInfo() const
{
    return m_personInfo;
}

void CameraPersonInfo::SetPersonInfo(const PersonInfo& _personInfo)
{
    m_personInfo = _personInfo;
    m_personInfoHasBeenSet = true;
}

bool CameraPersonInfo::PersonInfoHasBeenSet() const
{
    return m_personInfoHasBeenSet;
}

