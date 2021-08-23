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

#include <tencentcloud/cloudhsm/v20191112/model/SgUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

SgUnit::SgUnit() :
    m_sgIdHasBeenSet(false),
    m_sgNameHasBeenSet(false),
    m_sgRemarkHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome SgUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SgId") && !value["SgId"].IsNull())
    {
        if (!value["SgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgUnit.SgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgId = string(value["SgId"].GetString());
        m_sgIdHasBeenSet = true;
    }

    if (value.HasMember("SgName") && !value["SgName"].IsNull())
    {
        if (!value["SgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgUnit.SgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgName = string(value["SgName"].GetString());
        m_sgNameHasBeenSet = true;
    }

    if (value.HasMember("SgRemark") && !value["SgRemark"].IsNull())
    {
        if (!value["SgRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgUnit.SgRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgRemark = string(value["SgRemark"].GetString());
        m_sgRemarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SgUnit.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SgUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sgId.c_str(), allocator).Move(), allocator);
    }

    if (m_sgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sgName.c_str(), allocator).Move(), allocator);
    }

    if (m_sgRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sgRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string SgUnit::GetSgId() const
{
    return m_sgId;
}

void SgUnit::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool SgUnit::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string SgUnit::GetSgName() const
{
    return m_sgName;
}

void SgUnit::SetSgName(const string& _sgName)
{
    m_sgName = _sgName;
    m_sgNameHasBeenSet = true;
}

bool SgUnit::SgNameHasBeenSet() const
{
    return m_sgNameHasBeenSet;
}

string SgUnit::GetSgRemark() const
{
    return m_sgRemark;
}

void SgUnit::SetSgRemark(const string& _sgRemark)
{
    m_sgRemark = _sgRemark;
    m_sgRemarkHasBeenSet = true;
}

bool SgUnit::SgRemarkHasBeenSet() const
{
    return m_sgRemarkHasBeenSet;
}

string SgUnit::GetCreateTime() const
{
    return m_createTime;
}

void SgUnit::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SgUnit::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

