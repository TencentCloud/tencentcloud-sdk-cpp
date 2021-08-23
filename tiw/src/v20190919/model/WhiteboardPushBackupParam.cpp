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

#include <tencentcloud/tiw/v20190919/model/WhiteboardPushBackupParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

WhiteboardPushBackupParam::WhiteboardPushBackupParam() :
    m_pushUserIdHasBeenSet(false),
    m_pushUserSigHasBeenSet(false)
{
}

CoreInternalOutcome WhiteboardPushBackupParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PushUserId") && !value["PushUserId"].IsNull())
    {
        if (!value["PushUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushBackupParam.PushUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUserId = string(value["PushUserId"].GetString());
        m_pushUserIdHasBeenSet = true;
    }

    if (value.HasMember("PushUserSig") && !value["PushUserSig"].IsNull())
    {
        if (!value["PushUserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushBackupParam.PushUserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUserSig = string(value["PushUserSig"].GetString());
        m_pushUserSigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteboardPushBackupParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pushUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_pushUserSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushUserSig.c_str(), allocator).Move(), allocator);
    }

}


string WhiteboardPushBackupParam::GetPushUserId() const
{
    return m_pushUserId;
}

void WhiteboardPushBackupParam::SetPushUserId(const string& _pushUserId)
{
    m_pushUserId = _pushUserId;
    m_pushUserIdHasBeenSet = true;
}

bool WhiteboardPushBackupParam::PushUserIdHasBeenSet() const
{
    return m_pushUserIdHasBeenSet;
}

string WhiteboardPushBackupParam::GetPushUserSig() const
{
    return m_pushUserSig;
}

void WhiteboardPushBackupParam::SetPushUserSig(const string& _pushUserSig)
{
    m_pushUserSig = _pushUserSig;
    m_pushUserSigHasBeenSet = true;
}

bool WhiteboardPushBackupParam::PushUserSigHasBeenSet() const
{
    return m_pushUserSigHasBeenSet;
}

