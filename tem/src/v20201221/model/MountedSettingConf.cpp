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

#include <tencentcloud/tem/v20201221/model/MountedSettingConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace std;

MountedSettingConf::MountedSettingConf() :
    m_configDataNameHasBeenSet(false),
    m_mountedPathHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome MountedSettingConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigDataName") && !value["ConfigDataName"].IsNull())
    {
        if (!value["ConfigDataName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountedSettingConf.ConfigDataName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDataName = string(value["ConfigDataName"].GetString());
        m_configDataNameHasBeenSet = true;
    }

    if (value.HasMember("MountedPath") && !value["MountedPath"].IsNull())
    {
        if (!value["MountedPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountedSettingConf.MountedPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountedPath = string(value["MountedPath"].GetString());
        m_mountedPathHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MountedSettingConf.Data` is not array type"));

        const rapidjson::Value &tmpValue = value["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Pair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountedSettingConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configDataNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDataName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDataName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountedPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountedPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountedPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MountedSettingConf::GetConfigDataName() const
{
    return m_configDataName;
}

void MountedSettingConf::SetConfigDataName(const string& _configDataName)
{
    m_configDataName = _configDataName;
    m_configDataNameHasBeenSet = true;
}

bool MountedSettingConf::ConfigDataNameHasBeenSet() const
{
    return m_configDataNameHasBeenSet;
}

string MountedSettingConf::GetMountedPath() const
{
    return m_mountedPath;
}

void MountedSettingConf::SetMountedPath(const string& _mountedPath)
{
    m_mountedPath = _mountedPath;
    m_mountedPathHasBeenSet = true;
}

bool MountedSettingConf::MountedPathHasBeenSet() const
{
    return m_mountedPathHasBeenSet;
}

vector<Pair> MountedSettingConf::GetData() const
{
    return m_data;
}

void MountedSettingConf::SetData(const vector<Pair>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool MountedSettingConf::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

