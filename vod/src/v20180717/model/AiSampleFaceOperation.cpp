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

#include <tencentcloud/vod/v20180717/model/AiSampleFaceOperation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiSampleFaceOperation::AiSampleFaceOperation() :
    m_typeHasBeenSet(false),
    m_faceIdsHasBeenSet(false),
    m_faceContentsHasBeenSet(false)
{
}

CoreInternalOutcome AiSampleFaceOperation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiSampleFaceOperation.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FaceIds") && !value["FaceIds"].IsNull())
    {
        if (!value["FaceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiSampleFaceOperation.FaceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceIds.push_back((*itr).GetString());
        }
        m_faceIdsHasBeenSet = true;
    }

    if (value.HasMember("FaceContents") && !value["FaceContents"].IsNull())
    {
        if (!value["FaceContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiSampleFaceOperation.FaceContents` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_faceContents.push_back((*itr).GetString());
        }
        m_faceContentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiSampleFaceOperation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_faceIds.begin(); itr != m_faceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_faceContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_faceContents.begin(); itr != m_faceContents.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AiSampleFaceOperation::GetType() const
{
    return m_type;
}

void AiSampleFaceOperation::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AiSampleFaceOperation::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> AiSampleFaceOperation::GetFaceIds() const
{
    return m_faceIds;
}

void AiSampleFaceOperation::SetFaceIds(const vector<string>& _faceIds)
{
    m_faceIds = _faceIds;
    m_faceIdsHasBeenSet = true;
}

bool AiSampleFaceOperation::FaceIdsHasBeenSet() const
{
    return m_faceIdsHasBeenSet;
}

vector<string> AiSampleFaceOperation::GetFaceContents() const
{
    return m_faceContents;
}

void AiSampleFaceOperation::SetFaceContents(const vector<string>& _faceContents)
{
    m_faceContents = _faceContents;
    m_faceContentsHasBeenSet = true;
}

bool AiSampleFaceOperation::FaceContentsHasBeenSet() const
{
    return m_faceContentsHasBeenSet;
}

