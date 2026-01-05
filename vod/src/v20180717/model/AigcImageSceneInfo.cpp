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

#include <tencentcloud/vod/v20180717/model/AigcImageSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcImageSceneInfo::AigcImageSceneInfo() :
    m_typeHasBeenSet(false),
    m_changeClothesConfigHasBeenSet(false),
    m_productImageConfigHasBeenSet(false)
{
}

CoreInternalOutcome AigcImageSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageSceneInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ChangeClothesConfig") && !value["ChangeClothesConfig"].IsNull())
    {
        if (!value["ChangeClothesConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageSceneInfo.ChangeClothesConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_changeClothesConfig.Deserialize(value["ChangeClothesConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_changeClothesConfigHasBeenSet = true;
    }

    if (value.HasMember("ProductImageConfig") && !value["ProductImageConfig"].IsNull())
    {
        if (!value["ProductImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcImageSceneInfo.ProductImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productImageConfig.Deserialize(value["ProductImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productImageConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcImageSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_changeClothesConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeClothesConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_changeClothesConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_productImageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productImageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AigcImageSceneInfo::GetType() const
{
    return m_type;
}

void AigcImageSceneInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AigcImageSceneInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ChangeClothesConfig AigcImageSceneInfo::GetChangeClothesConfig() const
{
    return m_changeClothesConfig;
}

void AigcImageSceneInfo::SetChangeClothesConfig(const ChangeClothesConfig& _changeClothesConfig)
{
    m_changeClothesConfig = _changeClothesConfig;
    m_changeClothesConfigHasBeenSet = true;
}

bool AigcImageSceneInfo::ChangeClothesConfigHasBeenSet() const
{
    return m_changeClothesConfigHasBeenSet;
}

ProductImageConfig AigcImageSceneInfo::GetProductImageConfig() const
{
    return m_productImageConfig;
}

void AigcImageSceneInfo::SetProductImageConfig(const ProductImageConfig& _productImageConfig)
{
    m_productImageConfig = _productImageConfig;
    m_productImageConfigHasBeenSet = true;
}

bool AigcImageSceneInfo::ProductImageConfigHasBeenSet() const
{
    return m_productImageConfigHasBeenSet;
}

