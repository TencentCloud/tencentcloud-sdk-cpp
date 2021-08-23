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

#include <tencentcloud/cloudhsm/v20191112/model/UsgRuleDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

UsgRuleDetail::UsgRuleDetail() :
    m_inBoundHasBeenSet(false),
    m_outBoundHasBeenSet(false),
    m_sgIdHasBeenSet(false),
    m_sgNameHasBeenSet(false),
    m_sgRemarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome UsgRuleDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InBound") && !value["InBound"].IsNull())
    {
        if (!value["InBound"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.InBound` is not array type"));

        const rapidjson::Value &tmpValue = value["InBound"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsgPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inBound.push_back(item);
        }
        m_inBoundHasBeenSet = true;
    }

    if (value.HasMember("OutBound") && !value["OutBound"].IsNull())
    {
        if (!value["OutBound"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.OutBound` is not array type"));

        const rapidjson::Value &tmpValue = value["OutBound"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsgPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outBound.push_back(item);
        }
        m_outBoundHasBeenSet = true;
    }

    if (value.HasMember("SgId") && !value["SgId"].IsNull())
    {
        if (!value["SgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.SgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgId = string(value["SgId"].GetString());
        m_sgIdHasBeenSet = true;
    }

    if (value.HasMember("SgName") && !value["SgName"].IsNull())
    {
        if (!value["SgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.SgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgName = string(value["SgName"].GetString());
        m_sgNameHasBeenSet = true;
    }

    if (value.HasMember("SgRemark") && !value["SgRemark"].IsNull())
    {
        if (!value["SgRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.SgRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sgRemark = string(value["SgRemark"].GetString());
        m_sgRemarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsgRuleDetail.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsgRuleDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inBound.begin(); itr != m_inBound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outBound.begin(); itr != m_outBound.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

}


vector<UsgPolicy> UsgRuleDetail::GetInBound() const
{
    return m_inBound;
}

void UsgRuleDetail::SetInBound(const vector<UsgPolicy>& _inBound)
{
    m_inBound = _inBound;
    m_inBoundHasBeenSet = true;
}

bool UsgRuleDetail::InBoundHasBeenSet() const
{
    return m_inBoundHasBeenSet;
}

vector<UsgPolicy> UsgRuleDetail::GetOutBound() const
{
    return m_outBound;
}

void UsgRuleDetail::SetOutBound(const vector<UsgPolicy>& _outBound)
{
    m_outBound = _outBound;
    m_outBoundHasBeenSet = true;
}

bool UsgRuleDetail::OutBoundHasBeenSet() const
{
    return m_outBoundHasBeenSet;
}

string UsgRuleDetail::GetSgId() const
{
    return m_sgId;
}

void UsgRuleDetail::SetSgId(const string& _sgId)
{
    m_sgId = _sgId;
    m_sgIdHasBeenSet = true;
}

bool UsgRuleDetail::SgIdHasBeenSet() const
{
    return m_sgIdHasBeenSet;
}

string UsgRuleDetail::GetSgName() const
{
    return m_sgName;
}

void UsgRuleDetail::SetSgName(const string& _sgName)
{
    m_sgName = _sgName;
    m_sgNameHasBeenSet = true;
}

bool UsgRuleDetail::SgNameHasBeenSet() const
{
    return m_sgNameHasBeenSet;
}

string UsgRuleDetail::GetSgRemark() const
{
    return m_sgRemark;
}

void UsgRuleDetail::SetSgRemark(const string& _sgRemark)
{
    m_sgRemark = _sgRemark;
    m_sgRemarkHasBeenSet = true;
}

bool UsgRuleDetail::SgRemarkHasBeenSet() const
{
    return m_sgRemarkHasBeenSet;
}

string UsgRuleDetail::GetCreateTime() const
{
    return m_createTime;
}

void UsgRuleDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UsgRuleDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t UsgRuleDetail::GetVersion() const
{
    return m_version;
}

void UsgRuleDetail::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool UsgRuleDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

