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

#include <tencentcloud/ocr/v20181119/model/MedicalInvoiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MedicalInvoiceInfo::MedicalInvoiceInfo() :
    m_medicalInvoiceItemsHasBeenSet(false)
{
}

CoreInternalOutcome MedicalInvoiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MedicalInvoiceItems") && !value["MedicalInvoiceItems"].IsNull())
    {
        if (!value["MedicalInvoiceItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MedicalInvoiceInfo.MedicalInvoiceItems` is not array type"));

        const rapidjson::Value &tmpValue = value["MedicalInvoiceItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MedicalInvoiceItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_medicalInvoiceItems.push_back(item);
        }
        m_medicalInvoiceItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MedicalInvoiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_medicalInvoiceItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalInvoiceItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_medicalInvoiceItems.begin(); itr != m_medicalInvoiceItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MedicalInvoiceItem> MedicalInvoiceInfo::GetMedicalInvoiceItems() const
{
    return m_medicalInvoiceItems;
}

void MedicalInvoiceInfo::SetMedicalInvoiceItems(const vector<MedicalInvoiceItem>& _medicalInvoiceItems)
{
    m_medicalInvoiceItems = _medicalInvoiceItems;
    m_medicalInvoiceItemsHasBeenSet = true;
}

bool MedicalInvoiceInfo::MedicalInvoiceItemsHasBeenSet() const
{
    return m_medicalInvoiceItemsHasBeenSet;
}

