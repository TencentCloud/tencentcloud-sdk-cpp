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

#include <tencentcloud/cdwdoris/v20211228/model/UpdateUserPrivileges.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

UpdateUserPrivileges::UpdateUserPrivileges() :
    m_isSetGlobalCatalogHasBeenSet(false)
{
}

CoreInternalOutcome UpdateUserPrivileges::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSetGlobalCatalog") && !value["IsSetGlobalCatalog"].IsNull())
    {
        if (!value["IsSetGlobalCatalog"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateUserPrivileges.IsSetGlobalCatalog` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSetGlobalCatalog = value["IsSetGlobalCatalog"].GetBool();
        m_isSetGlobalCatalogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateUserPrivileges::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSetGlobalCatalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSetGlobalCatalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSetGlobalCatalog, allocator);
    }

}


bool UpdateUserPrivileges::GetIsSetGlobalCatalog() const
{
    return m_isSetGlobalCatalog;
}

void UpdateUserPrivileges::SetIsSetGlobalCatalog(const bool& _isSetGlobalCatalog)
{
    m_isSetGlobalCatalog = _isSetGlobalCatalog;
    m_isSetGlobalCatalogHasBeenSet = true;
}

bool UpdateUserPrivileges::IsSetGlobalCatalogHasBeenSet() const
{
    return m_isSetGlobalCatalogHasBeenSet;
}

