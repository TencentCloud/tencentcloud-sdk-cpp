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

#include <tencentcloud/oceanus/v20190422/model/ClusterVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ClusterVersion::ClusterVersion() :
    m_flinkHasBeenSet(false),
    m_supportedFlinkHasBeenSet(false)
{
}

CoreInternalOutcome ClusterVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Flink") && !value["Flink"].IsNull())
    {
        if (!value["Flink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterVersion.Flink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flink = string(value["Flink"].GetString());
        m_flinkHasBeenSet = true;
    }

    if (value.HasMember("SupportedFlink") && !value["SupportedFlink"].IsNull())
    {
        if (!value["SupportedFlink"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterVersion.SupportedFlink` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedFlink"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedFlink.push_back((*itr).GetString());
        }
        m_supportedFlinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flink.c_str(), allocator).Move(), allocator);
    }

    if (m_supportedFlinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedFlink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedFlink.begin(); itr != m_supportedFlink.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClusterVersion::GetFlink() const
{
    return m_flink;
}

void ClusterVersion::SetFlink(const string& _flink)
{
    m_flink = _flink;
    m_flinkHasBeenSet = true;
}

bool ClusterVersion::FlinkHasBeenSet() const
{
    return m_flinkHasBeenSet;
}

vector<string> ClusterVersion::GetSupportedFlink() const
{
    return m_supportedFlink;
}

void ClusterVersion::SetSupportedFlink(const vector<string>& _supportedFlink)
{
    m_supportedFlink = _supportedFlink;
    m_supportedFlinkHasBeenSet = true;
}

bool ClusterVersion::SupportedFlinkHasBeenSet() const
{
    return m_supportedFlinkHasBeenSet;
}

