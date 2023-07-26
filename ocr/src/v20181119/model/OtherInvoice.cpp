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

#include <tencentcloud/ocr/v20181119/model/OtherInvoice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

OtherInvoice::OtherInvoice() :
    m_titleHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_otherInvoiceListItemsHasBeenSet(false),
    m_otherInvoiceTableItemsHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome OtherInvoice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInvoice.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInvoice.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("OtherInvoiceListItems") && !value["OtherInvoiceListItems"].IsNull())
    {
        if (!value["OtherInvoiceListItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherInvoice.OtherInvoiceListItems` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherInvoiceListItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherInvoiceListItems.push_back(item);
        }
        m_otherInvoiceListItemsHasBeenSet = true;
    }

    if (value.HasMember("OtherInvoiceTableItems") && !value["OtherInvoiceTableItems"].IsNull())
    {
        if (!value["OtherInvoiceTableItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherInvoice.OtherInvoiceTableItems` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherInvoiceTableItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherInvoiceTableItems.push_back(item);
        }
        m_otherInvoiceTableItemsHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtherInvoice.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherInvoice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_otherInvoiceListItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInvoiceListItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherInvoiceListItems.begin(); itr != m_otherInvoiceListItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_otherInvoiceTableItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInvoiceTableItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherInvoiceTableItems.begin(); itr != m_otherInvoiceTableItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


string OtherInvoice::GetTitle() const
{
    return m_title;
}

void OtherInvoice::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool OtherInvoice::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string OtherInvoice::GetTotal() const
{
    return m_total;
}

void OtherInvoice::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool OtherInvoice::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

vector<OtherInvoiceItem> OtherInvoice::GetOtherInvoiceListItems() const
{
    return m_otherInvoiceListItems;
}

void OtherInvoice::SetOtherInvoiceListItems(const vector<OtherInvoiceItem>& _otherInvoiceListItems)
{
    m_otherInvoiceListItems = _otherInvoiceListItems;
    m_otherInvoiceListItemsHasBeenSet = true;
}

bool OtherInvoice::OtherInvoiceListItemsHasBeenSet() const
{
    return m_otherInvoiceListItemsHasBeenSet;
}

vector<OtherInvoiceList> OtherInvoice::GetOtherInvoiceTableItems() const
{
    return m_otherInvoiceTableItems;
}

void OtherInvoice::SetOtherInvoiceTableItems(const vector<OtherInvoiceList>& _otherInvoiceTableItems)
{
    m_otherInvoiceTableItems = _otherInvoiceTableItems;
    m_otherInvoiceTableItemsHasBeenSet = true;
}

bool OtherInvoice::OtherInvoiceTableItemsHasBeenSet() const
{
    return m_otherInvoiceTableItemsHasBeenSet;
}

string OtherInvoice::GetDate() const
{
    return m_date;
}

void OtherInvoice::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool OtherInvoice::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

