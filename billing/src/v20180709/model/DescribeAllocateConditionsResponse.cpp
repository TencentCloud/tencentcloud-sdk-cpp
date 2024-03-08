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

#include <tencentcloud/billing/v20180709/model/DescribeAllocateConditionsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAllocateConditionsResponse::DescribeAllocateConditionsResponse() :
    m_businessHasBeenSet(false),
    m_productHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAllocateConditionsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Business") && !rsp["Business"].IsNull())
    {
        if (!rsp["Business"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Business` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Business"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillBusinessLink item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_business.push_back(item);
        }
        m_businessHasBeenSet = true;
    }

    if (rsp.HasMember("Product") && !rsp["Product"].IsNull())
    {
        if (!rsp["Product"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Product` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Product"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillProduct item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_product.push_back(item);
        }
        m_productHasBeenSet = true;
    }

    if (rsp.HasMember("Item") && !rsp["Item"].IsNull())
    {
        if (!rsp["Item"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Item` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Item"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_item.push_back(item);
        }
        m_itemHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Region` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Region"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillRegion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_region.push_back(item);
        }
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillInstanceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceType.push_back(item);
        }
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PayMode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PayMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillPayMode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_payMode.push_back(item);
        }
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("Project") && !rsp["Project"].IsNull())
    {
        if (!rsp["Project"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Project"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillProject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_project.push_back(item);
        }
        m_projectHasBeenSet = true;
    }

    if (rsp.HasMember("Tag") && !rsp["Tag"].IsNull())
    {
        if (!rsp["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tag` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OwnerUin` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OwnerUin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillOwnerUin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ownerUin.push_back(item);
        }
        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("OperateUin") && !rsp["OperateUin"].IsNull())
    {
        if (!rsp["OperateUin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OperateUin` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OperateUin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillOperateUin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operateUin.push_back(item);
        }
        m_operateUinHasBeenSet = true;
    }

    if (rsp.HasMember("ActionType") && !rsp["ActionType"].IsNull())
    {
        if (!rsp["ActionType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ActionType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ActionType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BillActionType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionType.push_back(item);
        }
        m_actionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAllocateConditionsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_business.begin(); itr != m_business.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_product.begin(); itr != m_product.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_item.begin(); itr != m_item.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_region.begin(); itr != m_region.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceType.begin(); itr != m_instanceType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_payMode.begin(); itr != m_payMode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_project.begin(); itr != m_project.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ownerUin.begin(); itr != m_ownerUin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operateUin.begin(); itr != m_operateUin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionType.begin(); itr != m_actionType.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<BillBusinessLink> DescribeAllocateConditionsResponse::GetBusiness() const
{
    return m_business;
}

bool DescribeAllocateConditionsResponse::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<BillProduct> DescribeAllocateConditionsResponse::GetProduct() const
{
    return m_product;
}

bool DescribeAllocateConditionsResponse::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<BillItem> DescribeAllocateConditionsResponse::GetItem() const
{
    return m_item;
}

bool DescribeAllocateConditionsResponse::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

vector<BillRegion> DescribeAllocateConditionsResponse::GetRegion() const
{
    return m_region;
}

bool DescribeAllocateConditionsResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<BillInstanceType> DescribeAllocateConditionsResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeAllocateConditionsResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<BillPayMode> DescribeAllocateConditionsResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeAllocateConditionsResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<BillProject> DescribeAllocateConditionsResponse::GetProject() const
{
    return m_project;
}

bool DescribeAllocateConditionsResponse::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

vector<BillTag> DescribeAllocateConditionsResponse::GetTag() const
{
    return m_tag;
}

bool DescribeAllocateConditionsResponse::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<BillOwnerUin> DescribeAllocateConditionsResponse::GetOwnerUin() const
{
    return m_ownerUin;
}

bool DescribeAllocateConditionsResponse::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

vector<BillOperateUin> DescribeAllocateConditionsResponse::GetOperateUin() const
{
    return m_operateUin;
}

bool DescribeAllocateConditionsResponse::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

vector<BillActionType> DescribeAllocateConditionsResponse::GetActionType() const
{
    return m_actionType;
}

bool DescribeAllocateConditionsResponse::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}


