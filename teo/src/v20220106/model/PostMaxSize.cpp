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

#include <tencentcloud/teo/v20220106/model/PostMaxSize.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

PostMaxSize::PostMaxSize() :
    m_switchHasBeenSet(false),
    m_maxSizeHasBeenSet(false)
{
}

CoreInternalOutcome PostMaxSize::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PostMaxSize.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PostMaxSize.MaxSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetInt64();
        m_maxSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PostMaxSize::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

}


string PostMaxSize::GetSwitch() const
{
    return m_switch;
}

void PostMaxSize::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool PostMaxSize::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t PostMaxSize::GetMaxSize() const
{
    return m_maxSize;
}

void PostMaxSize::SetMaxSize(const int64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool PostMaxSize::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

