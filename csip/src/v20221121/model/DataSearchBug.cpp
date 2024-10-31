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

#include <tencentcloud/csip/v20221121/model/DataSearchBug.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DataSearchBug::DataSearchBug() :
    m_stateCodeHasBeenSet(false),
    m_dataBugHasBeenSet(false),
    m_dataAssetHasBeenSet(false),
    m_vSSScanHasBeenSet(false),
    m_cWPScanHasBeenSet(false),
    m_cFWPatchHasBeenSet(false),
    m_wafPatchHasBeenSet(false),
    m_cWPFixHasBeenSet(false),
    m_dataSupportHasBeenSet(false),
    m_cveIdHasBeenSet(false)
{
}

CoreInternalOutcome DataSearchBug::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StateCode") && !value["StateCode"].IsNull())
    {
        if (!value["StateCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.StateCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateCode = string(value["StateCode"].GetString());
        m_stateCodeHasBeenSet = true;
    }

    if (value.HasMember("DataBug") && !value["DataBug"].IsNull())
    {
        if (!value["DataBug"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.DataBug` is not array type"));

        const rapidjson::Value &tmpValue = value["DataBug"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BugInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataBug.push_back(item);
        }
        m_dataBugHasBeenSet = true;
    }

    if (value.HasMember("DataAsset") && !value["DataAsset"].IsNull())
    {
        if (!value["DataAsset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.DataAsset` is not array type"));

        const rapidjson::Value &tmpValue = value["DataAsset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetInfoDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataAsset.push_back(item);
        }
        m_dataAssetHasBeenSet = true;
    }

    if (value.HasMember("VSSScan") && !value["VSSScan"].IsNull())
    {
        if (!value["VSSScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.VSSScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_vSSScan = value["VSSScan"].GetBool();
        m_vSSScanHasBeenSet = true;
    }

    if (value.HasMember("CWPScan") && !value["CWPScan"].IsNull())
    {
        if (!value["CWPScan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.CWPScan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cWPScan = string(value["CWPScan"].GetString());
        m_cWPScanHasBeenSet = true;
    }

    if (value.HasMember("CFWPatch") && !value["CFWPatch"].IsNull())
    {
        if (!value["CFWPatch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.CFWPatch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cFWPatch = string(value["CFWPatch"].GetString());
        m_cFWPatchHasBeenSet = true;
    }

    if (value.HasMember("WafPatch") && !value["WafPatch"].IsNull())
    {
        if (!value["WafPatch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.WafPatch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wafPatch = value["WafPatch"].GetInt64();
        m_wafPatchHasBeenSet = true;
    }

    if (value.HasMember("CWPFix") && !value["CWPFix"].IsNull())
    {
        if (!value["CWPFix"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.CWPFix` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cWPFix = value["CWPFix"].GetInt64();
        m_cWPFixHasBeenSet = true;
    }

    if (value.HasMember("DataSupport") && !value["DataSupport"].IsNull())
    {
        if (!value["DataSupport"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.DataSupport` is not array type"));

        const rapidjson::Value &tmpValue = value["DataSupport"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductSupport item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataSupport.push_back(item);
        }
        m_dataSupportHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSearchBug.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSearchBug::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dataBugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBug";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataBug.begin(); itr != m_dataBug.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataAsset.begin(); itr != m_dataAsset.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

    if (m_dataSupportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSupport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataSupport.begin(); itr != m_dataSupport.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

}


string DataSearchBug::GetStateCode() const
{
    return m_stateCode;
}

void DataSearchBug::SetStateCode(const string& _stateCode)
{
    m_stateCode = _stateCode;
    m_stateCodeHasBeenSet = true;
}

bool DataSearchBug::StateCodeHasBeenSet() const
{
    return m_stateCodeHasBeenSet;
}

vector<BugInfoDetail> DataSearchBug::GetDataBug() const
{
    return m_dataBug;
}

void DataSearchBug::SetDataBug(const vector<BugInfoDetail>& _dataBug)
{
    m_dataBug = _dataBug;
    m_dataBugHasBeenSet = true;
}

bool DataSearchBug::DataBugHasBeenSet() const
{
    return m_dataBugHasBeenSet;
}

vector<AssetInfoDetail> DataSearchBug::GetDataAsset() const
{
    return m_dataAsset;
}

void DataSearchBug::SetDataAsset(const vector<AssetInfoDetail>& _dataAsset)
{
    m_dataAsset = _dataAsset;
    m_dataAssetHasBeenSet = true;
}

bool DataSearchBug::DataAssetHasBeenSet() const
{
    return m_dataAssetHasBeenSet;
}

bool DataSearchBug::GetVSSScan() const
{
    return m_vSSScan;
}

void DataSearchBug::SetVSSScan(const bool& _vSSScan)
{
    m_vSSScan = _vSSScan;
    m_vSSScanHasBeenSet = true;
}

bool DataSearchBug::VSSScanHasBeenSet() const
{
    return m_vSSScanHasBeenSet;
}

string DataSearchBug::GetCWPScan() const
{
    return m_cWPScan;
}

void DataSearchBug::SetCWPScan(const string& _cWPScan)
{
    m_cWPScan = _cWPScan;
    m_cWPScanHasBeenSet = true;
}

bool DataSearchBug::CWPScanHasBeenSet() const
{
    return m_cWPScanHasBeenSet;
}

string DataSearchBug::GetCFWPatch() const
{
    return m_cFWPatch;
}

void DataSearchBug::SetCFWPatch(const string& _cFWPatch)
{
    m_cFWPatch = _cFWPatch;
    m_cFWPatchHasBeenSet = true;
}

bool DataSearchBug::CFWPatchHasBeenSet() const
{
    return m_cFWPatchHasBeenSet;
}

int64_t DataSearchBug::GetWafPatch() const
{
    return m_wafPatch;
}

void DataSearchBug::SetWafPatch(const int64_t& _wafPatch)
{
    m_wafPatch = _wafPatch;
    m_wafPatchHasBeenSet = true;
}

bool DataSearchBug::WafPatchHasBeenSet() const
{
    return m_wafPatchHasBeenSet;
}

int64_t DataSearchBug::GetCWPFix() const
{
    return m_cWPFix;
}

void DataSearchBug::SetCWPFix(const int64_t& _cWPFix)
{
    m_cWPFix = _cWPFix;
    m_cWPFixHasBeenSet = true;
}

bool DataSearchBug::CWPFixHasBeenSet() const
{
    return m_cWPFixHasBeenSet;
}

vector<ProductSupport> DataSearchBug::GetDataSupport() const
{
    return m_dataSupport;
}

void DataSearchBug::SetDataSupport(const vector<ProductSupport>& _dataSupport)
{
    m_dataSupport = _dataSupport;
    m_dataSupportHasBeenSet = true;
}

bool DataSearchBug::DataSupportHasBeenSet() const
{
    return m_dataSupportHasBeenSet;
}

string DataSearchBug::GetCveId() const
{
    return m_cveId;
}

void DataSearchBug::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool DataSearchBug::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

