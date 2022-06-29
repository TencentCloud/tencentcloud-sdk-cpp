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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankDownLoadUrlResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankDownLoadUrlResult::QueryOpenBankDownLoadUrlResult() :
    m_downloadUrlHasBeenSet(false),
    m_hashValueHasBeenSet(false),
    m_hashTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankDownLoadUrlResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDownLoadUrlResult.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("HashValue") && !value["HashValue"].IsNull())
    {
        if (!value["HashValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDownLoadUrlResult.HashValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hashValue = string(value["HashValue"].GetString());
        m_hashValueHasBeenSet = true;
    }

    if (value.HasMember("HashType") && !value["HashType"].IsNull())
    {
        if (!value["HashType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDownLoadUrlResult.HashType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hashType = string(value["HashType"].GetString());
        m_hashTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankDownLoadUrlResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_hashValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HashValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hashValue.c_str(), allocator).Move(), allocator);
    }

    if (m_hashTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HashType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hashType.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankDownLoadUrlResult::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void QueryOpenBankDownLoadUrlResult::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool QueryOpenBankDownLoadUrlResult::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string QueryOpenBankDownLoadUrlResult::GetHashValue() const
{
    return m_hashValue;
}

void QueryOpenBankDownLoadUrlResult::SetHashValue(const string& _hashValue)
{
    m_hashValue = _hashValue;
    m_hashValueHasBeenSet = true;
}

bool QueryOpenBankDownLoadUrlResult::HashValueHasBeenSet() const
{
    return m_hashValueHasBeenSet;
}

string QueryOpenBankDownLoadUrlResult::GetHashType() const
{
    return m_hashType;
}

void QueryOpenBankDownLoadUrlResult::SetHashType(const string& _hashType)
{
    m_hashType = _hashType;
    m_hashTypeHasBeenSet = true;
}

bool QueryOpenBankDownLoadUrlResult::HashTypeHasBeenSet() const
{
    return m_hashTypeHasBeenSet;
}

