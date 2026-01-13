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

#include <tencentcloud/ess/v20201111/model/ContractReviewChecklistWebUrlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ContractReviewChecklistWebUrlOption::ContractReviewChecklistWebUrlOption() :
    m_disableCreateChecklistHasBeenSet(false)
{
}

CoreInternalOutcome ContractReviewChecklistWebUrlOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisableCreateChecklist") && !value["DisableCreateChecklist"].IsNull())
    {
        if (!value["DisableCreateChecklist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContractReviewChecklistWebUrlOption.DisableCreateChecklist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableCreateChecklist = value["DisableCreateChecklist"].GetBool();
        m_disableCreateChecklistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContractReviewChecklistWebUrlOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disableCreateChecklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableCreateChecklist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableCreateChecklist, allocator);
    }

}


bool ContractReviewChecklistWebUrlOption::GetDisableCreateChecklist() const
{
    return m_disableCreateChecklist;
}

void ContractReviewChecklistWebUrlOption::SetDisableCreateChecklist(const bool& _disableCreateChecklist)
{
    m_disableCreateChecklist = _disableCreateChecklist;
    m_disableCreateChecklistHasBeenSet = true;
}

bool ContractReviewChecklistWebUrlOption::DisableCreateChecklistHasBeenSet() const
{
    return m_disableCreateChecklistHasBeenSet;
}

