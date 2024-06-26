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

#include <tencentcloud/ssl/v20191205/model/TCBInstanceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

TCBInstanceList::TCBInstanceList() :
    m_regionHasBeenSet(false),
    m_environmentsHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome TCBInstanceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBInstanceList.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Environments") && !value["Environments"].IsNull())
    {
        if (!value["Environments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TCBInstanceList.Environments` is not array type"));

        const rapidjson::Value &tmpValue = value["Environments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TCBEnvironments item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_environments.push_back(item);
        }
        m_environmentsHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TCBInstanceList.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TCBInstanceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_environments.begin(); itr != m_environments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

}


string TCBInstanceList::GetRegion() const
{
    return m_region;
}

void TCBInstanceList::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TCBInstanceList::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<TCBEnvironments> TCBInstanceList::GetEnvironments() const
{
    return m_environments;
}

void TCBInstanceList::SetEnvironments(const vector<TCBEnvironments>& _environments)
{
    m_environments = _environments;
    m_environmentsHasBeenSet = true;
}

bool TCBInstanceList::EnvironmentsHasBeenSet() const
{
    return m_environmentsHasBeenSet;
}

string TCBInstanceList::GetError() const
{
    return m_error;
}

void TCBInstanceList::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TCBInstanceList::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

