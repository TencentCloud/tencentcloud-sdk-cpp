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

#include <tencentcloud/bi/v20220105/model/BaseStateAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

BaseStateAction::BaseStateAction() :
    m_showEditHasBeenSet(false),
    m_isEditHasBeenSet(false),
    m_editTextHasBeenSet(false),
    m_editTipsHasBeenSet(false),
    m_showDelHasBeenSet(false),
    m_isDelHasBeenSet(false),
    m_delTextHasBeenSet(false),
    m_delTipsHasBeenSet(false),
    m_showCopyHasBeenSet(false),
    m_showViewHasBeenSet(false),
    m_showRenameHasBeenSet(false)
{
}

CoreInternalOutcome BaseStateAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShowEdit") && !value["ShowEdit"].IsNull())
    {
        if (!value["ShowEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.ShowEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showEdit = value["ShowEdit"].GetBool();
        m_showEditHasBeenSet = true;
    }

    if (value.HasMember("IsEdit") && !value["IsEdit"].IsNull())
    {
        if (!value["IsEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.IsEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEdit = value["IsEdit"].GetBool();
        m_isEditHasBeenSet = true;
    }

    if (value.HasMember("EditText") && !value["EditText"].IsNull())
    {
        if (!value["EditText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.EditText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editText = string(value["EditText"].GetString());
        m_editTextHasBeenSet = true;
    }

    if (value.HasMember("EditTips") && !value["EditTips"].IsNull())
    {
        if (!value["EditTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.EditTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editTips = string(value["EditTips"].GetString());
        m_editTipsHasBeenSet = true;
    }

    if (value.HasMember("ShowDel") && !value["ShowDel"].IsNull())
    {
        if (!value["ShowDel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.ShowDel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showDel = value["ShowDel"].GetBool();
        m_showDelHasBeenSet = true;
    }

    if (value.HasMember("IsDel") && !value["IsDel"].IsNull())
    {
        if (!value["IsDel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.IsDel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDel = value["IsDel"].GetBool();
        m_isDelHasBeenSet = true;
    }

    if (value.HasMember("DelText") && !value["DelText"].IsNull())
    {
        if (!value["DelText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.DelText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delText = string(value["DelText"].GetString());
        m_delTextHasBeenSet = true;
    }

    if (value.HasMember("DelTips") && !value["DelTips"].IsNull())
    {
        if (!value["DelTips"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.DelTips` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_delTips = string(value["DelTips"].GetString());
        m_delTipsHasBeenSet = true;
    }

    if (value.HasMember("ShowCopy") && !value["ShowCopy"].IsNull())
    {
        if (!value["ShowCopy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.ShowCopy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showCopy = value["ShowCopy"].GetBool();
        m_showCopyHasBeenSet = true;
    }

    if (value.HasMember("ShowView") && !value["ShowView"].IsNull())
    {
        if (!value["ShowView"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.ShowView` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showView = value["ShowView"].GetBool();
        m_showViewHasBeenSet = true;
    }

    if (value.HasMember("ShowRename") && !value["ShowRename"].IsNull())
    {
        if (!value["ShowRename"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaseStateAction.ShowRename` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showRename = value["ShowRename"].GetBool();
        m_showRenameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseStateAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_showEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showEdit, allocator);
    }

    if (m_isEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEdit, allocator);
    }

    if (m_editTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editText.c_str(), allocator).Move(), allocator);
    }

    if (m_editTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editTips.c_str(), allocator).Move(), allocator);
    }

    if (m_showDelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowDel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showDel, allocator);
    }

    if (m_isDelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDel, allocator);
    }

    if (m_delTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delText.c_str(), allocator).Move(), allocator);
    }

    if (m_delTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_delTips.c_str(), allocator).Move(), allocator);
    }

    if (m_showCopyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowCopy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showCopy, allocator);
    }

    if (m_showViewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowView";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showView, allocator);
    }

    if (m_showRenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowRename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showRename, allocator);
    }

}


bool BaseStateAction::GetShowEdit() const
{
    return m_showEdit;
}

void BaseStateAction::SetShowEdit(const bool& _showEdit)
{
    m_showEdit = _showEdit;
    m_showEditHasBeenSet = true;
}

bool BaseStateAction::ShowEditHasBeenSet() const
{
    return m_showEditHasBeenSet;
}

bool BaseStateAction::GetIsEdit() const
{
    return m_isEdit;
}

void BaseStateAction::SetIsEdit(const bool& _isEdit)
{
    m_isEdit = _isEdit;
    m_isEditHasBeenSet = true;
}

bool BaseStateAction::IsEditHasBeenSet() const
{
    return m_isEditHasBeenSet;
}

string BaseStateAction::GetEditText() const
{
    return m_editText;
}

void BaseStateAction::SetEditText(const string& _editText)
{
    m_editText = _editText;
    m_editTextHasBeenSet = true;
}

bool BaseStateAction::EditTextHasBeenSet() const
{
    return m_editTextHasBeenSet;
}

string BaseStateAction::GetEditTips() const
{
    return m_editTips;
}

void BaseStateAction::SetEditTips(const string& _editTips)
{
    m_editTips = _editTips;
    m_editTipsHasBeenSet = true;
}

bool BaseStateAction::EditTipsHasBeenSet() const
{
    return m_editTipsHasBeenSet;
}

bool BaseStateAction::GetShowDel() const
{
    return m_showDel;
}

void BaseStateAction::SetShowDel(const bool& _showDel)
{
    m_showDel = _showDel;
    m_showDelHasBeenSet = true;
}

bool BaseStateAction::ShowDelHasBeenSet() const
{
    return m_showDelHasBeenSet;
}

bool BaseStateAction::GetIsDel() const
{
    return m_isDel;
}

void BaseStateAction::SetIsDel(const bool& _isDel)
{
    m_isDel = _isDel;
    m_isDelHasBeenSet = true;
}

bool BaseStateAction::IsDelHasBeenSet() const
{
    return m_isDelHasBeenSet;
}

string BaseStateAction::GetDelText() const
{
    return m_delText;
}

void BaseStateAction::SetDelText(const string& _delText)
{
    m_delText = _delText;
    m_delTextHasBeenSet = true;
}

bool BaseStateAction::DelTextHasBeenSet() const
{
    return m_delTextHasBeenSet;
}

string BaseStateAction::GetDelTips() const
{
    return m_delTips;
}

void BaseStateAction::SetDelTips(const string& _delTips)
{
    m_delTips = _delTips;
    m_delTipsHasBeenSet = true;
}

bool BaseStateAction::DelTipsHasBeenSet() const
{
    return m_delTipsHasBeenSet;
}

bool BaseStateAction::GetShowCopy() const
{
    return m_showCopy;
}

void BaseStateAction::SetShowCopy(const bool& _showCopy)
{
    m_showCopy = _showCopy;
    m_showCopyHasBeenSet = true;
}

bool BaseStateAction::ShowCopyHasBeenSet() const
{
    return m_showCopyHasBeenSet;
}

bool BaseStateAction::GetShowView() const
{
    return m_showView;
}

void BaseStateAction::SetShowView(const bool& _showView)
{
    m_showView = _showView;
    m_showViewHasBeenSet = true;
}

bool BaseStateAction::ShowViewHasBeenSet() const
{
    return m_showViewHasBeenSet;
}

bool BaseStateAction::GetShowRename() const
{
    return m_showRename;
}

void BaseStateAction::SetShowRename(const bool& _showRename)
{
    m_showRename = _showRename;
    m_showRenameHasBeenSet = true;
}

bool BaseStateAction::ShowRenameHasBeenSet() const
{
    return m_showRenameHasBeenSet;
}

