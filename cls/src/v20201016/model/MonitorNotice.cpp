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

#include <tencentcloud/cls/v20201016/model/MonitorNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MonitorNotice::MonitorNotice() :
    m_noticesHasBeenSet(false)
{
}

CoreInternalOutcome MonitorNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Notices") && !value["Notices"].IsNull())
    {
        if (!value["Notices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorNotice.Notices` is not array type"));

        const rapidjson::Value &tmpValue = value["Notices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorNoticeRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notices.push_back(item);
        }
        m_noticesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notices.begin(); itr != m_notices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MonitorNoticeRule> MonitorNotice::GetNotices() const
{
    return m_notices;
}

void MonitorNotice::SetNotices(const vector<MonitorNoticeRule>& _notices)
{
    m_notices = _notices;
    m_noticesHasBeenSet = true;
}

bool MonitorNotice::NoticesHasBeenSet() const
{
    return m_noticesHasBeenSet;
}

