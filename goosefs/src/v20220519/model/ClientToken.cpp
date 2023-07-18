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

#include <tencentcloud/goosefs/v20220519/model/ClientToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

ClientToken::ClientToken() :
    m_localDirectoryHasBeenSet(false)
{
}

CoreInternalOutcome ClientToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalDirectory") && !value["LocalDirectory"].IsNull())
    {
        if (!value["LocalDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientToken.LocalDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localDirectory = string(value["LocalDirectory"].GetString());
        m_localDirectoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localDirectory.c_str(), allocator).Move(), allocator);
    }

}


string ClientToken::GetLocalDirectory() const
{
    return m_localDirectory;
}

void ClientToken::SetLocalDirectory(const string& _localDirectory)
{
    m_localDirectory = _localDirectory;
    m_localDirectoryHasBeenSet = true;
}

bool ClientToken::LocalDirectoryHasBeenSet() const
{
    return m_localDirectoryHasBeenSet;
}

