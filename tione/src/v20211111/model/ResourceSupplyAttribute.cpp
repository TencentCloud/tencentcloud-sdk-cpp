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

#include <tencentcloud/tione/v20211111/model/ResourceSupplyAttribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceSupplyAttribute::ResourceSupplyAttribute() :
    m_supplyTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSupplyAttribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SupplyType") && !value["SupplyType"].IsNull())
    {
        if (!value["SupplyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSupplyAttribute.SupplyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supplyType = string(value["SupplyType"].GetString());
        m_supplyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSupplyAttribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_supplyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupplyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supplyType.c_str(), allocator).Move(), allocator);
    }

}


string ResourceSupplyAttribute::GetSupplyType() const
{
    return m_supplyType;
}

void ResourceSupplyAttribute::SetSupplyType(const string& _supplyType)
{
    m_supplyType = _supplyType;
    m_supplyTypeHasBeenSet = true;
}

bool ResourceSupplyAttribute::SupplyTypeHasBeenSet() const
{
    return m_supplyTypeHasBeenSet;
}

