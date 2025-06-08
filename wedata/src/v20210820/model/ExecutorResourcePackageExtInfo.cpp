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

#include <tencentcloud/wedata/v20210820/model/ExecutorResourcePackageExtInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorResourcePackageExtInfo::ExecutorResourcePackageExtInfo() :
    m_inlongGroupIdHasBeenSet(false),
    m_oceanusClusterIdHasBeenSet(false),
    m_productResourceIdListHasBeenSet(false),
    m_billingSuccessHasBeenSet(false),
    m_apigwServiceIdHasBeenSet(false),
    m_apigwServiceNameHasBeenSet(false),
    m_dataProxySpecHasBeenSet(false),
    m_dataProxyNumHasBeenSet(false),
    m_dataProxyStatusHasBeenSet(false),
    m_inLongManagerUrlHasBeenSet(false),
    m_inLongVersionHasBeenSet(false),
    m_executorMachineIpListHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorResourcePackageExtInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InlongGroupId") && !value["InlongGroupId"].IsNull())
    {
        if (!value["InlongGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.InlongGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inlongGroupId = string(value["InlongGroupId"].GetString());
        m_inlongGroupIdHasBeenSet = true;
    }

    if (value.HasMember("OceanusClusterId") && !value["OceanusClusterId"].IsNull())
    {
        if (!value["OceanusClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.OceanusClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oceanusClusterId = string(value["OceanusClusterId"].GetString());
        m_oceanusClusterIdHasBeenSet = true;
    }

    if (value.HasMember("ProductResourceIdList") && !value["ProductResourceIdList"].IsNull())
    {
        if (!value["ProductResourceIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.ProductResourceIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductResourceIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productResourceIdList.push_back((*itr).GetString());
        }
        m_productResourceIdListHasBeenSet = true;
    }

    if (value.HasMember("BillingSuccess") && !value["BillingSuccess"].IsNull())
    {
        if (!value["BillingSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.BillingSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_billingSuccess = value["BillingSuccess"].GetBool();
        m_billingSuccessHasBeenSet = true;
    }

    if (value.HasMember("ApigwServiceId") && !value["ApigwServiceId"].IsNull())
    {
        if (!value["ApigwServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.ApigwServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apigwServiceId = string(value["ApigwServiceId"].GetString());
        m_apigwServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ApigwServiceName") && !value["ApigwServiceName"].IsNull())
    {
        if (!value["ApigwServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.ApigwServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apigwServiceName = string(value["ApigwServiceName"].GetString());
        m_apigwServiceNameHasBeenSet = true;
    }

    if (value.HasMember("DataProxySpec") && !value["DataProxySpec"].IsNull())
    {
        if (!value["DataProxySpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.DataProxySpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxySpec = value["DataProxySpec"].GetInt64();
        m_dataProxySpecHasBeenSet = true;
    }

    if (value.HasMember("DataProxyNum") && !value["DataProxyNum"].IsNull())
    {
        if (!value["DataProxyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.DataProxyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxyNum = value["DataProxyNum"].GetInt64();
        m_dataProxyNumHasBeenSet = true;
    }

    if (value.HasMember("DataProxyStatus") && !value["DataProxyStatus"].IsNull())
    {
        if (!value["DataProxyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.DataProxyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxyStatus = value["DataProxyStatus"].GetInt64();
        m_dataProxyStatusHasBeenSet = true;
    }

    if (value.HasMember("InLongManagerUrl") && !value["InLongManagerUrl"].IsNull())
    {
        if (!value["InLongManagerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.InLongManagerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inLongManagerUrl = string(value["InLongManagerUrl"].GetString());
        m_inLongManagerUrlHasBeenSet = true;
    }

    if (value.HasMember("InLongVersion") && !value["InLongVersion"].IsNull())
    {
        if (!value["InLongVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.InLongVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inLongVersion = string(value["InLongVersion"].GetString());
        m_inLongVersionHasBeenSet = true;
    }

    if (value.HasMember("ExecutorMachineIpList") && !value["ExecutorMachineIpList"].IsNull())
    {
        if (!value["ExecutorMachineIpList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorResourcePackageExtInfo.ExecutorMachineIpList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorMachineIpList = string(value["ExecutorMachineIpList"].GetString());
        m_executorMachineIpListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorResourcePackageExtInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inlongGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InlongGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inlongGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_oceanusClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OceanusClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oceanusClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_productResourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productResourceIdList.begin(); itr != m_productResourceIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_billingSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingSuccess, allocator);
    }

    if (m_apigwServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApigwServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apigwServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apigwServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApigwServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apigwServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProxySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxySpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProxySpec, allocator);
    }

    if (m_dataProxyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProxyNum, allocator);
    }

    if (m_dataProxyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProxyStatus, allocator);
    }

    if (m_inLongManagerUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InLongManagerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inLongManagerUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inLongVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InLongVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inLongVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_executorMachineIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorMachineIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorMachineIpList.c_str(), allocator).Move(), allocator);
    }

}


string ExecutorResourcePackageExtInfo::GetInlongGroupId() const
{
    return m_inlongGroupId;
}

void ExecutorResourcePackageExtInfo::SetInlongGroupId(const string& _inlongGroupId)
{
    m_inlongGroupId = _inlongGroupId;
    m_inlongGroupIdHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::InlongGroupIdHasBeenSet() const
{
    return m_inlongGroupIdHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetOceanusClusterId() const
{
    return m_oceanusClusterId;
}

void ExecutorResourcePackageExtInfo::SetOceanusClusterId(const string& _oceanusClusterId)
{
    m_oceanusClusterId = _oceanusClusterId;
    m_oceanusClusterIdHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::OceanusClusterIdHasBeenSet() const
{
    return m_oceanusClusterIdHasBeenSet;
}

vector<string> ExecutorResourcePackageExtInfo::GetProductResourceIdList() const
{
    return m_productResourceIdList;
}

void ExecutorResourcePackageExtInfo::SetProductResourceIdList(const vector<string>& _productResourceIdList)
{
    m_productResourceIdList = _productResourceIdList;
    m_productResourceIdListHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::ProductResourceIdListHasBeenSet() const
{
    return m_productResourceIdListHasBeenSet;
}

bool ExecutorResourcePackageExtInfo::GetBillingSuccess() const
{
    return m_billingSuccess;
}

void ExecutorResourcePackageExtInfo::SetBillingSuccess(const bool& _billingSuccess)
{
    m_billingSuccess = _billingSuccess;
    m_billingSuccessHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::BillingSuccessHasBeenSet() const
{
    return m_billingSuccessHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetApigwServiceId() const
{
    return m_apigwServiceId;
}

void ExecutorResourcePackageExtInfo::SetApigwServiceId(const string& _apigwServiceId)
{
    m_apigwServiceId = _apigwServiceId;
    m_apigwServiceIdHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::ApigwServiceIdHasBeenSet() const
{
    return m_apigwServiceIdHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetApigwServiceName() const
{
    return m_apigwServiceName;
}

void ExecutorResourcePackageExtInfo::SetApigwServiceName(const string& _apigwServiceName)
{
    m_apigwServiceName = _apigwServiceName;
    m_apigwServiceNameHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::ApigwServiceNameHasBeenSet() const
{
    return m_apigwServiceNameHasBeenSet;
}

int64_t ExecutorResourcePackageExtInfo::GetDataProxySpec() const
{
    return m_dataProxySpec;
}

void ExecutorResourcePackageExtInfo::SetDataProxySpec(const int64_t& _dataProxySpec)
{
    m_dataProxySpec = _dataProxySpec;
    m_dataProxySpecHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::DataProxySpecHasBeenSet() const
{
    return m_dataProxySpecHasBeenSet;
}

int64_t ExecutorResourcePackageExtInfo::GetDataProxyNum() const
{
    return m_dataProxyNum;
}

void ExecutorResourcePackageExtInfo::SetDataProxyNum(const int64_t& _dataProxyNum)
{
    m_dataProxyNum = _dataProxyNum;
    m_dataProxyNumHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::DataProxyNumHasBeenSet() const
{
    return m_dataProxyNumHasBeenSet;
}

int64_t ExecutorResourcePackageExtInfo::GetDataProxyStatus() const
{
    return m_dataProxyStatus;
}

void ExecutorResourcePackageExtInfo::SetDataProxyStatus(const int64_t& _dataProxyStatus)
{
    m_dataProxyStatus = _dataProxyStatus;
    m_dataProxyStatusHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::DataProxyStatusHasBeenSet() const
{
    return m_dataProxyStatusHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetInLongManagerUrl() const
{
    return m_inLongManagerUrl;
}

void ExecutorResourcePackageExtInfo::SetInLongManagerUrl(const string& _inLongManagerUrl)
{
    m_inLongManagerUrl = _inLongManagerUrl;
    m_inLongManagerUrlHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::InLongManagerUrlHasBeenSet() const
{
    return m_inLongManagerUrlHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetInLongVersion() const
{
    return m_inLongVersion;
}

void ExecutorResourcePackageExtInfo::SetInLongVersion(const string& _inLongVersion)
{
    m_inLongVersion = _inLongVersion;
    m_inLongVersionHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::InLongVersionHasBeenSet() const
{
    return m_inLongVersionHasBeenSet;
}

string ExecutorResourcePackageExtInfo::GetExecutorMachineIpList() const
{
    return m_executorMachineIpList;
}

void ExecutorResourcePackageExtInfo::SetExecutorMachineIpList(const string& _executorMachineIpList)
{
    m_executorMachineIpList = _executorMachineIpList;
    m_executorMachineIpListHasBeenSet = true;
}

bool ExecutorResourcePackageExtInfo::ExecutorMachineIpListHasBeenSet() const
{
    return m_executorMachineIpListHasBeenSet;
}

