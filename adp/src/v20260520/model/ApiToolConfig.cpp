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

#include <tencentcloud/adp/v20260520/model/ApiToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ApiToolConfig::ApiToolConfig() :
    m_externalApiUrlHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_streamModeHasBeenSet(false)
{
}

CoreInternalOutcome ApiToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalApiUrl") && !value["ExternalApiUrl"].IsNull())
    {
        if (!value["ExternalApiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.ExternalApiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalApiUrl = string(value["ExternalApiUrl"].GetString());
        m_externalApiUrlHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Body` is not array type"));

        const rapidjson::Value &tmpValue = value["Body"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_body.push_back(item);
        }
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Example") && !value["Example"].IsNull())
    {
        if (!value["Example"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Example` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_example.Deserialize(value["Example"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exampleHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Header` is not array type"));

        const rapidjson::Value &tmpValue = value["Header"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_header.push_back(item);
        }
        m_headerHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResponseParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.Query` is not array type"));

        const rapidjson::Value &tmpValue = value["Query"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_query.push_back(item);
        }
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("StreamMode") && !value["StreamMode"].IsNull())
    {
        if (!value["StreamMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiToolConfig.StreamMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_streamMode = value["StreamMode"].GetInt64();
        m_streamModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalApiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalApiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalApiUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_body.begin(); itr != m_body.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_example.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_header.begin(); itr != m_header.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_query.begin(); itr != m_query.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_streamModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamMode, allocator);
    }

}


string ApiToolConfig::GetExternalApiUrl() const
{
    return m_externalApiUrl;
}

void ApiToolConfig::SetExternalApiUrl(const string& _externalApiUrl)
{
    m_externalApiUrl = _externalApiUrl;
    m_externalApiUrlHasBeenSet = true;
}

bool ApiToolConfig::ExternalApiUrlHasBeenSet() const
{
    return m_externalApiUrlHasBeenSet;
}

string ApiToolConfig::GetMethod() const
{
    return m_method;
}

void ApiToolConfig::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiToolConfig::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiToolConfig::GetUrl() const
{
    return m_url;
}

void ApiToolConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ApiToolConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<RequestParam> ApiToolConfig::GetBody() const
{
    return m_body;
}

void ApiToolConfig::SetBody(const vector<RequestParam>& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool ApiToolConfig::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

ToolExample ApiToolConfig::GetExample() const
{
    return m_example;
}

void ApiToolConfig::SetExample(const ToolExample& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool ApiToolConfig::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

vector<RequestParam> ApiToolConfig::GetHeader() const
{
    return m_header;
}

void ApiToolConfig::SetHeader(const vector<RequestParam>& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool ApiToolConfig::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

vector<ResponseParam> ApiToolConfig::GetOutputs() const
{
    return m_outputs;
}

void ApiToolConfig::SetOutputs(const vector<ResponseParam>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool ApiToolConfig::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

vector<RequestParam> ApiToolConfig::GetQuery() const
{
    return m_query;
}

void ApiToolConfig::SetQuery(const vector<RequestParam>& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ApiToolConfig::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t ApiToolConfig::GetStreamMode() const
{
    return m_streamMode;
}

void ApiToolConfig::SetStreamMode(const int64_t& _streamMode)
{
    m_streamMode = _streamMode;
    m_streamModeHasBeenSet = true;
}

bool ApiToolConfig::StreamModeHasBeenSet() const
{
    return m_streamModeHasBeenSet;
}

