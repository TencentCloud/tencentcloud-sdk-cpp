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

#include <tencentcloud/monitor/v20180724/model/RemoteWrite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

RemoteWrite::RemoteWrite() :
    m_uRLHasBeenSet(false),
    m_uRLRelabelConfigHasBeenSet(false),
    m_basicAuthHasBeenSet(false),
    m_maxBlockSizeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome RemoteWrite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("URLRelabelConfig") && !value["URLRelabelConfig"].IsNull())
    {
        if (!value["URLRelabelConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.URLRelabelConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLRelabelConfig = string(value["URLRelabelConfig"].GetString());
        m_uRLRelabelConfigHasBeenSet = true;
    }

    if (value.HasMember("BasicAuth") && !value["BasicAuth"].IsNull())
    {
        if (!value["BasicAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.BasicAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicAuth.Deserialize(value["BasicAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicAuthHasBeenSet = true;
    }

    if (value.HasMember("MaxBlockSize") && !value["MaxBlockSize"].IsNull())
    {
        if (!value["MaxBlockSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.MaxBlockSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxBlockSize = string(value["MaxBlockSize"].GetString());
        m_maxBlockSizeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoteWrite.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RemoteWriteHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteWrite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLRelabelConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLRelabelConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLRelabelConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_basicAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicAuth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxBlockSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBlockSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxBlockSize.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RemoteWrite::GetURL() const
{
    return m_uRL;
}

void RemoteWrite::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool RemoteWrite::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

string RemoteWrite::GetURLRelabelConfig() const
{
    return m_uRLRelabelConfig;
}

void RemoteWrite::SetURLRelabelConfig(const string& _uRLRelabelConfig)
{
    m_uRLRelabelConfig = _uRLRelabelConfig;
    m_uRLRelabelConfigHasBeenSet = true;
}

bool RemoteWrite::URLRelabelConfigHasBeenSet() const
{
    return m_uRLRelabelConfigHasBeenSet;
}

BasicAuth RemoteWrite::GetBasicAuth() const
{
    return m_basicAuth;
}

void RemoteWrite::SetBasicAuth(const BasicAuth& _basicAuth)
{
    m_basicAuth = _basicAuth;
    m_basicAuthHasBeenSet = true;
}

bool RemoteWrite::BasicAuthHasBeenSet() const
{
    return m_basicAuthHasBeenSet;
}

string RemoteWrite::GetMaxBlockSize() const
{
    return m_maxBlockSize;
}

void RemoteWrite::SetMaxBlockSize(const string& _maxBlockSize)
{
    m_maxBlockSize = _maxBlockSize;
    m_maxBlockSizeHasBeenSet = true;
}

bool RemoteWrite::MaxBlockSizeHasBeenSet() const
{
    return m_maxBlockSizeHasBeenSet;
}

string RemoteWrite::GetLabel() const
{
    return m_label;
}

void RemoteWrite::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool RemoteWrite::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<RemoteWriteHeader> RemoteWrite::GetHeaders() const
{
    return m_headers;
}

void RemoteWrite::SetHeaders(const vector<RemoteWriteHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool RemoteWrite::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

