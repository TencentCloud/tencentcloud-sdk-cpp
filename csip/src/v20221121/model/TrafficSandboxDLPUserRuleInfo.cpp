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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxDLPUserRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxDLPUserRuleInfo::TrafficSandboxDLPUserRuleInfo() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_uRLRuleHasBeenSet(false),
    m_trafficRuleHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxDLPUserRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPUserRuleInfo.FileName` is not array type"));

        const rapidjson::Value &tmpValue = value["FileName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileName.push_back((*itr).GetString());
        }
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPUserRuleInfo.FileSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSize.Deserialize(value["FileSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPUserRuleInfo.FileType` is not array type"));

        const rapidjson::Value &tmpValue = value["FileType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileType.push_back((*itr).GetString());
        }
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("URLRule") && !value["URLRule"].IsNull())
    {
        if (!value["URLRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPUserRuleInfo.URLRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uRLRule.Deserialize(value["URLRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uRLRuleHasBeenSet = true;
    }

    if (value.HasMember("TrafficRule") && !value["TrafficRule"].IsNull())
    {
        if (!value["TrafficRule"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxDLPUserRuleInfo.TrafficRule` is not array type"));

        const rapidjson::Value &tmpValue = value["TrafficRule"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficSandboxDLPTrafficRuleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_trafficRule.push_back(item);
        }
        m_trafficRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxDLPUserRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileName.begin(); itr != m_fileName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileSize.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileType.begin(); itr != m_fileType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uRLRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uRLRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trafficRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_trafficRule.begin(); itr != m_trafficRule.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> TrafficSandboxDLPUserRuleInfo::GetFileName() const
{
    return m_fileName;
}

void TrafficSandboxDLPUserRuleInfo::SetFileName(const vector<string>& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool TrafficSandboxDLPUserRuleInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

TrafficSandboxDLPFileSizeRange TrafficSandboxDLPUserRuleInfo::GetFileSize() const
{
    return m_fileSize;
}

void TrafficSandboxDLPUserRuleInfo::SetFileSize(const TrafficSandboxDLPFileSizeRange& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool TrafficSandboxDLPUserRuleInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

vector<string> TrafficSandboxDLPUserRuleInfo::GetFileType() const
{
    return m_fileType;
}

void TrafficSandboxDLPUserRuleInfo::SetFileType(const vector<string>& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool TrafficSandboxDLPUserRuleInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

TrafficSandboxDLPURLRuleItem TrafficSandboxDLPUserRuleInfo::GetURLRule() const
{
    return m_uRLRule;
}

void TrafficSandboxDLPUserRuleInfo::SetURLRule(const TrafficSandboxDLPURLRuleItem& _uRLRule)
{
    m_uRLRule = _uRLRule;
    m_uRLRuleHasBeenSet = true;
}

bool TrafficSandboxDLPUserRuleInfo::URLRuleHasBeenSet() const
{
    return m_uRLRuleHasBeenSet;
}

vector<TrafficSandboxDLPTrafficRuleItem> TrafficSandboxDLPUserRuleInfo::GetTrafficRule() const
{
    return m_trafficRule;
}

void TrafficSandboxDLPUserRuleInfo::SetTrafficRule(const vector<TrafficSandboxDLPTrafficRuleItem>& _trafficRule)
{
    m_trafficRule = _trafficRule;
    m_trafficRuleHasBeenSet = true;
}

bool TrafficSandboxDLPUserRuleInfo::TrafficRuleHasBeenSet() const
{
    return m_trafficRuleHasBeenSet;
}

