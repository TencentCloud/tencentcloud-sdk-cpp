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

#include <tencentcloud/icr/v20211014/model/GetIndustryV1HomeMembersRespData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Icr::V20211014::Model;
using namespace std;

GetIndustryV1HomeMembersRespData::GetIndustryV1HomeMembersRespData() :
    m_editTimeHasBeenSet(false),
    m_featureListHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_industryTypeHasBeenSet(false),
    m_memberNumHasBeenSet(false),
    m_productListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeListHasBeenSet(false),
    m_userAccountHasBeenSet(false)
{
}

CoreInternalOutcome GetIndustryV1HomeMembersRespData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EditTime") && !value["EditTime"].IsNull())
    {
        if (!value["EditTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.EditTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_editTime = value["EditTime"].GetInt64();
        m_editTimeHasBeenSet = true;
    }

    if (value.HasMember("FeatureList") && !value["FeatureList"].IsNull())
    {
        if (!value["FeatureList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.FeatureList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_featureList.Deserialize(value["FeatureList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_featureListHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("IndustryType") && !value["IndustryType"].IsNull())
    {
        if (!value["IndustryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.IndustryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_industryType = string(value["IndustryType"].GetString());
        m_industryTypeHasBeenSet = true;
    }

    if (value.HasMember("MemberNum") && !value["MemberNum"].IsNull())
    {
        if (!value["MemberNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.MemberNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberNum = value["MemberNum"].GetInt64();
        m_memberNumHasBeenSet = true;
    }

    if (value.HasMember("ProductList") && !value["ProductList"].IsNull())
    {
        if (!value["ProductList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.ProductList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_productList.Deserialize(value["ProductList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_productListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TypeList") && !value["TypeList"].IsNull())
    {
        if (!value["TypeList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.TypeList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_typeList.Deserialize(value["TypeList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeListHasBeenSet = true;
    }

    if (value.HasMember("UserAccount") && !value["UserAccount"].IsNull())
    {
        if (!value["UserAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetIndustryV1HomeMembersRespData.UserAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccount = string(value["UserAccount"].GetString());
        m_userAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetIndustryV1HomeMembersRespData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_editTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editTime, allocator);
    }

    if (m_featureListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_featureList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_industryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndustryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_industryType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberNum, allocator);
    }

    if (m_productListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_productList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_typeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_typeList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAccount.c_str(), allocator).Move(), allocator);
    }

}


int64_t GetIndustryV1HomeMembersRespData::GetEditTime() const
{
    return m_editTime;
}

void GetIndustryV1HomeMembersRespData::SetEditTime(const int64_t& _editTime)
{
    m_editTime = _editTime;
    m_editTimeHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::EditTimeHasBeenSet() const
{
    return m_editTimeHasBeenSet;
}

GetIndustryV1HomeMembersRespFeature GetIndustryV1HomeMembersRespData::GetFeatureList() const
{
    return m_featureList;
}

void GetIndustryV1HomeMembersRespData::SetFeatureList(const GetIndustryV1HomeMembersRespFeature& _featureList)
{
    m_featureList = _featureList;
    m_featureListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::FeatureListHasBeenSet() const
{
    return m_featureListHasBeenSet;
}

string GetIndustryV1HomeMembersRespData::GetID() const
{
    return m_iD;
}

void GetIndustryV1HomeMembersRespData::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GetIndustryV1HomeMembersRespData::GetIndustryType() const
{
    return m_industryType;
}

void GetIndustryV1HomeMembersRespData::SetIndustryType(const string& _industryType)
{
    m_industryType = _industryType;
    m_industryTypeHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::IndustryTypeHasBeenSet() const
{
    return m_industryTypeHasBeenSet;
}

int64_t GetIndustryV1HomeMembersRespData::GetMemberNum() const
{
    return m_memberNum;
}

void GetIndustryV1HomeMembersRespData::SetMemberNum(const int64_t& _memberNum)
{
    m_memberNum = _memberNum;
    m_memberNumHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::MemberNumHasBeenSet() const
{
    return m_memberNumHasBeenSet;
}

GetIndustryV1HomeMembersRespProduct GetIndustryV1HomeMembersRespData::GetProductList() const
{
    return m_productList;
}

void GetIndustryV1HomeMembersRespData::SetProductList(const GetIndustryV1HomeMembersRespProduct& _productList)
{
    m_productList = _productList;
    m_productListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::ProductListHasBeenSet() const
{
    return m_productListHasBeenSet;
}

string GetIndustryV1HomeMembersRespData::GetRemark() const
{
    return m_remark;
}

void GetIndustryV1HomeMembersRespData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t GetIndustryV1HomeMembersRespData::GetStatus() const
{
    return m_status;
}

void GetIndustryV1HomeMembersRespData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

GetIndustryV1HomeMembersRespType GetIndustryV1HomeMembersRespData::GetTypeList() const
{
    return m_typeList;
}

void GetIndustryV1HomeMembersRespData::SetTypeList(const GetIndustryV1HomeMembersRespType& _typeList)
{
    m_typeList = _typeList;
    m_typeListHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::TypeListHasBeenSet() const
{
    return m_typeListHasBeenSet;
}

string GetIndustryV1HomeMembersRespData::GetUserAccount() const
{
    return m_userAccount;
}

void GetIndustryV1HomeMembersRespData::SetUserAccount(const string& _userAccount)
{
    m_userAccount = _userAccount;
    m_userAccountHasBeenSet = true;
}

bool GetIndustryV1HomeMembersRespData::UserAccountHasBeenSet() const
{
    return m_userAccountHasBeenSet;
}

