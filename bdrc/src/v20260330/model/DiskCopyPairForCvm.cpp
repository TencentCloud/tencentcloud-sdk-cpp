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

#include <tencentcloud/bdrc/v20260330/model/DiskCopyPairForCvm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DiskCopyPairForCvm::DiskCopyPairForCvm() :
    m_copyPairIdHasBeenSet(false),
    m_copyPairNameHasBeenSet(false),
    m_sourceResourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DiskCopyPairForCvm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CopyPairId") && !value["CopyPairId"].IsNull())
    {
        if (!value["CopyPairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCopyPairForCvm.CopyPairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairId = string(value["CopyPairId"].GetString());
        m_copyPairIdHasBeenSet = true;
    }

    if (value.HasMember("CopyPairName") && !value["CopyPairName"].IsNull())
    {
        if (!value["CopyPairName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCopyPairForCvm.CopyPairName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_copyPairName = string(value["CopyPairName"].GetString());
        m_copyPairNameHasBeenSet = true;
    }

    if (value.HasMember("SourceResourceId") && !value["SourceResourceId"].IsNull())
    {
        if (!value["SourceResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCopyPairForCvm.SourceResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceResourceId = string(value["SourceResourceId"].GetString());
        m_sourceResourceIdHasBeenSet = true;
    }

    if (value.HasMember("TargetResourceId") && !value["TargetResourceId"].IsNull())
    {
        if (!value["TargetResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCopyPairForCvm.TargetResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetResourceId = string(value["TargetResourceId"].GetString());
        m_targetResourceIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiskCopyPairForCvm.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiskCopyPairForCvm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_copyPairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairId.c_str(), allocator).Move(), allocator);
    }

    if (m_copyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyPairName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_copyPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DiskCopyPairForCvm::GetCopyPairId() const
{
    return m_copyPairId;
}

void DiskCopyPairForCvm::SetCopyPairId(const string& _copyPairId)
{
    m_copyPairId = _copyPairId;
    m_copyPairIdHasBeenSet = true;
}

bool DiskCopyPairForCvm::CopyPairIdHasBeenSet() const
{
    return m_copyPairIdHasBeenSet;
}

string DiskCopyPairForCvm::GetCopyPairName() const
{
    return m_copyPairName;
}

void DiskCopyPairForCvm::SetCopyPairName(const string& _copyPairName)
{
    m_copyPairName = _copyPairName;
    m_copyPairNameHasBeenSet = true;
}

bool DiskCopyPairForCvm::CopyPairNameHasBeenSet() const
{
    return m_copyPairNameHasBeenSet;
}

string DiskCopyPairForCvm::GetSourceResourceId() const
{
    return m_sourceResourceId;
}

void DiskCopyPairForCvm::SetSourceResourceId(const string& _sourceResourceId)
{
    m_sourceResourceId = _sourceResourceId;
    m_sourceResourceIdHasBeenSet = true;
}

bool DiskCopyPairForCvm::SourceResourceIdHasBeenSet() const
{
    return m_sourceResourceIdHasBeenSet;
}

string DiskCopyPairForCvm::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void DiskCopyPairForCvm::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool DiskCopyPairForCvm::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

string DiskCopyPairForCvm::GetCreateTime() const
{
    return m_createTime;
}

void DiskCopyPairForCvm::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DiskCopyPairForCvm::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

