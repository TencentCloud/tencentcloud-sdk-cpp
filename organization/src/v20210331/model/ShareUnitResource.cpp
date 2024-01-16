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

#include <tencentcloud/organization/v20210331/model/ShareUnitResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareUnitResource::ShareUnitResource() :
    m_resourceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_productResourceIdHasBeenSet(false),
    m_sharedMemberNumHasBeenSet(false),
    m_sharedMemberUseNumHasBeenSet(false),
    m_shareManagerUinHasBeenSet(false)
{
}

CoreInternalOutcome ShareUnitResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductResourceId") && !value["ProductResourceId"].IsNull())
    {
        if (!value["ProductResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.ProductResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productResourceId = string(value["ProductResourceId"].GetString());
        m_productResourceIdHasBeenSet = true;
    }

    if (value.HasMember("SharedMemberNum") && !value["SharedMemberNum"].IsNull())
    {
        if (!value["SharedMemberNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.SharedMemberNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedMemberNum = value["SharedMemberNum"].GetUint64();
        m_sharedMemberNumHasBeenSet = true;
    }

    if (value.HasMember("SharedMemberUseNum") && !value["SharedMemberUseNum"].IsNull())
    {
        if (!value["SharedMemberUseNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.SharedMemberUseNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sharedMemberUseNum = value["SharedMemberUseNum"].GetUint64();
        m_sharedMemberUseNumHasBeenSet = true;
    }

    if (value.HasMember("ShareManagerUin") && !value["ShareManagerUin"].IsNull())
    {
        if (!value["ShareManagerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareUnitResource.ShareManagerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareManagerUin = value["ShareManagerUin"].GetInt64();
        m_shareManagerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareUnitResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sharedMemberNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedMemberNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedMemberNum, allocator);
    }

    if (m_sharedMemberUseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedMemberUseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharedMemberUseNum, allocator);
    }

    if (m_shareManagerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareManagerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareManagerUin, allocator);
    }

}


string ShareUnitResource::GetResourceId() const
{
    return m_resourceId;
}

void ShareUnitResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ShareUnitResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ShareUnitResource::GetType() const
{
    return m_type;
}

void ShareUnitResource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ShareUnitResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ShareUnitResource::GetCreateTime() const
{
    return m_createTime;
}

void ShareUnitResource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShareUnitResource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ShareUnitResource::GetProductResourceId() const
{
    return m_productResourceId;
}

void ShareUnitResource::SetProductResourceId(const string& _productResourceId)
{
    m_productResourceId = _productResourceId;
    m_productResourceIdHasBeenSet = true;
}

bool ShareUnitResource::ProductResourceIdHasBeenSet() const
{
    return m_productResourceIdHasBeenSet;
}

uint64_t ShareUnitResource::GetSharedMemberNum() const
{
    return m_sharedMemberNum;
}

void ShareUnitResource::SetSharedMemberNum(const uint64_t& _sharedMemberNum)
{
    m_sharedMemberNum = _sharedMemberNum;
    m_sharedMemberNumHasBeenSet = true;
}

bool ShareUnitResource::SharedMemberNumHasBeenSet() const
{
    return m_sharedMemberNumHasBeenSet;
}

uint64_t ShareUnitResource::GetSharedMemberUseNum() const
{
    return m_sharedMemberUseNum;
}

void ShareUnitResource::SetSharedMemberUseNum(const uint64_t& _sharedMemberUseNum)
{
    m_sharedMemberUseNum = _sharedMemberUseNum;
    m_sharedMemberUseNumHasBeenSet = true;
}

bool ShareUnitResource::SharedMemberUseNumHasBeenSet() const
{
    return m_sharedMemberUseNumHasBeenSet;
}

int64_t ShareUnitResource::GetShareManagerUin() const
{
    return m_shareManagerUin;
}

void ShareUnitResource::SetShareManagerUin(const int64_t& _shareManagerUin)
{
    m_shareManagerUin = _shareManagerUin;
    m_shareManagerUinHasBeenSet = true;
}

bool ShareUnitResource::ShareManagerUinHasBeenSet() const
{
    return m_shareManagerUinHasBeenSet;
}

