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

#include <tencentcloud/aca/v20210323/model/DrugList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DrugList::DrugList() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_docUrlHasBeenSet(false),
    m_notFoundHasBeenSet(false)
{
}

CoreInternalOutcome DrugList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugList.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugList.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("DocUrl") && !value["DocUrl"].IsNull())
    {
        if (!value["DocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugList.DocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUrl = string(value["DocUrl"].GetString());
        m_docUrlHasBeenSet = true;
    }

    if (value.HasMember("NotFound") && !value["NotFound"].IsNull())
    {
        if (!value["NotFound"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DrugList.NotFound` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notFound = value["NotFound"].GetBool();
        m_notFoundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrugList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_docUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_notFoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotFound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notFound, allocator);
    }

}


string DrugList::GetDrugId() const
{
    return m_drugId;
}

void DrugList::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool DrugList::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string DrugList::GetDrugName() const
{
    return m_drugName;
}

void DrugList::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool DrugList::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string DrugList::GetDocUrl() const
{
    return m_docUrl;
}

void DrugList::SetDocUrl(const string& _docUrl)
{
    m_docUrl = _docUrl;
    m_docUrlHasBeenSet = true;
}

bool DrugList::DocUrlHasBeenSet() const
{
    return m_docUrlHasBeenSet;
}

bool DrugList::GetNotFound() const
{
    return m_notFound;
}

void DrugList::SetNotFound(const bool& _notFound)
{
    m_notFound = _notFound;
    m_notFoundHasBeenSet = true;
}

bool DrugList::NotFoundHasBeenSet() const
{
    return m_notFoundHasBeenSet;
}

