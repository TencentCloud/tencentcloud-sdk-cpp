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

#include <tencentcloud/ssl/v20191205/model/PackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

PackageInfo::PackageInfo() :
    m_packageIdHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_balanceHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sourceUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_transferOutInfosHasBeenSet(false)
{
}

CoreInternalOutcome PackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Balance") && !value["Balance"].IsNull())
    {
        if (!value["Balance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Balance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_balance = value["Balance"].GetUint64();
        m_balanceHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SourceUin") && !value["SourceUin"].IsNull())
    {
        if (!value["SourceUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.SourceUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceUin = value["SourceUin"].GetUint64();
        m_sourceUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TransferOutInfos") && !value["TransferOutInfos"].IsNull())
    {
        if (!value["TransferOutInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PackageInfo.TransferOutInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TransferOutInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PackageTransferOutInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transferOutInfos.push_back(item);
        }
        m_transferOutInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_balanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Balance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_balance, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceUin, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_transferOutInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferOutInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transferOutInfos.begin(); itr != m_transferOutInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PackageInfo::GetPackageId() const
{
    return m_packageId;
}

void PackageInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t PackageInfo::GetTotal() const
{
    return m_total;
}

void PackageInfo::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool PackageInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t PackageInfo::GetBalance() const
{
    return m_balance;
}

void PackageInfo::SetBalance(const uint64_t& _balance)
{
    m_balance = _balance;
    m_balanceHasBeenSet = true;
}

bool PackageInfo::BalanceHasBeenSet() const
{
    return m_balanceHasBeenSet;
}

string PackageInfo::GetType() const
{
    return m_type;
}

void PackageInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PackageInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t PackageInfo::GetSourceUin() const
{
    return m_sourceUin;
}

void PackageInfo::SetSourceUin(const uint64_t& _sourceUin)
{
    m_sourceUin = _sourceUin;
    m_sourceUinHasBeenSet = true;
}

bool PackageInfo::SourceUinHasBeenSet() const
{
    return m_sourceUinHasBeenSet;
}

string PackageInfo::GetStatus() const
{
    return m_status;
}

void PackageInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PackageInfo::GetExpireTime() const
{
    return m_expireTime;
}

void PackageInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PackageInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string PackageInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PackageInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PackageInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PackageInfo::GetCreateTime() const
{
    return m_createTime;
}

void PackageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PackageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PackageInfo::GetSourceType() const
{
    return m_sourceType;
}

void PackageInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool PackageInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

vector<PackageTransferOutInfo> PackageInfo::GetTransferOutInfos() const
{
    return m_transferOutInfos;
}

void PackageInfo::SetTransferOutInfos(const vector<PackageTransferOutInfo>& _transferOutInfos)
{
    m_transferOutInfos = _transferOutInfos;
    m_transferOutInfosHasBeenSet = true;
}

bool PackageInfo::TransferOutInfosHasBeenSet() const
{
    return m_transferOutInfosHasBeenSet;
}

