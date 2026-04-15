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

#include <tencentcloud/mps/v20190612/model/TermBase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TermBase::TermBase() :
    m_srcHasBeenSet(false),
    m_dstHasBeenSet(false),
    m_srcLanguageHasBeenSet(false),
    m_dstLanguageHasBeenSet(false)
{
}

CoreInternalOutcome TermBase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TermBase.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Dst") && !value["Dst"].IsNull())
    {
        if (!value["Dst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TermBase.Dst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dst = string(value["Dst"].GetString());
        m_dstHasBeenSet = true;
    }

    if (value.HasMember("SrcLanguage") && !value["SrcLanguage"].IsNull())
    {
        if (!value["SrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TermBase.SrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcLanguage = string(value["SrcLanguage"].GetString());
        m_srcLanguageHasBeenSet = true;
    }

    if (value.HasMember("DstLanguage") && !value["DstLanguage"].IsNull())
    {
        if (!value["DstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TermBase.DstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstLanguage = string(value["DstLanguage"].GetString());
        m_dstLanguageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TermBase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_dstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dst.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_dstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstLanguage.c_str(), allocator).Move(), allocator);
    }

}


string TermBase::GetSrc() const
{
    return m_src;
}

void TermBase::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool TermBase::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string TermBase::GetDst() const
{
    return m_dst;
}

void TermBase::SetDst(const string& _dst)
{
    m_dst = _dst;
    m_dstHasBeenSet = true;
}

bool TermBase::DstHasBeenSet() const
{
    return m_dstHasBeenSet;
}

string TermBase::GetSrcLanguage() const
{
    return m_srcLanguage;
}

void TermBase::SetSrcLanguage(const string& _srcLanguage)
{
    m_srcLanguage = _srcLanguage;
    m_srcLanguageHasBeenSet = true;
}

bool TermBase::SrcLanguageHasBeenSet() const
{
    return m_srcLanguageHasBeenSet;
}

string TermBase::GetDstLanguage() const
{
    return m_dstLanguage;
}

void TermBase::SetDstLanguage(const string& _dstLanguage)
{
    m_dstLanguage = _dstLanguage;
    m_dstLanguageHasBeenSet = true;
}

bool TermBase::DstLanguageHasBeenSet() const
{
    return m_dstLanguageHasBeenSet;
}

