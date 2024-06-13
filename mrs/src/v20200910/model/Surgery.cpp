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

#include <tencentcloud/mrs/v20200910/model/Surgery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Surgery::Surgery() :
    m_surgeryHistoryHasBeenSet(false),
    m_otherInfoHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome Surgery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SurgeryHistory") && !value["SurgeryHistory"].IsNull())
    {
        if (!value["SurgeryHistory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Surgery.SurgeryHistory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgeryHistory.Deserialize(value["SurgeryHistory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryHistoryHasBeenSet = true;
    }

    if (value.HasMember("OtherInfo") && !value["OtherInfo"].IsNull())
    {
        if (!value["OtherInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Surgery.OtherInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherInfo.Deserialize(value["OtherInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherInfoHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Surgery.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Surgery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_surgeryHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SurgeryHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgeryHistory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


SurgeryHistory Surgery::GetSurgeryHistory() const
{
    return m_surgeryHistory;
}

void Surgery::SetSurgeryHistory(const SurgeryHistory& _surgeryHistory)
{
    m_surgeryHistory = _surgeryHistory;
    m_surgeryHistoryHasBeenSet = true;
}

bool Surgery::SurgeryHistoryHasBeenSet() const
{
    return m_surgeryHistoryHasBeenSet;
}

OtherInfo Surgery::GetOtherInfo() const
{
    return m_otherInfo;
}

void Surgery::SetOtherInfo(const OtherInfo& _otherInfo)
{
    m_otherInfo = _otherInfo;
    m_otherInfoHasBeenSet = true;
}

bool Surgery::OtherInfoHasBeenSet() const
{
    return m_otherInfoHasBeenSet;
}

int64_t Surgery::GetPage() const
{
    return m_page;
}

void Surgery::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool Surgery::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

