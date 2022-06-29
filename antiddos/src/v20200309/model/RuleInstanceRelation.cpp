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

#include <tencentcloud/antiddos/v20200309/model/RuleInstanceRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

RuleInstanceRelation::RuleInstanceRelation() :
    m_eipListHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cnameHasBeenSet(false)
{
}

CoreInternalOutcome RuleInstanceRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipList") && !value["EipList"].IsNull())
    {
        if (!value["EipList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInstanceRelation.EipList` is not array type"));

        const rapidjson::Value &tmpValue = value["EipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eipList.push_back((*itr).GetString());
        }
        m_eipListHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInstanceRelation.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInstanceRelation.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInstanceRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipList.begin(); itr != m_eipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

}


vector<string> RuleInstanceRelation::GetEipList() const
{
    return m_eipList;
}

void RuleInstanceRelation::SetEipList(const vector<string>& _eipList)
{
    m_eipList = _eipList;
    m_eipListHasBeenSet = true;
}

bool RuleInstanceRelation::EipListHasBeenSet() const
{
    return m_eipListHasBeenSet;
}

string RuleInstanceRelation::GetInstanceId() const
{
    return m_instanceId;
}

void RuleInstanceRelation::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RuleInstanceRelation::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RuleInstanceRelation::GetCname() const
{
    return m_cname;
}

void RuleInstanceRelation::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool RuleInstanceRelation::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

