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

#include <tencentcloud/dsgc/v20190723/model/AssetList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssetList::AssetList() :
    m_dataSourceTypeHasBeenSet(false),
    m_dataSourceInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetList.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceInfo") && !value["DataSourceInfo"].IsNull())
    {
        if (!value["DataSourceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetList.DataSourceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSourceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataSourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSourceInfo.push_back(item);
        }
        m_dataSourceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSourceInfo.begin(); itr != m_dataSourceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AssetList::GetDataSourceType() const
{
    return m_dataSourceType;
}

void AssetList::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool AssetList::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

vector<DataSourceInfo> AssetList::GetDataSourceInfo() const
{
    return m_dataSourceInfo;
}

void AssetList::SetDataSourceInfo(const vector<DataSourceInfo>& _dataSourceInfo)
{
    m_dataSourceInfo = _dataSourceInfo;
    m_dataSourceInfoHasBeenSet = true;
}

bool AssetList::DataSourceInfoHasBeenSet() const
{
    return m_dataSourceInfoHasBeenSet;
}

