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

#include <tencentcloud/organization/v20210331/model/ShareResourceToMember.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ShareResourceToMember::ShareResourceToMember() :
    m_resourceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_unitIdHasBeenSet(false),
    m_unitNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_productResourceIdHasBeenSet(false),
    m_shareManagerUinHasBeenSet(false)
{
}

CoreInternalOutcome ShareResourceToMember::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UnitId") && !value["UnitId"].IsNull())
    {
        if (!value["UnitId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.UnitId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitId = string(value["UnitId"].GetString());
        m_unitIdHasBeenSet = true;
    }

    if (value.HasMember("UnitName") && !value["UnitName"].IsNull())
    {
        if (!value["UnitName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.UnitName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitName = string(value["UnitName"].GetString());
        m_unitNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductResourceId") && !value["ProductResourceId"].IsNull())
    {
        if (!value["ProductResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.ProductResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productResourceId = string(value["ProductResourceId"].GetString());
        m_productResourceIdHasBeenSet = true;
    }

    if (value.HasMember("ShareManagerUin") && !value["ShareManagerUin"].IsNull())
    {
        if (!value["ShareManagerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShareResourceToMember.ShareManagerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shareManagerUin = value["ShareManagerUin"].GetInt64();
        m_shareManagerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShareResourceToMember::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_unitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitId.c_str(), allocator).Move(), allocator);
    }

    if (m_unitNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitName.c_str(), allocator).Move(), allocator);
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

    if (m_shareManagerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareManagerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareManagerUin, allocator);
    }

}


string ShareResourceToMember::GetResourceId() const
{
    return m_resourceId;
}

void ShareResourceToMember::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ShareResourceToMember::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ShareResourceToMember::GetType() const
{
    return m_type;
}

void ShareResourceToMember::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ShareResourceToMember::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ShareResourceToMember::GetUnitId() const
{
    return m_unitId;
}

void ShareResourceToMember::SetUnitId(const string& _unitId)
{
    m_unitId = _unitId;
    m_unitIdHasBeenSet = true;
}

bool ShareResourceToMember::UnitIdHasBeenSet() const
{
    return m_unitIdHasBeenSet;
}

string ShareResourceToMember::GetUnitName() const
{
    return m_unitName;
}

void ShareResourceToMember::SetUnitName(const string& _unitName)
{
    m_unitName = _unitName;
    m_unitNameHasBeenSet = true;
}

bool ShareResourceToMember::UnitNameHasBeenSet() const
{
    return m_unitNameHasBeenSet;
}

string ShareResourceToMember::GetCreateTime() const
{
    return m_createTime;
}

void ShareResourceToMember::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShareResourceToMember::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ShareResourceToMember::GetProductResourceId() const
{
    return m_productResourceId;
}

void ShareResourceToMember::SetProductResourceId(const string& _productResourceId)
{
    m_productResourceId = _productResourceId;
    m_productResourceIdHasBeenSet = true;
}

bool ShareResourceToMember::ProductResourceIdHasBeenSet() const
{
    return m_productResourceIdHasBeenSet;
}

int64_t ShareResourceToMember::GetShareManagerUin() const
{
    return m_shareManagerUin;
}

void ShareResourceToMember::SetShareManagerUin(const int64_t& _shareManagerUin)
{
    m_shareManagerUin = _shareManagerUin;
    m_shareManagerUinHasBeenSet = true;
}

bool ShareResourceToMember::ShareManagerUinHasBeenSet() const
{
    return m_shareManagerUinHasBeenSet;
}

