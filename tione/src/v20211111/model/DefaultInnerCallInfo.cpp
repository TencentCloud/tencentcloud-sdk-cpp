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

#include <tencentcloud/tione/v20211111/model/DefaultInnerCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DefaultInnerCallInfo::DefaultInnerCallInfo() :
    m_vpcIdsHasBeenSet(false),
    m_innerHttpAddrHasBeenSet(false)
{
}

CoreInternalOutcome DefaultInnerCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcIds") && !value["VpcIds"].IsNull())
    {
        if (!value["VpcIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefaultInnerCallInfo.VpcIds` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_vpcIds.push_back((*itr).GetString());
        }
        m_vpcIdsHasBeenSet = true;
    }

    if (value.HasMember("InnerHttpAddr") && !value["InnerHttpAddr"].IsNull())
    {
        if (!value["InnerHttpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultInnerCallInfo.InnerHttpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerHttpAddr = string(value["InnerHttpAddr"].GetString());
        m_innerHttpAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DefaultInnerCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcIds.begin(); itr != m_vpcIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_innerHttpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerHttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerHttpAddr.c_str(), allocator).Move(), allocator);
    }

}


vector<string> DefaultInnerCallInfo::GetVpcIds() const
{
    return m_vpcIds;
}

void DefaultInnerCallInfo::SetVpcIds(const vector<string>& _vpcIds)
{
    m_vpcIds = _vpcIds;
    m_vpcIdsHasBeenSet = true;
}

bool DefaultInnerCallInfo::VpcIdsHasBeenSet() const
{
    return m_vpcIdsHasBeenSet;
}

string DefaultInnerCallInfo::GetInnerHttpAddr() const
{
    return m_innerHttpAddr;
}

void DefaultInnerCallInfo::SetInnerHttpAddr(const string& _innerHttpAddr)
{
    m_innerHttpAddr = _innerHttpAddr;
    m_innerHttpAddrHasBeenSet = true;
}

bool DefaultInnerCallInfo::InnerHttpAddrHasBeenSet() const
{
    return m_innerHttpAddrHasBeenSet;
}

