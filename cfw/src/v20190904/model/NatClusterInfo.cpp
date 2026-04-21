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

#include <tencentcloud/cfw/v20190904/model/NatClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NatClusterInfo::NatClusterInfo() :
    m_natInsIdHasBeenSet(false),
    m_natInsNameHasBeenSet(false)
{
}

CoreInternalOutcome NatClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NatInsId") && !value["NatInsId"].IsNull())
    {
        if (!value["NatInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterInfo.NatInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsId = string(value["NatInsId"].GetString());
        m_natInsIdHasBeenSet = true;
    }

    if (value.HasMember("NatInsName") && !value["NatInsName"].IsNull())
    {
        if (!value["NatInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NatClusterInfo.NatInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_natInsName = string(value["NatInsName"].GetString());
        m_natInsNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NatClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_natInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_natInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_natInsName.c_str(), allocator).Move(), allocator);
    }

}


string NatClusterInfo::GetNatInsId() const
{
    return m_natInsId;
}

void NatClusterInfo::SetNatInsId(const string& _natInsId)
{
    m_natInsId = _natInsId;
    m_natInsIdHasBeenSet = true;
}

bool NatClusterInfo::NatInsIdHasBeenSet() const
{
    return m_natInsIdHasBeenSet;
}

string NatClusterInfo::GetNatInsName() const
{
    return m_natInsName;
}

void NatClusterInfo::SetNatInsName(const string& _natInsName)
{
    m_natInsName = _natInsName;
    m_natInsNameHasBeenSet = true;
}

bool NatClusterInfo::NatInsNameHasBeenSet() const
{
    return m_natInsNameHasBeenSet;
}

