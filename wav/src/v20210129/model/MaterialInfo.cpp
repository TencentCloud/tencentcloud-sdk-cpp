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

#include <tencentcloud/wav/v20210129/model/MaterialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

MaterialInfo::MaterialInfo() :
    m_materialIdHasBeenSet(false),
    m_materialNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome MaterialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.MaterialId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = value["MaterialId"].GetUint64();
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("MaterialName") && !value["MaterialName"].IsNull())
    {
        if (!value["MaterialName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.MaterialName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialName = string(value["MaterialName"].GetString());
        m_materialNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_materialId, allocator);
    }

    if (m_materialNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


uint64_t MaterialInfo::GetMaterialId() const
{
    return m_materialId;
}

void MaterialInfo::SetMaterialId(const uint64_t& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MaterialInfo::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string MaterialInfo::GetMaterialName() const
{
    return m_materialName;
}

void MaterialInfo::SetMaterialName(const string& _materialName)
{
    m_materialName = _materialName;
    m_materialNameHasBeenSet = true;
}

bool MaterialInfo::MaterialNameHasBeenSet() const
{
    return m_materialNameHasBeenSet;
}

int64_t MaterialInfo::GetStatus() const
{
    return m_status;
}

void MaterialInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MaterialInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

