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

#include <tencentcloud/csip/v20221121/model/PublicIpDomainListKey.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

PublicIpDomainListKey::PublicIpDomainListKey() :
    m_assetHasBeenSet(false)
{
}

CoreInternalOutcome PublicIpDomainListKey::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIpDomainListKey.Asset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asset = string(value["Asset"].GetString());
        m_assetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicIpDomainListKey::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

}


string PublicIpDomainListKey::GetAsset() const
{
    return m_asset;
}

void PublicIpDomainListKey::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool PublicIpDomainListKey::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

