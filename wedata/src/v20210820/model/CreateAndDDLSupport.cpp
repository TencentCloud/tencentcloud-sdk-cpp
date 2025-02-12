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

#include <tencentcloud/wedata/v20210820/model/CreateAndDDLSupport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateAndDDLSupport::CreateAndDDLSupport() :
    m_supportSelectHasBeenSet(false),
    m_supportDdlHasBeenSet(false)
{
}

CoreInternalOutcome CreateAndDDLSupport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SupportSelect") && !value["SupportSelect"].IsNull())
    {
        if (!value["SupportSelect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAndDDLSupport.SupportSelect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportSelect = value["SupportSelect"].GetBool();
        m_supportSelectHasBeenSet = true;
    }

    if (value.HasMember("SupportDdl") && !value["SupportDdl"].IsNull())
    {
        if (!value["SupportDdl"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAndDDLSupport.SupportDdl` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportDdl = value["SupportDdl"].GetBool();
        m_supportDdlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAndDDLSupport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_supportSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportSelect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportSelect, allocator);
    }

    if (m_supportDdlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDdl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDdl, allocator);
    }

}


bool CreateAndDDLSupport::GetSupportSelect() const
{
    return m_supportSelect;
}

void CreateAndDDLSupport::SetSupportSelect(const bool& _supportSelect)
{
    m_supportSelect = _supportSelect;
    m_supportSelectHasBeenSet = true;
}

bool CreateAndDDLSupport::SupportSelectHasBeenSet() const
{
    return m_supportSelectHasBeenSet;
}

bool CreateAndDDLSupport::GetSupportDdl() const
{
    return m_supportDdl;
}

void CreateAndDDLSupport::SetSupportDdl(const bool& _supportDdl)
{
    m_supportDdl = _supportDdl;
    m_supportDdlHasBeenSet = true;
}

bool CreateAndDDLSupport::SupportDdlHasBeenSet() const
{
    return m_supportDdlHasBeenSet;
}

