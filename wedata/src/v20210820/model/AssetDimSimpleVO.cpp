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

#include <tencentcloud/wedata/v20210820/model/AssetDimSimpleVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AssetDimSimpleVO::AssetDimSimpleVO() :
    m_idHasBeenSet(false),
    m_dimNameHasBeenSet(false),
    m_dimCodeHasBeenSet(false)
{
}

CoreInternalOutcome AssetDimSimpleVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimSimpleVO.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DimName") && !value["DimName"].IsNull())
    {
        if (!value["DimName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimSimpleVO.DimName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimName = string(value["DimName"].GetString());
        m_dimNameHasBeenSet = true;
    }

    if (value.HasMember("DimCode") && !value["DimCode"].IsNull())
    {
        if (!value["DimCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetDimSimpleVO.DimCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimCode = string(value["DimCode"].GetString());
        m_dimCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetDimSimpleVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_dimNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimName.c_str(), allocator).Move(), allocator);
    }

    if (m_dimCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimCode.c_str(), allocator).Move(), allocator);
    }

}


int64_t AssetDimSimpleVO::GetId() const
{
    return m_id;
}

void AssetDimSimpleVO::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetDimSimpleVO::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetDimSimpleVO::GetDimName() const
{
    return m_dimName;
}

void AssetDimSimpleVO::SetDimName(const string& _dimName)
{
    m_dimName = _dimName;
    m_dimNameHasBeenSet = true;
}

bool AssetDimSimpleVO::DimNameHasBeenSet() const
{
    return m_dimNameHasBeenSet;
}

string AssetDimSimpleVO::GetDimCode() const
{
    return m_dimCode;
}

void AssetDimSimpleVO::SetDimCode(const string& _dimCode)
{
    m_dimCode = _dimCode;
    m_dimCodeHasBeenSet = true;
}

bool AssetDimSimpleVO::DimCodeHasBeenSet() const
{
    return m_dimCodeHasBeenSet;
}

