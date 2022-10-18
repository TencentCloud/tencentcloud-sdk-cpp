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

#include <tencentcloud/ssl/v20191205/model/PackageTransferOutInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

PackageTransferOutInfo::PackageTransferOutInfo() :
    m_packageIdHasBeenSet(false),
    m_transferCodeHasBeenSet(false),
    m_transferCountHasBeenSet(false),
    m_receivePackageIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_transferStatusHasBeenSet(false),
    m_receiverUinHasBeenSet(false),
    m_receiveTimeHasBeenSet(false)
{
}

CoreInternalOutcome PackageTransferOutInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("TransferCode") && !value["TransferCode"].IsNull())
    {
        if (!value["TransferCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.TransferCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferCode = string(value["TransferCode"].GetString());
        m_transferCodeHasBeenSet = true;
    }

    if (value.HasMember("TransferCount") && !value["TransferCount"].IsNull())
    {
        if (!value["TransferCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.TransferCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transferCount = value["TransferCount"].GetUint64();
        m_transferCountHasBeenSet = true;
    }

    if (value.HasMember("ReceivePackageId") && !value["ReceivePackageId"].IsNull())
    {
        if (!value["ReceivePackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.ReceivePackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receivePackageId = string(value["ReceivePackageId"].GetString());
        m_receivePackageIdHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TransferStatus") && !value["TransferStatus"].IsNull())
    {
        if (!value["TransferStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.TransferStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferStatus = string(value["TransferStatus"].GetString());
        m_transferStatusHasBeenSet = true;
    }

    if (value.HasMember("ReceiverUin") && !value["ReceiverUin"].IsNull())
    {
        if (!value["ReceiverUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.ReceiverUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverUin = value["ReceiverUin"].GetUint64();
        m_receiverUinHasBeenSet = true;
    }

    if (value.HasMember("ReceiveTime") && !value["ReceiveTime"].IsNull())
    {
        if (!value["ReceiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageTransferOutInfo.ReceiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiveTime = string(value["ReceiveTime"].GetString());
        m_receiveTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageTransferOutInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_transferCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferCode.c_str(), allocator).Move(), allocator);
    }

    if (m_transferCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferCount, allocator);
    }

    if (m_receivePackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivePackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receivePackageId.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_transferStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverUin, allocator);
    }

    if (m_receiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiveTime.c_str(), allocator).Move(), allocator);
    }

}


string PackageTransferOutInfo::GetPackageId() const
{
    return m_packageId;
}

void PackageTransferOutInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PackageTransferOutInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PackageTransferOutInfo::GetTransferCode() const
{
    return m_transferCode;
}

void PackageTransferOutInfo::SetTransferCode(const string& _transferCode)
{
    m_transferCode = _transferCode;
    m_transferCodeHasBeenSet = true;
}

bool PackageTransferOutInfo::TransferCodeHasBeenSet() const
{
    return m_transferCodeHasBeenSet;
}

uint64_t PackageTransferOutInfo::GetTransferCount() const
{
    return m_transferCount;
}

void PackageTransferOutInfo::SetTransferCount(const uint64_t& _transferCount)
{
    m_transferCount = _transferCount;
    m_transferCountHasBeenSet = true;
}

bool PackageTransferOutInfo::TransferCountHasBeenSet() const
{
    return m_transferCountHasBeenSet;
}

string PackageTransferOutInfo::GetReceivePackageId() const
{
    return m_receivePackageId;
}

void PackageTransferOutInfo::SetReceivePackageId(const string& _receivePackageId)
{
    m_receivePackageId = _receivePackageId;
    m_receivePackageIdHasBeenSet = true;
}

bool PackageTransferOutInfo::ReceivePackageIdHasBeenSet() const
{
    return m_receivePackageIdHasBeenSet;
}

string PackageTransferOutInfo::GetExpireTime() const
{
    return m_expireTime;
}

void PackageTransferOutInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PackageTransferOutInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string PackageTransferOutInfo::GetCreateTime() const
{
    return m_createTime;
}

void PackageTransferOutInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PackageTransferOutInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PackageTransferOutInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PackageTransferOutInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PackageTransferOutInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PackageTransferOutInfo::GetTransferStatus() const
{
    return m_transferStatus;
}

void PackageTransferOutInfo::SetTransferStatus(const string& _transferStatus)
{
    m_transferStatus = _transferStatus;
    m_transferStatusHasBeenSet = true;
}

bool PackageTransferOutInfo::TransferStatusHasBeenSet() const
{
    return m_transferStatusHasBeenSet;
}

uint64_t PackageTransferOutInfo::GetReceiverUin() const
{
    return m_receiverUin;
}

void PackageTransferOutInfo::SetReceiverUin(const uint64_t& _receiverUin)
{
    m_receiverUin = _receiverUin;
    m_receiverUinHasBeenSet = true;
}

bool PackageTransferOutInfo::ReceiverUinHasBeenSet() const
{
    return m_receiverUinHasBeenSet;
}

string PackageTransferOutInfo::GetReceiveTime() const
{
    return m_receiveTime;
}

void PackageTransferOutInfo::SetReceiveTime(const string& _receiveTime)
{
    m_receiveTime = _receiveTime;
    m_receiveTimeHasBeenSet = true;
}

bool PackageTransferOutInfo::ReceiveTimeHasBeenSet() const
{
    return m_receiveTimeHasBeenSet;
}

