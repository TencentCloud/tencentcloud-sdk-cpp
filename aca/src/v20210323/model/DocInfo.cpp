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

#include <tencentcloud/aca/v20210323/model/DocInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DocInfo::DocInfo() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_docUrlHasBeenSet(false)
{
}

CoreInternalOutcome DocInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocInfo.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocInfo.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("DocUrl") && !value["DocUrl"].IsNull())
    {
        if (!value["DocUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocInfo.DocUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docUrl = string(value["DocUrl"].GetString());
        m_docUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DocInfo::GetDrugId() const
{
    return m_drugId;
}

void DocInfo::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool DocInfo::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string DocInfo::GetDrugName() const
{
    return m_drugName;
}

void DocInfo::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool DocInfo::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string DocInfo::GetDocUrl() const
{
    return m_docUrl;
}

void DocInfo::SetDocUrl(const string& _docUrl)
{
    m_docUrl = _docUrl;
    m_docUrlHasBeenSet = true;
}

bool DocInfo::DocUrlHasBeenSet() const
{
    return m_docUrlHasBeenSet;
}

