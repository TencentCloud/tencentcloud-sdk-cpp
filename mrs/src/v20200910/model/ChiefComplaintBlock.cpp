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

#include <tencentcloud/mrs/v20200910/model/ChiefComplaintBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChiefComplaintBlock::ChiefComplaintBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

CoreInternalOutcome ChiefComplaintBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChiefComplaintBlock.Detail` is not array type"));

        const rapidjson::Value &tmpValue = value["Detail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChiefComplaintDetailBlock item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detail.push_back(item);
        }
        m_detailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChiefComplaintBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detail.begin(); itr != m_detail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ChiefComplaintBlock::GetName() const
{
    return m_name;
}

void ChiefComplaintBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChiefComplaintBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChiefComplaintBlock::GetSrc() const
{
    return m_src;
}

void ChiefComplaintBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool ChiefComplaintBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string ChiefComplaintBlock::GetValue() const
{
    return m_value;
}

void ChiefComplaintBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ChiefComplaintBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<ChiefComplaintDetailBlock> ChiefComplaintBlock::GetDetail() const
{
    return m_detail;
}

void ChiefComplaintBlock::SetDetail(const vector<ChiefComplaintDetailBlock>& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool ChiefComplaintBlock::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

