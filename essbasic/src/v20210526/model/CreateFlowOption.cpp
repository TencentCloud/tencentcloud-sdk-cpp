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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowOption::CreateFlowOption() :
    m_canEditFlowHasBeenSet(false)
{
}

CoreInternalOutcome CreateFlowOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanEditFlow") && !value["CanEditFlow"].IsNull())
    {
        if (!value["CanEditFlow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CanEditFlow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditFlow = value["CanEditFlow"].GetBool();
        m_canEditFlowHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateFlowOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canEditFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditFlow, allocator);
    }

}


bool CreateFlowOption::GetCanEditFlow() const
{
    return m_canEditFlow;
}

void CreateFlowOption::SetCanEditFlow(const bool& _canEditFlow)
{
    m_canEditFlow = _canEditFlow;
    m_canEditFlowHasBeenSet = true;
}

bool CreateFlowOption::CanEditFlowHasBeenSet() const
{
    return m_canEditFlowHasBeenSet;
}

