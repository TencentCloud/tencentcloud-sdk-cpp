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

#include <tencentcloud/live/v20180801/model/SceneVideoOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SceneVideoOutputInfo::SceneVideoOutputInfo() :
    m_infoHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SceneVideoOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoOutputInfo.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoOutputInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneVideoOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string SceneVideoOutputInfo::GetInfo() const
{
    return m_info;
}

void SceneVideoOutputInfo::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool SceneVideoOutputInfo::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string SceneVideoOutputInfo::GetType() const
{
    return m_type;
}

void SceneVideoOutputInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SceneVideoOutputInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

