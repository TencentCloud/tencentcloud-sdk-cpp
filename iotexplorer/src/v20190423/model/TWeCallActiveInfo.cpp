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

#include <tencentcloud/iotexplorer/v20190423/model/TWeCallActiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TWeCallActiveInfo::TWeCallActiveInfo() :
    m_modelIdHasBeenSet(false),
    m_snHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_pkgTypeHasBeenSet(false)
{
}

CoreInternalOutcome TWeCallActiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallActiveInfo.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("Sn") && !value["Sn"].IsNull())
    {
        if (!value["Sn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallActiveInfo.Sn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sn = string(value["Sn"].GetString());
        m_snHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallActiveInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("PkgType") && !value["PkgType"].IsNull())
    {
        if (!value["PkgType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallActiveInfo.PkgType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgType = value["PkgType"].GetInt64();
        m_pkgTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TWeCallActiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_snHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sn.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgType, allocator);
    }

}


string TWeCallActiveInfo::GetModelId() const
{
    return m_modelId;
}

void TWeCallActiveInfo::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool TWeCallActiveInfo::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string TWeCallActiveInfo::GetSn() const
{
    return m_sn;
}

void TWeCallActiveInfo::SetSn(const string& _sn)
{
    m_sn = _sn;
    m_snHasBeenSet = true;
}

bool TWeCallActiveInfo::SnHasBeenSet() const
{
    return m_snHasBeenSet;
}

int64_t TWeCallActiveInfo::GetExpireTime() const
{
    return m_expireTime;
}

void TWeCallActiveInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TWeCallActiveInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t TWeCallActiveInfo::GetPkgType() const
{
    return m_pkgType;
}

void TWeCallActiveInfo::SetPkgType(const int64_t& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool TWeCallActiveInfo::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

