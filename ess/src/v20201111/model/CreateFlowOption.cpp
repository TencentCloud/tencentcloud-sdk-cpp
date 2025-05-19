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

#include <tencentcloud/ess/v20201111/model/CreateFlowOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateFlowOption::CreateFlowOption() :
    m_canEditFlowHasBeenSet(false),
    m_canEditFormFieldHasBeenSet(false),
    m_hideShowFlowNameHasBeenSet(false),
    m_hideShowFlowTypeHasBeenSet(false),
    m_hideShowDeadlineHasBeenSet(false),
    m_canSkipAddApproverHasBeenSet(false),
    m_skipUploadFileHasBeenSet(false),
    m_forbidEditFillComponentHasBeenSet(false),
    m_customCreateFlowDescriptionHasBeenSet(false),
    m_forbidAddApproverHasBeenSet(false),
    m_forbidEditApproverHasBeenSet(false),
    m_forbidEditFlowPropertiesHasBeenSet(false),
    m_hideComponentTypesHasBeenSet(false),
    m_showComponentTypesHasBeenSet(false),
    m_resultPageConfigHasBeenSet(false),
    m_signComponentConfigHasBeenSet(false),
    m_forbidEditWatermarkHasBeenSet(false)
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

    if (value.HasMember("CanEditFormField") && !value["CanEditFormField"].IsNull())
    {
        if (!value["CanEditFormField"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CanEditFormField` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditFormField = value["CanEditFormField"].GetBool();
        m_canEditFormFieldHasBeenSet = true;
    }

    if (value.HasMember("HideShowFlowName") && !value["HideShowFlowName"].IsNull())
    {
        if (!value["HideShowFlowName"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowFlowName` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowFlowName = value["HideShowFlowName"].GetBool();
        m_hideShowFlowNameHasBeenSet = true;
    }

    if (value.HasMember("HideShowFlowType") && !value["HideShowFlowType"].IsNull())
    {
        if (!value["HideShowFlowType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowFlowType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowFlowType = value["HideShowFlowType"].GetBool();
        m_hideShowFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("HideShowDeadline") && !value["HideShowDeadline"].IsNull())
    {
        if (!value["HideShowDeadline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowDeadline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowDeadline = value["HideShowDeadline"].GetBool();
        m_hideShowDeadlineHasBeenSet = true;
    }

    if (value.HasMember("CanSkipAddApprover") && !value["CanSkipAddApprover"].IsNull())
    {
        if (!value["CanSkipAddApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CanSkipAddApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSkipAddApprover = value["CanSkipAddApprover"].GetBool();
        m_canSkipAddApproverHasBeenSet = true;
    }

    if (value.HasMember("SkipUploadFile") && !value["SkipUploadFile"].IsNull())
    {
        if (!value["SkipUploadFile"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.SkipUploadFile` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_skipUploadFile = value["SkipUploadFile"].GetBool();
        m_skipUploadFileHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditFillComponent") && !value["ForbidEditFillComponent"].IsNull())
    {
        if (!value["ForbidEditFillComponent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ForbidEditFillComponent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditFillComponent = value["ForbidEditFillComponent"].GetBool();
        m_forbidEditFillComponentHasBeenSet = true;
    }

    if (value.HasMember("CustomCreateFlowDescription") && !value["CustomCreateFlowDescription"].IsNull())
    {
        if (!value["CustomCreateFlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CustomCreateFlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCreateFlowDescription = string(value["CustomCreateFlowDescription"].GetString());
        m_customCreateFlowDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ForbidAddApprover") && !value["ForbidAddApprover"].IsNull())
    {
        if (!value["ForbidAddApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ForbidAddApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidAddApprover = value["ForbidAddApprover"].GetBool();
        m_forbidAddApproverHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditApprover") && !value["ForbidEditApprover"].IsNull())
    {
        if (!value["ForbidEditApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ForbidEditApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditApprover = value["ForbidEditApprover"].GetBool();
        m_forbidEditApproverHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditFlowProperties") && !value["ForbidEditFlowProperties"].IsNull())
    {
        if (!value["ForbidEditFlowProperties"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ForbidEditFlowProperties` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditFlowProperties = value["ForbidEditFlowProperties"].GetBool();
        m_forbidEditFlowPropertiesHasBeenSet = true;
    }

    if (value.HasMember("HideComponentTypes") && !value["HideComponentTypes"].IsNull())
    {
        if (!value["HideComponentTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideComponentTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["HideComponentTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hideComponentTypes.push_back((*itr).GetString());
        }
        m_hideComponentTypesHasBeenSet = true;
    }

    if (value.HasMember("ShowComponentTypes") && !value["ShowComponentTypes"].IsNull())
    {
        if (!value["ShowComponentTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ShowComponentTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ShowComponentTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_showComponentTypes.push_back((*itr).GetString());
        }
        m_showComponentTypesHasBeenSet = true;
    }

    if (value.HasMember("ResultPageConfig") && !value["ResultPageConfig"].IsNull())
    {
        if (!value["ResultPageConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ResultPageConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultPageConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CreateResultPageConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultPageConfig.push_back(item);
        }
        m_resultPageConfigHasBeenSet = true;
    }

    if (value.HasMember("SignComponentConfig") && !value["SignComponentConfig"].IsNull())
    {
        if (!value["SignComponentConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.SignComponentConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_signComponentConfig.Deserialize(value["SignComponentConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_signComponentConfigHasBeenSet = true;
    }

    if (value.HasMember("ForbidEditWatermark") && !value["ForbidEditWatermark"].IsNull())
    {
        if (!value["ForbidEditWatermark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.ForbidEditWatermark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_forbidEditWatermark = value["ForbidEditWatermark"].GetBool();
        m_forbidEditWatermarkHasBeenSet = true;
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

    if (m_canEditFormFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditFormField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditFormField, allocator);
    }

    if (m_hideShowFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowFlowName, allocator);
    }

    if (m_hideShowFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowFlowType, allocator);
    }

    if (m_hideShowDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowDeadline, allocator);
    }

    if (m_canSkipAddApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSkipAddApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSkipAddApprover, allocator);
    }

    if (m_skipUploadFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipUploadFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_skipUploadFile, allocator);
    }

    if (m_forbidEditFillComponentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditFillComponent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditFillComponent, allocator);
    }

    if (m_customCreateFlowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCreateFlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCreateFlowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_forbidAddApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidAddApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidAddApprover, allocator);
    }

    if (m_forbidEditApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditApprover, allocator);
    }

    if (m_forbidEditFlowPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditFlowProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditFlowProperties, allocator);
    }

    if (m_hideComponentTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideComponentTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hideComponentTypes.begin(); itr != m_hideComponentTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_showComponentTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowComponentTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_showComponentTypes.begin(); itr != m_showComponentTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultPageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultPageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultPageConfig.begin(); itr != m_resultPageConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_signComponentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignComponentConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_signComponentConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forbidEditWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForbidEditWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forbidEditWatermark, allocator);
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

bool CreateFlowOption::GetCanEditFormField() const
{
    return m_canEditFormField;
}

void CreateFlowOption::SetCanEditFormField(const bool& _canEditFormField)
{
    m_canEditFormField = _canEditFormField;
    m_canEditFormFieldHasBeenSet = true;
}

bool CreateFlowOption::CanEditFormFieldHasBeenSet() const
{
    return m_canEditFormFieldHasBeenSet;
}

bool CreateFlowOption::GetHideShowFlowName() const
{
    return m_hideShowFlowName;
}

void CreateFlowOption::SetHideShowFlowName(const bool& _hideShowFlowName)
{
    m_hideShowFlowName = _hideShowFlowName;
    m_hideShowFlowNameHasBeenSet = true;
}

bool CreateFlowOption::HideShowFlowNameHasBeenSet() const
{
    return m_hideShowFlowNameHasBeenSet;
}

bool CreateFlowOption::GetHideShowFlowType() const
{
    return m_hideShowFlowType;
}

void CreateFlowOption::SetHideShowFlowType(const bool& _hideShowFlowType)
{
    m_hideShowFlowType = _hideShowFlowType;
    m_hideShowFlowTypeHasBeenSet = true;
}

bool CreateFlowOption::HideShowFlowTypeHasBeenSet() const
{
    return m_hideShowFlowTypeHasBeenSet;
}

bool CreateFlowOption::GetHideShowDeadline() const
{
    return m_hideShowDeadline;
}

void CreateFlowOption::SetHideShowDeadline(const bool& _hideShowDeadline)
{
    m_hideShowDeadline = _hideShowDeadline;
    m_hideShowDeadlineHasBeenSet = true;
}

bool CreateFlowOption::HideShowDeadlineHasBeenSet() const
{
    return m_hideShowDeadlineHasBeenSet;
}

bool CreateFlowOption::GetCanSkipAddApprover() const
{
    return m_canSkipAddApprover;
}

void CreateFlowOption::SetCanSkipAddApprover(const bool& _canSkipAddApprover)
{
    m_canSkipAddApprover = _canSkipAddApprover;
    m_canSkipAddApproverHasBeenSet = true;
}

bool CreateFlowOption::CanSkipAddApproverHasBeenSet() const
{
    return m_canSkipAddApproverHasBeenSet;
}

bool CreateFlowOption::GetSkipUploadFile() const
{
    return m_skipUploadFile;
}

void CreateFlowOption::SetSkipUploadFile(const bool& _skipUploadFile)
{
    m_skipUploadFile = _skipUploadFile;
    m_skipUploadFileHasBeenSet = true;
}

bool CreateFlowOption::SkipUploadFileHasBeenSet() const
{
    return m_skipUploadFileHasBeenSet;
}

bool CreateFlowOption::GetForbidEditFillComponent() const
{
    return m_forbidEditFillComponent;
}

void CreateFlowOption::SetForbidEditFillComponent(const bool& _forbidEditFillComponent)
{
    m_forbidEditFillComponent = _forbidEditFillComponent;
    m_forbidEditFillComponentHasBeenSet = true;
}

bool CreateFlowOption::ForbidEditFillComponentHasBeenSet() const
{
    return m_forbidEditFillComponentHasBeenSet;
}

string CreateFlowOption::GetCustomCreateFlowDescription() const
{
    return m_customCreateFlowDescription;
}

void CreateFlowOption::SetCustomCreateFlowDescription(const string& _customCreateFlowDescription)
{
    m_customCreateFlowDescription = _customCreateFlowDescription;
    m_customCreateFlowDescriptionHasBeenSet = true;
}

bool CreateFlowOption::CustomCreateFlowDescriptionHasBeenSet() const
{
    return m_customCreateFlowDescriptionHasBeenSet;
}

bool CreateFlowOption::GetForbidAddApprover() const
{
    return m_forbidAddApprover;
}

void CreateFlowOption::SetForbidAddApprover(const bool& _forbidAddApprover)
{
    m_forbidAddApprover = _forbidAddApprover;
    m_forbidAddApproverHasBeenSet = true;
}

bool CreateFlowOption::ForbidAddApproverHasBeenSet() const
{
    return m_forbidAddApproverHasBeenSet;
}

bool CreateFlowOption::GetForbidEditApprover() const
{
    return m_forbidEditApprover;
}

void CreateFlowOption::SetForbidEditApprover(const bool& _forbidEditApprover)
{
    m_forbidEditApprover = _forbidEditApprover;
    m_forbidEditApproverHasBeenSet = true;
}

bool CreateFlowOption::ForbidEditApproverHasBeenSet() const
{
    return m_forbidEditApproverHasBeenSet;
}

bool CreateFlowOption::GetForbidEditFlowProperties() const
{
    return m_forbidEditFlowProperties;
}

void CreateFlowOption::SetForbidEditFlowProperties(const bool& _forbidEditFlowProperties)
{
    m_forbidEditFlowProperties = _forbidEditFlowProperties;
    m_forbidEditFlowPropertiesHasBeenSet = true;
}

bool CreateFlowOption::ForbidEditFlowPropertiesHasBeenSet() const
{
    return m_forbidEditFlowPropertiesHasBeenSet;
}

vector<string> CreateFlowOption::GetHideComponentTypes() const
{
    return m_hideComponentTypes;
}

void CreateFlowOption::SetHideComponentTypes(const vector<string>& _hideComponentTypes)
{
    m_hideComponentTypes = _hideComponentTypes;
    m_hideComponentTypesHasBeenSet = true;
}

bool CreateFlowOption::HideComponentTypesHasBeenSet() const
{
    return m_hideComponentTypesHasBeenSet;
}

vector<string> CreateFlowOption::GetShowComponentTypes() const
{
    return m_showComponentTypes;
}

void CreateFlowOption::SetShowComponentTypes(const vector<string>& _showComponentTypes)
{
    m_showComponentTypes = _showComponentTypes;
    m_showComponentTypesHasBeenSet = true;
}

bool CreateFlowOption::ShowComponentTypesHasBeenSet() const
{
    return m_showComponentTypesHasBeenSet;
}

vector<CreateResultPageConfig> CreateFlowOption::GetResultPageConfig() const
{
    return m_resultPageConfig;
}

void CreateFlowOption::SetResultPageConfig(const vector<CreateResultPageConfig>& _resultPageConfig)
{
    m_resultPageConfig = _resultPageConfig;
    m_resultPageConfigHasBeenSet = true;
}

bool CreateFlowOption::ResultPageConfigHasBeenSet() const
{
    return m_resultPageConfigHasBeenSet;
}

SignComponentConfig CreateFlowOption::GetSignComponentConfig() const
{
    return m_signComponentConfig;
}

void CreateFlowOption::SetSignComponentConfig(const SignComponentConfig& _signComponentConfig)
{
    m_signComponentConfig = _signComponentConfig;
    m_signComponentConfigHasBeenSet = true;
}

bool CreateFlowOption::SignComponentConfigHasBeenSet() const
{
    return m_signComponentConfigHasBeenSet;
}

bool CreateFlowOption::GetForbidEditWatermark() const
{
    return m_forbidEditWatermark;
}

void CreateFlowOption::SetForbidEditWatermark(const bool& _forbidEditWatermark)
{
    m_forbidEditWatermark = _forbidEditWatermark;
    m_forbidEditWatermarkHasBeenSet = true;
}

bool CreateFlowOption::ForbidEditWatermarkHasBeenSet() const
{
    return m_forbidEditWatermarkHasBeenSet;
}

