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

#include <tencentcloud/cfw/v20190904/model/NewModeItems.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

NewModeItems::NewModeItems() :
    m_vpcListHasBeenSet(false),
    m_eipsHasBeenSet(false),
    m_addCountHasBeenSet(false)
{
}

CoreInternalOutcome NewModeItems::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcList") && !value["VpcList"].IsNull())
    {
        if (!value["VpcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewModeItems.VpcList` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcList.push_back((*itr).GetString());
        }
        m_vpcListHasBeenSet = true;
    }

    if (value.HasMember("Eips") && !value["Eips"].IsNull())
    {
        if (!value["Eips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NewModeItems.Eips` is not array type"));

        const rapidjson::Value &tmpValue = value["Eips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eips.push_back((*itr).GetString());
        }
        m_eipsHasBeenSet = true;
    }

    if (value.HasMember("AddCount") && !value["AddCount"].IsNull())
    {
        if (!value["AddCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewModeItems.AddCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addCount = value["AddCount"].GetInt64();
        m_addCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewModeItems::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcList.begin(); itr != m_vpcList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eips.begin(); itr != m_eips.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addCount, allocator);
    }

}


vector<string> NewModeItems::GetVpcList() const
{
    return m_vpcList;
}

void NewModeItems::SetVpcList(const vector<string>& _vpcList)
{
    m_vpcList = _vpcList;
    m_vpcListHasBeenSet = true;
}

bool NewModeItems::VpcListHasBeenSet() const
{
    return m_vpcListHasBeenSet;
}

vector<string> NewModeItems::GetEips() const
{
    return m_eips;
}

void NewModeItems::SetEips(const vector<string>& _eips)
{
    m_eips = _eips;
    m_eipsHasBeenSet = true;
}

bool NewModeItems::EipsHasBeenSet() const
{
    return m_eipsHasBeenSet;
}

int64_t NewModeItems::GetAddCount() const
{
    return m_addCount;
}

void NewModeItems::SetAddCount(const int64_t& _addCount)
{
    m_addCount = _addCount;
    m_addCountHasBeenSet = true;
}

bool NewModeItems::AddCountHasBeenSet() const
{
    return m_addCountHasBeenSet;
}

