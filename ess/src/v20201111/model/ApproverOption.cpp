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

#include <tencentcloud/ess/v20201111/model/ApproverOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ApproverOption::ApproverOption() :
    m_noRefuseHasBeenSet(false),
    m_noTransferHasBeenSet(false),
    m_fillTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApproverOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoRefuse") && !value["NoRefuse"].IsNull())
    {
        if (!value["NoRefuse"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverOption.NoRefuse` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noRefuse = value["NoRefuse"].GetBool();
        m_noRefuseHasBeenSet = true;
    }

    if (value.HasMember("NoTransfer") && !value["NoTransfer"].IsNull())
    {
        if (!value["NoTransfer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApproverOption.NoTransfer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noTransfer = value["NoTransfer"].GetBool();
        m_noTransferHasBeenSet = true;
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

    if (m_noRefuseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoRefuse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noRefuse, allocator);
    }

    if (m_noTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoTransfer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noTransfer, allocator);
    }

    if (m_fillTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fillType, allocator);
    }

}


bool ApproverOption::GetNoRefuse() const
{
    return m_noRefuse;
}

void ApproverOption::SetNoRefuse(const bool& _noRefuse)
{
    m_noRefuse = _noRefuse;
    m_noRefuseHasBeenSet = true;
}

bool ApproverOption::NoRefuseHasBeenSet() const
{
    return m_noRefuseHasBeenSet;
}

bool ApproverOption::GetNoTransfer() const
{
    return m_noTransfer;
}

void ApproverOption::SetNoTransfer(const bool& _noTransfer)
{
    m_noTransfer = _noTransfer;
    m_noTransferHasBeenSet = true;
}

bool ApproverOption::NoTransferHasBeenSet() const
{
    return m_noTransferHasBeenSet;
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

