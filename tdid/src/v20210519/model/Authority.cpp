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

#include <tencentcloud/tdid/v20210519/model/Authority.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Authority::Authority() :
    m_idHasBeenSet(false),
    m_didIdHasBeenSet(false),
    m_didHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_didServiceIdHasBeenSet(false),
    m_contractAppIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_registerTimeHasBeenSet(false),
    m_recognizeTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_labelNameHasBeenSet(false)
{
}

CoreInternalOutcome Authority::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DidId") && !value["DidId"].IsNull())
    {
        if (!value["DidId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.DidId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_didId = value["DidId"].GetUint64();
        m_didIdHasBeenSet = true;
    }

    if (value.HasMember("Did") && !value["Did"].IsNull())
    {
        if (!value["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(value["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DidServiceId") && !value["DidServiceId"].IsNull())
    {
        if (!value["DidServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.DidServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_didServiceId = value["DidServiceId"].GetUint64();
        m_didServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ContractAppId") && !value["ContractAppId"].IsNull())
    {
        if (!value["ContractAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.ContractAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contractAppId = value["ContractAppId"].GetUint64();
        m_contractAppIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("RegisterTime") && !value["RegisterTime"].IsNull())
    {
        if (!value["RegisterTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.RegisterTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerTime = string(value["RegisterTime"].GetString());
        m_registerTimeHasBeenSet = true;
    }

    if (value.HasMember("RecognizeTime") && !value["RecognizeTime"].IsNull())
    {
        if (!value["RecognizeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.RecognizeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recognizeTime = string(value["RecognizeTime"].GetString());
        m_recognizeTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("LabelName") && !value["LabelName"].IsNull())
    {
        if (!value["LabelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Authority.LabelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelName = string(value["LabelName"].GetString());
        m_labelNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Authority::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_didIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didId, allocator);
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_didServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DidServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_didServiceId, allocator);
    }

    if (m_contractAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contractAppId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_registerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recognizeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recognizeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_labelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t Authority::GetId() const
{
    return m_id;
}

void Authority::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Authority::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t Authority::GetDidId() const
{
    return m_didId;
}

void Authority::SetDidId(const uint64_t& _didId)
{
    m_didId = _didId;
    m_didIdHasBeenSet = true;
}

bool Authority::DidIdHasBeenSet() const
{
    return m_didIdHasBeenSet;
}

string Authority::GetDid() const
{
    return m_did;
}

void Authority::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool Authority::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

string Authority::GetName() const
{
    return m_name;
}

void Authority::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Authority::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t Authority::GetStatus() const
{
    return m_status;
}

void Authority::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Authority::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t Authority::GetDidServiceId() const
{
    return m_didServiceId;
}

void Authority::SetDidServiceId(const uint64_t& _didServiceId)
{
    m_didServiceId = _didServiceId;
    m_didServiceIdHasBeenSet = true;
}

bool Authority::DidServiceIdHasBeenSet() const
{
    return m_didServiceIdHasBeenSet;
}

uint64_t Authority::GetContractAppId() const
{
    return m_contractAppId;
}

void Authority::SetContractAppId(const uint64_t& _contractAppId)
{
    m_contractAppId = _contractAppId;
    m_contractAppIdHasBeenSet = true;
}

bool Authority::ContractAppIdHasBeenSet() const
{
    return m_contractAppIdHasBeenSet;
}

string Authority::GetRemark() const
{
    return m_remark;
}

void Authority::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Authority::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Authority::GetRegisterTime() const
{
    return m_registerTime;
}

void Authority::SetRegisterTime(const string& _registerTime)
{
    m_registerTime = _registerTime;
    m_registerTimeHasBeenSet = true;
}

bool Authority::RegisterTimeHasBeenSet() const
{
    return m_registerTimeHasBeenSet;
}

string Authority::GetRecognizeTime() const
{
    return m_recognizeTime;
}

void Authority::SetRecognizeTime(const string& _recognizeTime)
{
    m_recognizeTime = _recognizeTime;
    m_recognizeTimeHasBeenSet = true;
}

bool Authority::RecognizeTimeHasBeenSet() const
{
    return m_recognizeTimeHasBeenSet;
}

string Authority::GetCreateTime() const
{
    return m_createTime;
}

void Authority::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Authority::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Authority::GetUpdateTime() const
{
    return m_updateTime;
}

void Authority::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Authority::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Authority::GetClusterId() const
{
    return m_clusterId;
}

void Authority::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Authority::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t Authority::GetGroupId() const
{
    return m_groupId;
}

void Authority::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Authority::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Authority::GetAppName() const
{
    return m_appName;
}

void Authority::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool Authority::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string Authority::GetLabelName() const
{
    return m_labelName;
}

void Authority::SetLabelName(const string& _labelName)
{
    m_labelName = _labelName;
    m_labelNameHasBeenSet = true;
}

bool Authority::LabelNameHasBeenSet() const
{
    return m_labelNameHasBeenSet;
}

