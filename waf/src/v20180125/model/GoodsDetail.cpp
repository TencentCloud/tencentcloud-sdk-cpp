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

#include <tencentcloud/waf/v20180125/model/GoodsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

GoodsDetail::GoodsDetail() :
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_productInfoHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_elasticQpsHasBeenSet(false),
    m_flexBillHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_realRegionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_labelTypesHasBeenSet(false),
    m_labelCountsHasBeenSet(false),
    m_curDeadlineHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome GoodsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("ProductInfo") && !value["ProductInfo"].IsNull())
    {
        if (!value["ProductInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.ProductInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_productInfo.push_back(item);
        }
        m_productInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ElasticQps") && !value["ElasticQps"].IsNull())
    {
        if (!value["ElasticQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.ElasticQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticQps = value["ElasticQps"].GetInt64();
        m_elasticQpsHasBeenSet = true;
    }

    if (value.HasMember("FlexBill") && !value["FlexBill"].IsNull())
    {
        if (!value["FlexBill"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.FlexBill` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flexBill = value["FlexBill"].GetInt64();
        m_flexBillHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("RealRegion") && !value["RealRegion"].IsNull())
    {
        if (!value["RealRegion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.RealRegion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realRegion = value["RealRegion"].GetInt64();
        m_realRegionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("LabelTypes") && !value["LabelTypes"].IsNull())
    {
        if (!value["LabelTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.LabelTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelTypes.push_back((*itr).GetString());
        }
        m_labelTypesHasBeenSet = true;
    }

    if (value.HasMember("LabelCounts") && !value["LabelCounts"].IsNull())
    {
        if (!value["LabelCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.LabelCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelCounts.push_back((*itr).GetInt64());
        }
        m_labelCountsHasBeenSet = true;
    }

    if (value.HasMember("CurDeadline") && !value["CurDeadline"].IsNull())
    {
        if (!value["CurDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.CurDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDeadline = string(value["CurDeadline"].GetString());
        m_curDeadlineHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GoodsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_productInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_productInfo.begin(); itr != m_productInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticQps, allocator);
    }

    if (m_flexBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlexBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flexBill, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_realRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realRegion, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_labelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelTypes.begin(); itr != m_labelTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelCounts.begin(); itr != m_labelCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_curDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


int64_t GoodsDetail::GetTimeSpan() const
{
    return m_timeSpan;
}

void GoodsDetail::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool GoodsDetail::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string GoodsDetail::GetTimeUnit() const
{
    return m_timeUnit;
}

void GoodsDetail::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool GoodsDetail::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string GoodsDetail::GetProductCode() const
{
    return m_productCode;
}

void GoodsDetail::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool GoodsDetail::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string GoodsDetail::GetSubProductCode() const
{
    return m_subProductCode;
}

void GoodsDetail::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool GoodsDetail::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

int64_t GoodsDetail::GetPid() const
{
    return m_pid;
}

void GoodsDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool GoodsDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

vector<ProductInfo> GoodsDetail::GetProductInfo() const
{
    return m_productInfo;
}

void GoodsDetail::SetProductInfo(const vector<ProductInfo>& _productInfo)
{
    m_productInfo = _productInfo;
    m_productInfoHasBeenSet = true;
}

bool GoodsDetail::ProductInfoHasBeenSet() const
{
    return m_productInfoHasBeenSet;
}

string GoodsDetail::GetInstanceName() const
{
    return m_instanceName;
}

void GoodsDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool GoodsDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t GoodsDetail::GetElasticQps() const
{
    return m_elasticQps;
}

void GoodsDetail::SetElasticQps(const int64_t& _elasticQps)
{
    m_elasticQps = _elasticQps;
    m_elasticQpsHasBeenSet = true;
}

bool GoodsDetail::ElasticQpsHasBeenSet() const
{
    return m_elasticQpsHasBeenSet;
}

int64_t GoodsDetail::GetFlexBill() const
{
    return m_flexBill;
}

void GoodsDetail::SetFlexBill(const int64_t& _flexBill)
{
    m_flexBill = _flexBill;
    m_flexBillHasBeenSet = true;
}

bool GoodsDetail::FlexBillHasBeenSet() const
{
    return m_flexBillHasBeenSet;
}

int64_t GoodsDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void GoodsDetail::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool GoodsDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t GoodsDetail::GetRealRegion() const
{
    return m_realRegion;
}

void GoodsDetail::SetRealRegion(const int64_t& _realRegion)
{
    m_realRegion = _realRegion;
    m_realRegionHasBeenSet = true;
}

bool GoodsDetail::RealRegionHasBeenSet() const
{
    return m_realRegionHasBeenSet;
}

string GoodsDetail::GetType() const
{
    return m_type;
}

void GoodsDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GoodsDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> GoodsDetail::GetLabelTypes() const
{
    return m_labelTypes;
}

void GoodsDetail::SetLabelTypes(const vector<string>& _labelTypes)
{
    m_labelTypes = _labelTypes;
    m_labelTypesHasBeenSet = true;
}

bool GoodsDetail::LabelTypesHasBeenSet() const
{
    return m_labelTypesHasBeenSet;
}

vector<int64_t> GoodsDetail::GetLabelCounts() const
{
    return m_labelCounts;
}

void GoodsDetail::SetLabelCounts(const vector<int64_t>& _labelCounts)
{
    m_labelCounts = _labelCounts;
    m_labelCountsHasBeenSet = true;
}

bool GoodsDetail::LabelCountsHasBeenSet() const
{
    return m_labelCountsHasBeenSet;
}

string GoodsDetail::GetCurDeadline() const
{
    return m_curDeadline;
}

void GoodsDetail::SetCurDeadline(const string& _curDeadline)
{
    m_curDeadline = _curDeadline;
    m_curDeadlineHasBeenSet = true;
}

bool GoodsDetail::CurDeadlineHasBeenSet() const
{
    return m_curDeadlineHasBeenSet;
}

string GoodsDetail::GetInstanceId() const
{
    return m_instanceId;
}

void GoodsDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool GoodsDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

