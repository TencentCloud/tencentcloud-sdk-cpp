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

#include <tencentcloud/mps/v20190612/model/AiSampleFaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

AiSampleFaceInfo::AiSampleFaceInfo() :
    m_faceIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome AiSampleFaceInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiSampleFaceInfo.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiSampleFaceInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiSampleFaceInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_faceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string AiSampleFaceInfo::GetFaceId() const
{
    return m_faceId;
}

void AiSampleFaceInfo::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool AiSampleFaceInfo::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string AiSampleFaceInfo::GetUrl() const
{
    return m_url;
}

void AiSampleFaceInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AiSampleFaceInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

