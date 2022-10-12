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

#include <tencentcloud/wav/v20210129/model/ClueInfoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ClueInfoDetail::ClueInfoDetail() :
    m_clueIdHasBeenSet(false),
    m_dealerIdHasBeenSet(false),
    m_enquireTimeHasBeenSet(false),
    m_unionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_seriesCodeHasBeenSet(false),
    m_modelCodeHasBeenSet(false),
    m_provinceCodeHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_salesPhoneHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome ClueInfoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClueId") && !value["ClueId"].IsNull())
    {
        if (!value["ClueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ClueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clueId = string(value["ClueId"].GetString());
        m_clueIdHasBeenSet = true;
    }

    if (value.HasMember("DealerId") && !value["DealerId"].IsNull())
    {
        if (!value["DealerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.DealerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerId = string(value["DealerId"].GetString());
        m_dealerIdHasBeenSet = true;
    }

    if (value.HasMember("EnquireTime") && !value["EnquireTime"].IsNull())
    {
        if (!value["EnquireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.EnquireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enquireTime = value["EnquireTime"].GetUint64();
        m_enquireTimeHasBeenSet = true;
    }

    if (value.HasMember("UnionId") && !value["UnionId"].IsNull())
    {
        if (!value["UnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.UnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionId = string(value["UnionId"].GetString());
        m_unionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("SeriesCode") && !value["SeriesCode"].IsNull())
    {
        if (!value["SeriesCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SeriesCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seriesCode = string(value["SeriesCode"].GetString());
        m_seriesCodeHasBeenSet = true;
    }

    if (value.HasMember("ModelCode") && !value["ModelCode"].IsNull())
    {
        if (!value["ModelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ModelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelCode = string(value["ModelCode"].GetString());
        m_modelCodeHasBeenSet = true;
    }

    if (value.HasMember("ProvinceCode") && !value["ProvinceCode"].IsNull())
    {
        if (!value["ProvinceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.ProvinceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceCode = string(value["ProvinceCode"].GetString());
        m_provinceCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCode") && !value["CityCode"].IsNull())
    {
        if (!value["CityCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.CityCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = string(value["CityCode"].GetString());
        m_cityCodeHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("SalesPhone") && !value["SalesPhone"].IsNull())
    {
        if (!value["SalesPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.SalesPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesPhone = string(value["SalesPhone"].GetString());
        m_salesPhoneHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClueInfoDetail.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClueInfoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clueId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerId.c_str(), allocator).Move(), allocator);
    }

    if (m_enquireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnquireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enquireTime, allocator);
    }

    if (m_unionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seriesCode.c_str(), allocator).Move(), allocator);
    }

    if (m_modelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_cityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityCode.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_salesPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string ClueInfoDetail::GetClueId() const
{
    return m_clueId;
}

void ClueInfoDetail::SetClueId(const string& _clueId)
{
    m_clueId = _clueId;
    m_clueIdHasBeenSet = true;
}

bool ClueInfoDetail::ClueIdHasBeenSet() const
{
    return m_clueIdHasBeenSet;
}

string ClueInfoDetail::GetDealerId() const
{
    return m_dealerId;
}

void ClueInfoDetail::SetDealerId(const string& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool ClueInfoDetail::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

uint64_t ClueInfoDetail::GetEnquireTime() const
{
    return m_enquireTime;
}

void ClueInfoDetail::SetEnquireTime(const uint64_t& _enquireTime)
{
    m_enquireTime = _enquireTime;
    m_enquireTimeHasBeenSet = true;
}

bool ClueInfoDetail::EnquireTimeHasBeenSet() const
{
    return m_enquireTimeHasBeenSet;
}

string ClueInfoDetail::GetUnionId() const
{
    return m_unionId;
}

void ClueInfoDetail::SetUnionId(const string& _unionId)
{
    m_unionId = _unionId;
    m_unionIdHasBeenSet = true;
}

bool ClueInfoDetail::UnionIdHasBeenSet() const
{
    return m_unionIdHasBeenSet;
}

string ClueInfoDetail::GetName() const
{
    return m_name;
}

void ClueInfoDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClueInfoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ClueInfoDetail::GetPhone() const
{
    return m_phone;
}

void ClueInfoDetail::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ClueInfoDetail::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ClueInfoDetail::GetSeriesCode() const
{
    return m_seriesCode;
}

void ClueInfoDetail::SetSeriesCode(const string& _seriesCode)
{
    m_seriesCode = _seriesCode;
    m_seriesCodeHasBeenSet = true;
}

bool ClueInfoDetail::SeriesCodeHasBeenSet() const
{
    return m_seriesCodeHasBeenSet;
}

string ClueInfoDetail::GetModelCode() const
{
    return m_modelCode;
}

void ClueInfoDetail::SetModelCode(const string& _modelCode)
{
    m_modelCode = _modelCode;
    m_modelCodeHasBeenSet = true;
}

bool ClueInfoDetail::ModelCodeHasBeenSet() const
{
    return m_modelCodeHasBeenSet;
}

string ClueInfoDetail::GetProvinceCode() const
{
    return m_provinceCode;
}

void ClueInfoDetail::SetProvinceCode(const string& _provinceCode)
{
    m_provinceCode = _provinceCode;
    m_provinceCodeHasBeenSet = true;
}

bool ClueInfoDetail::ProvinceCodeHasBeenSet() const
{
    return m_provinceCodeHasBeenSet;
}

string ClueInfoDetail::GetCityCode() const
{
    return m_cityCode;
}

void ClueInfoDetail::SetCityCode(const string& _cityCode)
{
    m_cityCode = _cityCode;
    m_cityCodeHasBeenSet = true;
}

bool ClueInfoDetail::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

string ClueInfoDetail::GetSalesName() const
{
    return m_salesName;
}

void ClueInfoDetail::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool ClueInfoDetail::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string ClueInfoDetail::GetSalesPhone() const
{
    return m_salesPhone;
}

void ClueInfoDetail::SetSalesPhone(const string& _salesPhone)
{
    m_salesPhone = _salesPhone;
    m_salesPhoneHasBeenSet = true;
}

bool ClueInfoDetail::SalesPhoneHasBeenSet() const
{
    return m_salesPhoneHasBeenSet;
}

string ClueInfoDetail::GetRemark() const
{
    return m_remark;
}

void ClueInfoDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ClueInfoDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ClueInfoDetail::GetTagList() const
{
    return m_tagList;
}

void ClueInfoDetail::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ClueInfoDetail::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string ClueInfoDetail::GetUserName() const
{
    return m_userName;
}

void ClueInfoDetail::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ClueInfoDetail::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

