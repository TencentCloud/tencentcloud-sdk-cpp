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

#include <tencentcloud/dsgc/v20190723/model/TopAssetStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

TopAssetStat::TopAssetStat() :
    m_dataSourceIdHasBeenSet(false),
    m_subDataHasBeenSet(false),
    m_sensitiveCntHasBeenSet(false)
{
}

CoreInternalOutcome TopAssetStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopAssetStat.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("SubData") && !value["SubData"].IsNull())
    {
        if (!value["SubData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopAssetStat.SubData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subData = string(value["SubData"].GetString());
        m_subDataHasBeenSet = true;
    }

    if (value.HasMember("SensitiveCnt") && !value["SensitiveCnt"].IsNull())
    {
        if (!value["SensitiveCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopAssetStat.SensitiveCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCnt = value["SensitiveCnt"].GetInt64();
        m_sensitiveCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopAssetStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subData.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCnt, allocator);
    }

}


string TopAssetStat::GetDataSourceId() const
{
    return m_dataSourceId;
}

void TopAssetStat::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool TopAssetStat::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string TopAssetStat::GetSubData() const
{
    return m_subData;
}

void TopAssetStat::SetSubData(const string& _subData)
{
    m_subData = _subData;
    m_subDataHasBeenSet = true;
}

bool TopAssetStat::SubDataHasBeenSet() const
{
    return m_subDataHasBeenSet;
}

int64_t TopAssetStat::GetSensitiveCnt() const
{
    return m_sensitiveCnt;
}

void TopAssetStat::SetSensitiveCnt(const int64_t& _sensitiveCnt)
{
    m_sensitiveCnt = _sensitiveCnt;
    m_sensitiveCntHasBeenSet = true;
}

bool TopAssetStat::SensitiveCntHasBeenSet() const
{
    return m_sensitiveCntHasBeenSet;
}

