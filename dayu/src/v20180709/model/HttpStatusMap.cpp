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

#include <tencentcloud/dayu/v20180709/model/HttpStatusMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

HttpStatusMap::HttpStatusMap() :
    m_http2xxHasBeenSet(false),
    m_http3xxHasBeenSet(false),
    m_http404HasBeenSet(false),
    m_http4xxHasBeenSet(false),
    m_http5xxHasBeenSet(false),
    m_sourceHttp2xxHasBeenSet(false),
    m_sourceHttp3xxHasBeenSet(false),
    m_sourceHttp404HasBeenSet(false),
    m_sourceHttp4xxHasBeenSet(false),
    m_sourceHttp5xxHasBeenSet(false)
{
}

CoreInternalOutcome HttpStatusMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Http2xx") && !value["Http2xx"].IsNull())
    {
        if (!value["Http2xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.Http2xx` is not array type"));

        const rapidjson::Value &tmpValue = value["Http2xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_http2xx.push_back((*itr).GetDouble());
        }
        m_http2xxHasBeenSet = true;
    }

    if (value.HasMember("Http3xx") && !value["Http3xx"].IsNull())
    {
        if (!value["Http3xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.Http3xx` is not array type"));

        const rapidjson::Value &tmpValue = value["Http3xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_http3xx.push_back((*itr).GetDouble());
        }
        m_http3xxHasBeenSet = true;
    }

    if (value.HasMember("Http404") && !value["Http404"].IsNull())
    {
        if (!value["Http404"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.Http404` is not array type"));

        const rapidjson::Value &tmpValue = value["Http404"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_http404.push_back((*itr).GetDouble());
        }
        m_http404HasBeenSet = true;
    }

    if (value.HasMember("Http4xx") && !value["Http4xx"].IsNull())
    {
        if (!value["Http4xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.Http4xx` is not array type"));

        const rapidjson::Value &tmpValue = value["Http4xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_http4xx.push_back((*itr).GetDouble());
        }
        m_http4xxHasBeenSet = true;
    }

    if (value.HasMember("Http5xx") && !value["Http5xx"].IsNull())
    {
        if (!value["Http5xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.Http5xx` is not array type"));

        const rapidjson::Value &tmpValue = value["Http5xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_http5xx.push_back((*itr).GetDouble());
        }
        m_http5xxHasBeenSet = true;
    }

    if (value.HasMember("SourceHttp2xx") && !value["SourceHttp2xx"].IsNull())
    {
        if (!value["SourceHttp2xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.SourceHttp2xx` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceHttp2xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceHttp2xx.push_back((*itr).GetDouble());
        }
        m_sourceHttp2xxHasBeenSet = true;
    }

    if (value.HasMember("SourceHttp3xx") && !value["SourceHttp3xx"].IsNull())
    {
        if (!value["SourceHttp3xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.SourceHttp3xx` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceHttp3xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceHttp3xx.push_back((*itr).GetDouble());
        }
        m_sourceHttp3xxHasBeenSet = true;
    }

    if (value.HasMember("SourceHttp404") && !value["SourceHttp404"].IsNull())
    {
        if (!value["SourceHttp404"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.SourceHttp404` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceHttp404"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceHttp404.push_back((*itr).GetDouble());
        }
        m_sourceHttp404HasBeenSet = true;
    }

    if (value.HasMember("SourceHttp4xx") && !value["SourceHttp4xx"].IsNull())
    {
        if (!value["SourceHttp4xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.SourceHttp4xx` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceHttp4xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceHttp4xx.push_back((*itr).GetDouble());
        }
        m_sourceHttp4xxHasBeenSet = true;
    }

    if (value.HasMember("SourceHttp5xx") && !value["SourceHttp5xx"].IsNull())
    {
        if (!value["SourceHttp5xx"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusMap.SourceHttp5xx` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceHttp5xx"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceHttp5xx.push_back((*itr).GetDouble());
        }
        m_sourceHttp5xxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpStatusMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_http2xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_http2xx.begin(); itr != m_http2xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_http3xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http3xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_http3xx.begin(); itr != m_http3xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_http404HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http404";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_http404.begin(); itr != m_http404.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_http4xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http4xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_http4xx.begin(); itr != m_http4xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_http5xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http5xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_http5xx.begin(); itr != m_http5xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_sourceHttp2xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHttp2xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceHttp2xx.begin(); itr != m_sourceHttp2xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_sourceHttp3xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHttp3xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceHttp3xx.begin(); itr != m_sourceHttp3xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_sourceHttp404HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHttp404";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceHttp404.begin(); itr != m_sourceHttp404.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_sourceHttp4xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHttp4xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceHttp4xx.begin(); itr != m_sourceHttp4xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_sourceHttp5xxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceHttp5xx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceHttp5xx.begin(); itr != m_sourceHttp5xx.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


vector<double> HttpStatusMap::GetHttp2xx() const
{
    return m_http2xx;
}

void HttpStatusMap::SetHttp2xx(const vector<double>& _http2xx)
{
    m_http2xx = _http2xx;
    m_http2xxHasBeenSet = true;
}

bool HttpStatusMap::Http2xxHasBeenSet() const
{
    return m_http2xxHasBeenSet;
}

vector<double> HttpStatusMap::GetHttp3xx() const
{
    return m_http3xx;
}

void HttpStatusMap::SetHttp3xx(const vector<double>& _http3xx)
{
    m_http3xx = _http3xx;
    m_http3xxHasBeenSet = true;
}

bool HttpStatusMap::Http3xxHasBeenSet() const
{
    return m_http3xxHasBeenSet;
}

vector<double> HttpStatusMap::GetHttp404() const
{
    return m_http404;
}

void HttpStatusMap::SetHttp404(const vector<double>& _http404)
{
    m_http404 = _http404;
    m_http404HasBeenSet = true;
}

bool HttpStatusMap::Http404HasBeenSet() const
{
    return m_http404HasBeenSet;
}

vector<double> HttpStatusMap::GetHttp4xx() const
{
    return m_http4xx;
}

void HttpStatusMap::SetHttp4xx(const vector<double>& _http4xx)
{
    m_http4xx = _http4xx;
    m_http4xxHasBeenSet = true;
}

bool HttpStatusMap::Http4xxHasBeenSet() const
{
    return m_http4xxHasBeenSet;
}

vector<double> HttpStatusMap::GetHttp5xx() const
{
    return m_http5xx;
}

void HttpStatusMap::SetHttp5xx(const vector<double>& _http5xx)
{
    m_http5xx = _http5xx;
    m_http5xxHasBeenSet = true;
}

bool HttpStatusMap::Http5xxHasBeenSet() const
{
    return m_http5xxHasBeenSet;
}

vector<double> HttpStatusMap::GetSourceHttp2xx() const
{
    return m_sourceHttp2xx;
}

void HttpStatusMap::SetSourceHttp2xx(const vector<double>& _sourceHttp2xx)
{
    m_sourceHttp2xx = _sourceHttp2xx;
    m_sourceHttp2xxHasBeenSet = true;
}

bool HttpStatusMap::SourceHttp2xxHasBeenSet() const
{
    return m_sourceHttp2xxHasBeenSet;
}

vector<double> HttpStatusMap::GetSourceHttp3xx() const
{
    return m_sourceHttp3xx;
}

void HttpStatusMap::SetSourceHttp3xx(const vector<double>& _sourceHttp3xx)
{
    m_sourceHttp3xx = _sourceHttp3xx;
    m_sourceHttp3xxHasBeenSet = true;
}

bool HttpStatusMap::SourceHttp3xxHasBeenSet() const
{
    return m_sourceHttp3xxHasBeenSet;
}

vector<double> HttpStatusMap::GetSourceHttp404() const
{
    return m_sourceHttp404;
}

void HttpStatusMap::SetSourceHttp404(const vector<double>& _sourceHttp404)
{
    m_sourceHttp404 = _sourceHttp404;
    m_sourceHttp404HasBeenSet = true;
}

bool HttpStatusMap::SourceHttp404HasBeenSet() const
{
    return m_sourceHttp404HasBeenSet;
}

vector<double> HttpStatusMap::GetSourceHttp4xx() const
{
    return m_sourceHttp4xx;
}

void HttpStatusMap::SetSourceHttp4xx(const vector<double>& _sourceHttp4xx)
{
    m_sourceHttp4xx = _sourceHttp4xx;
    m_sourceHttp4xxHasBeenSet = true;
}

bool HttpStatusMap::SourceHttp4xxHasBeenSet() const
{
    return m_sourceHttp4xxHasBeenSet;
}

vector<double> HttpStatusMap::GetSourceHttp5xx() const
{
    return m_sourceHttp5xx;
}

void HttpStatusMap::SetSourceHttp5xx(const vector<double>& _sourceHttp5xx)
{
    m_sourceHttp5xx = _sourceHttp5xx;
    m_sourceHttp5xxHasBeenSet = true;
}

bool HttpStatusMap::SourceHttp5xxHasBeenSet() const
{
    return m_sourceHttp5xxHasBeenSet;
}

