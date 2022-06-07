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

#include <tencentcloud/tione/v20211111/model/FrameworkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

FrameworkInfo::FrameworkInfo() :
    m_nameHasBeenSet(false),
    m_versionInfosHasBeenSet(false)
{
}

CoreInternalOutcome FrameworkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameworkInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VersionInfos") && !value["VersionInfos"].IsNull())
    {
        if (!value["VersionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FrameworkInfo.VersionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VersionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FrameworkVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versionInfos.push_back(item);
        }
        m_versionInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameworkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionInfos.begin(); itr != m_versionInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FrameworkInfo::GetName() const
{
    return m_name;
}

void FrameworkInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FrameworkInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<FrameworkVersion> FrameworkInfo::GetVersionInfos() const
{
    return m_versionInfos;
}

void FrameworkInfo::SetVersionInfos(const vector<FrameworkVersion>& _versionInfos)
{
    m_versionInfos = _versionInfos;
    m_versionInfosHasBeenSet = true;
}

bool FrameworkInfo::VersionInfosHasBeenSet() const
{
    return m_versionInfosHasBeenSet;
}

