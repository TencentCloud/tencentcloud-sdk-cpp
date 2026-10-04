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

#include <tencentcloud/databuddy/v20260715/model/CreateCatalogRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateCatalogRsp::CreateCatalogRsp() :
    m_catalogIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateCatalogRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CatalogId") && !value["CatalogId"].IsNull())
    {
        if (!value["CatalogId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateCatalogRsp.CatalogId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogId = string(value["CatalogId"].GetString());
        m_catalogIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateCatalogRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_catalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogId.c_str(), allocator).Move(), allocator);
    }

}


string CreateCatalogRsp::GetCatalogId() const
{
    return m_catalogId;
}

void CreateCatalogRsp::SetCatalogId(const string& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool CreateCatalogRsp::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}

