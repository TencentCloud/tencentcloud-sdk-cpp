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

#include <tencentcloud/csip/v20221121/model/DescribeDspmPayInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmPayInfoResponse::DescribeDspmPayInfoResponse() :
    m_appIDHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_assetNumHasBeenSet(false),
    m_logStorageHasBeenSet(false),
    m_usedAssetNumHasBeenSet(false),
    m_usedLogStorageHasBeenSet(false),
    m_sqlTotalHasBeenSet(false),
    m_sqlQpsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isSelfBuyHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_betaEndTimeHasBeenSet(false),
    m_timeNowHasBeenSet(false),
    m_isShareToOtherHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_inquireDataHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmPayInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("OrderStatus") && !rsp["OrderStatus"].IsNull())
    {
        if (!rsp["OrderStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrderStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = rsp["OrderStatus"].GetInt64();
        m_orderStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AssetNum") && !rsp["AssetNum"].IsNull())
    {
        if (!rsp["AssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetNum = rsp["AssetNum"].GetInt64();
        m_assetNumHasBeenSet = true;
    }

    if (rsp.HasMember("LogStorage") && !rsp["LogStorage"].IsNull())
    {
        if (!rsp["LogStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LogStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_logStorage = rsp["LogStorage"].GetDouble();
        m_logStorageHasBeenSet = true;
    }

    if (rsp.HasMember("UsedAssetNum") && !rsp["UsedAssetNum"].IsNull())
    {
        if (!rsp["UsedAssetNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedAssetNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedAssetNum = rsp["UsedAssetNum"].GetInt64();
        m_usedAssetNumHasBeenSet = true;
    }

    if (rsp.HasMember("UsedLogStorage") && !rsp["UsedLogStorage"].IsNull())
    {
        if (!rsp["UsedLogStorage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsedLogStorage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedLogStorage = rsp["UsedLogStorage"].GetDouble();
        m_usedLogStorageHasBeenSet = true;
    }

    if (rsp.HasMember("SqlTotal") && !rsp["SqlTotal"].IsNull())
    {
        if (!rsp["SqlTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTotal = rsp["SqlTotal"].GetUint64();
        m_sqlTotalHasBeenSet = true;
    }

    if (rsp.HasMember("SqlQps") && !rsp["SqlQps"].IsNull())
    {
        if (!rsp["SqlQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sqlQps = rsp["SqlQps"].GetUint64();
        m_sqlQpsHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("IsSelfBuy") && !rsp["IsSelfBuy"].IsNull())
    {
        if (!rsp["IsSelfBuy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsSelfBuy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSelfBuy = rsp["IsSelfBuy"].GetInt64();
        m_isSelfBuyHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenew") && !rsp["AutoRenew"].IsNull())
    {
        if (!rsp["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = rsp["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = rsp["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (rsp.HasMember("TimeUnit") && !rsp["TimeUnit"].IsNull())
    {
        if (!rsp["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(rsp["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("BetaEndTime") && !rsp["BetaEndTime"].IsNull())
    {
        if (!rsp["BetaEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BetaEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_betaEndTime = string(rsp["BetaEndTime"].GetString());
        m_betaEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TimeNow") && !rsp["TimeNow"].IsNull())
    {
        if (!rsp["TimeNow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeNow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeNow = string(rsp["TimeNow"].GetString());
        m_timeNowHasBeenSet = true;
    }

    if (rsp.HasMember("IsShareToOther") && !rsp["IsShareToOther"].IsNull())
    {
        if (!rsp["IsShareToOther"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsShareToOther` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShareToOther = rsp["IsShareToOther"].GetInt64();
        m_isShareToOtherHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("NickName") && !rsp["NickName"].IsNull())
    {
        if (!rsp["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(rsp["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (rsp.HasMember("InquireData") && !rsp["InquireData"].IsNull())
    {
        if (!rsp["InquireData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InquireData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InquireData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InquireInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inquireData.push_back(item);
        }
        m_inquireDataHasBeenSet = true;
    }

    if (rsp.HasMember("Version") && !rsp["Version"].IsNull())
    {
        if (!rsp["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(rsp["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmPayInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_assetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetNum, allocator);
    }

    if (m_logStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logStorage, allocator);
    }

    if (m_usedAssetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAssetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAssetNum, allocator);
    }

    if (m_usedLogStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedLogStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedLogStorage, allocator);
    }

    if (m_sqlTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlTotal, allocator);
    }

    if (m_sqlQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlQps, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_isSelfBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelfBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelfBuy, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_betaEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_betaEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeNow.c_str(), allocator).Move(), allocator);
    }

    if (m_isShareToOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShareToOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShareToOther, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inquireData.begin(); itr != m_inquireData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDspmPayInfoResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeDspmPayInfoResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetOrderStatus() const
{
    return m_orderStatus;
}

bool DescribeDspmPayInfoResponse::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetAssetNum() const
{
    return m_assetNum;
}

bool DescribeDspmPayInfoResponse::AssetNumHasBeenSet() const
{
    return m_assetNumHasBeenSet;
}

double DescribeDspmPayInfoResponse::GetLogStorage() const
{
    return m_logStorage;
}

bool DescribeDspmPayInfoResponse::LogStorageHasBeenSet() const
{
    return m_logStorageHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetUsedAssetNum() const
{
    return m_usedAssetNum;
}

bool DescribeDspmPayInfoResponse::UsedAssetNumHasBeenSet() const
{
    return m_usedAssetNumHasBeenSet;
}

double DescribeDspmPayInfoResponse::GetUsedLogStorage() const
{
    return m_usedLogStorage;
}

bool DescribeDspmPayInfoResponse::UsedLogStorageHasBeenSet() const
{
    return m_usedLogStorageHasBeenSet;
}

uint64_t DescribeDspmPayInfoResponse::GetSqlTotal() const
{
    return m_sqlTotal;
}

bool DescribeDspmPayInfoResponse::SqlTotalHasBeenSet() const
{
    return m_sqlTotalHasBeenSet;
}

uint64_t DescribeDspmPayInfoResponse::GetSqlQps() const
{
    return m_sqlQps;
}

bool DescribeDspmPayInfoResponse::SqlQpsHasBeenSet() const
{
    return m_sqlQpsHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeDspmPayInfoResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetIsSelfBuy() const
{
    return m_isSelfBuy;
}

bool DescribeDspmPayInfoResponse::IsSelfBuyHasBeenSet() const
{
    return m_isSelfBuyHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool DescribeDspmPayInfoResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeDspmPayInfoResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetAutoRenew() const
{
    return m_autoRenew;
}

bool DescribeDspmPayInfoResponse::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool DescribeDspmPayInfoResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool DescribeDspmPayInfoResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeDspmPayInfoResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetBetaEndTime() const
{
    return m_betaEndTime;
}

bool DescribeDspmPayInfoResponse::BetaEndTimeHasBeenSet() const
{
    return m_betaEndTimeHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetTimeNow() const
{
    return m_timeNow;
}

bool DescribeDspmPayInfoResponse::TimeNowHasBeenSet() const
{
    return m_timeNowHasBeenSet;
}

int64_t DescribeDspmPayInfoResponse::GetIsShareToOther() const
{
    return m_isShareToOther;
}

bool DescribeDspmPayInfoResponse::IsShareToOtherHasBeenSet() const
{
    return m_isShareToOtherHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetUin() const
{
    return m_uin;
}

bool DescribeDspmPayInfoResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetNickName() const
{
    return m_nickName;
}

bool DescribeDspmPayInfoResponse::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

vector<InquireInfo> DescribeDspmPayInfoResponse::GetInquireData() const
{
    return m_inquireData;
}

bool DescribeDspmPayInfoResponse::InquireDataHasBeenSet() const
{
    return m_inquireDataHasBeenSet;
}

string DescribeDspmPayInfoResponse::GetVersion() const
{
    return m_version;
}

bool DescribeDspmPayInfoResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}


