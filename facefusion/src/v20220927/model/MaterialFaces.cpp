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

#include <tencentcloud/facefusion/v20220927/model/MaterialFaces.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

MaterialFaces::MaterialFaces() :
    m_faceIdHasBeenSet(false),
    m_faceInfoHasBeenSet(false)
{
}

CoreInternalOutcome MaterialFaces::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialFaces.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("FaceInfo") && !value["FaceInfo"].IsNull())
    {
        if (!value["FaceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialFaces.FaceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceInfo.Deserialize(value["FaceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialFaces::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MaterialFaces::GetFaceId() const
{
    return m_faceId;
}

void MaterialFaces::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool MaterialFaces::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

FaceInfo MaterialFaces::GetFaceInfo() const
{
    return m_faceInfo;
}

void MaterialFaces::SetFaceInfo(const FaceInfo& _faceInfo)
{
    m_faceInfo = _faceInfo;
    m_faceInfoHasBeenSet = true;
}

bool MaterialFaces::FaceInfoHasBeenSet() const
{
    return m_faceInfoHasBeenSet;
}

