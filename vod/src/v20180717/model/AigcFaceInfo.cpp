/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/AigcFaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcFaceInfo::AigcFaceInfo() :
    m_sessionIdHasBeenSet(false),
    m_faceInfoListHasBeenSet(false)
{
}

CoreInternalOutcome AigcFaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcFaceInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("FaceInfoList") && !value["FaceInfoList"].IsNull())
    {
        if (!value["FaceInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcFaceInfo.FaceInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcFaceIdentityInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceInfoList.push_back(item);
        }
        m_faceInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcFaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceInfoList.begin(); itr != m_faceInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AigcFaceInfo::GetSessionId() const
{
    return m_sessionId;
}

void AigcFaceInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool AigcFaceInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<AigcFaceIdentityInfo> AigcFaceInfo::GetFaceInfoList() const
{
    return m_faceInfoList;
}

void AigcFaceInfo::SetFaceInfoList(const vector<AigcFaceIdentityInfo>& _faceInfoList)
{
    m_faceInfoList = _faceInfoList;
    m_faceInfoListHasBeenSet = true;
}

bool AigcFaceInfo::FaceInfoListHasBeenSet() const
{
    return m_faceInfoListHasBeenSet;
}

