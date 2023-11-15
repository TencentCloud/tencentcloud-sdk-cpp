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

#include <tencentcloud/ocr/v20181119/model/IDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

IDCardOCRResponse::IDCardOCRResponse() :
    m_nameHasBeenSet(false),
    m_sexHasBeenSet(false),
    m_nationHasBeenSet(false),
    m_birthHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_idNumHasBeenSet(false),
    m_authorityHasBeenSet(false),
    m_validDateHasBeenSet(false),
    m_advancedInfoHasBeenSet(false),
    m_reflectDetailInfosHasBeenSet(false)
{
}

CoreInternalOutcome IDCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Sex") && !rsp["Sex"].IsNull())
    {
        if (!rsp["Sex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sex = string(rsp["Sex"].GetString());
        m_sexHasBeenSet = true;
    }

    if (rsp.HasMember("Nation") && !rsp["Nation"].IsNull())
    {
        if (!rsp["Nation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nation = string(rsp["Nation"].GetString());
        m_nationHasBeenSet = true;
    }

    if (rsp.HasMember("Birth") && !rsp["Birth"].IsNull())
    {
        if (!rsp["Birth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Birth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birth = string(rsp["Birth"].GetString());
        m_birthHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("IdNum") && !rsp["IdNum"].IsNull())
    {
        if (!rsp["IdNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNum = string(rsp["IdNum"].GetString());
        m_idNumHasBeenSet = true;
    }

    if (rsp.HasMember("Authority") && !rsp["Authority"].IsNull())
    {
        if (!rsp["Authority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authority = string(rsp["Authority"].GetString());
        m_authorityHasBeenSet = true;
    }

    if (rsp.HasMember("ValidDate") && !rsp["ValidDate"].IsNull())
    {
        if (!rsp["ValidDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValidDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validDate = string(rsp["ValidDate"].GetString());
        m_validDateHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedInfo") && !rsp["AdvancedInfo"].IsNull())
    {
        if (!rsp["AdvancedInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedInfo = string(rsp["AdvancedInfo"].GetString());
        m_advancedInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ReflectDetailInfos") && !rsp["ReflectDetailInfos"].IsNull())
    {
        if (!rsp["ReflectDetailInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReflectDetailInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReflectDetailInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReflectDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reflectDetailInfos.push_back(item);
        }
        m_reflectDetailInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string IDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sex.c_str(), allocator).Move(), allocator);
    }

    if (m_nationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nation.c_str(), allocator).Move(), allocator);
    }

    if (m_birthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birth.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNum.c_str(), allocator).Move(), allocator);
    }

    if (m_authorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authority.c_str(), allocator).Move(), allocator);
    }

    if (m_validDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validDate.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_reflectDetailInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReflectDetailInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reflectDetailInfos.begin(); itr != m_reflectDetailInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string IDCardOCRResponse::GetName() const
{
    return m_name;
}

bool IDCardOCRResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IDCardOCRResponse::GetSex() const
{
    return m_sex;
}

bool IDCardOCRResponse::SexHasBeenSet() const
{
    return m_sexHasBeenSet;
}

string IDCardOCRResponse::GetNation() const
{
    return m_nation;
}

bool IDCardOCRResponse::NationHasBeenSet() const
{
    return m_nationHasBeenSet;
}

string IDCardOCRResponse::GetBirth() const
{
    return m_birth;
}

bool IDCardOCRResponse::BirthHasBeenSet() const
{
    return m_birthHasBeenSet;
}

string IDCardOCRResponse::GetAddress() const
{
    return m_address;
}

bool IDCardOCRResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string IDCardOCRResponse::GetIdNum() const
{
    return m_idNum;
}

bool IDCardOCRResponse::IdNumHasBeenSet() const
{
    return m_idNumHasBeenSet;
}

string IDCardOCRResponse::GetAuthority() const
{
    return m_authority;
}

bool IDCardOCRResponse::AuthorityHasBeenSet() const
{
    return m_authorityHasBeenSet;
}

string IDCardOCRResponse::GetValidDate() const
{
    return m_validDate;
}

bool IDCardOCRResponse::ValidDateHasBeenSet() const
{
    return m_validDateHasBeenSet;
}

string IDCardOCRResponse::GetAdvancedInfo() const
{
    return m_advancedInfo;
}

bool IDCardOCRResponse::AdvancedInfoHasBeenSet() const
{
    return m_advancedInfoHasBeenSet;
}

vector<ReflectDetailInfo> IDCardOCRResponse::GetReflectDetailInfos() const
{
    return m_reflectDetailInfos;
}

bool IDCardOCRResponse::ReflectDetailInfosHasBeenSet() const
{
    return m_reflectDetailInfosHasBeenSet;
}


