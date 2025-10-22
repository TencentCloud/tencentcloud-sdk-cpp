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

#include <tencentcloud/wedata/v20250806/model/DataSourceResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DataSourceResult::DataSourceResult() :
    m_statusHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceResult.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceResult.DataSourceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = value["DataSourceId"].GetInt64();
        m_dataSourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSourceId, allocator);
    }

}


bool DataSourceResult::GetStatus() const
{
    return m_status;
}

void DataSourceResult::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataSourceResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DataSourceResult::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DataSourceResult::SetDataSourceId(const int64_t& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DataSourceResult::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

