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

#include <tencentcloud/ocr/v20181119/model/TaxPayment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TaxPayment::TaxPayment() :
    m_titleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_tableItemsHasBeenSet(false)
{
}

CoreInternalOutcome TaxPayment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaxPayment.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaxPayment.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("TableItems") && !value["TableItems"].IsNull())
    {
        if (!value["TableItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaxPayment.TableItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TableItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableItems.push_back(item);
        }
        m_tableItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaxPayment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableItems.begin(); itr != m_tableItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TaxPayment::GetTitle() const
{
    return m_title;
}

void TaxPayment::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool TaxPayment::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<OtherInvoiceItem> TaxPayment::GetContent() const
{
    return m_content;
}

void TaxPayment::SetContent(const vector<OtherInvoiceItem>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TaxPayment::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<OtherInvoiceList> TaxPayment::GetTableItems() const
{
    return m_tableItems;
}

void TaxPayment::SetTableItems(const vector<OtherInvoiceList>& _tableItems)
{
    m_tableItems = _tableItems;
    m_tableItemsHasBeenSet = true;
}

bool TaxPayment::TableItemsHasBeenSet() const
{
    return m_tableItemsHasBeenSet;
}

