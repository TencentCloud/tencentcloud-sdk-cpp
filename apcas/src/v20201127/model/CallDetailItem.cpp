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

#include <tencentcloud/apcas/v20201127/model/CallDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace rapidjson;
using namespace std;

CallDetailItem::CallDetailItem() :
    m_dataTypeHasBeenSet(false),
    m_validAmountHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome CallDetailItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CallDetailItem.DataType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = value["DataType"].GetUint64();
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("ValidAmount") && !value["ValidAmount"].IsNull())
    {
        if (!value["ValidAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CallDetailItem.ValidAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_validAmount = value["ValidAmount"].GetUint64();
        m_validAmountHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Error("response `CallDetailItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallDetailItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dataTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataType, allocator);
    }

    if (m_validAmountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ValidAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_validAmount, allocator);
    }

    if (m_dateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CallDetailItem::GetDataType() const
{
    return m_dataType;
}

void CallDetailItem::SetDataType(const uint64_t& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool CallDetailItem::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

uint64_t CallDetailItem::GetValidAmount() const
{
    return m_validAmount;
}

void CallDetailItem::SetValidAmount(const uint64_t& _validAmount)
{
    m_validAmount = _validAmount;
    m_validAmountHasBeenSet = true;
}

bool CallDetailItem::ValidAmountHasBeenSet() const
{
    return m_validAmountHasBeenSet;
}

string CallDetailItem::GetDate() const
{
    return m_date;
}

void CallDetailItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool CallDetailItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

