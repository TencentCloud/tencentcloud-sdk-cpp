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

#include <tencentcloud/cme/v20191029/model/MaterialStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialStatus::MaterialStatus() :
    m_editorUsableStatusHasBeenSet(false)
{
}

CoreInternalOutcome MaterialStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EditorUsableStatus") && !value["EditorUsableStatus"].IsNull())
    {
        if (!value["EditorUsableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialStatus.EditorUsableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_editorUsableStatus = string(value["EditorUsableStatus"].GetString());
        m_editorUsableStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_editorUsableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditorUsableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_editorUsableStatus.c_str(), allocator).Move(), allocator);
    }

}


string MaterialStatus::GetEditorUsableStatus() const
{
    return m_editorUsableStatus;
}

void MaterialStatus::SetEditorUsableStatus(const string& _editorUsableStatus)
{
    m_editorUsableStatus = _editorUsableStatus;
    m_editorUsableStatusHasBeenSet = true;
}

bool MaterialStatus::EditorUsableStatusHasBeenSet() const
{
    return m_editorUsableStatusHasBeenSet;
}

