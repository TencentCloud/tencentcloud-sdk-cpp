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

#include <tencentcloud/vod/v20180717/model/AigcVideoSceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoSceneInfo::AigcVideoSceneInfo() :
    m_typeHasBeenSet(false),
    m_productShowcaseConfigHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoSceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoSceneInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ProductShowcaseConfig") && !value["ProductShowcaseConfig"].IsNull())
    {
        if (!value["ProductShowcaseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoSceneInfo.ProductShowcaseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productShowcaseConfig.Deserialize(value["ProductShowcaseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productShowcaseConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoSceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_productShowcaseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductShowcaseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productShowcaseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AigcVideoSceneInfo::GetType() const
{
    return m_type;
}

void AigcVideoSceneInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AigcVideoSceneInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ProductShowcaseConfig AigcVideoSceneInfo::GetProductShowcaseConfig() const
{
    return m_productShowcaseConfig;
}

void AigcVideoSceneInfo::SetProductShowcaseConfig(const ProductShowcaseConfig& _productShowcaseConfig)
{
    m_productShowcaseConfig = _productShowcaseConfig;
    m_productShowcaseConfigHasBeenSet = true;
}

bool AigcVideoSceneInfo::ProductShowcaseConfigHasBeenSet() const
{
    return m_productShowcaseConfigHasBeenSet;
}

