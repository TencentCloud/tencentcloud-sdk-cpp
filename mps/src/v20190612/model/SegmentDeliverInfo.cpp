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

#include <tencentcloud/mps/v20190612/model/SegmentDeliverInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SegmentDeliverInfo::SegmentDeliverInfo() :
    m_defaultSegmentUrlHasBeenSet(false),
    m_nameServersHasBeenSet(false)
{
}

CoreInternalOutcome SegmentDeliverInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DefaultSegmentUrl") && !value["DefaultSegmentUrl"].IsNull())
    {
        if (!value["DefaultSegmentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentDeliverInfo.DefaultSegmentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSegmentUrl = string(value["DefaultSegmentUrl"].GetString());
        m_defaultSegmentUrlHasBeenSet = true;
    }

    if (value.HasMember("NameServers") && !value["NameServers"].IsNull())
    {
        if (!value["NameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SegmentDeliverInfo.NameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["NameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameServer item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nameServers.push_back(item);
        }
        m_nameServersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentDeliverInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultSegmentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSegmentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultSegmentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_nameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nameServers.begin(); itr != m_nameServers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SegmentDeliverInfo::GetDefaultSegmentUrl() const
{
    return m_defaultSegmentUrl;
}

void SegmentDeliverInfo::SetDefaultSegmentUrl(const string& _defaultSegmentUrl)
{
    m_defaultSegmentUrl = _defaultSegmentUrl;
    m_defaultSegmentUrlHasBeenSet = true;
}

bool SegmentDeliverInfo::DefaultSegmentUrlHasBeenSet() const
{
    return m_defaultSegmentUrlHasBeenSet;
}

vector<NameServer> SegmentDeliverInfo::GetNameServers() const
{
    return m_nameServers;
}

void SegmentDeliverInfo::SetNameServers(const vector<NameServer>& _nameServers)
{
    m_nameServers = _nameServers;
    m_nameServersHasBeenSet = true;
}

bool SegmentDeliverInfo::NameServersHasBeenSet() const
{
    return m_nameServersHasBeenSet;
}

