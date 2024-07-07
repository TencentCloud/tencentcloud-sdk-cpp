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

#include <tencentcloud/dlc/v20210125/model/AccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AccessInfo::AccessInfo() :
    m_accessTypeHasBeenSet(false),
    m_accessConnectionInfosHasBeenSet(false)
{
}

CoreInternalOutcome AccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessInfo.AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(value["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("AccessConnectionInfos") && !value["AccessConnectionInfos"].IsNull())
    {
        if (!value["AccessConnectionInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccessInfo.AccessConnectionInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessConnectionInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accessConnectionInfos.push_back((*itr).GetString());
        }
        m_accessConnectionInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessConnectionInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessConnectionInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessConnectionInfos.begin(); itr != m_accessConnectionInfos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AccessInfo::GetAccessType() const
{
    return m_accessType;
}

void AccessInfo::SetAccessType(const string& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool AccessInfo::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<string> AccessInfo::GetAccessConnectionInfos() const
{
    return m_accessConnectionInfos;
}

void AccessInfo::SetAccessConnectionInfos(const vector<string>& _accessConnectionInfos)
{
    m_accessConnectionInfos = _accessConnectionInfos;
    m_accessConnectionInfosHasBeenSet = true;
}

bool AccessInfo::AccessConnectionInfosHasBeenSet() const
{
    return m_accessConnectionInfosHasBeenSet;
}

