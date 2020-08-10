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

#include <tencentcloud/ocr/v20181119/model/BizLicenseVerifyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

BizLicenseVerifyResult::BizLicenseVerifyResult() :
    m_regNumHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome BizLicenseVerifyResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegNum") && !value["RegNum"].IsNull())
    {
        if (!value["RegNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizLicenseVerifyResult.RegNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regNum = string(value["RegNum"].GetString());
        m_regNumHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizLicenseVerifyResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Error("response `BizLicenseVerifyResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizLicenseVerifyResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regNum.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string BizLicenseVerifyResult::GetRegNum() const
{
    return m_regNum;
}

void BizLicenseVerifyResult::SetRegNum(const string& _regNum)
{
    m_regNum = _regNum;
    m_regNumHasBeenSet = true;
}

bool BizLicenseVerifyResult::RegNumHasBeenSet() const
{
    return m_regNumHasBeenSet;
}

string BizLicenseVerifyResult::GetName() const
{
    return m_name;
}

void BizLicenseVerifyResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BizLicenseVerifyResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BizLicenseVerifyResult::GetAddress() const
{
    return m_address;
}

void BizLicenseVerifyResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool BizLicenseVerifyResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

