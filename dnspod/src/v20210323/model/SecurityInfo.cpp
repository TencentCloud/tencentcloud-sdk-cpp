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

#include <tencentcloud/dnspod/v20210323/model/SecurityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SecurityInfo::SecurityInfo() :
    m_isDefendFreeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome SecurityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDefendFree") && !value["IsDefendFree"].IsNull())
    {
        if (!value["IsDefendFree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityInfo.IsDefendFree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefendFree = string(value["IsDefendFree"].GetString());
        m_isDefendFreeHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDefendFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefendFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefendFree.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string SecurityInfo::GetIsDefendFree() const
{
    return m_isDefendFree;
}

void SecurityInfo::SetIsDefendFree(const string& _isDefendFree)
{
    m_isDefendFree = _isDefendFree;
    m_isDefendFreeHasBeenSet = true;
}

bool SecurityInfo::IsDefendFreeHasBeenSet() const
{
    return m_isDefendFreeHasBeenSet;
}

string SecurityInfo::GetKey() const
{
    return m_key;
}

void SecurityInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SecurityInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SecurityInfo::GetResourceId() const
{
    return m_resourceId;
}

void SecurityInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool SecurityInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

