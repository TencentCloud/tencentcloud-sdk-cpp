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

#include <tencentcloud/dsgc/v20190723/model/DataSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DataSourceInfo::DataSourceInfo() :
    m_dataSourceIdHasBeenSet(false),
    m_bindListHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("BindList") && !value["BindList"].IsNull())
    {
        if (!value["BindList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSourceInfo.BindList` is not array type"));

        const rapidjson::Value &tmpValue = value["BindList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindList.push_back((*itr).GetString());
        }
        m_bindListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindList.begin(); itr != m_bindList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DataSourceInfo::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DataSourceInfo::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DataSourceInfo::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

vector<string> DataSourceInfo::GetBindList() const
{
    return m_bindList;
}

void DataSourceInfo::SetBindList(const vector<string>& _bindList)
{
    m_bindList = _bindList;
    m_bindListHasBeenSet = true;
}

bool DataSourceInfo::BindListHasBeenSet() const
{
    return m_bindListHasBeenSet;
}

