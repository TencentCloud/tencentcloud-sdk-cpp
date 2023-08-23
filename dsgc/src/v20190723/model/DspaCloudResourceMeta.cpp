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

#include <tencentcloud/dsgc/v20190723/model/DspaCloudResourceMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaCloudResourceMeta::DspaCloudResourceMeta() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceVipHasBeenSet(false),
    m_resourceVPortHasBeenSet(false),
    m_resourceCreateTimeHasBeenSet(false),
    m_resourceUniqueVpcIdHasBeenSet(false),
    m_resourceUniqueSubnetIdHasBeenSet(false)
{
}

CoreInternalOutcome DspaCloudResourceMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceVip") && !value["ResourceVip"].IsNull())
    {
        if (!value["ResourceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVip = string(value["ResourceVip"].GetString());
        m_resourceVipHasBeenSet = true;
    }

    if (value.HasMember("ResourceVPort") && !value["ResourceVPort"].IsNull())
    {
        if (!value["ResourceVPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceVPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceVPort = value["ResourceVPort"].GetUint64();
        m_resourceVPortHasBeenSet = true;
    }

    if (value.HasMember("ResourceCreateTime") && !value["ResourceCreateTime"].IsNull())
    {
        if (!value["ResourceCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCreateTime = string(value["ResourceCreateTime"].GetString());
        m_resourceCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceUniqueVpcId") && !value["ResourceUniqueVpcId"].IsNull())
    {
        if (!value["ResourceUniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceUniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUniqueVpcId = string(value["ResourceUniqueVpcId"].GetString());
        m_resourceUniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceUniqueSubnetId") && !value["ResourceUniqueSubnetId"].IsNull())
    {
        if (!value["ResourceUniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaCloudResourceMeta.ResourceUniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUniqueSubnetId = string(value["ResourceUniqueSubnetId"].GetString());
        m_resourceUniqueSubnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaCloudResourceMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceVPort, allocator);
    }

    if (m_resourceCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

}


string DspaCloudResourceMeta::GetResourceId() const
{
    return m_resourceId;
}

void DspaCloudResourceMeta::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DspaCloudResourceMeta::GetResourceName() const
{
    return m_resourceName;
}

void DspaCloudResourceMeta::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DspaCloudResourceMeta::GetResourceVip() const
{
    return m_resourceVip;
}

void DspaCloudResourceMeta::SetResourceVip(const string& _resourceVip)
{
    m_resourceVip = _resourceVip;
    m_resourceVipHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceVipHasBeenSet() const
{
    return m_resourceVipHasBeenSet;
}

uint64_t DspaCloudResourceMeta::GetResourceVPort() const
{
    return m_resourceVPort;
}

void DspaCloudResourceMeta::SetResourceVPort(const uint64_t& _resourceVPort)
{
    m_resourceVPort = _resourceVPort;
    m_resourceVPortHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceVPortHasBeenSet() const
{
    return m_resourceVPortHasBeenSet;
}

string DspaCloudResourceMeta::GetResourceCreateTime() const
{
    return m_resourceCreateTime;
}

void DspaCloudResourceMeta::SetResourceCreateTime(const string& _resourceCreateTime)
{
    m_resourceCreateTime = _resourceCreateTime;
    m_resourceCreateTimeHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceCreateTimeHasBeenSet() const
{
    return m_resourceCreateTimeHasBeenSet;
}

string DspaCloudResourceMeta::GetResourceUniqueVpcId() const
{
    return m_resourceUniqueVpcId;
}

void DspaCloudResourceMeta::SetResourceUniqueVpcId(const string& _resourceUniqueVpcId)
{
    m_resourceUniqueVpcId = _resourceUniqueVpcId;
    m_resourceUniqueVpcIdHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceUniqueVpcIdHasBeenSet() const
{
    return m_resourceUniqueVpcIdHasBeenSet;
}

string DspaCloudResourceMeta::GetResourceUniqueSubnetId() const
{
    return m_resourceUniqueSubnetId;
}

void DspaCloudResourceMeta::SetResourceUniqueSubnetId(const string& _resourceUniqueSubnetId)
{
    m_resourceUniqueSubnetId = _resourceUniqueSubnetId;
    m_resourceUniqueSubnetIdHasBeenSet = true;
}

bool DspaCloudResourceMeta::ResourceUniqueSubnetIdHasBeenSet() const
{
    return m_resourceUniqueSubnetIdHasBeenSet;
}

