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

#include <tencentcloud/alb/v20251030/model/XForwardedForConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

XForwardedForConfig::XForwardedForConfig() :
    m_xForwardedForAlbIdEnabledHasBeenSet(false),
    m_xForwardedForClientSrcPortEnabledHasBeenSet(false),
    m_xForwardedForHostEnabledHasBeenSet(false),
    m_xForwardedForModeHasBeenSet(false),
    m_xForwardedForPortEnabledHasBeenSet(false),
    m_xForwardedForProtoEnabledHasBeenSet(false),
    m_xTencentClientIDNEnabledHasBeenSet(false),
    m_xTencentClientSDNEnabledHasBeenSet(false),
    m_xTencentClientSerialEnabledHasBeenSet(false),
    m_xTencentClientVerifyEnabledHasBeenSet(false)
{
}

CoreInternalOutcome XForwardedForConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("XForwardedForAlbIdEnabled") && !value["XForwardedForAlbIdEnabled"].IsNull())
    {
        if (!value["XForwardedForAlbIdEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForAlbIdEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForAlbIdEnabled = value["XForwardedForAlbIdEnabled"].GetBool();
        m_xForwardedForAlbIdEnabledHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForClientSrcPortEnabled") && !value["XForwardedForClientSrcPortEnabled"].IsNull())
    {
        if (!value["XForwardedForClientSrcPortEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForClientSrcPortEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForClientSrcPortEnabled = value["XForwardedForClientSrcPortEnabled"].GetBool();
        m_xForwardedForClientSrcPortEnabledHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForHostEnabled") && !value["XForwardedForHostEnabled"].IsNull())
    {
        if (!value["XForwardedForHostEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForHostEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForHostEnabled = value["XForwardedForHostEnabled"].GetBool();
        m_xForwardedForHostEnabledHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForMode") && !value["XForwardedForMode"].IsNull())
    {
        if (!value["XForwardedForMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForMode = string(value["XForwardedForMode"].GetString());
        m_xForwardedForModeHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForPortEnabled") && !value["XForwardedForPortEnabled"].IsNull())
    {
        if (!value["XForwardedForPortEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForPortEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForPortEnabled = value["XForwardedForPortEnabled"].GetBool();
        m_xForwardedForPortEnabledHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForProtoEnabled") && !value["XForwardedForProtoEnabled"].IsNull())
    {
        if (!value["XForwardedForProtoEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XForwardedForProtoEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xForwardedForProtoEnabled = value["XForwardedForProtoEnabled"].GetBool();
        m_xForwardedForProtoEnabledHasBeenSet = true;
    }

    if (value.HasMember("XTencentClientIDNEnabled") && !value["XTencentClientIDNEnabled"].IsNull())
    {
        if (!value["XTencentClientIDNEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XTencentClientIDNEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xTencentClientIDNEnabled = value["XTencentClientIDNEnabled"].GetBool();
        m_xTencentClientIDNEnabledHasBeenSet = true;
    }

    if (value.HasMember("XTencentClientSDNEnabled") && !value["XTencentClientSDNEnabled"].IsNull())
    {
        if (!value["XTencentClientSDNEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XTencentClientSDNEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xTencentClientSDNEnabled = value["XTencentClientSDNEnabled"].GetBool();
        m_xTencentClientSDNEnabledHasBeenSet = true;
    }

    if (value.HasMember("XTencentClientSerialEnabled") && !value["XTencentClientSerialEnabled"].IsNull())
    {
        if (!value["XTencentClientSerialEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XTencentClientSerialEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xTencentClientSerialEnabled = value["XTencentClientSerialEnabled"].GetBool();
        m_xTencentClientSerialEnabledHasBeenSet = true;
    }

    if (value.HasMember("XTencentClientVerifyEnabled") && !value["XTencentClientVerifyEnabled"].IsNull())
    {
        if (!value["XTencentClientVerifyEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig.XTencentClientVerifyEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_xTencentClientVerifyEnabled = value["XTencentClientVerifyEnabled"].GetBool();
        m_xTencentClientVerifyEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XForwardedForConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xForwardedForAlbIdEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForAlbIdEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForAlbIdEnabled, allocator);
    }

    if (m_xForwardedForClientSrcPortEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForClientSrcPortEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForClientSrcPortEnabled, allocator);
    }

    if (m_xForwardedForHostEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForHostEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForHostEnabled, allocator);
    }

    if (m_xForwardedForModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xForwardedForMode.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForPortEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForPortEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForPortEnabled, allocator);
    }

    if (m_xForwardedForProtoEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForProtoEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xForwardedForProtoEnabled, allocator);
    }

    if (m_xTencentClientIDNEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XTencentClientIDNEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xTencentClientIDNEnabled, allocator);
    }

    if (m_xTencentClientSDNEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XTencentClientSDNEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xTencentClientSDNEnabled, allocator);
    }

    if (m_xTencentClientSerialEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XTencentClientSerialEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xTencentClientSerialEnabled, allocator);
    }

    if (m_xTencentClientVerifyEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XTencentClientVerifyEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_xTencentClientVerifyEnabled, allocator);
    }

}


bool XForwardedForConfig::GetXForwardedForAlbIdEnabled() const
{
    return m_xForwardedForAlbIdEnabled;
}

void XForwardedForConfig::SetXForwardedForAlbIdEnabled(const bool& _xForwardedForAlbIdEnabled)
{
    m_xForwardedForAlbIdEnabled = _xForwardedForAlbIdEnabled;
    m_xForwardedForAlbIdEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForAlbIdEnabledHasBeenSet() const
{
    return m_xForwardedForAlbIdEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXForwardedForClientSrcPortEnabled() const
{
    return m_xForwardedForClientSrcPortEnabled;
}

void XForwardedForConfig::SetXForwardedForClientSrcPortEnabled(const bool& _xForwardedForClientSrcPortEnabled)
{
    m_xForwardedForClientSrcPortEnabled = _xForwardedForClientSrcPortEnabled;
    m_xForwardedForClientSrcPortEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForClientSrcPortEnabledHasBeenSet() const
{
    return m_xForwardedForClientSrcPortEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXForwardedForHostEnabled() const
{
    return m_xForwardedForHostEnabled;
}

void XForwardedForConfig::SetXForwardedForHostEnabled(const bool& _xForwardedForHostEnabled)
{
    m_xForwardedForHostEnabled = _xForwardedForHostEnabled;
    m_xForwardedForHostEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForHostEnabledHasBeenSet() const
{
    return m_xForwardedForHostEnabledHasBeenSet;
}

string XForwardedForConfig::GetXForwardedForMode() const
{
    return m_xForwardedForMode;
}

void XForwardedForConfig::SetXForwardedForMode(const string& _xForwardedForMode)
{
    m_xForwardedForMode = _xForwardedForMode;
    m_xForwardedForModeHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForModeHasBeenSet() const
{
    return m_xForwardedForModeHasBeenSet;
}

bool XForwardedForConfig::GetXForwardedForPortEnabled() const
{
    return m_xForwardedForPortEnabled;
}

void XForwardedForConfig::SetXForwardedForPortEnabled(const bool& _xForwardedForPortEnabled)
{
    m_xForwardedForPortEnabled = _xForwardedForPortEnabled;
    m_xForwardedForPortEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForPortEnabledHasBeenSet() const
{
    return m_xForwardedForPortEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXForwardedForProtoEnabled() const
{
    return m_xForwardedForProtoEnabled;
}

void XForwardedForConfig::SetXForwardedForProtoEnabled(const bool& _xForwardedForProtoEnabled)
{
    m_xForwardedForProtoEnabled = _xForwardedForProtoEnabled;
    m_xForwardedForProtoEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XForwardedForProtoEnabledHasBeenSet() const
{
    return m_xForwardedForProtoEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXTencentClientIDNEnabled() const
{
    return m_xTencentClientIDNEnabled;
}

void XForwardedForConfig::SetXTencentClientIDNEnabled(const bool& _xTencentClientIDNEnabled)
{
    m_xTencentClientIDNEnabled = _xTencentClientIDNEnabled;
    m_xTencentClientIDNEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XTencentClientIDNEnabledHasBeenSet() const
{
    return m_xTencentClientIDNEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXTencentClientSDNEnabled() const
{
    return m_xTencentClientSDNEnabled;
}

void XForwardedForConfig::SetXTencentClientSDNEnabled(const bool& _xTencentClientSDNEnabled)
{
    m_xTencentClientSDNEnabled = _xTencentClientSDNEnabled;
    m_xTencentClientSDNEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XTencentClientSDNEnabledHasBeenSet() const
{
    return m_xTencentClientSDNEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXTencentClientSerialEnabled() const
{
    return m_xTencentClientSerialEnabled;
}

void XForwardedForConfig::SetXTencentClientSerialEnabled(const bool& _xTencentClientSerialEnabled)
{
    m_xTencentClientSerialEnabled = _xTencentClientSerialEnabled;
    m_xTencentClientSerialEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XTencentClientSerialEnabledHasBeenSet() const
{
    return m_xTencentClientSerialEnabledHasBeenSet;
}

bool XForwardedForConfig::GetXTencentClientVerifyEnabled() const
{
    return m_xTencentClientVerifyEnabled;
}

void XForwardedForConfig::SetXTencentClientVerifyEnabled(const bool& _xTencentClientVerifyEnabled)
{
    m_xTencentClientVerifyEnabled = _xTencentClientVerifyEnabled;
    m_xTencentClientVerifyEnabledHasBeenSet = true;
}

bool XForwardedForConfig::XTencentClientVerifyEnabledHasBeenSet() const
{
    return m_xTencentClientVerifyEnabledHasBeenSet;
}

