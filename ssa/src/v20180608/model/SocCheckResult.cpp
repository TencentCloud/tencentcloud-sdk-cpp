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

#include <tencentcloud/ssa/v20180608/model/SocCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SocCheckResult::SocCheckResult() :
    m_checkIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_ployNameHasBeenSet(false),
    m_ployIdHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_failAssetNumHasBeenSet(false),
    m_totalAssetNumHasBeenSet(false),
    m_dealUrlHasBeenSet(false)
{
}

CoreInternalOutcome SocCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckId") && !value["CheckId"].IsNull())
    {
        if (!value["CheckId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.CheckId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkId = string(value["CheckId"].GetString());
        m_checkIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("PloyName") && !value["PloyName"].IsNull())
    {
        if (!value["PloyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.PloyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ployName = string(value["PloyName"].GetString());
        m_ployNameHasBeenSet = true;
    }

    if (value.HasMember("PloyId") && !value["PloyId"].IsNull())
    {
        if (!value["PloyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.PloyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ployId = value["PloyId"].GetInt64();
        m_ployIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("FailAssetNum") && !value["FailAssetNum"].IsNull())
    {
        if (!value["FailAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.FailAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failAssetNum = value["FailAssetNum"].GetInt64();
        m_failAssetNumHasBeenSet = true;
    }

    if (value.HasMember("TotalAssetNum") && !value["TotalAssetNum"].IsNull())
    {
        if (!value["TotalAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.TotalAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAssetNum = value["TotalAssetNum"].GetInt64();
        m_totalAssetNumHasBeenSet = true;
    }

    if (value.HasMember("DealUrl") && !value["DealUrl"].IsNull())
    {
        if (!value["DealUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckResult.DealUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealUrl = string(value["DealUrl"].GetString());
        m_dealUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SocCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_ployNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PloyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ployName.c_str(), allocator).Move(), allocator);
    }

    if (m_ployIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PloyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ployId, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_failAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failAssetNum, allocator);
    }

    if (m_totalAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAssetNum, allocator);
    }

    if (m_dealUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealUrl.c_str(), allocator).Move(), allocator);
    }

}


string SocCheckResult::GetCheckId() const
{
    return m_checkId;
}

void SocCheckResult::SetCheckId(const string& _checkId)
{
    m_checkId = _checkId;
    m_checkIdHasBeenSet = true;
}

bool SocCheckResult::CheckIdHasBeenSet() const
{
    return m_checkIdHasBeenSet;
}

string SocCheckResult::GetName() const
{
    return m_name;
}

void SocCheckResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SocCheckResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SocCheckResult::GetType() const
{
    return m_type;
}

void SocCheckResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SocCheckResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SocCheckResult::GetAssetType() const
{
    return m_assetType;
}

void SocCheckResult::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool SocCheckResult::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string SocCheckResult::GetPloyName() const
{
    return m_ployName;
}

void SocCheckResult::SetPloyName(const string& _ployName)
{
    m_ployName = _ployName;
    m_ployNameHasBeenSet = true;
}

bool SocCheckResult::PloyNameHasBeenSet() const
{
    return m_ployNameHasBeenSet;
}

int64_t SocCheckResult::GetPloyId() const
{
    return m_ployId;
}

void SocCheckResult::SetPloyId(const int64_t& _ployId)
{
    m_ployId = _ployId;
    m_ployIdHasBeenSet = true;
}

bool SocCheckResult::PloyIdHasBeenSet() const
{
    return m_ployIdHasBeenSet;
}

string SocCheckResult::GetResult() const
{
    return m_result;
}

void SocCheckResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool SocCheckResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t SocCheckResult::GetFailAssetNum() const
{
    return m_failAssetNum;
}

void SocCheckResult::SetFailAssetNum(const int64_t& _failAssetNum)
{
    m_failAssetNum = _failAssetNum;
    m_failAssetNumHasBeenSet = true;
}

bool SocCheckResult::FailAssetNumHasBeenSet() const
{
    return m_failAssetNumHasBeenSet;
}

int64_t SocCheckResult::GetTotalAssetNum() const
{
    return m_totalAssetNum;
}

void SocCheckResult::SetTotalAssetNum(const int64_t& _totalAssetNum)
{
    m_totalAssetNum = _totalAssetNum;
    m_totalAssetNumHasBeenSet = true;
}

bool SocCheckResult::TotalAssetNumHasBeenSet() const
{
    return m_totalAssetNumHasBeenSet;
}

string SocCheckResult::GetDealUrl() const
{
    return m_dealUrl;
}

void SocCheckResult::SetDealUrl(const string& _dealUrl)
{
    m_dealUrl = _dealUrl;
    m_dealUrlHasBeenSet = true;
}

bool SocCheckResult::DealUrlHasBeenSet() const
{
    return m_dealUrlHasBeenSet;
}

