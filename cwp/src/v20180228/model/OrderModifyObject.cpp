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

#include <tencentcloud/cwp/v20180228/model/OrderModifyObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

OrderModifyObject::OrderModifyObject() :
    m_resourceIdHasBeenSet(false),
    m_newSubProductCodeHasBeenSet(false),
    m_inquireNumHasBeenSet(false)
{
}

CoreInternalOutcome OrderModifyObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderModifyObject.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("NewSubProductCode") && !value["NewSubProductCode"].IsNull())
    {
        if (!value["NewSubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrderModifyObject.NewSubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newSubProductCode = string(value["NewSubProductCode"].GetString());
        m_newSubProductCodeHasBeenSet = true;
    }

    if (value.HasMember("InquireNum") && !value["InquireNum"].IsNull())
    {
        if (!value["InquireNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderModifyObject.InquireNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inquireNum = value["InquireNum"].GetInt64();
        m_inquireNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrderModifyObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_newSubProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newSubProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inquireNum, allocator);
    }

}


string OrderModifyObject::GetResourceId() const
{
    return m_resourceId;
}

void OrderModifyObject::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool OrderModifyObject::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string OrderModifyObject::GetNewSubProductCode() const
{
    return m_newSubProductCode;
}

void OrderModifyObject::SetNewSubProductCode(const string& _newSubProductCode)
{
    m_newSubProductCode = _newSubProductCode;
    m_newSubProductCodeHasBeenSet = true;
}

bool OrderModifyObject::NewSubProductCodeHasBeenSet() const
{
    return m_newSubProductCodeHasBeenSet;
}

int64_t OrderModifyObject::GetInquireNum() const
{
    return m_inquireNum;
}

void OrderModifyObject::SetInquireNum(const int64_t& _inquireNum)
{
    m_inquireNum = _inquireNum;
    m_inquireNumHasBeenSet = true;
}

bool OrderModifyObject::InquireNumHasBeenSet() const
{
    return m_inquireNumHasBeenSet;
}

