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

#include <tencentcloud/pts/v20210728/model/HostAlias.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

HostAlias::HostAlias() :
    m_hostNamesHasBeenSet(false),
    m_iPHasBeenSet(false)
{
}

CoreInternalOutcome HostAlias::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostNames") && !value["HostNames"].IsNull())
    {
        if (!value["HostNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostAlias.HostNames` is not array type"));

        const rapidjson::Value &tmpValue = value["HostNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostNames.push_back((*itr).GetString());
        }
        m_hostNamesHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAlias.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostAlias::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostNames.begin(); itr != m_hostNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

}


vector<string> HostAlias::GetHostNames() const
{
    return m_hostNames;
}

void HostAlias::SetHostNames(const vector<string>& _hostNames)
{
    m_hostNames = _hostNames;
    m_hostNamesHasBeenSet = true;
}

bool HostAlias::HostNamesHasBeenSet() const
{
    return m_hostNamesHasBeenSet;
}

string HostAlias::GetIP() const
{
    return m_iP;
}

void HostAlias::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool HostAlias::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

