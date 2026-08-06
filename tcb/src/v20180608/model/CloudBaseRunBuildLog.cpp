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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunBuildLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunBuildLog::CloudBaseRunBuildLog() :
    m_totalHasBeenSet(false),
    m_deliveredHasBeenSet(false),
    m_textHasBeenSet(false),
    m_moreHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunBuildLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunBuildLog.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Delivered") && !value["Delivered"].IsNull())
    {
        if (!value["Delivered"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunBuildLog.Delivered` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delivered = value["Delivered"].GetInt64();
        m_deliveredHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunBuildLog.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("More") && !value["More"].IsNull())
    {
        if (!value["More"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunBuildLog.More` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_more = value["More"].GetBool();
        m_moreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunBuildLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_deliveredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delivered";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delivered, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_moreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "More";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_more, allocator);
    }

}


int64_t CloudBaseRunBuildLog::GetTotal() const
{
    return m_total;
}

void CloudBaseRunBuildLog::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool CloudBaseRunBuildLog::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t CloudBaseRunBuildLog::GetDelivered() const
{
    return m_delivered;
}

void CloudBaseRunBuildLog::SetDelivered(const int64_t& _delivered)
{
    m_delivered = _delivered;
    m_deliveredHasBeenSet = true;
}

bool CloudBaseRunBuildLog::DeliveredHasBeenSet() const
{
    return m_deliveredHasBeenSet;
}

string CloudBaseRunBuildLog::GetText() const
{
    return m_text;
}

void CloudBaseRunBuildLog::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CloudBaseRunBuildLog::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

bool CloudBaseRunBuildLog::GetMore() const
{
    return m_more;
}

void CloudBaseRunBuildLog::SetMore(const bool& _more)
{
    m_more = _more;
    m_moreHasBeenSet = true;
}

bool CloudBaseRunBuildLog::MoreHasBeenSet() const
{
    return m_moreHasBeenSet;
}

