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

#include <tencentcloud/tokenhub/v20260322/model/BatchCreateFailedItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

BatchCreateFailedItem::BatchCreateFailedItem() :
    m_indexHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome BatchCreateFailedItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateFailedItem.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateFailedItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCreateFailedItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchCreateFailedItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


int64_t BatchCreateFailedItem::GetIndex() const
{
    return m_index;
}

void BatchCreateFailedItem::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool BatchCreateFailedItem::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string BatchCreateFailedItem::GetName() const
{
    return m_name;
}

void BatchCreateFailedItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BatchCreateFailedItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BatchCreateFailedItem::GetReason() const
{
    return m_reason;
}

void BatchCreateFailedItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool BatchCreateFailedItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

