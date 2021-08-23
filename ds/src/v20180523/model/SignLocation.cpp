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

#include <tencentcloud/ds/v20180523/model/SignLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ds::V20180523::Model;
using namespace std;

SignLocation::SignLocation() :
    m_signOnPageHasBeenSet(false),
    m_signLocationLBXHasBeenSet(false),
    m_signLocationLBYHasBeenSet(false),
    m_signLocationRUXHasBeenSet(false),
    m_signLocationRUYHasBeenSet(false)
{
}

CoreInternalOutcome SignLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SignOnPage") && !value["SignOnPage"].IsNull())
    {
        if (!value["SignOnPage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignLocation.SignOnPage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signOnPage = string(value["SignOnPage"].GetString());
        m_signOnPageHasBeenSet = true;
    }

    if (value.HasMember("SignLocationLBX") && !value["SignLocationLBX"].IsNull())
    {
        if (!value["SignLocationLBX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignLocation.SignLocationLBX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signLocationLBX = string(value["SignLocationLBX"].GetString());
        m_signLocationLBXHasBeenSet = true;
    }

    if (value.HasMember("SignLocationLBY") && !value["SignLocationLBY"].IsNull())
    {
        if (!value["SignLocationLBY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignLocation.SignLocationLBY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signLocationLBY = string(value["SignLocationLBY"].GetString());
        m_signLocationLBYHasBeenSet = true;
    }

    if (value.HasMember("SignLocationRUX") && !value["SignLocationRUX"].IsNull())
    {
        if (!value["SignLocationRUX"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignLocation.SignLocationRUX` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signLocationRUX = string(value["SignLocationRUX"].GetString());
        m_signLocationRUXHasBeenSet = true;
    }

    if (value.HasMember("SignLocationRUY") && !value["SignLocationRUY"].IsNull())
    {
        if (!value["SignLocationRUY"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignLocation.SignLocationRUY` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signLocationRUY = string(value["SignLocationRUY"].GetString());
        m_signLocationRUYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_signOnPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignOnPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signOnPage.c_str(), allocator).Move(), allocator);
    }

    if (m_signLocationLBXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLocationLBX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signLocationLBX.c_str(), allocator).Move(), allocator);
    }

    if (m_signLocationLBYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLocationLBY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signLocationLBY.c_str(), allocator).Move(), allocator);
    }

    if (m_signLocationRUXHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLocationRUX";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signLocationRUX.c_str(), allocator).Move(), allocator);
    }

    if (m_signLocationRUYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignLocationRUY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signLocationRUY.c_str(), allocator).Move(), allocator);
    }

}


string SignLocation::GetSignOnPage() const
{
    return m_signOnPage;
}

void SignLocation::SetSignOnPage(const string& _signOnPage)
{
    m_signOnPage = _signOnPage;
    m_signOnPageHasBeenSet = true;
}

bool SignLocation::SignOnPageHasBeenSet() const
{
    return m_signOnPageHasBeenSet;
}

string SignLocation::GetSignLocationLBX() const
{
    return m_signLocationLBX;
}

void SignLocation::SetSignLocationLBX(const string& _signLocationLBX)
{
    m_signLocationLBX = _signLocationLBX;
    m_signLocationLBXHasBeenSet = true;
}

bool SignLocation::SignLocationLBXHasBeenSet() const
{
    return m_signLocationLBXHasBeenSet;
}

string SignLocation::GetSignLocationLBY() const
{
    return m_signLocationLBY;
}

void SignLocation::SetSignLocationLBY(const string& _signLocationLBY)
{
    m_signLocationLBY = _signLocationLBY;
    m_signLocationLBYHasBeenSet = true;
}

bool SignLocation::SignLocationLBYHasBeenSet() const
{
    return m_signLocationLBYHasBeenSet;
}

string SignLocation::GetSignLocationRUX() const
{
    return m_signLocationRUX;
}

void SignLocation::SetSignLocationRUX(const string& _signLocationRUX)
{
    m_signLocationRUX = _signLocationRUX;
    m_signLocationRUXHasBeenSet = true;
}

bool SignLocation::SignLocationRUXHasBeenSet() const
{
    return m_signLocationRUXHasBeenSet;
}

string SignLocation::GetSignLocationRUY() const
{
    return m_signLocationRUY;
}

void SignLocation::SetSignLocationRUY(const string& _signLocationRUY)
{
    m_signLocationRUY = _signLocationRUY;
    m_signLocationRUYHasBeenSet = true;
}

bool SignLocation::SignLocationRUYHasBeenSet() const
{
    return m_signLocationRUYHasBeenSet;
}

