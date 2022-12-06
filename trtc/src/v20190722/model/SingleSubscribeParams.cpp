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

#include <tencentcloud/trtc/v20190722/model/SingleSubscribeParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SingleSubscribeParams::SingleSubscribeParams() :
    m_userMediaStreamHasBeenSet(false)
{
}

CoreInternalOutcome SingleSubscribeParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserMediaStream") && !value["UserMediaStream"].IsNull())
    {
        if (!value["UserMediaStream"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleSubscribeParams.UserMediaStream` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userMediaStream.Deserialize(value["UserMediaStream"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userMediaStreamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleSubscribeParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userMediaStreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserMediaStream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userMediaStream.ToJsonObject(value[key.c_str()], allocator);
    }

}


UserMediaStream SingleSubscribeParams::GetUserMediaStream() const
{
    return m_userMediaStream;
}

void SingleSubscribeParams::SetUserMediaStream(const UserMediaStream& _userMediaStream)
{
    m_userMediaStream = _userMediaStream;
    m_userMediaStreamHasBeenSet = true;
}

bool SingleSubscribeParams::UserMediaStreamHasBeenSet() const
{
    return m_userMediaStreamHasBeenSet;
}

