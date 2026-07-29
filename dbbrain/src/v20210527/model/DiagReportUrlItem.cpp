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

#include <tencentcloud/dbbrain/v20210527/model/DiagReportUrlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DiagReportUrlItem::DiagReportUrlItem() :
    m_asyncRequestIdHasBeenSet(false),
    m_reportUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome DiagReportUrlItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagReportUrlItem.AsyncRequestId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetInt64();
        m_asyncRequestIdHasBeenSet = true;
    }

    if (value.HasMember("ReportUrl") && !value["ReportUrl"].IsNull())
    {
        if (!value["ReportUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiagReportUrlItem.ReportUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportUrl = string(value["ReportUrl"].GetString());
        m_reportUrlHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiagReportUrlItem.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiagReportUrlItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
    }

    if (m_reportUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

}


int64_t DiagReportUrlItem::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void DiagReportUrlItem::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool DiagReportUrlItem::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

string DiagReportUrlItem::GetReportUrl() const
{
    return m_reportUrl;
}

void DiagReportUrlItem::SetReportUrl(const string& _reportUrl)
{
    m_reportUrl = _reportUrl;
    m_reportUrlHasBeenSet = true;
}

bool DiagReportUrlItem::ReportUrlHasBeenSet() const
{
    return m_reportUrlHasBeenSet;
}

int64_t DiagReportUrlItem::GetExpireTime() const
{
    return m_expireTime;
}

void DiagReportUrlItem::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DiagReportUrlItem::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

