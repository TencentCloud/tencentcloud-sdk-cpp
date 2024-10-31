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

#include <tencentcloud/csip/v20221121/model/ProductSupport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ProductSupport::ProductSupport() :
    m_vSSScanHasBeenSet(false),
    m_cWPScanHasBeenSet(false),
    m_cFWPatchHasBeenSet(false),
    m_wafPatchHasBeenSet(false),
    m_cWPFixHasBeenSet(false),
    m_cveIdHasBeenSet(false)
{
}

CoreInternalOutcome ProductSupport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VSSScan") && !value["VSSScan"].IsNull())
    {
        if (!value["VSSScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.VSSScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_vSSScan = value["VSSScan"].GetBool();
        m_vSSScanHasBeenSet = true;
    }

    if (value.HasMember("CWPScan") && !value["CWPScan"].IsNull())
    {
        if (!value["CWPScan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.CWPScan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPScan = string(value["CWPScan"].GetString());
        m_cWPScanHasBeenSet = true;
    }

    if (value.HasMember("CFWPatch") && !value["CFWPatch"].IsNull())
    {
        if (!value["CFWPatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.CFWPatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFWPatch = string(value["CFWPatch"].GetString());
        m_cFWPatchHasBeenSet = true;
    }

    if (value.HasMember("WafPatch") && !value["WafPatch"].IsNull())
    {
        if (!value["WafPatch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.WafPatch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wafPatch = value["WafPatch"].GetInt64();
        m_wafPatchHasBeenSet = true;
    }

    if (value.HasMember("CWPFix") && !value["CWPFix"].IsNull())
    {
        if (!value["CWPFix"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.CWPFix` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPFix = value["CWPFix"].GetInt64();
        m_cWPFixHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSupport.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductSupport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vSSScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VSSScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vSSScan, allocator);
    }

    if (m_cWPScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cWPScan.c_str(), allocator).Move(), allocator);
    }

    if (m_cFWPatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFWPatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cFWPatch.c_str(), allocator).Move(), allocator);
    }

    if (m_wafPatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafPatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wafPatch, allocator);
    }

    if (m_cWPFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CWPFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cWPFix, allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

}


bool ProductSupport::GetVSSScan() const
{
    return m_vSSScan;
}

void ProductSupport::SetVSSScan(const bool& _vSSScan)
{
    m_vSSScan = _vSSScan;
    m_vSSScanHasBeenSet = true;
}

bool ProductSupport::VSSScanHasBeenSet() const
{
    return m_vSSScanHasBeenSet;
}

string ProductSupport::GetCWPScan() const
{
    return m_cWPScan;
}

void ProductSupport::SetCWPScan(const string& _cWPScan)
{
    m_cWPScan = _cWPScan;
    m_cWPScanHasBeenSet = true;
}

bool ProductSupport::CWPScanHasBeenSet() const
{
    return m_cWPScanHasBeenSet;
}

string ProductSupport::GetCFWPatch() const
{
    return m_cFWPatch;
}

void ProductSupport::SetCFWPatch(const string& _cFWPatch)
{
    m_cFWPatch = _cFWPatch;
    m_cFWPatchHasBeenSet = true;
}

bool ProductSupport::CFWPatchHasBeenSet() const
{
    return m_cFWPatchHasBeenSet;
}

int64_t ProductSupport::GetWafPatch() const
{
    return m_wafPatch;
}

void ProductSupport::SetWafPatch(const int64_t& _wafPatch)
{
    m_wafPatch = _wafPatch;
    m_wafPatchHasBeenSet = true;
}

bool ProductSupport::WafPatchHasBeenSet() const
{
    return m_wafPatchHasBeenSet;
}

int64_t ProductSupport::GetCWPFix() const
{
    return m_cWPFix;
}

void ProductSupport::SetCWPFix(const int64_t& _cWPFix)
{
    m_cWPFix = _cWPFix;
    m_cWPFixHasBeenSet = true;
}

bool ProductSupport::CWPFixHasBeenSet() const
{
    return m_cWPFixHasBeenSet;
}

string ProductSupport::GetCveId() const
{
    return m_cveId;
}

void ProductSupport::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool ProductSupport::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

