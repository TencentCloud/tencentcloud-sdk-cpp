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

#include <tencentcloud/ocr/v20181119/model/InvoiceSealInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

InvoiceSealInfo::InvoiceSealInfo() :
    m_companySealMarkHasBeenSet(false),
    m_supervisionSealMarkHasBeenSet(false),
    m_companySealMarkInfoHasBeenSet(false),
    m_supervisionSealMarkInfoHasBeenSet(false)
{
}

CoreInternalOutcome InvoiceSealInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanySealMark") && !value["CompanySealMark"].IsNull())
    {
        if (!value["CompanySealMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceSealInfo.CompanySealMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companySealMark = string(value["CompanySealMark"].GetString());
        m_companySealMarkHasBeenSet = true;
    }

    if (value.HasMember("SupervisionSealMark") && !value["SupervisionSealMark"].IsNull())
    {
        if (!value["SupervisionSealMark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceSealInfo.SupervisionSealMark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supervisionSealMark = string(value["SupervisionSealMark"].GetString());
        m_supervisionSealMarkHasBeenSet = true;
    }

    if (value.HasMember("CompanySealMarkInfo") && !value["CompanySealMarkInfo"].IsNull())
    {
        if (!value["CompanySealMarkInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvoiceSealInfo.CompanySealMarkInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CompanySealMarkInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_companySealMarkInfo.push_back((*itr).GetString());
        }
        m_companySealMarkInfoHasBeenSet = true;
    }

    if (value.HasMember("SupervisionSealMarkInfo") && !value["SupervisionSealMarkInfo"].IsNull())
    {
        if (!value["SupervisionSealMarkInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvoiceSealInfo.SupervisionSealMarkInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SupervisionSealMarkInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supervisionSealMarkInfo.push_back((*itr).GetString());
        }
        m_supervisionSealMarkInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvoiceSealInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companySealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companySealMark.c_str(), allocator).Move(), allocator);
    }

    if (m_supervisionSealMarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupervisionSealMark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supervisionSealMark.c_str(), allocator).Move(), allocator);
    }

    if (m_companySealMarkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanySealMarkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_companySealMarkInfo.begin(); itr != m_companySealMarkInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supervisionSealMarkInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupervisionSealMarkInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supervisionSealMarkInfo.begin(); itr != m_supervisionSealMarkInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InvoiceSealInfo::GetCompanySealMark() const
{
    return m_companySealMark;
}

void InvoiceSealInfo::SetCompanySealMark(const string& _companySealMark)
{
    m_companySealMark = _companySealMark;
    m_companySealMarkHasBeenSet = true;
}

bool InvoiceSealInfo::CompanySealMarkHasBeenSet() const
{
    return m_companySealMarkHasBeenSet;
}

string InvoiceSealInfo::GetSupervisionSealMark() const
{
    return m_supervisionSealMark;
}

void InvoiceSealInfo::SetSupervisionSealMark(const string& _supervisionSealMark)
{
    m_supervisionSealMark = _supervisionSealMark;
    m_supervisionSealMarkHasBeenSet = true;
}

bool InvoiceSealInfo::SupervisionSealMarkHasBeenSet() const
{
    return m_supervisionSealMarkHasBeenSet;
}

vector<string> InvoiceSealInfo::GetCompanySealMarkInfo() const
{
    return m_companySealMarkInfo;
}

void InvoiceSealInfo::SetCompanySealMarkInfo(const vector<string>& _companySealMarkInfo)
{
    m_companySealMarkInfo = _companySealMarkInfo;
    m_companySealMarkInfoHasBeenSet = true;
}

bool InvoiceSealInfo::CompanySealMarkInfoHasBeenSet() const
{
    return m_companySealMarkInfoHasBeenSet;
}

vector<string> InvoiceSealInfo::GetSupervisionSealMarkInfo() const
{
    return m_supervisionSealMarkInfo;
}

void InvoiceSealInfo::SetSupervisionSealMarkInfo(const vector<string>& _supervisionSealMarkInfo)
{
    m_supervisionSealMarkInfo = _supervisionSealMarkInfo;
    m_supervisionSealMarkInfoHasBeenSet = true;
}

bool InvoiceSealInfo::SupervisionSealMarkInfoHasBeenSet() const
{
    return m_supervisionSealMarkInfoHasBeenSet;
}

