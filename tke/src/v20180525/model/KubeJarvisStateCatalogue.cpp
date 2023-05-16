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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateCatalogue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateCatalogue::KubeJarvisStateCatalogue() :
    m_catalogueLevelHasBeenSet(false),
    m_catalogueNameHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateCatalogue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CatalogueLevel") && !value["CatalogueLevel"].IsNull())
    {
        if (!value["CatalogueLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateCatalogue.CatalogueLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogueLevel = string(value["CatalogueLevel"].GetString());
        m_catalogueLevelHasBeenSet = true;
    }

    if (value.HasMember("CatalogueName") && !value["CatalogueName"].IsNull())
    {
        if (!value["CatalogueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateCatalogue.CatalogueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogueName = string(value["CatalogueName"].GetString());
        m_catalogueNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateCatalogue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogueLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogueLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogueLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogueName.c_str(), allocator).Move(), allocator);
    }

}


string KubeJarvisStateCatalogue::GetCatalogueLevel() const
{
    return m_catalogueLevel;
}

void KubeJarvisStateCatalogue::SetCatalogueLevel(const string& _catalogueLevel)
{
    m_catalogueLevel = _catalogueLevel;
    m_catalogueLevelHasBeenSet = true;
}

bool KubeJarvisStateCatalogue::CatalogueLevelHasBeenSet() const
{
    return m_catalogueLevelHasBeenSet;
}

string KubeJarvisStateCatalogue::GetCatalogueName() const
{
    return m_catalogueName;
}

void KubeJarvisStateCatalogue::SetCatalogueName(const string& _catalogueName)
{
    m_catalogueName = _catalogueName;
    m_catalogueNameHasBeenSet = true;
}

bool KubeJarvisStateCatalogue::CatalogueNameHasBeenSet() const
{
    return m_catalogueNameHasBeenSet;
}

