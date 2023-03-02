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

#include <tencentcloud/mrs/v20200910/model/PTNMBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PTNMBlock::PTNMBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_pTNMMHasBeenSet(false),
    m_pTNMNHasBeenSet(false),
    m_pTNMTHasBeenSet(false)
{
}

CoreInternalOutcome PTNMBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNMBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNMBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("PTNMM") && !value["PTNMM"].IsNull())
    {
        if (!value["PTNMM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNMBlock.PTNMM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMM = string(value["PTNMM"].GetString());
        m_pTNMMHasBeenSet = true;
    }

    if (value.HasMember("PTNMN") && !value["PTNMN"].IsNull())
    {
        if (!value["PTNMN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNMBlock.PTNMN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMN = string(value["PTNMN"].GetString());
        m_pTNMNHasBeenSet = true;
    }

    if (value.HasMember("PTNMT") && !value["PTNMT"].IsNull())
    {
        if (!value["PTNMT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PTNMBlock.PTNMT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNMT = string(value["PTNMT"].GetString());
        m_pTNMTHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PTNMBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMM.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMN.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNMT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNMT.c_str(), allocator).Move(), allocator);
    }

}


string PTNMBlock::GetName() const
{
    return m_name;
}

void PTNMBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PTNMBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PTNMBlock::GetSrc() const
{
    return m_src;
}

void PTNMBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool PTNMBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string PTNMBlock::GetPTNMM() const
{
    return m_pTNMM;
}

void PTNMBlock::SetPTNMM(const string& _pTNMM)
{
    m_pTNMM = _pTNMM;
    m_pTNMMHasBeenSet = true;
}

bool PTNMBlock::PTNMMHasBeenSet() const
{
    return m_pTNMMHasBeenSet;
}

string PTNMBlock::GetPTNMN() const
{
    return m_pTNMN;
}

void PTNMBlock::SetPTNMN(const string& _pTNMN)
{
    m_pTNMN = _pTNMN;
    m_pTNMNHasBeenSet = true;
}

bool PTNMBlock::PTNMNHasBeenSet() const
{
    return m_pTNMNHasBeenSet;
}

string PTNMBlock::GetPTNMT() const
{
    return m_pTNMT;
}

void PTNMBlock::SetPTNMT(const string& _pTNMT)
{
    m_pTNMT = _pTNMT;
    m_pTNMTHasBeenSet = true;
}

bool PTNMBlock::PTNMTHasBeenSet() const
{
    return m_pTNMTHasBeenSet;
}

