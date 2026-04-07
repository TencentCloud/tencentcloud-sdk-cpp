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

#include <tencentcloud/mps/v20190612/model/UsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

UsageDetail::UsageDetail() :
    m_uniqIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_adTypeHasBeenSet(false),
    m_adRequestSuccessHasBeenSet(false),
    m_adRequestFailHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_startHasBeenSet(false),
    m_firstQuarterHasBeenSet(false),
    m_midpointHasBeenSet(false),
    m_thirdQuarterHasBeenSet(false),
    m_completeHasBeenSet(false),
    m_adMarkerTimeHasBeenSet(false),
    m_replacedTimeHasBeenSet(false),
    m_midFillRateHasBeenSet(false),
    m_preReqNumHasBeenSet(false),
    m_preReplacedNumHasBeenSet(false),
    m_preReplaceRateHasBeenSet(false),
    m_aDMarkerFoundHasBeenSet(false),
    m_makeAdsRequestHasBeenSet(false),
    m_vASTResponseHasBeenSet(false),
    m_filledAvailHasBeenSet(false),
    m_warningNoAdHasBeenSet(false),
    m_errorAdsTimeoutHasBeenSet(false),
    m_emptyVASTResponseHasBeenSet(false),
    m_emptyVMAPResponseHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome UsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqId") && !value["UniqId"].IsNull())
    {
        if (!value["UniqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.UniqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqId = string(value["UniqId"].GetString());
        m_uniqIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("AdType") && !value["AdType"].IsNull())
    {
        if (!value["AdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.AdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adType = string(value["AdType"].GetString());
        m_adTypeHasBeenSet = true;
    }

    if (value.HasMember("AdRequestSuccess") && !value["AdRequestSuccess"].IsNull())
    {
        if (!value["AdRequestSuccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.AdRequestSuccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adRequestSuccess = value["AdRequestSuccess"].GetUint64();
        m_adRequestSuccessHasBeenSet = true;
    }

    if (value.HasMember("AdRequestFail") && !value["AdRequestFail"].IsNull())
    {
        if (!value["AdRequestFail"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.AdRequestFail` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adRequestFail = value["AdRequestFail"].GetUint64();
        m_adRequestFailHasBeenSet = true;
    }

    if (value.HasMember("Impression") && !value["Impression"].IsNull())
    {
        if (!value["Impression"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Impression` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impression = value["Impression"].GetUint64();
        m_impressionHasBeenSet = true;
    }

    if (value.HasMember("Start") && !value["Start"].IsNull())
    {
        if (!value["Start"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Start` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_start = value["Start"].GetUint64();
        m_startHasBeenSet = true;
    }

    if (value.HasMember("FirstQuarter") && !value["FirstQuarter"].IsNull())
    {
        if (!value["FirstQuarter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.FirstQuarter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstQuarter = value["FirstQuarter"].GetUint64();
        m_firstQuarterHasBeenSet = true;
    }

    if (value.HasMember("Midpoint") && !value["Midpoint"].IsNull())
    {
        if (!value["Midpoint"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Midpoint` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_midpoint = value["Midpoint"].GetUint64();
        m_midpointHasBeenSet = true;
    }

    if (value.HasMember("ThirdQuarter") && !value["ThirdQuarter"].IsNull())
    {
        if (!value["ThirdQuarter"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ThirdQuarter` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_thirdQuarter = value["ThirdQuarter"].GetUint64();
        m_thirdQuarterHasBeenSet = true;
    }

    if (value.HasMember("Complete") && !value["Complete"].IsNull())
    {
        if (!value["Complete"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Complete` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complete = value["Complete"].GetUint64();
        m_completeHasBeenSet = true;
    }

    if (value.HasMember("AdMarkerTime") && !value["AdMarkerTime"].IsNull())
    {
        if (!value["AdMarkerTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.AdMarkerTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_adMarkerTime = value["AdMarkerTime"].GetDouble();
        m_adMarkerTimeHasBeenSet = true;
    }

    if (value.HasMember("ReplacedTime") && !value["ReplacedTime"].IsNull())
    {
        if (!value["ReplacedTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ReplacedTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_replacedTime = value["ReplacedTime"].GetDouble();
        m_replacedTimeHasBeenSet = true;
    }

    if (value.HasMember("MidFillRate") && !value["MidFillRate"].IsNull())
    {
        if (!value["MidFillRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.MidFillRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_midFillRate = value["MidFillRate"].GetDouble();
        m_midFillRateHasBeenSet = true;
    }

    if (value.HasMember("PreReqNum") && !value["PreReqNum"].IsNull())
    {
        if (!value["PreReqNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.PreReqNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReqNum = value["PreReqNum"].GetUint64();
        m_preReqNumHasBeenSet = true;
    }

    if (value.HasMember("PreReplacedNum") && !value["PreReplacedNum"].IsNull())
    {
        if (!value["PreReplacedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.PreReplacedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReplacedNum = value["PreReplacedNum"].GetUint64();
        m_preReplacedNumHasBeenSet = true;
    }

    if (value.HasMember("PreReplaceRate") && !value["PreReplaceRate"].IsNull())
    {
        if (!value["PreReplaceRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.PreReplaceRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_preReplaceRate = value["PreReplaceRate"].GetDouble();
        m_preReplaceRateHasBeenSet = true;
    }

    if (value.HasMember("ADMarkerFound") && !value["ADMarkerFound"].IsNull())
    {
        if (!value["ADMarkerFound"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ADMarkerFound` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aDMarkerFound = value["ADMarkerFound"].GetUint64();
        m_aDMarkerFoundHasBeenSet = true;
    }

    if (value.HasMember("MakeAdsRequest") && !value["MakeAdsRequest"].IsNull())
    {
        if (!value["MakeAdsRequest"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.MakeAdsRequest` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_makeAdsRequest = value["MakeAdsRequest"].GetUint64();
        m_makeAdsRequestHasBeenSet = true;
    }

    if (value.HasMember("VASTResponse") && !value["VASTResponse"].IsNull())
    {
        if (!value["VASTResponse"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.VASTResponse` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vASTResponse = value["VASTResponse"].GetUint64();
        m_vASTResponseHasBeenSet = true;
    }

    if (value.HasMember("FilledAvail") && !value["FilledAvail"].IsNull())
    {
        if (!value["FilledAvail"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.FilledAvail` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filledAvail = value["FilledAvail"].GetUint64();
        m_filledAvailHasBeenSet = true;
    }

    if (value.HasMember("WarningNoAd") && !value["WarningNoAd"].IsNull())
    {
        if (!value["WarningNoAd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.WarningNoAd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_warningNoAd = value["WarningNoAd"].GetUint64();
        m_warningNoAdHasBeenSet = true;
    }

    if (value.HasMember("ErrorAdsTimeout") && !value["ErrorAdsTimeout"].IsNull())
    {
        if (!value["ErrorAdsTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.ErrorAdsTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_errorAdsTimeout = value["ErrorAdsTimeout"].GetUint64();
        m_errorAdsTimeoutHasBeenSet = true;
    }

    if (value.HasMember("EmptyVASTResponse") && !value["EmptyVASTResponse"].IsNull())
    {
        if (!value["EmptyVASTResponse"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.EmptyVASTResponse` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emptyVASTResponse = value["EmptyVASTResponse"].GetUint64();
        m_emptyVASTResponseHasBeenSet = true;
    }

    if (value.HasMember("EmptyVMAPResponse") && !value["EmptyVMAPResponse"].IsNull())
    {
        if (!value["EmptyVMAPResponse"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.EmptyVMAPResponse` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emptyVMAPResponse = value["EmptyVMAPResponse"].GetUint64();
        m_emptyVMAPResponseHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_adTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adType.c_str(), allocator).Move(), allocator);
    }

    if (m_adRequestSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdRequestSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adRequestSuccess, allocator);
    }

    if (m_adRequestFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdRequestFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adRequestFail, allocator);
    }

    if (m_impressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Impression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impression, allocator);
    }

    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_start, allocator);
    }

    if (m_firstQuarterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstQuarter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstQuarter, allocator);
    }

    if (m_midpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Midpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_midpoint, allocator);
    }

    if (m_thirdQuarterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdQuarter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_thirdQuarter, allocator);
    }

    if (m_completeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Complete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complete, allocator);
    }

    if (m_adMarkerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdMarkerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adMarkerTime, allocator);
    }

    if (m_replacedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplacedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replacedTime, allocator);
    }

    if (m_midFillRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidFillRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_midFillRate, allocator);
    }

    if (m_preReqNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReqNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReqNum, allocator);
    }

    if (m_preReplacedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReplacedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReplacedNum, allocator);
    }

    if (m_preReplaceRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReplaceRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReplaceRate, allocator);
    }

    if (m_aDMarkerFoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ADMarkerFound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aDMarkerFound, allocator);
    }

    if (m_makeAdsRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeAdsRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_makeAdsRequest, allocator);
    }

    if (m_vASTResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VASTResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vASTResponse, allocator);
    }

    if (m_filledAvailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilledAvail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filledAvail, allocator);
    }

    if (m_warningNoAdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarningNoAd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_warningNoAd, allocator);
    }

    if (m_errorAdsTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorAdsTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorAdsTimeout, allocator);
    }

    if (m_emptyVASTResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyVASTResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emptyVASTResponse, allocator);
    }

    if (m_emptyVMAPResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmptyVMAPResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emptyVMAPResponse, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string UsageDetail::GetUniqId() const
{
    return m_uniqId;
}

void UsageDetail::SetUniqId(const string& _uniqId)
{
    m_uniqId = _uniqId;
    m_uniqIdHasBeenSet = true;
}

bool UsageDetail::UniqIdHasBeenSet() const
{
    return m_uniqIdHasBeenSet;
}

string UsageDetail::GetChannelId() const
{
    return m_channelId;
}

void UsageDetail::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool UsageDetail::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string UsageDetail::GetChannelName() const
{
    return m_channelName;
}

void UsageDetail::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool UsageDetail::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string UsageDetail::GetAdType() const
{
    return m_adType;
}

void UsageDetail::SetAdType(const string& _adType)
{
    m_adType = _adType;
    m_adTypeHasBeenSet = true;
}

bool UsageDetail::AdTypeHasBeenSet() const
{
    return m_adTypeHasBeenSet;
}

uint64_t UsageDetail::GetAdRequestSuccess() const
{
    return m_adRequestSuccess;
}

void UsageDetail::SetAdRequestSuccess(const uint64_t& _adRequestSuccess)
{
    m_adRequestSuccess = _adRequestSuccess;
    m_adRequestSuccessHasBeenSet = true;
}

bool UsageDetail::AdRequestSuccessHasBeenSet() const
{
    return m_adRequestSuccessHasBeenSet;
}

uint64_t UsageDetail::GetAdRequestFail() const
{
    return m_adRequestFail;
}

void UsageDetail::SetAdRequestFail(const uint64_t& _adRequestFail)
{
    m_adRequestFail = _adRequestFail;
    m_adRequestFailHasBeenSet = true;
}

bool UsageDetail::AdRequestFailHasBeenSet() const
{
    return m_adRequestFailHasBeenSet;
}

uint64_t UsageDetail::GetImpression() const
{
    return m_impression;
}

void UsageDetail::SetImpression(const uint64_t& _impression)
{
    m_impression = _impression;
    m_impressionHasBeenSet = true;
}

bool UsageDetail::ImpressionHasBeenSet() const
{
    return m_impressionHasBeenSet;
}

uint64_t UsageDetail::GetStart() const
{
    return m_start;
}

void UsageDetail::SetStart(const uint64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool UsageDetail::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

uint64_t UsageDetail::GetFirstQuarter() const
{
    return m_firstQuarter;
}

void UsageDetail::SetFirstQuarter(const uint64_t& _firstQuarter)
{
    m_firstQuarter = _firstQuarter;
    m_firstQuarterHasBeenSet = true;
}

bool UsageDetail::FirstQuarterHasBeenSet() const
{
    return m_firstQuarterHasBeenSet;
}

uint64_t UsageDetail::GetMidpoint() const
{
    return m_midpoint;
}

void UsageDetail::SetMidpoint(const uint64_t& _midpoint)
{
    m_midpoint = _midpoint;
    m_midpointHasBeenSet = true;
}

bool UsageDetail::MidpointHasBeenSet() const
{
    return m_midpointHasBeenSet;
}

uint64_t UsageDetail::GetThirdQuarter() const
{
    return m_thirdQuarter;
}

void UsageDetail::SetThirdQuarter(const uint64_t& _thirdQuarter)
{
    m_thirdQuarter = _thirdQuarter;
    m_thirdQuarterHasBeenSet = true;
}

bool UsageDetail::ThirdQuarterHasBeenSet() const
{
    return m_thirdQuarterHasBeenSet;
}

uint64_t UsageDetail::GetComplete() const
{
    return m_complete;
}

void UsageDetail::SetComplete(const uint64_t& _complete)
{
    m_complete = _complete;
    m_completeHasBeenSet = true;
}

bool UsageDetail::CompleteHasBeenSet() const
{
    return m_completeHasBeenSet;
}

double UsageDetail::GetAdMarkerTime() const
{
    return m_adMarkerTime;
}

void UsageDetail::SetAdMarkerTime(const double& _adMarkerTime)
{
    m_adMarkerTime = _adMarkerTime;
    m_adMarkerTimeHasBeenSet = true;
}

bool UsageDetail::AdMarkerTimeHasBeenSet() const
{
    return m_adMarkerTimeHasBeenSet;
}

double UsageDetail::GetReplacedTime() const
{
    return m_replacedTime;
}

void UsageDetail::SetReplacedTime(const double& _replacedTime)
{
    m_replacedTime = _replacedTime;
    m_replacedTimeHasBeenSet = true;
}

bool UsageDetail::ReplacedTimeHasBeenSet() const
{
    return m_replacedTimeHasBeenSet;
}

double UsageDetail::GetMidFillRate() const
{
    return m_midFillRate;
}

void UsageDetail::SetMidFillRate(const double& _midFillRate)
{
    m_midFillRate = _midFillRate;
    m_midFillRateHasBeenSet = true;
}

bool UsageDetail::MidFillRateHasBeenSet() const
{
    return m_midFillRateHasBeenSet;
}

uint64_t UsageDetail::GetPreReqNum() const
{
    return m_preReqNum;
}

void UsageDetail::SetPreReqNum(const uint64_t& _preReqNum)
{
    m_preReqNum = _preReqNum;
    m_preReqNumHasBeenSet = true;
}

bool UsageDetail::PreReqNumHasBeenSet() const
{
    return m_preReqNumHasBeenSet;
}

uint64_t UsageDetail::GetPreReplacedNum() const
{
    return m_preReplacedNum;
}

void UsageDetail::SetPreReplacedNum(const uint64_t& _preReplacedNum)
{
    m_preReplacedNum = _preReplacedNum;
    m_preReplacedNumHasBeenSet = true;
}

bool UsageDetail::PreReplacedNumHasBeenSet() const
{
    return m_preReplacedNumHasBeenSet;
}

double UsageDetail::GetPreReplaceRate() const
{
    return m_preReplaceRate;
}

void UsageDetail::SetPreReplaceRate(const double& _preReplaceRate)
{
    m_preReplaceRate = _preReplaceRate;
    m_preReplaceRateHasBeenSet = true;
}

bool UsageDetail::PreReplaceRateHasBeenSet() const
{
    return m_preReplaceRateHasBeenSet;
}

uint64_t UsageDetail::GetADMarkerFound() const
{
    return m_aDMarkerFound;
}

void UsageDetail::SetADMarkerFound(const uint64_t& _aDMarkerFound)
{
    m_aDMarkerFound = _aDMarkerFound;
    m_aDMarkerFoundHasBeenSet = true;
}

bool UsageDetail::ADMarkerFoundHasBeenSet() const
{
    return m_aDMarkerFoundHasBeenSet;
}

uint64_t UsageDetail::GetMakeAdsRequest() const
{
    return m_makeAdsRequest;
}

void UsageDetail::SetMakeAdsRequest(const uint64_t& _makeAdsRequest)
{
    m_makeAdsRequest = _makeAdsRequest;
    m_makeAdsRequestHasBeenSet = true;
}

bool UsageDetail::MakeAdsRequestHasBeenSet() const
{
    return m_makeAdsRequestHasBeenSet;
}

uint64_t UsageDetail::GetVASTResponse() const
{
    return m_vASTResponse;
}

void UsageDetail::SetVASTResponse(const uint64_t& _vASTResponse)
{
    m_vASTResponse = _vASTResponse;
    m_vASTResponseHasBeenSet = true;
}

bool UsageDetail::VASTResponseHasBeenSet() const
{
    return m_vASTResponseHasBeenSet;
}

uint64_t UsageDetail::GetFilledAvail() const
{
    return m_filledAvail;
}

void UsageDetail::SetFilledAvail(const uint64_t& _filledAvail)
{
    m_filledAvail = _filledAvail;
    m_filledAvailHasBeenSet = true;
}

bool UsageDetail::FilledAvailHasBeenSet() const
{
    return m_filledAvailHasBeenSet;
}

uint64_t UsageDetail::GetWarningNoAd() const
{
    return m_warningNoAd;
}

void UsageDetail::SetWarningNoAd(const uint64_t& _warningNoAd)
{
    m_warningNoAd = _warningNoAd;
    m_warningNoAdHasBeenSet = true;
}

bool UsageDetail::WarningNoAdHasBeenSet() const
{
    return m_warningNoAdHasBeenSet;
}

uint64_t UsageDetail::GetErrorAdsTimeout() const
{
    return m_errorAdsTimeout;
}

void UsageDetail::SetErrorAdsTimeout(const uint64_t& _errorAdsTimeout)
{
    m_errorAdsTimeout = _errorAdsTimeout;
    m_errorAdsTimeoutHasBeenSet = true;
}

bool UsageDetail::ErrorAdsTimeoutHasBeenSet() const
{
    return m_errorAdsTimeoutHasBeenSet;
}

uint64_t UsageDetail::GetEmptyVASTResponse() const
{
    return m_emptyVASTResponse;
}

void UsageDetail::SetEmptyVASTResponse(const uint64_t& _emptyVASTResponse)
{
    m_emptyVASTResponse = _emptyVASTResponse;
    m_emptyVASTResponseHasBeenSet = true;
}

bool UsageDetail::EmptyVASTResponseHasBeenSet() const
{
    return m_emptyVASTResponseHasBeenSet;
}

uint64_t UsageDetail::GetEmptyVMAPResponse() const
{
    return m_emptyVMAPResponse;
}

void UsageDetail::SetEmptyVMAPResponse(const uint64_t& _emptyVMAPResponse)
{
    m_emptyVMAPResponse = _emptyVMAPResponse;
    m_emptyVMAPResponseHasBeenSet = true;
}

bool UsageDetail::EmptyVMAPResponseHasBeenSet() const
{
    return m_emptyVMAPResponseHasBeenSet;
}

string UsageDetail::GetDate() const
{
    return m_date;
}

void UsageDetail::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool UsageDetail::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string UsageDetail::GetStartTime() const
{
    return m_startTime;
}

void UsageDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool UsageDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string UsageDetail::GetEndTime() const
{
    return m_endTime;
}

void UsageDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool UsageDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

