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

#include <tencentcloud/kms/v20190118/model/OverwriteWhiteBoxDeviceFingerprintsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

OverwriteWhiteBoxDeviceFingerprintsRequest::OverwriteWhiteBoxDeviceFingerprintsRequest() :
    m_keyIdHasBeenSet(false),
    m_deviceFingerprintsHasBeenSet(false)
{
}

string OverwriteWhiteBoxDeviceFingerprintsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceFingerprintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceFingerprints";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deviceFingerprints.begin(); itr != m_deviceFingerprints.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OverwriteWhiteBoxDeviceFingerprintsRequest::GetKeyId() const
{
    return m_keyId;
}

void OverwriteWhiteBoxDeviceFingerprintsRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool OverwriteWhiteBoxDeviceFingerprintsRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

vector<DeviceFingerprint> OverwriteWhiteBoxDeviceFingerprintsRequest::GetDeviceFingerprints() const
{
    return m_deviceFingerprints;
}

void OverwriteWhiteBoxDeviceFingerprintsRequest::SetDeviceFingerprints(const vector<DeviceFingerprint>& _deviceFingerprints)
{
    m_deviceFingerprints = _deviceFingerprints;
    m_deviceFingerprintsHasBeenSet = true;
}

bool OverwriteWhiteBoxDeviceFingerprintsRequest::DeviceFingerprintsHasBeenSet() const
{
    return m_deviceFingerprintsHasBeenSet;
}


