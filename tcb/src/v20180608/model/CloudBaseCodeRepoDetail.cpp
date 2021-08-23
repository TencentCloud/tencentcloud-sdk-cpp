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

#include <tencentcloud/tcb/v20180608/model/CloudBaseCodeRepoDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseCodeRepoDetail::CloudBaseCodeRepoDetail() :
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseCodeRepoDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseCodeRepoDetail.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseCodeRepoDetail.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseCodeRepoDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


CloudBaseCodeRepoName CloudBaseCodeRepoDetail::GetName() const
{
    return m_name;
}

void CloudBaseCodeRepoDetail::SetName(const CloudBaseCodeRepoName& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudBaseCodeRepoDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudBaseCodeRepoDetail::GetUrl() const
{
    return m_url;
}

void CloudBaseCodeRepoDetail::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool CloudBaseCodeRepoDetail::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

