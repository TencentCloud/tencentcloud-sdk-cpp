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

#include <tencentcloud/cls/v20201016/model/DlcFailHandle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcFailHandle::DlcFailHandle() :
    m_storeToDlcHasBeenSet(false),
    m_dlcFailTableInfoHasBeenSet(false)
{
}

CoreInternalOutcome DlcFailHandle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StoreToDlc") && !value["StoreToDlc"].IsNull())
    {
        if (!value["StoreToDlc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFailHandle.StoreToDlc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_storeToDlc = value["StoreToDlc"].GetBool();
        m_storeToDlcHasBeenSet = true;
    }

    if (value.HasMember("DlcFailTableInfo") && !value["DlcFailTableInfo"].IsNull())
    {
        if (!value["DlcFailTableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DlcFailHandle.DlcFailTableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dlcFailTableInfo.Deserialize(value["DlcFailTableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dlcFailTableInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcFailHandle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storeToDlcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreToDlc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeToDlc, allocator);
    }

    if (m_dlcFailTableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcFailTableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dlcFailTableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool DlcFailHandle::GetStoreToDlc() const
{
    return m_storeToDlc;
}

void DlcFailHandle::SetStoreToDlc(const bool& _storeToDlc)
{
    m_storeToDlc = _storeToDlc;
    m_storeToDlcHasBeenSet = true;
}

bool DlcFailHandle::StoreToDlcHasBeenSet() const
{
    return m_storeToDlcHasBeenSet;
}

DlcFailTableInfo DlcFailHandle::GetDlcFailTableInfo() const
{
    return m_dlcFailTableInfo;
}

void DlcFailHandle::SetDlcFailTableInfo(const DlcFailTableInfo& _dlcFailTableInfo)
{
    m_dlcFailTableInfo = _dlcFailTableInfo;
    m_dlcFailTableInfoHasBeenSet = true;
}

bool DlcFailHandle::DlcFailTableInfoHasBeenSet() const
{
    return m_dlcFailTableInfoHasBeenSet;
}

