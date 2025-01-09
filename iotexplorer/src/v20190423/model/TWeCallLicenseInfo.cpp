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

#include <tencentcloud/iotexplorer/v20190423/model/TWeCallLicenseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

TWeCallLicenseInfo::TWeCallLicenseInfo() :
    m_tWeCallTypeHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_usedNumHasBeenSet(false)
{
}

CoreInternalOutcome TWeCallLicenseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TWeCallType") && !value["TWeCallType"].IsNull())
    {
        if (!value["TWeCallType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallLicenseInfo.TWeCallType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tWeCallType = string(value["TWeCallType"].GetString());
        m_tWeCallTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallLicenseInfo.TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TWeCallLicenseInfo.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TWeCallLicenseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tWeCallTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TWeCallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tWeCallType.c_str(), allocator).Move(), allocator);
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

}


string TWeCallLicenseInfo::GetTWeCallType() const
{
    return m_tWeCallType;
}

void TWeCallLicenseInfo::SetTWeCallType(const string& _tWeCallType)
{
    m_tWeCallType = _tWeCallType;
    m_tWeCallTypeHasBeenSet = true;
}

bool TWeCallLicenseInfo::TWeCallTypeHasBeenSet() const
{
    return m_tWeCallTypeHasBeenSet;
}

int64_t TWeCallLicenseInfo::GetTotalNum() const
{
    return m_totalNum;
}

void TWeCallLicenseInfo::SetTotalNum(const int64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool TWeCallLicenseInfo::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t TWeCallLicenseInfo::GetUsedNum() const
{
    return m_usedNum;
}

void TWeCallLicenseInfo::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool TWeCallLicenseInfo::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

