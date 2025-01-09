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

#include <tencentcloud/iotexplorer/v20190423/model/LicenseServiceNumInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

LicenseServiceNumInfo::LicenseServiceNumInfo() :
    m_licenseTypeHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_tWeCallLicenseHasBeenSet(false)
{
}

CoreInternalOutcome LicenseServiceNumInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseServiceNumInfo.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseServiceNumInfo.TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseServiceNumInfo.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("TWeCallLicense") && !value["TWeCallLicense"].IsNull())
    {
        if (!value["TWeCallLicense"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LicenseServiceNumInfo.TWeCallLicense` is not array type"));

        const rapidjson::Value &tmpValue = value["TWeCallLicense"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TWeCallLicenseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tWeCallLicense.push_back(item);
        }
        m_tWeCallLicenseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseServiceNumInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_tWeCallLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TWeCallLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tWeCallLicense.begin(); itr != m_tWeCallLicense.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LicenseServiceNumInfo::GetLicenseType() const
{
    return m_licenseType;
}

void LicenseServiceNumInfo::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LicenseServiceNumInfo::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

int64_t LicenseServiceNumInfo::GetTotalNum() const
{
    return m_totalNum;
}

void LicenseServiceNumInfo::SetTotalNum(const int64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool LicenseServiceNumInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t LicenseServiceNumInfo::GetUsedNum() const
{
    return m_usedNum;
}

void LicenseServiceNumInfo::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool LicenseServiceNumInfo::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

vector<TWeCallLicenseInfo> LicenseServiceNumInfo::GetTWeCallLicense() const
{
    return m_tWeCallLicense;
}

void LicenseServiceNumInfo::SetTWeCallLicense(const vector<TWeCallLicenseInfo>& _tWeCallLicense)
{
    m_tWeCallLicense = _tWeCallLicense;
    m_tWeCallLicenseHasBeenSet = true;
}

bool LicenseServiceNumInfo::TWeCallLicenseHasBeenSet() const
{
    return m_tWeCallLicenseHasBeenSet;
}

