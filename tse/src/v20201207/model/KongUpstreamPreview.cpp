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

#include <tencentcloud/tse/v20201207/model/KongUpstreamPreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongUpstreamPreview::KongUpstreamPreview() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

CoreInternalOutcome KongUpstreamPreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamPreview.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongUpstreamPreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongUpstreamPreview.Target` is not array type"));

        const rapidjson::Value &tmpValue = value["Target"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KongTarget item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_target.push_back(item);
        }
        m_targetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongUpstreamPreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_target.begin(); itr != m_target.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KongUpstreamPreview::GetID() const
{
    return m_iD;
}

void KongUpstreamPreview::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KongUpstreamPreview::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KongUpstreamPreview::GetName() const
{
    return m_name;
}

void KongUpstreamPreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KongUpstreamPreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<KongTarget> KongUpstreamPreview::GetTarget() const
{
    return m_target;
}

void KongUpstreamPreview::SetTarget(const vector<KongTarget>& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool KongUpstreamPreview::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

