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

#include <tencentcloud/vpc/v20170312/model/CidrForCcn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CidrForCcn::CidrForCcn() :
    m_cidrHasBeenSet(false),
    m_publishedToVbcHasBeenSet(false)
{
}

CoreInternalOutcome CidrForCcn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CidrForCcn.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }

    if (value.HasMember("PublishedToVbc") && !value["PublishedToVbc"].IsNull())
    {
        if (!value["PublishedToVbc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CidrForCcn.PublishedToVbc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publishedToVbc = value["PublishedToVbc"].GetBool();
        m_publishedToVbcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CidrForCcn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

    if (m_publishedToVbcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedToVbc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishedToVbc, allocator);
    }

}


string CidrForCcn::GetCidr() const
{
    return m_cidr;
}

void CidrForCcn::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool CidrForCcn::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

bool CidrForCcn::GetPublishedToVbc() const
{
    return m_publishedToVbc;
}

void CidrForCcn::SetPublishedToVbc(const bool& _publishedToVbc)
{
    m_publishedToVbc = _publishedToVbc;
    m_publishedToVbcHasBeenSet = true;
}

bool CidrForCcn::PublishedToVbcHasBeenSet() const
{
    return m_publishedToVbcHasBeenSet;
}

