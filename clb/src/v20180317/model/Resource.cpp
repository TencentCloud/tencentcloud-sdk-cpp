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

#include <tencentcloud/clb/v20180317/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

Resource::Resource() :
    m_typeHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_availabilitySetHasBeenSet(false),
    m_typeSetHasBeenSet(false)
{
}

CoreInternalOutcome Resource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.Type` is not array type"));

        const rapidjson::Value &tmpValue = value["Type"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_type.push_back((*itr).GetString());
        }
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resource.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("AvailabilitySet") && !value["AvailabilitySet"].IsNull())
    {
        if (!value["AvailabilitySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.AvailabilitySet` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailabilitySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceAvailability item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_availabilitySet.push_back(item);
        }
        m_availabilitySetHasBeenSet = true;
    }

    if (value.HasMember("TypeSet") && !value["TypeSet"].IsNull())
    {
        if (!value["TypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.TypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TypeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_typeSet.push_back(item);
        }
        m_typeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Resource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_availabilitySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailabilitySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_availabilitySet.begin(); itr != m_availabilitySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_typeSet.begin(); itr != m_typeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> Resource::GetType() const
{
    return m_type;
}

void Resource::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Resource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Resource::GetIsp() const
{
    return m_isp;
}

void Resource::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool Resource::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

vector<ResourceAvailability> Resource::GetAvailabilitySet() const
{
    return m_availabilitySet;
}

void Resource::SetAvailabilitySet(const vector<ResourceAvailability>& _availabilitySet)
{
    m_availabilitySet = _availabilitySet;
    m_availabilitySetHasBeenSet = true;
}

bool Resource::AvailabilitySetHasBeenSet() const
{
    return m_availabilitySetHasBeenSet;
}

vector<TypeInfo> Resource::GetTypeSet() const
{
    return m_typeSet;
}

void Resource::SetTypeSet(const vector<TypeInfo>& _typeSet)
{
    m_typeSet = _typeSet;
    m_typeSetHasBeenSet = true;
}

bool Resource::TypeSetHasBeenSet() const
{
    return m_typeSetHasBeenSet;
}

