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

#include <tencentcloud/solar/v20181011/model/DescribeCustomerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace rapidjson;
using namespace std;

DescribeCustomerResponse::DescribeCustomerResponse() :
    m_addressListHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_birthdayHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_industrysHasBeenSet(false),
    m_lastActiveTimeHasBeenSet(false),
    m_markFlagHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_payFeatureHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_phoneListHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_relChannelFlagHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_sourceAudienceVoHasBeenSet(false),
    m_subWechatsHasBeenSet(false),
    m_unionIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_userTypesHasBeenSet(false),
    m_wxCityHasBeenSet(false),
    m_wxCountryHasBeenSet(false),
    m_wxNicknameHasBeenSet(false),
    m_wxProvinceHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomerResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AddressList") && !rsp["AddressList"].IsNull())
    {
        if (!rsp["AddressList"].IsArray())
            return CoreInternalOutcome(Error("response `AddressList` is not array type"));

        const Value &tmpValue = rsp["AddressList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_addressList.push_back((*itr).GetString());
        }
        m_addressListHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("Avatar") && !rsp["Avatar"].IsNull())
    {
        if (!rsp["Avatar"].IsString())
        {
            return CoreInternalOutcome(Error("response `Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(rsp["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (rsp.HasMember("Birthday") && !rsp["Birthday"].IsNull())
    {
        if (!rsp["Birthday"].IsString())
        {
            return CoreInternalOutcome(Error("response `Birthday` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthday = string(rsp["Birthday"].GetString());
        m_birthdayHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Device") && !rsp["Device"].IsNull())
    {
        if (!rsp["Device"].IsString())
        {
            return CoreInternalOutcome(Error("response `Device` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_device = string(rsp["Device"].GetString());
        m_deviceHasBeenSet = true;
    }

    if (rsp.HasMember("Industrys") && !rsp["Industrys"].IsNull())
    {
        if (!rsp["Industrys"].IsArray())
            return CoreInternalOutcome(Error("response `Industrys` is not array type"));

        const Value &tmpValue = rsp["Industrys"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_industrys.push_back((*itr).GetString());
        }
        m_industrysHasBeenSet = true;
    }

    if (rsp.HasMember("LastActiveTime") && !rsp["LastActiveTime"].IsNull())
    {
        if (!rsp["LastActiveTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `LastActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastActiveTime = string(rsp["LastActiveTime"].GetString());
        m_lastActiveTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MarkFlag") && !rsp["MarkFlag"].IsNull())
    {
        if (!rsp["MarkFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `MarkFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markFlag = string(rsp["MarkFlag"].GetString());
        m_markFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Model") && !rsp["Model"].IsNull())
    {
        if (!rsp["Model"].IsString())
        {
            return CoreInternalOutcome(Error("response `Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(rsp["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (rsp.HasMember("OpenId") && !rsp["OpenId"].IsNull())
    {
        if (!rsp["OpenId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(rsp["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (rsp.HasMember("PayFeature") && !rsp["PayFeature"].IsNull())
    {
        if (!rsp["PayFeature"].IsString())
        {
            return CoreInternalOutcome(Error("response `PayFeature` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payFeature = string(rsp["PayFeature"].GetString());
        m_payFeatureHasBeenSet = true;
    }

    if (rsp.HasMember("Phone") && !rsp["Phone"].IsNull())
    {
        if (!rsp["Phone"].IsString())
        {
            return CoreInternalOutcome(Error("response `Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(rsp["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (rsp.HasMember("PhoneList") && !rsp["PhoneList"].IsNull())
    {
        if (!rsp["PhoneList"].IsString())
        {
            return CoreInternalOutcome(Error("response `PhoneList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneList = string(rsp["PhoneList"].GetString());
        m_phoneListHasBeenSet = true;
    }

    if (rsp.HasMember("Province") && !rsp["Province"].IsNull())
    {
        if (!rsp["Province"].IsString())
        {
            return CoreInternalOutcome(Error("response `Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(rsp["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (rsp.HasMember("RealName") && !rsp["RealName"].IsNull())
    {
        if (!rsp["RealName"].IsString())
        {
            return CoreInternalOutcome(Error("response `RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(rsp["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (rsp.HasMember("RelChannelFlag") && !rsp["RelChannelFlag"].IsNull())
    {
        if (!rsp["RelChannelFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `RelChannelFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relChannelFlag = string(rsp["RelChannelFlag"].GetString());
        m_relChannelFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("SourceAudienceVo") && !rsp["SourceAudienceVo"].IsNull())
    {
        if (!rsp["SourceAudienceVo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SourceAudienceVo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceAudienceVo = string(rsp["SourceAudienceVo"].GetString());
        m_sourceAudienceVoHasBeenSet = true;
    }

    if (rsp.HasMember("SubWechats") && !rsp["SubWechats"].IsNull())
    {
        if (!rsp["SubWechats"].IsArray())
            return CoreInternalOutcome(Error("response `SubWechats` is not array type"));

        const Value &tmpValue = rsp["SubWechats"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subWechats.push_back((*itr).GetString());
        }
        m_subWechatsHasBeenSet = true;
    }

    if (rsp.HasMember("UnionId") && !rsp["UnionId"].IsNull())
    {
        if (!rsp["UnionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `UnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unionId = string(rsp["UnionId"].GetString());
        m_unionIdHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UserTypes") && !rsp["UserTypes"].IsNull())
    {
        if (!rsp["UserTypes"].IsArray())
            return CoreInternalOutcome(Error("response `UserTypes` is not array type"));

        const Value &tmpValue = rsp["UserTypes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userTypes.push_back((*itr).GetString());
        }
        m_userTypesHasBeenSet = true;
    }

    if (rsp.HasMember("WxCity") && !rsp["WxCity"].IsNull())
    {
        if (!rsp["WxCity"].IsString())
        {
            return CoreInternalOutcome(Error("response `WxCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxCity = string(rsp["WxCity"].GetString());
        m_wxCityHasBeenSet = true;
    }

    if (rsp.HasMember("WxCountry") && !rsp["WxCountry"].IsNull())
    {
        if (!rsp["WxCountry"].IsString())
        {
            return CoreInternalOutcome(Error("response `WxCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxCountry = string(rsp["WxCountry"].GetString());
        m_wxCountryHasBeenSet = true;
    }

    if (rsp.HasMember("WxNickname") && !rsp["WxNickname"].IsNull())
    {
        if (!rsp["WxNickname"].IsString())
        {
            return CoreInternalOutcome(Error("response `WxNickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxNickname = string(rsp["WxNickname"].GetString());
        m_wxNicknameHasBeenSet = true;
    }

    if (rsp.HasMember("WxProvince") && !rsp["WxProvince"].IsNull())
    {
        if (!rsp["WxProvince"].IsString())
        {
            return CoreInternalOutcome(Error("response `WxProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wxProvince = string(rsp["WxProvince"].GetString());
        m_wxProvinceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<string> DescribeCustomerResponse::GetAddressList() const
{
    return m_addressList;
}

bool DescribeCustomerResponse::AddressListHasBeenSet() const
{
    return m_addressListHasBeenSet;
}

string DescribeCustomerResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeCustomerResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeCustomerResponse::GetAvatar() const
{
    return m_avatar;
}

bool DescribeCustomerResponse::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string DescribeCustomerResponse::GetBirthday() const
{
    return m_birthday;
}

bool DescribeCustomerResponse::BirthdayHasBeenSet() const
{
    return m_birthdayHasBeenSet;
}

string DescribeCustomerResponse::GetCity() const
{
    return m_city;
}

bool DescribeCustomerResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DescribeCustomerResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeCustomerResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCustomerResponse::GetDevice() const
{
    return m_device;
}

bool DescribeCustomerResponse::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

vector<string> DescribeCustomerResponse::GetIndustrys() const
{
    return m_industrys;
}

bool DescribeCustomerResponse::IndustrysHasBeenSet() const
{
    return m_industrysHasBeenSet;
}

string DescribeCustomerResponse::GetLastActiveTime() const
{
    return m_lastActiveTime;
}

bool DescribeCustomerResponse::LastActiveTimeHasBeenSet() const
{
    return m_lastActiveTimeHasBeenSet;
}

string DescribeCustomerResponse::GetMarkFlag() const
{
    return m_markFlag;
}

bool DescribeCustomerResponse::MarkFlagHasBeenSet() const
{
    return m_markFlagHasBeenSet;
}

string DescribeCustomerResponse::GetModel() const
{
    return m_model;
}

bool DescribeCustomerResponse::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string DescribeCustomerResponse::GetOpenId() const
{
    return m_openId;
}

bool DescribeCustomerResponse::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DescribeCustomerResponse::GetPayFeature() const
{
    return m_payFeature;
}

bool DescribeCustomerResponse::PayFeatureHasBeenSet() const
{
    return m_payFeatureHasBeenSet;
}

string DescribeCustomerResponse::GetPhone() const
{
    return m_phone;
}

bool DescribeCustomerResponse::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeCustomerResponse::GetPhoneList() const
{
    return m_phoneList;
}

bool DescribeCustomerResponse::PhoneListHasBeenSet() const
{
    return m_phoneListHasBeenSet;
}

string DescribeCustomerResponse::GetProvince() const
{
    return m_province;
}

bool DescribeCustomerResponse::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DescribeCustomerResponse::GetRealName() const
{
    return m_realName;
}

bool DescribeCustomerResponse::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string DescribeCustomerResponse::GetRelChannelFlag() const
{
    return m_relChannelFlag;
}

bool DescribeCustomerResponse::RelChannelFlagHasBeenSet() const
{
    return m_relChannelFlagHasBeenSet;
}

string DescribeCustomerResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeCustomerResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeCustomerResponse::GetSex() const
{
    return m_sex;
}

bool DescribeCustomerResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string DescribeCustomerResponse::GetSourceAudienceVo() const
{
    return m_sourceAudienceVo;
}

bool DescribeCustomerResponse::SourceAudienceVoHasBeenSet() const
{
    return m_sourceAudienceVoHasBeenSet;
}

vector<string> DescribeCustomerResponse::GetSubWechats() const
{
    return m_subWechats;
}

bool DescribeCustomerResponse::SubWechatsHasBeenSet() const
{
    return m_subWechatsHasBeenSet;
}

string DescribeCustomerResponse::GetUnionId() const
{
    return m_unionId;
}

bool DescribeCustomerResponse::UnionIdHasBeenSet() const
{
    return m_unionIdHasBeenSet;
}

string DescribeCustomerResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeCustomerResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> DescribeCustomerResponse::GetUserTypes() const
{
    return m_userTypes;
}

bool DescribeCustomerResponse::UserTypesHasBeenSet() const
{
    return m_userTypesHasBeenSet;
}

string DescribeCustomerResponse::GetWxCity() const
{
    return m_wxCity;
}

bool DescribeCustomerResponse::WxCityHasBeenSet() const
{
    return m_wxCityHasBeenSet;
}

string DescribeCustomerResponse::GetWxCountry() const
{
    return m_wxCountry;
}

bool DescribeCustomerResponse::WxCountryHasBeenSet() const
{
    return m_wxCountryHasBeenSet;
}

string DescribeCustomerResponse::GetWxNickname() const
{
    return m_wxNickname;
}

bool DescribeCustomerResponse::WxNicknameHasBeenSet() const
{
    return m_wxNicknameHasBeenSet;
}

string DescribeCustomerResponse::GetWxProvince() const
{
    return m_wxProvince;
}

bool DescribeCustomerResponse::WxProvinceHasBeenSet() const
{
    return m_wxProvinceHasBeenSet;
}


