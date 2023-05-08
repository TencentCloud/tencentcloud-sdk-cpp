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

#include <tencentcloud/ocr/v20181119/model/OtherInvoiceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

OtherInvoiceList::OtherInvoiceList() :
    m_otherInvoiceItemListHasBeenSet(false)
{
}

CoreInternalOutcome OtherInvoiceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OtherInvoiceItemList") && !value["OtherInvoiceItemList"].IsNull())
    {
        if (!value["OtherInvoiceItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OtherInvoiceList.OtherInvoiceItemList` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherInvoiceItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OtherInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_otherInvoiceItemList.push_back(item);
        }
        m_otherInvoiceItemListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtherInvoiceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_otherInvoiceItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInvoiceItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherInvoiceItemList.begin(); itr != m_otherInvoiceItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<OtherInvoiceItem> OtherInvoiceList::GetOtherInvoiceItemList() const
{
    return m_otherInvoiceItemList;
}

void OtherInvoiceList::SetOtherInvoiceItemList(const vector<OtherInvoiceItem>& _otherInvoiceItemList)
{
    m_otherInvoiceItemList = _otherInvoiceItemList;
    m_otherInvoiceItemListHasBeenSet = true;
}

bool OtherInvoiceList::OtherInvoiceItemListHasBeenSet() const
{
    return m_otherInvoiceItemListHasBeenSet;
}

