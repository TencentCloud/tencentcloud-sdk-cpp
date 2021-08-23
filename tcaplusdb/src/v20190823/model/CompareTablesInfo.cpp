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

#include <tencentcloud/tcaplusdb/v20190823/model/CompareTablesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

CompareTablesInfo::CompareTablesInfo() :
    m_srcTableClusterIdHasBeenSet(false),
    m_srcTableGroupIdHasBeenSet(false),
    m_srcTableNameHasBeenSet(false),
    m_dstTableClusterIdHasBeenSet(false),
    m_dstTableGroupIdHasBeenSet(false),
    m_dstTableNameHasBeenSet(false),
    m_srcTableInstanceIdHasBeenSet(false),
    m_dstTableInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome CompareTablesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcTableClusterId") && !value["SrcTableClusterId"].IsNull())
    {
        if (!value["SrcTableClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.SrcTableClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTableClusterId = string(value["SrcTableClusterId"].GetString());
        m_srcTableClusterIdHasBeenSet = true;
    }

    if (value.HasMember("SrcTableGroupId") && !value["SrcTableGroupId"].IsNull())
    {
        if (!value["SrcTableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.SrcTableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTableGroupId = string(value["SrcTableGroupId"].GetString());
        m_srcTableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SrcTableName") && !value["SrcTableName"].IsNull())
    {
        if (!value["SrcTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.SrcTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTableName = string(value["SrcTableName"].GetString());
        m_srcTableNameHasBeenSet = true;
    }

    if (value.HasMember("DstTableClusterId") && !value["DstTableClusterId"].IsNull())
    {
        if (!value["DstTableClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.DstTableClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTableClusterId = string(value["DstTableClusterId"].GetString());
        m_dstTableClusterIdHasBeenSet = true;
    }

    if (value.HasMember("DstTableGroupId") && !value["DstTableGroupId"].IsNull())
    {
        if (!value["DstTableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.DstTableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTableGroupId = string(value["DstTableGroupId"].GetString());
        m_dstTableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DstTableName") && !value["DstTableName"].IsNull())
    {
        if (!value["DstTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.DstTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTableName = string(value["DstTableName"].GetString());
        m_dstTableNameHasBeenSet = true;
    }

    if (value.HasMember("SrcTableInstanceId") && !value["SrcTableInstanceId"].IsNull())
    {
        if (!value["SrcTableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.SrcTableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTableInstanceId = string(value["SrcTableInstanceId"].GetString());
        m_srcTableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DstTableInstanceId") && !value["DstTableInstanceId"].IsNull())
    {
        if (!value["DstTableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTablesInfo.DstTableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTableInstanceId = string(value["DstTableInstanceId"].GetString());
        m_dstTableInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareTablesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcTableClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTableClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTableClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTableClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTableClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTableInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string CompareTablesInfo::GetSrcTableClusterId() const
{
    return m_srcTableClusterId;
}

void CompareTablesInfo::SetSrcTableClusterId(const string& _srcTableClusterId)
{
    m_srcTableClusterId = _srcTableClusterId;
    m_srcTableClusterIdHasBeenSet = true;
}

bool CompareTablesInfo::SrcTableClusterIdHasBeenSet() const
{
    return m_srcTableClusterIdHasBeenSet;
}

string CompareTablesInfo::GetSrcTableGroupId() const
{
    return m_srcTableGroupId;
}

void CompareTablesInfo::SetSrcTableGroupId(const string& _srcTableGroupId)
{
    m_srcTableGroupId = _srcTableGroupId;
    m_srcTableGroupIdHasBeenSet = true;
}

bool CompareTablesInfo::SrcTableGroupIdHasBeenSet() const
{
    return m_srcTableGroupIdHasBeenSet;
}

string CompareTablesInfo::GetSrcTableName() const
{
    return m_srcTableName;
}

void CompareTablesInfo::SetSrcTableName(const string& _srcTableName)
{
    m_srcTableName = _srcTableName;
    m_srcTableNameHasBeenSet = true;
}

bool CompareTablesInfo::SrcTableNameHasBeenSet() const
{
    return m_srcTableNameHasBeenSet;
}

string CompareTablesInfo::GetDstTableClusterId() const
{
    return m_dstTableClusterId;
}

void CompareTablesInfo::SetDstTableClusterId(const string& _dstTableClusterId)
{
    m_dstTableClusterId = _dstTableClusterId;
    m_dstTableClusterIdHasBeenSet = true;
}

bool CompareTablesInfo::DstTableClusterIdHasBeenSet() const
{
    return m_dstTableClusterIdHasBeenSet;
}

string CompareTablesInfo::GetDstTableGroupId() const
{
    return m_dstTableGroupId;
}

void CompareTablesInfo::SetDstTableGroupId(const string& _dstTableGroupId)
{
    m_dstTableGroupId = _dstTableGroupId;
    m_dstTableGroupIdHasBeenSet = true;
}

bool CompareTablesInfo::DstTableGroupIdHasBeenSet() const
{
    return m_dstTableGroupIdHasBeenSet;
}

string CompareTablesInfo::GetDstTableName() const
{
    return m_dstTableName;
}

void CompareTablesInfo::SetDstTableName(const string& _dstTableName)
{
    m_dstTableName = _dstTableName;
    m_dstTableNameHasBeenSet = true;
}

bool CompareTablesInfo::DstTableNameHasBeenSet() const
{
    return m_dstTableNameHasBeenSet;
}

string CompareTablesInfo::GetSrcTableInstanceId() const
{
    return m_srcTableInstanceId;
}

void CompareTablesInfo::SetSrcTableInstanceId(const string& _srcTableInstanceId)
{
    m_srcTableInstanceId = _srcTableInstanceId;
    m_srcTableInstanceIdHasBeenSet = true;
}

bool CompareTablesInfo::SrcTableInstanceIdHasBeenSet() const
{
    return m_srcTableInstanceIdHasBeenSet;
}

string CompareTablesInfo::GetDstTableInstanceId() const
{
    return m_dstTableInstanceId;
}

void CompareTablesInfo::SetDstTableInstanceId(const string& _dstTableInstanceId)
{
    m_dstTableInstanceId = _dstTableInstanceId;
    m_dstTableInstanceIdHasBeenSet = true;
}

bool CompareTablesInfo::DstTableInstanceIdHasBeenSet() const
{
    return m_dstTableInstanceIdHasBeenSet;
}

