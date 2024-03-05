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

#include <tencentcloud/teo/v20220901/model/CustomEndpoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomEndpoint::CustomEndpoint() :
    m_urlHasBeenSet(false),
    m_accessIdHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_compressTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

CoreInternalOutcome CustomEndpoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AccessId") && !value["AccessId"].IsNull())
    {
        if (!value["AccessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.AccessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessId = string(value["AccessId"].GetString());
        m_accessIdHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("CompressType") && !value["CompressType"].IsNull())
    {
        if (!value["CompressType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.CompressType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compressType = string(value["CompressType"].GetString());
        m_compressTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomEndpoint.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Header item;
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

void CustomEndpoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_compressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compressType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
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


string CustomEndpoint::GetUrl() const
{
    return m_url;
}

void CustomEndpoint::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CustomEndpoint::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string CustomEndpoint::GetAccessId() const
{
    return m_accessId;
}

void CustomEndpoint::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool CustomEndpoint::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string CustomEndpoint::GetAccessKey() const
{
    return m_accessKey;
}

void CustomEndpoint::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool CustomEndpoint::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string CustomEndpoint::GetCompressType() const
{
    return m_compressType;
}

void CustomEndpoint::SetCompressType(const string& _compressType)
{
    m_compressType = _compressType;
    m_compressTypeHasBeenSet = true;
}

bool CustomEndpoint::CompressTypeHasBeenSet() const
{
    return m_compressTypeHasBeenSet;
}

string CustomEndpoint::GetProtocol() const
{
    return m_protocol;
}

void CustomEndpoint::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CustomEndpoint::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<Header> CustomEndpoint::GetHeaders() const
{
    return m_headers;
}

void CustomEndpoint::SetHeaders(const vector<Header>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool CustomEndpoint::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

