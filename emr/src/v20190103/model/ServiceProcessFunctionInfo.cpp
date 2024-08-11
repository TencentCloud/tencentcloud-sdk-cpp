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

#include <tencentcloud/emr/v20190103/model/ServiceProcessFunctionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ServiceProcessFunctionInfo::ServiceProcessFunctionInfo() :
    m_detectAlertHasBeenSet(false),
    m_detetcFunctionKeyHasBeenSet(false),
    m_detetcFunctionValueHasBeenSet(false),
    m_detetcTimeHasBeenSet(false),
    m_detectFunctionKeyHasBeenSet(false),
    m_detectFunctionValueHasBeenSet(false),
    m_detectTimeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceProcessFunctionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectAlert") && !value["DetectAlert"].IsNull())
    {
        if (!value["DetectAlert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetectAlert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectAlert = string(value["DetectAlert"].GetString());
        m_detectAlertHasBeenSet = true;
    }

    if (value.HasMember("DetetcFunctionKey") && !value["DetetcFunctionKey"].IsNull())
    {
        if (!value["DetetcFunctionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetetcFunctionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detetcFunctionKey = string(value["DetetcFunctionKey"].GetString());
        m_detetcFunctionKeyHasBeenSet = true;
    }

    if (value.HasMember("DetetcFunctionValue") && !value["DetetcFunctionValue"].IsNull())
    {
        if (!value["DetetcFunctionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetetcFunctionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detetcFunctionValue = string(value["DetetcFunctionValue"].GetString());
        m_detetcFunctionValueHasBeenSet = true;
    }

    if (value.HasMember("DetetcTime") && !value["DetetcTime"].IsNull())
    {
        if (!value["DetetcTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetetcTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detetcTime = string(value["DetetcTime"].GetString());
        m_detetcTimeHasBeenSet = true;
    }

    if (value.HasMember("DetectFunctionKey") && !value["DetectFunctionKey"].IsNull())
    {
        if (!value["DetectFunctionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetectFunctionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectFunctionKey = string(value["DetectFunctionKey"].GetString());
        m_detectFunctionKeyHasBeenSet = true;
    }

    if (value.HasMember("DetectFunctionValue") && !value["DetectFunctionValue"].IsNull())
    {
        if (!value["DetectFunctionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetectFunctionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectFunctionValue = string(value["DetectFunctionValue"].GetString());
        m_detectFunctionValueHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceProcessFunctionInfo.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceProcessFunctionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectAlertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectAlert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectAlert.c_str(), allocator).Move(), allocator);
    }

    if (m_detetcFunctionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetetcFunctionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detetcFunctionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_detetcFunctionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetetcFunctionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detetcFunctionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_detetcTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetetcTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detetcTime.c_str(), allocator).Move(), allocator);
    }

    if (m_detectFunctionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectFunctionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectFunctionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_detectFunctionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectFunctionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectFunctionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

}


string ServiceProcessFunctionInfo::GetDetectAlert() const
{
    return m_detectAlert;
}

void ServiceProcessFunctionInfo::SetDetectAlert(const string& _detectAlert)
{
    m_detectAlert = _detectAlert;
    m_detectAlertHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetectAlertHasBeenSet() const
{
    return m_detectAlertHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetetcFunctionKey() const
{
    return m_detetcFunctionKey;
}

void ServiceProcessFunctionInfo::SetDetetcFunctionKey(const string& _detetcFunctionKey)
{
    m_detetcFunctionKey = _detetcFunctionKey;
    m_detetcFunctionKeyHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetetcFunctionKeyHasBeenSet() const
{
    return m_detetcFunctionKeyHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetetcFunctionValue() const
{
    return m_detetcFunctionValue;
}

void ServiceProcessFunctionInfo::SetDetetcFunctionValue(const string& _detetcFunctionValue)
{
    m_detetcFunctionValue = _detetcFunctionValue;
    m_detetcFunctionValueHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetetcFunctionValueHasBeenSet() const
{
    return m_detetcFunctionValueHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetetcTime() const
{
    return m_detetcTime;
}

void ServiceProcessFunctionInfo::SetDetetcTime(const string& _detetcTime)
{
    m_detetcTime = _detetcTime;
    m_detetcTimeHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetetcTimeHasBeenSet() const
{
    return m_detetcTimeHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetectFunctionKey() const
{
    return m_detectFunctionKey;
}

void ServiceProcessFunctionInfo::SetDetectFunctionKey(const string& _detectFunctionKey)
{
    m_detectFunctionKey = _detectFunctionKey;
    m_detectFunctionKeyHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetectFunctionKeyHasBeenSet() const
{
    return m_detectFunctionKeyHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetectFunctionValue() const
{
    return m_detectFunctionValue;
}

void ServiceProcessFunctionInfo::SetDetectFunctionValue(const string& _detectFunctionValue)
{
    m_detectFunctionValue = _detectFunctionValue;
    m_detectFunctionValueHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetectFunctionValueHasBeenSet() const
{
    return m_detectFunctionValueHasBeenSet;
}

string ServiceProcessFunctionInfo::GetDetectTime() const
{
    return m_detectTime;
}

void ServiceProcessFunctionInfo::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool ServiceProcessFunctionInfo::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

