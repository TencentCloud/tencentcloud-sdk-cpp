/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/KBDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

KBDetail::KBDetail() :
    m_iDHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_referUrlHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_relateVulListHasBeenSet(false),
    m_relateVulCountHasBeenSet(false),
    m_relateProductHasBeenSet(false)
{
}

CoreInternalOutcome KBDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Number") && !value["Number"].IsNull())
    {
        if (!value["Number"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.Number` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_number = string(value["Number"].GetString());
        m_numberHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ReferUrl") && !value["ReferUrl"].IsNull())
    {
        if (!value["ReferUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.ReferUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referUrl = string(value["ReferUrl"].GetString());
        m_referUrlHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.NeedRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = value["NeedRestart"].GetBool();
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("RelateVulList") && !value["RelateVulList"].IsNull())
    {
        if (!value["RelateVulList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBDetail.RelateVulList` is not array type"));

        const rapidjson::Value &tmpValue = value["RelateVulList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relateVulList.push_back(item);
        }
        m_relateVulListHasBeenSet = true;
    }

    if (value.HasMember("RelateVulCount") && !value["RelateVulCount"].IsNull())
    {
        if (!value["RelateVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.RelateVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateVulCount = value["RelateVulCount"].GetInt64();
        m_relateVulCountHasBeenSet = true;
    }

    if (value.HasMember("RelateProduct") && !value["RelateProduct"].IsNull())
    {
        if (!value["RelateProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBDetail.RelateProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateProduct = string(value["RelateProduct"].GetString());
        m_relateProductHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_number.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_referUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRestart, allocator);
    }

    if (m_relateVulListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relateVulList.begin(); itr != m_relateVulList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relateVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateVulCount, allocator);
    }

    if (m_relateProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateProduct.c_str(), allocator).Move(), allocator);
    }

}


uint64_t KBDetail::GetID() const
{
    return m_iD;
}

void KBDetail::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KBDetail::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KBDetail::GetNumber() const
{
    return m_number;
}

void KBDetail::SetNumber(const string& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool KBDetail::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string KBDetail::GetName() const
{
    return m_name;
}

void KBDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KBDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KBDetail::GetReferUrl() const
{
    return m_referUrl;
}

void KBDetail::SetReferUrl(const string& _referUrl)
{
    m_referUrl = _referUrl;
    m_referUrlHasBeenSet = true;
}

bool KBDetail::ReferUrlHasBeenSet() const
{
    return m_referUrlHasBeenSet;
}

string KBDetail::GetPublishTime() const
{
    return m_publishTime;
}

void KBDetail::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool KBDetail::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

bool KBDetail::GetNeedRestart() const
{
    return m_needRestart;
}

void KBDetail::SetNeedRestart(const bool& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool KBDetail::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

vector<VulBriefInfo> KBDetail::GetRelateVulList() const
{
    return m_relateVulList;
}

void KBDetail::SetRelateVulList(const vector<VulBriefInfo>& _relateVulList)
{
    m_relateVulList = _relateVulList;
    m_relateVulListHasBeenSet = true;
}

bool KBDetail::RelateVulListHasBeenSet() const
{
    return m_relateVulListHasBeenSet;
}

int64_t KBDetail::GetRelateVulCount() const
{
    return m_relateVulCount;
}

void KBDetail::SetRelateVulCount(const int64_t& _relateVulCount)
{
    m_relateVulCount = _relateVulCount;
    m_relateVulCountHasBeenSet = true;
}

bool KBDetail::RelateVulCountHasBeenSet() const
{
    return m_relateVulCountHasBeenSet;
}

string KBDetail::GetRelateProduct() const
{
    return m_relateProduct;
}

void KBDetail::SetRelateProduct(const string& _relateProduct)
{
    m_relateProduct = _relateProduct;
    m_relateProductHasBeenSet = true;
}

bool KBDetail::RelateProductHasBeenSet() const
{
    return m_relateProductHasBeenSet;
}

