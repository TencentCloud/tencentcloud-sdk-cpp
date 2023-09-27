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

#include <tencentcloud/essbasic/v20210526/model/ApproverOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ApproverOption::ApproverOption() :
    m_hideOneKeySignHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApproverOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HideOneKeySign") && !value["HideOneKeySign"].IsNull())
    {
        if (!value["HideOneKeySign"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverOption.HideOneKeySign` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideOneKeySign = value["HideOneKeySign"].GetBool();
        m_hideOneKeySignHasBeenSet = true;
    }

    if (value.HasMember("FillType") && !value["FillType"].IsNull())
    {
        if (!value["FillType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverOption.FillType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fillType = value["FillType"].GetInt64();
        m_fillTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproverOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hideOneKeySignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideOneKeySign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideOneKeySign, allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fillType, allocator);
    }

}


bool ApproverOption::GetHideOneKeySign() const
{
    return m_hideOneKeySign;
}

void ApproverOption::SetHideOneKeySign(const bool& _hideOneKeySign)
{
    m_hideOneKeySign = _hideOneKeySign;
    m_hideOneKeySignHasBeenSet = true;
}

bool ApproverOption::HideOneKeySignHasBeenSet() const
{
    return m_hideOneKeySignHasBeenSet;
}

int64_t ApproverOption::GetFillType() const
{
    return m_fillType;
}

void ApproverOption::SetFillType(const int64_t& _fillType)
{
    m_fillType = _fillType;
    m_fillTypeHasBeenSet = true;
}

bool ApproverOption::FillTypeHasBeenSet() const
{
    return m_fillTypeHasBeenSet;
}

