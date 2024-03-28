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

#include <tencentcloud/tione/v20211111/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_usedResourceHasBeenSet(false),
    m_totalResourceHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_specAliasHasBeenSet(false),
    m_specFeaturesHasBeenSet(false),
    m_cvmInstanceIdHasBeenSet(false),
    m_errCodeHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("UsedResource") && !value["UsedResource"].IsNull())
    {
        if (!value["UsedResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.UsedResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usedResource.Deserialize(value["UsedResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usedResourceHasBeenSet = true;
    }

    if (value.HasMember("TotalResource") && !value["TotalResource"].IsNull())
    {
        if (!value["TotalResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.TotalResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalResource.Deserialize(value["TotalResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalResourceHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.AutoRenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = string(value["AutoRenewFlag"].GetString());
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("SpecAlias") && !value["SpecAlias"].IsNull())
    {
        if (!value["SpecAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.SpecAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specAlias = string(value["SpecAlias"].GetString());
        m_specAliasHasBeenSet = true;
    }

    if (value.HasMember("SpecFeatures") && !value["SpecFeatures"].IsNull())
    {
        if (!value["SpecFeatures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Instance.SpecFeatures` is not array type"));

        const rapidjson::Value &tmpValue = value["SpecFeatures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_specFeatures.push_back((*itr).GetString());
        }
        m_specFeaturesHasBeenSet = true;
    }

    if (value.HasMember("CvmInstanceId") && !value["CvmInstanceId"].IsNull())
    {
        if (!value["CvmInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CvmInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInstanceId = string(value["CvmInstanceId"].GetString());
        m_cvmInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ErrCode") && !value["ErrCode"].IsNull())
    {
        if (!value["ErrCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ErrCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errCode = string(value["ErrCode"].GetString());
        m_errCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_usedResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usedResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoRenewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_specAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_specFeaturesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecFeatures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_specFeatures.begin(); itr != m_specFeatures.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cvmInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvmInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_errCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ResourceInfo Instance::GetUsedResource() const
{
    return m_usedResource;
}

void Instance::SetUsedResource(const ResourceInfo& _usedResource)
{
    m_usedResource = _usedResource;
    m_usedResourceHasBeenSet = true;
}

bool Instance::UsedResourceHasBeenSet() const
{
    return m_usedResourceHasBeenSet;
}

ResourceInfo Instance::GetTotalResource() const
{
    return m_totalResource;
}

void Instance::SetTotalResource(const ResourceInfo& _totalResource)
{
    m_totalResource = _totalResource;
    m_totalResourceHasBeenSet = true;
}

bool Instance::TotalResourceHasBeenSet() const
{
    return m_totalResourceHasBeenSet;
}

string Instance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void Instance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool Instance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string Instance::GetSubUin() const
{
    return m_subUin;
}

void Instance::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool Instance::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string Instance::GetCreateTime() const
{
    return m_createTime;
}

void Instance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Instance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Instance::GetExpireTime() const
{
    return m_expireTime;
}

void Instance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Instance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Instance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Instance::SetAutoRenewFlag(const string& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Instance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string Instance::GetSpecId() const
{
    return m_specId;
}

void Instance::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool Instance::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string Instance::GetSpecAlias() const
{
    return m_specAlias;
}

void Instance::SetSpecAlias(const string& _specAlias)
{
    m_specAlias = _specAlias;
    m_specAliasHasBeenSet = true;
}

bool Instance::SpecAliasHasBeenSet() const
{
    return m_specAliasHasBeenSet;
}

vector<string> Instance::GetSpecFeatures() const
{
    return m_specFeatures;
}

void Instance::SetSpecFeatures(const vector<string>& _specFeatures)
{
    m_specFeatures = _specFeatures;
    m_specFeaturesHasBeenSet = true;
}

bool Instance::SpecFeaturesHasBeenSet() const
{
    return m_specFeaturesHasBeenSet;
}

string Instance::GetCvmInstanceId() const
{
    return m_cvmInstanceId;
}

void Instance::SetCvmInstanceId(const string& _cvmInstanceId)
{
    m_cvmInstanceId = _cvmInstanceId;
    m_cvmInstanceIdHasBeenSet = true;
}

bool Instance::CvmInstanceIdHasBeenSet() const
{
    return m_cvmInstanceIdHasBeenSet;
}

string Instance::GetErrCode() const
{
    return m_errCode;
}

void Instance::SetErrCode(const string& _errCode)
{
    m_errCode = _errCode;
    m_errCodeHasBeenSet = true;
}

bool Instance::ErrCodeHasBeenSet() const
{
    return m_errCodeHasBeenSet;
}

string Instance::GetErrMsg() const
{
    return m_errMsg;
}

void Instance::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool Instance::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

