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

#include <tencentcloud/waf/v20180125/model/SearchItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SearchItem::SearchItem() :
    m_clsStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_flowModeHasBeenSet(false)
{
}

CoreInternalOutcome SearchItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClsStatus") && !value["ClsStatus"].IsNull())
    {
        if (!value["ClsStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchItem.ClsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsStatus = string(value["ClsStatus"].GetString());
        m_clsStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FlowMode") && !value["FlowMode"].IsNull())
    {
        if (!value["FlowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchItem.FlowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMode = string(value["FlowMode"].GetString());
        m_flowModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_flowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMode.c_str(), allocator).Move(), allocator);
    }

}


string SearchItem::GetClsStatus() const
{
    return m_clsStatus;
}

void SearchItem::SetClsStatus(const string& _clsStatus)
{
    m_clsStatus = _clsStatus;
    m_clsStatusHasBeenSet = true;
}

bool SearchItem::ClsStatusHasBeenSet() const
{
    return m_clsStatusHasBeenSet;
}

string SearchItem::GetStatus() const
{
    return m_status;
}

void SearchItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SearchItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SearchItem::GetFlowMode() const
{
    return m_flowMode;
}

void SearchItem::SetFlowMode(const string& _flowMode)
{
    m_flowMode = _flowMode;
    m_flowModeHasBeenSet = true;
}

bool SearchItem::FlowModeHasBeenSet() const
{
    return m_flowModeHasBeenSet;
}

