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

#include <tencentcloud/cynosdb/v20190107/model/AutoMapRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AutoMapRule::AutoMapRule() :
    m_srcInstanceIdHasBeenSet(false),
    m_srcDatabaseRegexHasBeenSet(false),
    m_srcTableRegexHasBeenSet(false),
    m_dstDatabaseRegexHasBeenSet(false),
    m_dstTableRegexHasBeenSet(false)
{
}

CoreInternalOutcome AutoMapRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceId") && !value["SrcInstanceId"].IsNull())
    {
        if (!value["SrcInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMapRule.SrcInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceId = string(value["SrcInstanceId"].GetString());
        m_srcInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("SrcDatabaseRegex") && !value["SrcDatabaseRegex"].IsNull())
    {
        if (!value["SrcDatabaseRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMapRule.SrcDatabaseRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDatabaseRegex = string(value["SrcDatabaseRegex"].GetString());
        m_srcDatabaseRegexHasBeenSet = true;
    }

    if (value.HasMember("SrcTableRegex") && !value["SrcTableRegex"].IsNull())
    {
        if (!value["SrcTableRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMapRule.SrcTableRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcTableRegex = string(value["SrcTableRegex"].GetString());
        m_srcTableRegexHasBeenSet = true;
    }

    if (value.HasMember("DstDatabaseRegex") && !value["DstDatabaseRegex"].IsNull())
    {
        if (!value["DstDatabaseRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMapRule.DstDatabaseRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDatabaseRegex = string(value["DstDatabaseRegex"].GetString());
        m_dstDatabaseRegexHasBeenSet = true;
    }

    if (value.HasMember("DstTableRegex") && !value["DstTableRegex"].IsNull())
    {
        if (!value["DstTableRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoMapRule.DstTableRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstTableRegex = string(value["DstTableRegex"].GetString());
        m_dstTableRegexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoMapRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcDatabaseRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_srcTableRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTableRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcTableRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstDatabaseRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_dstTableRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstTableRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstTableRegex.c_str(), allocator).Move(), allocator);
    }

}


string AutoMapRule::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void AutoMapRule::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool AutoMapRule::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string AutoMapRule::GetSrcDatabaseRegex() const
{
    return m_srcDatabaseRegex;
}

void AutoMapRule::SetSrcDatabaseRegex(const string& _srcDatabaseRegex)
{
    m_srcDatabaseRegex = _srcDatabaseRegex;
    m_srcDatabaseRegexHasBeenSet = true;
}

bool AutoMapRule::SrcDatabaseRegexHasBeenSet() const
{
    return m_srcDatabaseRegexHasBeenSet;
}

string AutoMapRule::GetSrcTableRegex() const
{
    return m_srcTableRegex;
}

void AutoMapRule::SetSrcTableRegex(const string& _srcTableRegex)
{
    m_srcTableRegex = _srcTableRegex;
    m_srcTableRegexHasBeenSet = true;
}

bool AutoMapRule::SrcTableRegexHasBeenSet() const
{
    return m_srcTableRegexHasBeenSet;
}

string AutoMapRule::GetDstDatabaseRegex() const
{
    return m_dstDatabaseRegex;
}

void AutoMapRule::SetDstDatabaseRegex(const string& _dstDatabaseRegex)
{
    m_dstDatabaseRegex = _dstDatabaseRegex;
    m_dstDatabaseRegexHasBeenSet = true;
}

bool AutoMapRule::DstDatabaseRegexHasBeenSet() const
{
    return m_dstDatabaseRegexHasBeenSet;
}

string AutoMapRule::GetDstTableRegex() const
{
    return m_dstTableRegex;
}

void AutoMapRule::SetDstTableRegex(const string& _dstTableRegex)
{
    m_dstTableRegex = _dstTableRegex;
    m_dstTableRegexHasBeenSet = true;
}

bool AutoMapRule::DstTableRegexHasBeenSet() const
{
    return m_dstTableRegexHasBeenSet;
}

