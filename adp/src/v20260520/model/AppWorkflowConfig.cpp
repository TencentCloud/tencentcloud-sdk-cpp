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

#include <tencentcloud/adp/v20260520/model/AppWorkflowConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppWorkflowConfig::AppWorkflowConfig() :
    m_enablePDLHasBeenSet(false)
{
}

CoreInternalOutcome AppWorkflowConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnablePDL") && !value["EnablePDL"].IsNull())
    {
        if (!value["EnablePDL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppWorkflowConfig.EnablePDL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePDL = value["EnablePDL"].GetBool();
        m_enablePDLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppWorkflowConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enablePDLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePDL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePDL, allocator);
    }

}


bool AppWorkflowConfig::GetEnablePDL() const
{
    return m_enablePDL;
}

void AppWorkflowConfig::SetEnablePDL(const bool& _enablePDL)
{
    m_enablePDL = _enablePDL;
    m_enablePDLHasBeenSet = true;
}

bool AppWorkflowConfig::EnablePDLHasBeenSet() const
{
    return m_enablePDLHasBeenSet;
}

