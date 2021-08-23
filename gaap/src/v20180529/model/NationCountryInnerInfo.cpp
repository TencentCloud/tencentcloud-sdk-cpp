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

#include <tencentcloud/gaap/v20180529/model/NationCountryInnerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

NationCountryInnerInfo::NationCountryInnerInfo() :
    m_nationCountryNameHasBeenSet(false),
    m_nationCountryInnerCodeHasBeenSet(false)
{
}

CoreInternalOutcome NationCountryInnerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NationCountryName") && !value["NationCountryName"].IsNull())
    {
        if (!value["NationCountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NationCountryInnerInfo.NationCountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCountryName = string(value["NationCountryName"].GetString());
        m_nationCountryNameHasBeenSet = true;
    }

    if (value.HasMember("NationCountryInnerCode") && !value["NationCountryInnerCode"].IsNull())
    {
        if (!value["NationCountryInnerCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NationCountryInnerInfo.NationCountryInnerCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationCountryInnerCode = string(value["NationCountryInnerCode"].GetString());
        m_nationCountryInnerCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NationCountryInnerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nationCountryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCountryName.c_str(), allocator).Move(), allocator);
    }

    if (m_nationCountryInnerCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryInnerCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationCountryInnerCode.c_str(), allocator).Move(), allocator);
    }

}


string NationCountryInnerInfo::GetNationCountryName() const
{
    return m_nationCountryName;
}

void NationCountryInnerInfo::SetNationCountryName(const string& _nationCountryName)
{
    m_nationCountryName = _nationCountryName;
    m_nationCountryNameHasBeenSet = true;
}

bool NationCountryInnerInfo::NationCountryNameHasBeenSet() const
{
    return m_nationCountryNameHasBeenSet;
}

string NationCountryInnerInfo::GetNationCountryInnerCode() const
{
    return m_nationCountryInnerCode;
}

void NationCountryInnerInfo::SetNationCountryInnerCode(const string& _nationCountryInnerCode)
{
    m_nationCountryInnerCode = _nationCountryInnerCode;
    m_nationCountryInnerCodeHasBeenSet = true;
}

bool NationCountryInnerInfo::NationCountryInnerCodeHasBeenSet() const
{
    return m_nationCountryInnerCodeHasBeenSet;
}

