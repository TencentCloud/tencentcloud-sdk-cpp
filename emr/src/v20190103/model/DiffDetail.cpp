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

#include <tencentcloud/emr/v20190103/model/DiffDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DiffDetail::DiffDetail() :
    m_nameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_headerHasBeenSet(false)
{
}

CoreInternalOutcome DiffDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DiffDetail.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffDetail.Rows` is not array type"));

        const rapidjson::Value &tmpValue = value["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiffDetailItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rows.push_back(item);
        }
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffDetail.Header` is not array type"));

        const rapidjson::Value &tmpValue = value["Header"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiffHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_header.push_back(item);
        }
        m_headerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiffDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_header.begin(); itr != m_header.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DiffDetail::GetName() const
{
    return m_name;
}

void DiffDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DiffDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DiffDetail::GetCount() const
{
    return m_count;
}

void DiffDetail::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DiffDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<DiffDetailItem> DiffDetail::GetRows() const
{
    return m_rows;
}

void DiffDetail::SetRows(const vector<DiffDetailItem>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool DiffDetail::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

vector<DiffHeader> DiffDetail::GetHeader() const
{
    return m_header;
}

void DiffDetail::SetHeader(const vector<DiffHeader>& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool DiffDetail::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

