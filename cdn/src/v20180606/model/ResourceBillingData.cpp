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

#include <tencentcloud/cdn/v20180606/model/ResourceBillingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ResourceBillingData::ResourceBillingData() :
    m_resourceHasBeenSet(false),
    m_billingDataHasBeenSet(false)
{
}

CoreInternalOutcome ResourceBillingData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceBillingData.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("BillingData") && !value["BillingData"].IsNull())
    {
        if (!value["BillingData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceBillingData.BillingData` is not array type"));

        const rapidjson::Value &tmpValue = value["BillingData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CdnData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_billingData.push_back(item);
        }
        m_billingDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceBillingData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_billingDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_billingData.begin(); itr != m_billingData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ResourceBillingData::GetResource() const
{
    return m_resource;
}

void ResourceBillingData::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourceBillingData::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<CdnData> ResourceBillingData::GetBillingData() const
{
    return m_billingData;
}

void ResourceBillingData::SetBillingData(const vector<CdnData>& _billingData)
{
    m_billingData = _billingData;
    m_billingDataHasBeenSet = true;
}

bool ResourceBillingData::BillingDataHasBeenSet() const
{
    return m_billingDataHasBeenSet;
}

