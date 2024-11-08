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

#include <tencentcloud/ocr/v20181119/model/ResidencePermitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ResidencePermitInfo::ResidencePermitInfo() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_warnInfosHasBeenSet(false),
    m_cardImageHasBeenSet(false),
    m_portraitImageHasBeenSet(false),
    m_passNumHasBeenSet(false),
    m_issueNumHasBeenSet(false)
{
}

CoreInternalOutcome ResidencePermitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sex") && !value["Sex"].IsNull())
    {
        if (!value["Sex"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Sex` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sex.Deserialize(value["Sex"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sexHasBeenSet = true;
    }

    if (value.HasMember("Nation") && !value["Nation"].IsNull())
    {
        if (!value["Nation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Nation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nation.Deserialize(value["Nation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nationHasBeenSet = true;
    }

    if (value.HasMember("Birth") && !value["Birth"].IsNull())
    {
        if (!value["Birth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Birth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_birth.Deserialize(value["Birth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_birthHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Address` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_address.Deserialize(value["Address"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addressHasBeenSet = true;
    }

    if (value.HasMember("IdNum") && !value["IdNum"].IsNull())
    {
        if (!value["IdNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.IdNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_idNum.Deserialize(value["IdNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_idNumHasBeenSet = true;
    }

    if (value.HasMember("Authority") && !value["Authority"].IsNull())
    {
        if (!value["Authority"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.Authority` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authority.Deserialize(value["Authority"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authorityHasBeenSet = true;
    }

    if (value.HasMember("ValidDate") && !value["ValidDate"].IsNull())
    {
        if (!value["ValidDate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.ValidDate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_validDate.Deserialize(value["ValidDate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_validDateHasBeenSet = true;
    }

    if (value.HasMember("WarnInfos") && !value["WarnInfos"].IsNull())
    {
        if (!value["WarnInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.WarnInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_warnInfos.Deserialize(value["WarnInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_warnInfosHasBeenSet = true;
    }

    if (value.HasMember("CardImage") && !value["CardImage"].IsNull())
    {
        if (!value["CardImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.CardImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardImage.Deserialize(value["CardImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardImageHasBeenSet = true;
    }

    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.PortraitImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portraitImage.Deserialize(value["PortraitImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portraitImageHasBeenSet = true;
    }

    if (value.HasMember("PassNum") && !value["PassNum"].IsNull())
    {
        if (!value["PassNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.PassNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_passNum.Deserialize(value["PassNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passNumHasBeenSet = true;
    }

    if (value.HasMember("IssueNum") && !value["IssueNum"].IsNull())
    {
        if (!value["IssueNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResidencePermitInfo.IssueNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_issueNum.Deserialize(value["IssueNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_issueNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResidencePermitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sex.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_address.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_idNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authority.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_validDate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_warnInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_warnInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portraitImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_passNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_issueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_issueNum.ToJsonObject(value[key.c_str()], allocator);
    }

}


ContentInfo ResidencePermitInfo::GetName() const
{
    return m_name;
}

void ResidencePermitInfo::SetName(const ContentInfo& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResidencePermitInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetSex() const
{
    return m_sex;
}

void ResidencePermitInfo::SetSex(const ContentInfo& _sex)
{
    m_sex = _sex;
    m_sexHasBeenSet = true;
}

bool ResidencePermitInfo::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetNation() const
{
    return m_nation;
}

void ResidencePermitInfo::SetNation(const ContentInfo& _nation)
{
    m_nation = _nation;
    m_nationHasBeenSet = true;
}

bool ResidencePermitInfo::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetBirth() const
{
    return m_birth;
}

void ResidencePermitInfo::SetBirth(const ContentInfo& _birth)
{
    m_birth = _birth;
    m_birthHasBeenSet = true;
}

bool ResidencePermitInfo::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetAddress() const
{
    return m_address;
}

void ResidencePermitInfo::SetAddress(const ContentInfo& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ResidencePermitInfo::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetIdNum() const
{
    return m_idNum;
}

void ResidencePermitInfo::SetIdNum(const ContentInfo& _idNum)
{
    m_idNum = _idNum;
    m_idNumHasBeenSet = true;
}

bool ResidencePermitInfo::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetAuthority() const
{
    return m_authority;
}

void ResidencePermitInfo::SetAuthority(const ContentInfo& _authority)
{
    m_authority = _authority;
    m_authorityHasBeenSet = true;
}

bool ResidencePermitInfo::AuthorityHasBeenSet() const
{
    return m_authorityHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetValidDate() const
{
    return m_validDate;
}

void ResidencePermitInfo::SetValidDate(const ContentInfo& _validDate)
{
    m_validDate = _validDate;
    m_validDateHasBeenSet = true;
}

bool ResidencePermitInfo::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

CardWarnInfo ResidencePermitInfo::GetWarnInfos() const
{
    return m_warnInfos;
}

void ResidencePermitInfo::SetWarnInfos(const CardWarnInfo& _warnInfos)
{
    m_warnInfos = _warnInfos;
    m_warnInfosHasBeenSet = true;
}

bool ResidencePermitInfo::WarnInfosHasBeenSet() const
{
    return m_warnInfosHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetCardImage() const
{
    return m_cardImage;
}

void ResidencePermitInfo::SetCardImage(const ContentInfo& _cardImage)
{
    m_cardImage = _cardImage;
    m_cardImageHasBeenSet = true;
}

bool ResidencePermitInfo::CardImageHasBeenSet() const
{
    return m_cardImageHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void ResidencePermitInfo::SetPortraitImage(const ContentInfo& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool ResidencePermitInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetPassNum() const
{
    return m_passNum;
}

void ResidencePermitInfo::SetPassNum(const ContentInfo& _passNum)
{
    m_passNum = _passNum;
    m_passNumHasBeenSet = true;
}

bool ResidencePermitInfo::PassNumHasBeenSet() const
{
    return m_passNumHasBeenSet;
}

ContentInfo ResidencePermitInfo::GetIssueNum() const
{
    return m_issueNum;
}

void ResidencePermitInfo::SetIssueNum(const ContentInfo& _issueNum)
{
    m_issueNum = _issueNum;
    m_issueNumHasBeenSet = true;
}

bool ResidencePermitInfo::IssueNumHasBeenSet() const
{
    return m_issueNumHasBeenSet;
}

