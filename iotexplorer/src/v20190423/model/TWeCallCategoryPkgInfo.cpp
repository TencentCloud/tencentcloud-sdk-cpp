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

#include <tencentcloud/iotexplorer/v20190423/model/TWeCallCategoryPkgInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TWeCallCategoryPkgInfo::TWeCallCategoryPkgInfo() :
    m_pkgTypeHasBeenSet(false),
    m_allHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome TWeCallCategoryPkgInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PkgType") && !value["PkgType"].IsNull())
    {
        if (!value["PkgType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallCategoryPkgInfo.PkgType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgType = value["PkgType"].GetInt64();
        m_pkgTypeHasBeenSet = true;
    }

    if (value.HasMember("All") && !value["All"].IsNull())
    {
        if (!value["All"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallCategoryPkgInfo.All` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_all = value["All"].GetInt64();
        m_allHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallCategoryPkgInfo.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TWeCallCategoryPkgInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgType, allocator);
    }

    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_all, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


int64_t TWeCallCategoryPkgInfo::GetPkgType() const
{
    return m_pkgType;
}

void TWeCallCategoryPkgInfo::SetPkgType(const int64_t& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool TWeCallCategoryPkgInfo::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

int64_t TWeCallCategoryPkgInfo::GetAll() const
{
    return m_all;
}

void TWeCallCategoryPkgInfo::SetAll(const int64_t& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool TWeCallCategoryPkgInfo::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

int64_t TWeCallCategoryPkgInfo::GetUsed() const
{
    return m_used;
}

void TWeCallCategoryPkgInfo::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool TWeCallCategoryPkgInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

