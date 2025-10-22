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

#include <tencentcloud/vod/v20180717/model/ObjectConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ObjectConfigureInfo::ObjectConfigureInfo() :
    m_switchHasBeenSet(false),
    m_objectLibraryHasBeenSet(false)
{
}

CoreInternalOutcome ObjectConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectConfigureInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ObjectLibrary") && !value["ObjectLibrary"].IsNull())
    {
        if (!value["ObjectLibrary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ObjectConfigureInfo.ObjectLibrary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectLibrary = string(value["ObjectLibrary"].GetString());
        m_objectLibraryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ObjectConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_objectLibraryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectLibrary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectLibrary.c_str(), allocator).Move(), allocator);
    }

}


string ObjectConfigureInfo::GetSwitch() const
{
    return m_switch;
}

void ObjectConfigureInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ObjectConfigureInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ObjectConfigureInfo::GetObjectLibrary() const
{
    return m_objectLibrary;
}

void ObjectConfigureInfo::SetObjectLibrary(const string& _objectLibrary)
{
    m_objectLibrary = _objectLibrary;
    m_objectLibraryHasBeenSet = true;
}

bool ObjectConfigureInfo::ObjectLibraryHasBeenSet() const
{
    return m_objectLibraryHasBeenSet;
}

