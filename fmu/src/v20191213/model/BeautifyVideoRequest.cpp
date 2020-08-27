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

#include <tencentcloud/fmu/v20191213/model/BeautifyVideoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Fmu::V20191213::Model;
using namespace rapidjson;
using namespace std;

BeautifyVideoRequest::BeautifyVideoRequest() :
    m_urlHasBeenSet(false),
    m_beautyParamHasBeenSet(false),
    m_outputVideoTypeHasBeenSet(false)
{
}

string BeautifyVideoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_beautyParamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeautyParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_beautyParam.begin(); itr != m_beautyParam.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputVideoTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputVideoType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_outputVideoType.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BeautifyVideoRequest::GetUrl() const
{
    return m_url;
}

void BeautifyVideoRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BeautifyVideoRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<BeautyParam> BeautifyVideoRequest::GetBeautyParam() const
{
    return m_beautyParam;
}

void BeautifyVideoRequest::SetBeautyParam(const vector<BeautyParam>& _beautyParam)
{
    m_beautyParam = _beautyParam;
    m_beautyParamHasBeenSet = true;
}

bool BeautifyVideoRequest::BeautyParamHasBeenSet() const
{
    return m_beautyParamHasBeenSet;
}

string BeautifyVideoRequest::GetOutputVideoType() const
{
    return m_outputVideoType;
}

void BeautifyVideoRequest::SetOutputVideoType(const string& _outputVideoType)
{
    m_outputVideoType = _outputVideoType;
    m_outputVideoTypeHasBeenSet = true;
}

bool BeautifyVideoRequest::OutputVideoTypeHasBeenSet() const
{
    return m_outputVideoTypeHasBeenSet;
}


