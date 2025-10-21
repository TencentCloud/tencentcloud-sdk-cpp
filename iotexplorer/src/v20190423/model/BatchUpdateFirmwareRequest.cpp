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

#include <tencentcloud/iotexplorer/v20190423/model/BatchUpdateFirmwareRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

BatchUpdateFirmwareRequest::BatchUpdateFirmwareRequest() :
    m_productIDHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_firmwareOriVersionHasBeenSet(false),
    m_upgradeMethodHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_deviceNamesHasBeenSet(false),
    m_timeoutIntervalHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_overrideModeHasBeenSet(false),
    m_maxRetryNumHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_taskUserDefineHasBeenSet(false)
{
}

string BatchUpdateFirmwareRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareOriVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareOriVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareOriVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upgradeMethod, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_deviceNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceNames.begin(); itr != m_deviceNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutInterval, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_overrideModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverrideMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_overrideMode, allocator);
    }

    if (m_maxRetryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRetryNum, allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskUserDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskUserDefine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskUserDefine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchUpdateFirmwareRequest::GetProductID() const
{
    return m_productID;
}

void BatchUpdateFirmwareRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void BatchUpdateFirmwareRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetFirmwareOriVersion() const
{
    return m_firmwareOriVersion;
}

void BatchUpdateFirmwareRequest::SetFirmwareOriVersion(const string& _firmwareOriVersion)
{
    m_firmwareOriVersion = _firmwareOriVersion;
    m_firmwareOriVersionHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FirmwareOriVersionHasBeenSet() const
{
    return m_firmwareOriVersionHasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetUpgradeMethod() const
{
    return m_upgradeMethod;
}

void BatchUpdateFirmwareRequest::SetUpgradeMethod(const uint64_t& _upgradeMethod)
{
    m_upgradeMethod = _upgradeMethod;
    m_upgradeMethodHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::UpgradeMethodHasBeenSet() const
{
    return m_upgradeMethodHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetFileName() const
{
    return m_fileName;
}

void BatchUpdateFirmwareRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetFileMd5() const
{
    return m_fileMd5;
}

void BatchUpdateFirmwareRequest::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetFileSize() const
{
    return m_fileSize;
}

void BatchUpdateFirmwareRequest::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

vector<string> BatchUpdateFirmwareRequest::GetDeviceNames() const
{
    return m_deviceNames;
}

void BatchUpdateFirmwareRequest::SetDeviceNames(const vector<string>& _deviceNames)
{
    m_deviceNames = _deviceNames;
    m_deviceNamesHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::DeviceNamesHasBeenSet() const
{
    return m_deviceNamesHasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetTimeoutInterval() const
{
    return m_timeoutInterval;
}

void BatchUpdateFirmwareRequest::SetTimeoutInterval(const uint64_t& _timeoutInterval)
{
    m_timeoutInterval = _timeoutInterval;
    m_timeoutIntervalHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::TimeoutIntervalHasBeenSet() const
{
    return m_timeoutIntervalHasBeenSet;
}

int64_t BatchUpdateFirmwareRequest::GetType() const
{
    return m_type;
}

void BatchUpdateFirmwareRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t BatchUpdateFirmwareRequest::GetDelayTime() const
{
    return m_delayTime;
}

void BatchUpdateFirmwareRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetOverrideMode() const
{
    return m_overrideMode;
}

void BatchUpdateFirmwareRequest::SetOverrideMode(const uint64_t& _overrideMode)
{
    m_overrideMode = _overrideMode;
    m_overrideModeHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::OverrideModeHasBeenSet() const
{
    return m_overrideModeHasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetMaxRetryNum() const
{
    return m_maxRetryNum;
}

void BatchUpdateFirmwareRequest::SetMaxRetryNum(const uint64_t& _maxRetryNum)
{
    m_maxRetryNum = _maxRetryNum;
    m_maxRetryNumHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::MaxRetryNumHasBeenSet() const
{
    return m_maxRetryNumHasBeenSet;
}

uint64_t BatchUpdateFirmwareRequest::GetRetryInterval() const
{
    return m_retryInterval;
}

void BatchUpdateFirmwareRequest::SetRetryInterval(const uint64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetFwType() const
{
    return m_fwType;
}

void BatchUpdateFirmwareRequest::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string BatchUpdateFirmwareRequest::GetTaskUserDefine() const
{
    return m_taskUserDefine;
}

void BatchUpdateFirmwareRequest::SetTaskUserDefine(const string& _taskUserDefine)
{
    m_taskUserDefine = _taskUserDefine;
    m_taskUserDefineHasBeenSet = true;
}

bool BatchUpdateFirmwareRequest::TaskUserDefineHasBeenSet() const
{
    return m_taskUserDefineHasBeenSet;
}


