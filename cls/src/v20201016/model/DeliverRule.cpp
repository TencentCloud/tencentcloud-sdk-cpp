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

#include <tencentcloud/cls/v20201016/model/DeliverRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DeliverRule::DeliverRule() :
    m_dataScopeHasBeenSet(false)
{
}

CoreInternalOutcome DeliverRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataScope") && !value["DataScope"].IsNull())
    {
        if (!value["DataScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverRule.DataScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataScope = value["DataScope"].GetUint64();
        m_dataScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliverRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataScope, allocator);
    }

}


uint64_t DeliverRule::GetDataScope() const
{
    return m_dataScope;
}

void DeliverRule::SetDataScope(const uint64_t& _dataScope)
{
    m_dataScope = _dataScope;
    m_dataScopeHasBeenSet = true;
}

bool DeliverRule::DataScopeHasBeenSet() const
{
    return m_dataScopeHasBeenSet;
}

