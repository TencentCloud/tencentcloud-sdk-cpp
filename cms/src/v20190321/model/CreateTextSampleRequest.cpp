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

#include <tencentcloud/cms/v20190321/model/CreateTextSampleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CreateTextSampleRequest::CreateTextSampleRequest() :
    m_contentsHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_testHasBeenSet(false)
{
}

string CreateTextSampleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_evilType, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_label, allocator);
    }

    if (m_testHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Test";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_test.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateTextSampleRequest::GetContents() const
{
    return m_contents;
}

void CreateTextSampleRequest::SetContents(const vector<string>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool CreateTextSampleRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

int64_t CreateTextSampleRequest::GetEvilType() const
{
    return m_evilType;
}

void CreateTextSampleRequest::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool CreateTextSampleRequest::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

uint64_t CreateTextSampleRequest::GetLabel() const
{
    return m_label;
}

void CreateTextSampleRequest::SetLabel(const uint64_t& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool CreateTextSampleRequest::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string CreateTextSampleRequest::GetTest() const
{
    return m_test;
}

void CreateTextSampleRequest::SetTest(const string& _test)
{
    m_test = _test;
    m_testHasBeenSet = true;
}

bool CreateTextSampleRequest::TestHasBeenSet() const
{
    return m_testHasBeenSet;
}


