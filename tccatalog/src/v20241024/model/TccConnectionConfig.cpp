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

#include <tencentcloud/tccatalog/v20241024/model/TccConnectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tccatalog::V20241024::Model;
using namespace std;

TccConnectionConfig::TccConnectionConfig() :
    m_tccHiveHasBeenSet(false)
{
}

CoreInternalOutcome TccConnectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TccHive") && !value["TccHive"].IsNull())
    {
        if (!value["TccHive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TccConnectionConfig.TccHive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tccHive.Deserialize(value["TccHive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tccHiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TccConnectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tccHiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TccHive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tccHive.ToJsonObject(value[key.c_str()], allocator);
    }

}


TccConnection TccConnectionConfig::GetTccHive() const
{
    return m_tccHive;
}

void TccConnectionConfig::SetTccHive(const TccConnection& _tccHive)
{
    m_tccHive = _tccHive;
    m_tccHiveHasBeenSet = true;
}

bool TccConnectionConfig::TccHiveHasBeenSet() const
{
    return m_tccHiveHasBeenSet;
}

