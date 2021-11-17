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

#include <tencentcloud/cpdp/v20190820/model/AddShopResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddShopResult::AddShopResult() :
    m_shopNoHasBeenSet(false)
{
}

CoreInternalOutcome AddShopResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShopNo") && !value["ShopNo"].IsNull())
    {
        if (!value["ShopNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddShopResult.ShopNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopNo = string(value["ShopNo"].GetString());
        m_shopNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddShopResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
    }

}


string AddShopResult::GetShopNo() const
{
    return m_shopNo;
}

void AddShopResult::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool AddShopResult::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

