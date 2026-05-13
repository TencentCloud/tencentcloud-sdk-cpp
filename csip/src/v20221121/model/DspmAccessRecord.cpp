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

#include <tencentcloud/csip/v20221121/model/DspmAccessRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAccessRecord::DspmAccessRecord() :
    m_assetHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_sourceIpListHasBeenSet(false),
    m_recordTimeHasBeenSet(false),
    m_loginSuccessCountHasBeenSet(false),
    m_loginFailedCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmAccessRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Asset") && !value["Asset"].IsNull())
    {
        if (!value["Asset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.Asset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asset.Deserialize(value["Asset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetHasBeenSet = true;
    }

    if (value.HasMember("Accounts") && !value["Accounts"].IsNull())
    {
        if (!value["Accounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.Accounts` is not array type"));

        const rapidjson::Value &tmpValue = value["Accounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmAssetAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accounts.push_back(item);
        }
        m_accountsHasBeenSet = true;
    }

    if (value.HasMember("SourceIpList") && !value["SourceIpList"].IsNull())
    {
        if (!value["SourceIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.SourceIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceIpList.push_back(item);
        }
        m_sourceIpListHasBeenSet = true;
    }

    if (value.HasMember("RecordTime") && !value["RecordTime"].IsNull())
    {
        if (!value["RecordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.RecordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTime = string(value["RecordTime"].GetString());
        m_recordTimeHasBeenSet = true;
    }

    if (value.HasMember("LoginSuccessCount") && !value["LoginSuccessCount"].IsNull())
    {
        if (!value["LoginSuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.LoginSuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginSuccessCount = value["LoginSuccessCount"].GetInt64();
        m_loginSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("LoginFailedCount") && !value["LoginFailedCount"].IsNull())
    {
        if (!value["LoginFailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecord.LoginFailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loginFailedCount = value["LoginFailedCount"].GetInt64();
        m_loginFailedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAccessRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sourceIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceIpList.begin(); itr != m_sourceIpList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_recordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTime.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginSuccessCount, allocator);
    }

    if (m_loginFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loginFailedCount, allocator);
    }

}


DspmDbAsset DspmAccessRecord::GetAsset() const
{
    return m_asset;
}

void DspmAccessRecord::SetAsset(const DspmDbAsset& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool DspmAccessRecord::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

vector<DspmAssetAccount> DspmAccessRecord::GetAccounts() const
{
    return m_accounts;
}

void DspmAccessRecord::SetAccounts(const vector<DspmAssetAccount>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool DspmAccessRecord::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

vector<DspmIp> DspmAccessRecord::GetSourceIpList() const
{
    return m_sourceIpList;
}

void DspmAccessRecord::SetSourceIpList(const vector<DspmIp>& _sourceIpList)
{
    m_sourceIpList = _sourceIpList;
    m_sourceIpListHasBeenSet = true;
}

bool DspmAccessRecord::SourceIpListHasBeenSet() const
{
    return m_sourceIpListHasBeenSet;
}

string DspmAccessRecord::GetRecordTime() const
{
    return m_recordTime;
}

void DspmAccessRecord::SetRecordTime(const string& _recordTime)
{
    m_recordTime = _recordTime;
    m_recordTimeHasBeenSet = true;
}

bool DspmAccessRecord::RecordTimeHasBeenSet() const
{
    return m_recordTimeHasBeenSet;
}

int64_t DspmAccessRecord::GetLoginSuccessCount() const
{
    return m_loginSuccessCount;
}

void DspmAccessRecord::SetLoginSuccessCount(const int64_t& _loginSuccessCount)
{
    m_loginSuccessCount = _loginSuccessCount;
    m_loginSuccessCountHasBeenSet = true;
}

bool DspmAccessRecord::LoginSuccessCountHasBeenSet() const
{
    return m_loginSuccessCountHasBeenSet;
}

int64_t DspmAccessRecord::GetLoginFailedCount() const
{
    return m_loginFailedCount;
}

void DspmAccessRecord::SetLoginFailedCount(const int64_t& _loginFailedCount)
{
    m_loginFailedCount = _loginFailedCount;
    m_loginFailedCountHasBeenSet = true;
}

bool DspmAccessRecord::LoginFailedCountHasBeenSet() const
{
    return m_loginFailedCountHasBeenSet;
}

