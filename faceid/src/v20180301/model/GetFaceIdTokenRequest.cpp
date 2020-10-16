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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

GetFaceIdTokenRequest::GetFaceIdTokenRequest() :
    m_compareLibHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_metaHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

string GetFaceIdTokenRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_compareLibHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompareLib";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_compareLib.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_metaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_meta.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extra.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFaceIdTokenRequest::GetCompareLib() const
{
    return m_compareLib;
}

void GetFaceIdTokenRequest::SetCompareLib(const string& _compareLib)
{
    m_compareLib = _compareLib;
    m_compareLibHasBeenSet = true;
}

bool GetFaceIdTokenRequest::CompareLibHasBeenSet() const
{
    return m_compareLibHasBeenSet;
}

string GetFaceIdTokenRequest::GetIdCard() const
{
    return m_idCard;
}

void GetFaceIdTokenRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool GetFaceIdTokenRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string GetFaceIdTokenRequest::GetName() const
{
    return m_name;
}

void GetFaceIdTokenRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetFaceIdTokenRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetFaceIdTokenRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void GetFaceIdTokenRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool GetFaceIdTokenRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string GetFaceIdTokenRequest::GetMeta() const
{
    return m_meta;
}

void GetFaceIdTokenRequest::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool GetFaceIdTokenRequest::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

string GetFaceIdTokenRequest::GetExtra() const
{
    return m_extra;
}

void GetFaceIdTokenRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool GetFaceIdTokenRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}


