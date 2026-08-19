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

#include <tencentcloud/csip/v20221121/model/CWPOrderExtraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CWPOrderExtraParam::CWPOrderExtraParam() :
    m_modeHasBeenSet(false),
    m_disposableStatusHasBeenSet(false)
{
}

CoreInternalOutcome CWPOrderExtraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderExtraParam.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("DisposableStatus") && !value["DisposableStatus"].IsNull())
    {
        if (!value["DisposableStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CWPOrderExtraParam.DisposableStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disposableStatus = value["DisposableStatus"].GetBool();
        m_disposableStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CWPOrderExtraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_disposableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disposableStatus, allocator);
    }

}


string CWPOrderExtraParam::GetMode() const
{
    return m_mode;
}

void CWPOrderExtraParam::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool CWPOrderExtraParam::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

bool CWPOrderExtraParam::GetDisposableStatus() const
{
    return m_disposableStatus;
}

void CWPOrderExtraParam::SetDisposableStatus(const bool& _disposableStatus)
{
    m_disposableStatus = _disposableStatus;
    m_disposableStatusHasBeenSet = true;
}

bool CWPOrderExtraParam::DisposableStatusHasBeenSet() const
{
    return m_disposableStatusHasBeenSet;
}

