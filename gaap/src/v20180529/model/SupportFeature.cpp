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

#include <tencentcloud/gaap/v20180529/model/SupportFeature.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

SupportFeature::SupportFeature() :
    m_networkTypeHasBeenSet(false)
{
}

CoreInternalOutcome SupportFeature::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportFeature.NetworkType` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_networkType.push_back((*itr).GetString());
        }
        m_networkTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SupportFeature::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkType.begin(); itr != m_networkType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SupportFeature::GetNetworkType() const
{
    return m_networkType;
}

void SupportFeature::SetNetworkType(const vector<string>& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool SupportFeature::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

