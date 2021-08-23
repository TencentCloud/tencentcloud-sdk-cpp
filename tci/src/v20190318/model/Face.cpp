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

#include <tencentcloud/tci/v20190318/model/Face.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

Face::Face() :
    m_faceIdHasBeenSet(false),
    m_faceUrlHasBeenSet(false),
    m_personIdHasBeenSet(false)
{
}

CoreInternalOutcome Face::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Face.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("FaceUrl") && !value["FaceUrl"].IsNull())
    {
        if (!value["FaceUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Face.FaceUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceUrl = string(value["FaceUrl"].GetString());
        m_faceUrlHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Face.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Face::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

}


string Face::GetFaceId() const
{
    return m_faceId;
}

void Face::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool Face::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string Face::GetFaceUrl() const
{
    return m_faceUrl;
}

void Face::SetFaceUrl(const string& _faceUrl)
{
    m_faceUrl = _faceUrl;
    m_faceUrlHasBeenSet = true;
}

bool Face::FaceUrlHasBeenSet() const
{
    return m_faceUrlHasBeenSet;
}

string Face::GetPersonId() const
{
    return m_personId;
}

void Face::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool Face::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

