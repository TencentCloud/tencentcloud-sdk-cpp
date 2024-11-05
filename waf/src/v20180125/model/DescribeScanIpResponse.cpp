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

#include <tencentcloud/waf/v20180125/model/DescribeScanIpResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeScanIpResponse::DescribeScanIpResponse() :
    m_ipListHasBeenSet(false),
    m_bussinessHasBeenSet(false),
    m_characteristicHasBeenSet(false),
    m_descibeHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_demoHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_purposeHasBeenSet(false),
    m_announcementHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ipOwnerHasBeenSet(false)
{
}

CoreInternalOutcome DescribeScanIpResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IpList") && !rsp["IpList"].IsNull())
    {
        if (!rsp["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanIpInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipList.push_back(item);
        }
        m_ipListHasBeenSet = true;
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

    if (rsp.HasMember("Descibe") && !rsp["Descibe"].IsNull())
    {
        if (!rsp["Descibe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Descibe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descibe = string(rsp["Descibe"].GetString());
        m_descibeHasBeenSet = true;
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

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = rsp["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IpOwner") && !rsp["IpOwner"].IsNull())
    {
        if (!rsp["IpOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipOwner = string(rsp["IpOwner"].GetString());
        m_ipOwnerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeScanIpResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

    if (m_descibeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descibe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descibe.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_ipOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipOwner.c_str(), allocator).Move(), allocator);
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


vector<ScanIpInfo> DescribeScanIpResponse::GetIpList() const
{
    return m_ipList;
}

bool DescribeScanIpResponse::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string DescribeScanIpResponse::GetBussiness() const
{
    return m_bussiness;
}

bool DescribeScanIpResponse::BussinessHasBeenSet() const
{
    return m_bussinessHasBeenSet;
}

string DescribeScanIpResponse::GetCharacteristic() const
{
    return m_characteristic;
}

bool DescribeScanIpResponse::CharacteristicHasBeenSet() const
{
    return m_characteristicHasBeenSet;
}

string DescribeScanIpResponse::GetDescibe() const
{
    return m_descibe;
}

bool DescribeScanIpResponse::DescibeHasBeenSet() const
{
    return m_descibeHasBeenSet;
}

string DescribeScanIpResponse::GetReferer() const
{
    return m_referer;
}

bool DescribeScanIpResponse::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

string DescribeScanIpResponse::GetDemo() const
{
    return m_demo;
}

bool DescribeScanIpResponse::DemoHasBeenSet() const
{
    return m_demoHasBeenSet;
}

string DescribeScanIpResponse::GetTarget() const
{
    return m_target;
}

bool DescribeScanIpResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string DescribeScanIpResponse::GetPurpose() const
{
    return m_purpose;
}

bool DescribeScanIpResponse::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

string DescribeScanIpResponse::GetAnnouncement() const
{
    return m_announcement;
}

bool DescribeScanIpResponse::AnnouncementHasBeenSet() const
{
    return m_announcementHasBeenSet;
}

uint64_t DescribeScanIpResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeScanIpResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeScanIpResponse::GetIpOwner() const
{
    return m_ipOwner;
}

bool DescribeScanIpResponse::IpOwnerHasBeenSet() const
{
    return m_ipOwnerHasBeenSet;
}


