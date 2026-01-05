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

#include <tencentcloud/oceanus/v20190422/model/FlinkJdkVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

FlinkJdkVersion::FlinkJdkVersion() :
    m_flinkVersionHasBeenSet(false),
    m_jdkVersionsHasBeenSet(false)
{
}

CoreInternalOutcome FlinkJdkVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlinkVersion") && !value["FlinkVersion"].IsNull())
    {
        if (!value["FlinkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlinkJdkVersion.FlinkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flinkVersion = string(value["FlinkVersion"].GetString());
        m_flinkVersionHasBeenSet = true;
    }

    if (value.HasMember("JdkVersions") && !value["JdkVersions"].IsNull())
    {
        if (!value["JdkVersions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlinkJdkVersion.JdkVersions` is not array type"));

        const rapidjson::Value &tmpValue = value["JdkVersions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_jdkVersions.push_back((*itr).GetString());
        }
        m_jdkVersionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlinkJdkVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JdkVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jdkVersions.begin(); itr != m_jdkVersions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FlinkJdkVersion::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void FlinkJdkVersion::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool FlinkJdkVersion::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

vector<string> FlinkJdkVersion::GetJdkVersions() const
{
    return m_jdkVersions;
}

void FlinkJdkVersion::SetJdkVersions(const vector<string>& _jdkVersions)
{
    m_jdkVersions = _jdkVersions;
    m_jdkVersionsHasBeenSet = true;
}

bool FlinkJdkVersion::JdkVersionsHasBeenSet() const
{
    return m_jdkVersionsHasBeenSet;
}

