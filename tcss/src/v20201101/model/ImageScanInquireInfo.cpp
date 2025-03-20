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

#include <tencentcloud/tcss/v20201101/model/ImageScanInquireInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageScanInquireInfo::ImageScanInquireInfo() :
    m_inquireKeyHasBeenSet(false),
    m_capcityHasBeenSet(false),
    m_useageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_purchaseStatusHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_payNumHasBeenSet(false),
    m_trialNumHasBeenSet(false),
    m_payUsageHasBeenSet(false)
{
}

CoreInternalOutcome ImageScanInquireInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InquireKey") && !value["InquireKey"].IsNull())
    {
        if (!value["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(value["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }

    if (value.HasMember("Capcity") && !value["Capcity"].IsNull())
    {
        if (!value["Capcity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.Capcity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capcity = value["Capcity"].GetUint64();
        m_capcityHasBeenSet = true;
    }

    if (value.HasMember("Useage") && !value["Useage"].IsNull())
    {
        if (!value["Useage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.Useage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_useage = value["Useage"].GetUint64();
        m_useageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("PurchaseStatus") && !value["PurchaseStatus"].IsNull())
    {
        if (!value["PurchaseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.PurchaseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purchaseStatus = string(value["PurchaseStatus"].GetString());
        m_purchaseStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(value["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("PayNum") && !value["PayNum"].IsNull())
    {
        if (!value["PayNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.PayNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payNum = value["PayNum"].GetUint64();
        m_payNumHasBeenSet = true;
    }

    if (value.HasMember("TrialNum") && !value["TrialNum"].IsNull())
    {
        if (!value["TrialNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.TrialNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialNum = value["TrialNum"].GetUint64();
        m_trialNumHasBeenSet = true;
    }

    if (value.HasMember("PayUsage") && !value["PayUsage"].IsNull())
    {
        if (!value["PayUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanInquireInfo.PayUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payUsage = value["PayUsage"].GetUint64();
        m_payUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScanInquireInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_capcityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capcity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capcity, allocator);
    }

    if (m_useageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Useage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useage, allocator);
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

    if (m_purchaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purchaseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_payNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payNum, allocator);
    }

    if (m_trialNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialNum, allocator);
    }

    if (m_payUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payUsage, allocator);
    }

}


string ImageScanInquireInfo::GetInquireKey() const
{
    return m_inquireKey;
}

void ImageScanInquireInfo::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool ImageScanInquireInfo::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

uint64_t ImageScanInquireInfo::GetCapcity() const
{
    return m_capcity;
}

void ImageScanInquireInfo::SetCapcity(const uint64_t& _capcity)
{
    m_capcity = _capcity;
    m_capcityHasBeenSet = true;
}

bool ImageScanInquireInfo::CapcityHasBeenSet() const
{
    return m_capcityHasBeenSet;
}

uint64_t ImageScanInquireInfo::GetUseage() const
{
    return m_useage;
}

void ImageScanInquireInfo::SetUseage(const uint64_t& _useage)
{
    m_useage = _useage;
    m_useageHasBeenSet = true;
}

bool ImageScanInquireInfo::UseageHasBeenSet() const
{
    return m_useageHasBeenSet;
}

string ImageScanInquireInfo::GetStartTime() const
{
    return m_startTime;
}

void ImageScanInquireInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ImageScanInquireInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ImageScanInquireInfo::GetEndTime() const
{
    return m_endTime;
}

void ImageScanInquireInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ImageScanInquireInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ImageScanInquireInfo::GetPurchaseStatus() const
{
    return m_purchaseStatus;
}

void ImageScanInquireInfo::SetPurchaseStatus(const string& _purchaseStatus)
{
    m_purchaseStatus = _purchaseStatus;
    m_purchaseStatusHasBeenSet = true;
}

bool ImageScanInquireInfo::PurchaseStatusHasBeenSet() const
{
    return m_purchaseStatusHasBeenSet;
}

string ImageScanInquireInfo::GetResourceID() const
{
    return m_resourceID;
}

void ImageScanInquireInfo::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool ImageScanInquireInfo::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

uint64_t ImageScanInquireInfo::GetPayNum() const
{
    return m_payNum;
}

void ImageScanInquireInfo::SetPayNum(const uint64_t& _payNum)
{
    m_payNum = _payNum;
    m_payNumHasBeenSet = true;
}

bool ImageScanInquireInfo::PayNumHasBeenSet() const
{
    return m_payNumHasBeenSet;
}

uint64_t ImageScanInquireInfo::GetTrialNum() const
{
    return m_trialNum;
}

void ImageScanInquireInfo::SetTrialNum(const uint64_t& _trialNum)
{
    m_trialNum = _trialNum;
    m_trialNumHasBeenSet = true;
}

bool ImageScanInquireInfo::TrialNumHasBeenSet() const
{
    return m_trialNumHasBeenSet;
}

uint64_t ImageScanInquireInfo::GetPayUsage() const
{
    return m_payUsage;
}

void ImageScanInquireInfo::SetPayUsage(const uint64_t& _payUsage)
{
    m_payUsage = _payUsage;
    m_payUsageHasBeenSet = true;
}

bool ImageScanInquireInfo::PayUsageHasBeenSet() const
{
    return m_payUsageHasBeenSet;
}

