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

#include <tencentcloud/bma/v20221115/model/WhiteListData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

WhiteListData::WhiteListData() :
    m_whiteListIdHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_assetsTypeHasBeenSet(false),
    m_whiteListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome WhiteListData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhiteListId") && !value["WhiteListId"].IsNull())
    {
        if (!value["WhiteListId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.WhiteListId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteListId = value["WhiteListId"].GetInt64();
        m_whiteListIdHasBeenSet = true;
    }

    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.CompanyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = value["CompanyId"].GetInt64();
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("AssetsType") && !value["AssetsType"].IsNull())
    {
        if (!value["AssetsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.AssetsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetsType = value["AssetsType"].GetInt64();
        m_assetsTypeHasBeenSet = true;
    }

    if (value.HasMember("WhiteList") && !value["WhiteList"].IsNull())
    {
        if (!value["WhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.WhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteList = string(value["WhiteList"].GetString());
        m_whiteListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteListData.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteListData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whiteListIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteListId, allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyId, allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetsType, allocator);
    }

    if (m_whiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t WhiteListData::GetWhiteListId() const
{
    return m_whiteListId;
}

void WhiteListData::SetWhiteListId(const int64_t& _whiteListId)
{
    m_whiteListId = _whiteListId;
    m_whiteListIdHasBeenSet = true;
}

bool WhiteListData::WhiteListIdHasBeenSet() const
{
    return m_whiteListIdHasBeenSet;
}

int64_t WhiteListData::GetCompanyId() const
{
    return m_companyId;
}

void WhiteListData::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool WhiteListData::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string WhiteListData::GetBrandName() const
{
    return m_brandName;
}

void WhiteListData::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool WhiteListData::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

int64_t WhiteListData::GetAssetsType() const
{
    return m_assetsType;
}

void WhiteListData::SetAssetsType(const int64_t& _assetsType)
{
    m_assetsType = _assetsType;
    m_assetsTypeHasBeenSet = true;
}

bool WhiteListData::AssetsTypeHasBeenSet() const
{
    return m_assetsTypeHasBeenSet;
}

string WhiteListData::GetWhiteList() const
{
    return m_whiteList;
}

void WhiteListData::SetWhiteList(const string& _whiteList)
{
    m_whiteList = _whiteList;
    m_whiteListHasBeenSet = true;
}

bool WhiteListData::WhiteListHasBeenSet() const
{
    return m_whiteListHasBeenSet;
}

string WhiteListData::GetRemark() const
{
    return m_remark;
}

void WhiteListData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool WhiteListData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string WhiteListData::GetInsertTime() const
{
    return m_insertTime;
}

void WhiteListData::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool WhiteListData::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

