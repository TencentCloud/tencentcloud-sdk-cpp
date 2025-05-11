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

#include <tencentcloud/partners/v20180321/model/DealPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DealPriceDetail::DealPriceDetail() :
    m_dealNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_subProductPriceDetailHasBeenSet(false)
{
}

CoreInternalOutcome DealPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealName") && !value["DealName"].IsNull())
    {
        if (!value["DealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealPriceDetail.DealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealName = string(value["DealName"].GetString());
        m_dealNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealPriceDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("SubProductPriceDetail") && !value["SubProductPriceDetail"].IsNull())
    {
        if (!value["SubProductPriceDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DealPriceDetail.SubProductPriceDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["SubProductPriceDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubProductPriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subProductPriceDetail.push_back(item);
        }
        m_subProductPriceDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DealPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductPriceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductPriceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subProductPriceDetail.begin(); itr != m_subProductPriceDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DealPriceDetail::GetDealName() const
{
    return m_dealName;
}

void DealPriceDetail::SetDealName(const string& _dealName)
{
    m_dealName = _dealName;
    m_dealNameHasBeenSet = true;
}

bool DealPriceDetail::DealNameHasBeenSet() const
{
    return m_dealNameHasBeenSet;
}

string DealPriceDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void DealPriceDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DealPriceDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<SubProductPriceDetail> DealPriceDetail::GetSubProductPriceDetail() const
{
    return m_subProductPriceDetail;
}

void DealPriceDetail::SetSubProductPriceDetail(const vector<SubProductPriceDetail>& _subProductPriceDetail)
{
    m_subProductPriceDetail = _subProductPriceDetail;
    m_subProductPriceDetailHasBeenSet = true;
}

bool DealPriceDetail::SubProductPriceDetailHasBeenSet() const
{
    return m_subProductPriceDetailHasBeenSet;
}

