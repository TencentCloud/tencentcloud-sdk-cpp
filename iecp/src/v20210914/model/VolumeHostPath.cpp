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

#include <tencentcloud/iecp/v20210914/model/VolumeHostPath.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

VolumeHostPath::VolumeHostPath() :
    m_typeHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome VolumeHostPath::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeHostPath.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeHostPath.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeHostPath::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string VolumeHostPath::GetType() const
{
    return m_type;
}

void VolumeHostPath::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VolumeHostPath::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VolumeHostPath::GetPath() const
{
    return m_path;
}

void VolumeHostPath::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool VolumeHostPath::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

