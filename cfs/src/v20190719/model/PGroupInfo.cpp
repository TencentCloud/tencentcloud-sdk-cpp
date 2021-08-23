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

#include <tencentcloud/cfs/v20190719/model/PGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

PGroupInfo::PGroupInfo() :
    m_pGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descInfoHasBeenSet(false),
    m_cDateHasBeenSet(false),
    m_bindCfsNumHasBeenSet(false)
{
}

CoreInternalOutcome PGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PGroupId") && !value["PGroupId"].IsNull())
    {
        if (!value["PGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupInfo.PGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGroupId = string(value["PGroupId"].GetString());
        m_pGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DescInfo") && !value["DescInfo"].IsNull())
    {
        if (!value["DescInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupInfo.DescInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descInfo = string(value["DescInfo"].GetString());
        m_descInfoHasBeenSet = true;
    }

    if (value.HasMember("CDate") && !value["CDate"].IsNull())
    {
        if (!value["CDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupInfo.CDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cDate = string(value["CDate"].GetString());
        m_cDateHasBeenSet = true;
    }

    if (value.HasMember("BindCfsNum") && !value["BindCfsNum"].IsNull())
    {
        if (!value["BindCfsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupInfo.BindCfsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindCfsNum = value["BindCfsNum"].GetInt64();
        m_bindCfsNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cDate.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCfsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCfsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindCfsNum, allocator);
    }

}


string PGroupInfo::GetPGroupId() const
{
    return m_pGroupId;
}

void PGroupInfo::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool PGroupInfo::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string PGroupInfo::GetName() const
{
    return m_name;
}

void PGroupInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PGroupInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PGroupInfo::GetDescInfo() const
{
    return m_descInfo;
}

void PGroupInfo::SetDescInfo(const string& _descInfo)
{
    m_descInfo = _descInfo;
    m_descInfoHasBeenSet = true;
}

bool PGroupInfo::DescInfoHasBeenSet() const
{
    return m_descInfoHasBeenSet;
}

string PGroupInfo::GetCDate() const
{
    return m_cDate;
}

void PGroupInfo::SetCDate(const string& _cDate)
{
    m_cDate = _cDate;
    m_cDateHasBeenSet = true;
}

bool PGroupInfo::CDateHasBeenSet() const
{
    return m_cDateHasBeenSet;
}

int64_t PGroupInfo::GetBindCfsNum() const
{
    return m_bindCfsNum;
}

void PGroupInfo::SetBindCfsNum(const int64_t& _bindCfsNum)
{
    m_bindCfsNum = _bindCfsNum;
    m_bindCfsNumHasBeenSet = true;
}

bool PGroupInfo::BindCfsNumHasBeenSet() const
{
    return m_bindCfsNumHasBeenSet;
}

