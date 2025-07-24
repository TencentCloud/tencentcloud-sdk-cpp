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

#include <tencentcloud/ess/v20201111/model/MiniAppCreateFlowOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

MiniAppCreateFlowOption::MiniAppCreateFlowOption() :
    m_remindedOnHasBeenSet(false),
    m_needCreateReviewHasBeenSet(false),
    m_flowDisplayTypeHasBeenSet(false)
{
}

CoreInternalOutcome MiniAppCreateFlowOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RemindedOn") && !value["RemindedOn"].IsNull())
    {
        if (!value["RemindedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCreateFlowOption.RemindedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remindedOn = value["RemindedOn"].GetInt64();
        m_remindedOnHasBeenSet = true;
    }

    if (value.HasMember("NeedCreateReview") && !value["NeedCreateReview"].IsNull())
    {
        if (!value["NeedCreateReview"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCreateFlowOption.NeedCreateReview` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needCreateReview = value["NeedCreateReview"].GetBool();
        m_needCreateReviewHasBeenSet = true;
    }

    if (value.HasMember("FlowDisplayType") && !value["FlowDisplayType"].IsNull())
    {
        if (!value["FlowDisplayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniAppCreateFlowOption.FlowDisplayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowDisplayType = value["FlowDisplayType"].GetInt64();
        m_flowDisplayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MiniAppCreateFlowOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remindedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remindedOn, allocator);
    }

    if (m_needCreateReviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCreateReview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needCreateReview, allocator);
    }

    if (m_flowDisplayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDisplayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowDisplayType, allocator);
    }

}


int64_t MiniAppCreateFlowOption::GetRemindedOn() const
{
    return m_remindedOn;
}

void MiniAppCreateFlowOption::SetRemindedOn(const int64_t& _remindedOn)
{
    m_remindedOn = _remindedOn;
    m_remindedOnHasBeenSet = true;
}

bool MiniAppCreateFlowOption::RemindedOnHasBeenSet() const
{
    return m_remindedOnHasBeenSet;
}

bool MiniAppCreateFlowOption::GetNeedCreateReview() const
{
    return m_needCreateReview;
}

void MiniAppCreateFlowOption::SetNeedCreateReview(const bool& _needCreateReview)
{
    m_needCreateReview = _needCreateReview;
    m_needCreateReviewHasBeenSet = true;
}

bool MiniAppCreateFlowOption::NeedCreateReviewHasBeenSet() const
{
    return m_needCreateReviewHasBeenSet;
}

int64_t MiniAppCreateFlowOption::GetFlowDisplayType() const
{
    return m_flowDisplayType;
}

void MiniAppCreateFlowOption::SetFlowDisplayType(const int64_t& _flowDisplayType)
{
    m_flowDisplayType = _flowDisplayType;
    m_flowDisplayTypeHasBeenSet = true;
}

bool MiniAppCreateFlowOption::FlowDisplayTypeHasBeenSet() const
{
    return m_flowDisplayTypeHasBeenSet;
}

