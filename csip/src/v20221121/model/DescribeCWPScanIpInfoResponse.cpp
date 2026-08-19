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

#include <tencentcloud/csip/v20221121/model/DescribeCWPScanIpInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCWPScanIpInfoResponse::DescribeCWPScanIpInfoResponse() :
    m_bussinessHasBeenSet(false),
    m_characteristicHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_demoHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_purposeHasBeenSet(false),
    m_announcementHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_isBelongTencentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCWPScanIpInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Bussiness") && !rsp["Bussiness"].IsNull())
    {
        if (!rsp["Bussiness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Bussiness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bussiness = string(rsp["Bussiness"].GetString());
        m_bussinessHasBeenSet = true;
    }

    if (rsp.HasMember("Characteristic") && !rsp["Characteristic"].IsNull())
    {
        if (!rsp["Characteristic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Characteristic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_characteristic = string(rsp["Characteristic"].GetString());
        m_characteristicHasBeenSet = true;
    }

    if (rsp.HasMember("Describe") && !rsp["Describe"].IsNull())
    {
        if (!rsp["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(rsp["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (rsp.HasMember("Referer") && !rsp["Referer"].IsNull())
    {
        if (!rsp["Referer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Referer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referer = string(rsp["Referer"].GetString());
        m_refererHasBeenSet = true;
    }

    if (rsp.HasMember("Demo") && !rsp["Demo"].IsNull())
    {
        if (!rsp["Demo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Demo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demo = string(rsp["Demo"].GetString());
        m_demoHasBeenSet = true;
    }

    if (rsp.HasMember("Target") && !rsp["Target"].IsNull())
    {
        if (!rsp["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(rsp["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (rsp.HasMember("Purpose") && !rsp["Purpose"].IsNull())
    {
        if (!rsp["Purpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(rsp["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }

    if (rsp.HasMember("Announcement") && !rsp["Announcement"].IsNull())
    {
        if (!rsp["Announcement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Announcement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_announcement = string(rsp["Announcement"].GetString());
        m_announcementHasBeenSet = true;
    }

    if (rsp.HasMember("Location") && !rsp["Location"].IsNull())
    {
        if (!rsp["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(rsp["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (rsp.HasMember("ISP") && !rsp["ISP"].IsNull())
    {
        if (!rsp["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(rsp["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (rsp.HasMember("IsBelongTencent") && !rsp["IsBelongTencent"].IsNull())
    {
        if (!rsp["IsBelongTencent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsBelongTencent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBelongTencent = rsp["IsBelongTencent"].GetBool();
        m_isBelongTencentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCWPScanIpInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bussinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bussiness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bussiness.c_str(), allocator).Move(), allocator);
    }

    if (m_characteristicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Characteristic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_characteristic.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_demoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Demo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demo.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
    }

    if (m_announcementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Announcement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_announcement.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_isBelongTencentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBelongTencent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBelongTencent, allocator);
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


string DescribeCWPScanIpInfoResponse::GetBussiness() const
{
    return m_bussiness;
}

bool DescribeCWPScanIpInfoResponse::BussinessHasBeenSet() const
{
    return m_bussinessHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetCharacteristic() const
{
    return m_characteristic;
}

bool DescribeCWPScanIpInfoResponse::CharacteristicHasBeenSet() const
{
    return m_characteristicHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetDescribe() const
{
    return m_describe;
}

bool DescribeCWPScanIpInfoResponse::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetReferer() const
{
    return m_referer;
}

bool DescribeCWPScanIpInfoResponse::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetDemo() const
{
    return m_demo;
}

bool DescribeCWPScanIpInfoResponse::DemoHasBeenSet() const
{
    return m_demoHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetTarget() const
{
    return m_target;
}

bool DescribeCWPScanIpInfoResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetPurpose() const
{
    return m_purpose;
}

bool DescribeCWPScanIpInfoResponse::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetAnnouncement() const
{
    return m_announcement;
}

bool DescribeCWPScanIpInfoResponse::AnnouncementHasBeenSet() const
{
    return m_announcementHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetLocation() const
{
    return m_location;
}

bool DescribeCWPScanIpInfoResponse::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string DescribeCWPScanIpInfoResponse::GetISP() const
{
    return m_iSP;
}

bool DescribeCWPScanIpInfoResponse::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

bool DescribeCWPScanIpInfoResponse::GetIsBelongTencent() const
{
    return m_isBelongTencent;
}

bool DescribeCWPScanIpInfoResponse::IsBelongTencentHasBeenSet() const
{
    return m_isBelongTencentHasBeenSet;
}


