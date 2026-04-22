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

#include <tencentcloud/ess/v20201111/model/FlowRemarkItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FlowRemarkItem::FlowRemarkItem() :
    m_remarkIdHasBeenSet(false),
    m_remarkValueHasBeenSet(false)
{
}

CoreInternalOutcome FlowRemarkItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RemarkId") && !value["RemarkId"].IsNull())
    {
        if (!value["RemarkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRemarkItem.RemarkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remarkId = value["RemarkId"].GetInt64();
        m_remarkIdHasBeenSet = true;
    }

    if (value.HasMember("RemarkValue") && !value["RemarkValue"].IsNull())
    {
        if (!value["RemarkValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowRemarkItem.RemarkValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarkValue = string(value["RemarkValue"].GetString());
        m_remarkValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowRemarkItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_remarkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remarkId, allocator);
    }

    if (m_remarkValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarkValue.c_str(), allocator).Move(), allocator);
    }

}


int64_t FlowRemarkItem::GetRemarkId() const
{
    return m_remarkId;
}

void FlowRemarkItem::SetRemarkId(const int64_t& _remarkId)
{
    m_remarkId = _remarkId;
    m_remarkIdHasBeenSet = true;
}

bool FlowRemarkItem::RemarkIdHasBeenSet() const
{
    return m_remarkIdHasBeenSet;
}

string FlowRemarkItem::GetRemarkValue() const
{
    return m_remarkValue;
}

void FlowRemarkItem::SetRemarkValue(const string& _remarkValue)
{
    m_remarkValue = _remarkValue;
    m_remarkValueHasBeenSet = true;
}

bool FlowRemarkItem::RemarkValueHasBeenSet() const
{
    return m_remarkValueHasBeenSet;
}

