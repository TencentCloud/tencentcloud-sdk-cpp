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

#include <tencentcloud/iotexplorer/v20190423/model/WifiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

WifiInfo::WifiInfo() :
    m_mACHasBeenSet(false),
    m_rSSIHasBeenSet(false)
{
}

CoreInternalOutcome WifiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MAC") && !value["MAC"].IsNull())
    {
        if (!value["MAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WifiInfo.MAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mAC = string(value["MAC"].GetString());
        m_mACHasBeenSet = true;
    }

    if (value.HasMember("RSSI") && !value["RSSI"].IsNull())
    {
        if (!value["RSSI"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WifiInfo.RSSI` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rSSI = value["RSSI"].GetInt64();
        m_rSSIHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WifiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mAC.c_str(), allocator).Move(), allocator);
    }

    if (m_rSSIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RSSI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rSSI, allocator);
    }

}


string WifiInfo::GetMAC() const
{
    return m_mAC;
}

void WifiInfo::SetMAC(const string& _mAC)
{
    m_mAC = _mAC;
    m_mACHasBeenSet = true;
}

bool WifiInfo::MACHasBeenSet() const
{
    return m_mACHasBeenSet;
}

int64_t WifiInfo::GetRSSI() const
{
    return m_rSSI;
}

void WifiInfo::SetRSSI(const int64_t& _rSSI)
{
    m_rSSI = _rSSI;
    m_rSSIHasBeenSet = true;
}

bool WifiInfo::RSSIHasBeenSet() const
{
    return m_rSSIHasBeenSet;
}

