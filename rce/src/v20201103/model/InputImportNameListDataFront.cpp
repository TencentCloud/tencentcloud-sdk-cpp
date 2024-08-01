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

#include <tencentcloud/rce/v20201103/model/InputImportNameListDataFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

InputImportNameListDataFront::InputImportNameListDataFront() :
    m_nameListIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_dataContentInfoHasBeenSet(false)
{
}

CoreInternalOutcome InputImportNameListDataFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameListId") && !value["NameListId"].IsNull())
    {
        if (!value["NameListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputImportNameListDataFront.NameListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nameListId = value["NameListId"].GetInt64();
        m_nameListIdHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputImportNameListDataFront.DataSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = value["DataSource"].GetInt64();
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("DataContentInfo") && !value["DataContentInfo"].IsNull())
    {
        if (!value["DataContentInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputImportNameListDataFront.DataContentInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DataContentInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataContentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataContentInfo.push_back(item);
        }
        m_dataContentInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputImportNameListDataFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameListId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nameListId, allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSource, allocator);
    }

    if (m_dataContentInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataContentInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataContentInfo.begin(); itr != m_dataContentInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InputImportNameListDataFront::GetNameListId() const
{
    return m_nameListId;
}

void InputImportNameListDataFront::SetNameListId(const int64_t& _nameListId)
{
    m_nameListId = _nameListId;
    m_nameListIdHasBeenSet = true;
}

bool InputImportNameListDataFront::NameListIdHasBeenSet() const
{
    return m_nameListIdHasBeenSet;
}

int64_t InputImportNameListDataFront::GetDataSource() const
{
    return m_dataSource;
}

void InputImportNameListDataFront::SetDataSource(const int64_t& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool InputImportNameListDataFront::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

vector<DataContentInfo> InputImportNameListDataFront::GetDataContentInfo() const
{
    return m_dataContentInfo;
}

void InputImportNameListDataFront::SetDataContentInfo(const vector<DataContentInfo>& _dataContentInfo)
{
    m_dataContentInfo = _dataContentInfo;
    m_dataContentInfoHasBeenSet = true;
}

bool InputImportNameListDataFront::DataContentInfoHasBeenSet() const
{
    return m_dataContentInfoHasBeenSet;
}

