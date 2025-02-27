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

#include <tencentcloud/cdwdoris/v20211228/model/ClusterConfigsHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ClusterConfigsHistory::ClusterConfigsHistory() :
    m_computeGroupIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_newConfValueHasBeenSet(false),
    m_oldConfValueHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_userUinHasBeenSet(false)
{
}

CoreInternalOutcome ClusterConfigsHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeGroupId") && !value["ComputeGroupId"].IsNull())
    {
        if (!value["ComputeGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.ComputeGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeGroupId = string(value["ComputeGroupId"].GetString());
        m_computeGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("NewConfValue") && !value["NewConfValue"].IsNull())
    {
        if (!value["NewConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.NewConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newConfValue = string(value["NewConfValue"].GetString());
        m_newConfValueHasBeenSet = true;
    }

    if (value.HasMember("OldConfValue") && !value["OldConfValue"].IsNull())
    {
        if (!value["OldConfValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.OldConfValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldConfValue = string(value["OldConfValue"].GetString());
        m_oldConfValueHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("UserUin") && !value["UserUin"].IsNull())
    {
        if (!value["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterConfigsHistory.UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(value["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterConfigsHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_newConfValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newConfValue.c_str(), allocator).Move(), allocator);
    }

    if (m_oldConfValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldConfValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldConfValue.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

}


string ClusterConfigsHistory::GetComputeGroupId() const
{
    return m_computeGroupId;
}

void ClusterConfigsHistory::SetComputeGroupId(const string& _computeGroupId)
{
    m_computeGroupId = _computeGroupId;
    m_computeGroupIdHasBeenSet = true;
}

bool ClusterConfigsHistory::ComputeGroupIdHasBeenSet() const
{
    return m_computeGroupIdHasBeenSet;
}

string ClusterConfigsHistory::GetFileName() const
{
    return m_fileName;
}

void ClusterConfigsHistory::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ClusterConfigsHistory::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ClusterConfigsHistory::GetNewConfValue() const
{
    return m_newConfValue;
}

void ClusterConfigsHistory::SetNewConfValue(const string& _newConfValue)
{
    m_newConfValue = _newConfValue;
    m_newConfValueHasBeenSet = true;
}

bool ClusterConfigsHistory::NewConfValueHasBeenSet() const
{
    return m_newConfValueHasBeenSet;
}

string ClusterConfigsHistory::GetOldConfValue() const
{
    return m_oldConfValue;
}

void ClusterConfigsHistory::SetOldConfValue(const string& _oldConfValue)
{
    m_oldConfValue = _oldConfValue;
    m_oldConfValueHasBeenSet = true;
}

bool ClusterConfigsHistory::OldConfValueHasBeenSet() const
{
    return m_oldConfValueHasBeenSet;
}

string ClusterConfigsHistory::GetRemark() const
{
    return m_remark;
}

void ClusterConfigsHistory::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ClusterConfigsHistory::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ClusterConfigsHistory::GetModifyTime() const
{
    return m_modifyTime;
}

void ClusterConfigsHistory::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ClusterConfigsHistory::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string ClusterConfigsHistory::GetUserUin() const
{
    return m_userUin;
}

void ClusterConfigsHistory::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool ClusterConfigsHistory::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

