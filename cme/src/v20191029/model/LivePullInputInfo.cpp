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

#include <tencentcloud/cme/v20191029/model/LivePullInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

LivePullInputInfo::LivePullInputInfo() :
    m_inputUrlHasBeenSet(false)
{
}

CoreInternalOutcome LivePullInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputUrl") && !value["InputUrl"].IsNull())
    {
        if (!value["InputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LivePullInputInfo.InputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputUrl = string(value["InputUrl"].GetString());
        m_inputUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LivePullInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

}


string LivePullInputInfo::GetInputUrl() const
{
    return m_inputUrl;
}

void LivePullInputInfo::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool LivePullInputInfo::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

