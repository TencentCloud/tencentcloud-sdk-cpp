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

#include <tencentcloud/dbbrain/v20191016/model/ModifyDiagDBInstanceConfRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

ModifyDiagDBInstanceConfRequest::ModifyDiagDBInstanceConfRequest() :
    m_instanceConfsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
}

string ModifyDiagDBInstanceConfRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceConfs.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regions.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InstanceConfs ModifyDiagDBInstanceConfRequest::GetInstanceConfs() const
{
    return m_instanceConfs;
}

void ModifyDiagDBInstanceConfRequest::SetInstanceConfs(const InstanceConfs& _instanceConfs)
{
    m_instanceConfs = _instanceConfs;
    m_instanceConfsHasBeenSet = true;
}

bool ModifyDiagDBInstanceConfRequest::InstanceConfsHasBeenSet() const
{
    return m_instanceConfsHasBeenSet;
}

string ModifyDiagDBInstanceConfRequest::GetRegions() const
{
    return m_regions;
}

void ModifyDiagDBInstanceConfRequest::SetRegions(const string& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool ModifyDiagDBInstanceConfRequest::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string ModifyDiagDBInstanceConfRequest::GetProduct() const
{
    return m_product;
}

void ModifyDiagDBInstanceConfRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ModifyDiagDBInstanceConfRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> ModifyDiagDBInstanceConfRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyDiagDBInstanceConfRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyDiagDBInstanceConfRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}


