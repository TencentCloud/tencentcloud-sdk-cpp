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

#include <tencentcloud/ess/v20201111/model/WebUrlOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

WebUrlOption::WebUrlOption() :
    m_disableLinkPreviewHasBeenSet(false),
    m_disableTaskEditingHasBeenSet(false),
    m_disableTaskResultEditingHasBeenSet(false)
{
}

CoreInternalOutcome WebUrlOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisableLinkPreview") && !value["DisableLinkPreview"].IsNull())
    {
        if (!value["DisableLinkPreview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebUrlOption.DisableLinkPreview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableLinkPreview = value["DisableLinkPreview"].GetBool();
        m_disableLinkPreviewHasBeenSet = true;
    }

    if (value.HasMember("DisableTaskEditing") && !value["DisableTaskEditing"].IsNull())
    {
        if (!value["DisableTaskEditing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebUrlOption.DisableTaskEditing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableTaskEditing = value["DisableTaskEditing"].GetBool();
        m_disableTaskEditingHasBeenSet = true;
    }

    if (value.HasMember("DisableTaskResultEditing") && !value["DisableTaskResultEditing"].IsNull())
    {
        if (!value["DisableTaskResultEditing"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WebUrlOption.DisableTaskResultEditing` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableTaskResultEditing = value["DisableTaskResultEditing"].GetBool();
        m_disableTaskResultEditingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebUrlOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disableLinkPreviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableLinkPreview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableLinkPreview, allocator);
    }

    if (m_disableTaskEditingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableTaskEditing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableTaskEditing, allocator);
    }

    if (m_disableTaskResultEditingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableTaskResultEditing";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableTaskResultEditing, allocator);
    }

}


bool WebUrlOption::GetDisableLinkPreview() const
{
    return m_disableLinkPreview;
}

void WebUrlOption::SetDisableLinkPreview(const bool& _disableLinkPreview)
{
    m_disableLinkPreview = _disableLinkPreview;
    m_disableLinkPreviewHasBeenSet = true;
}

bool WebUrlOption::DisableLinkPreviewHasBeenSet() const
{
    return m_disableLinkPreviewHasBeenSet;
}

bool WebUrlOption::GetDisableTaskEditing() const
{
    return m_disableTaskEditing;
}

void WebUrlOption::SetDisableTaskEditing(const bool& _disableTaskEditing)
{
    m_disableTaskEditing = _disableTaskEditing;
    m_disableTaskEditingHasBeenSet = true;
}

bool WebUrlOption::DisableTaskEditingHasBeenSet() const
{
    return m_disableTaskEditingHasBeenSet;
}

bool WebUrlOption::GetDisableTaskResultEditing() const
{
    return m_disableTaskResultEditing;
}

void WebUrlOption::SetDisableTaskResultEditing(const bool& _disableTaskResultEditing)
{
    m_disableTaskResultEditing = _disableTaskResultEditing;
    m_disableTaskResultEditingHasBeenSet = true;
}

bool WebUrlOption::DisableTaskResultEditingHasBeenSet() const
{
    return m_disableTaskResultEditingHasBeenSet;
}

