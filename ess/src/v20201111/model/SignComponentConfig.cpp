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

#include <tencentcloud/ess/v20201111/model/SignComponentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SignComponentConfig::SignComponentConfig() :
    m_hideDateHasBeenSet(false)
{
}

CoreInternalOutcome SignComponentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HideDate") && !value["HideDate"].IsNull())
    {
        if (!value["HideDate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SignComponentConfig.HideDate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideDate = value["HideDate"].GetBool();
        m_hideDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignComponentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hideDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideDate, allocator);
    }

}


bool SignComponentConfig::GetHideDate() const
{
    return m_hideDate;
}

void SignComponentConfig::SetHideDate(const bool& _hideDate)
{
    m_hideDate = _hideDate;
    m_hideDateHasBeenSet = true;
}

bool SignComponentConfig::HideDateHasBeenSet() const
{
    return m_hideDateHasBeenSet;
}

