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

#include <tencentcloud/antiddos/v20200309/model/CertIdInsL7Rules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

CertIdInsL7Rules::CertIdInsL7Rules() :
    m_l7RulesHasBeenSet(false),
    m_certIdHasBeenSet(false)
{
}

CoreInternalOutcome CertIdInsL7Rules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("L7Rules") && !value["L7Rules"].IsNull())
    {
        if (!value["L7Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertIdInsL7Rules.L7Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["L7Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InsL7Rules item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l7Rules.push_back(item);
        }
        m_l7RulesHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertIdInsL7Rules.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertIdInsL7Rules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_l7RulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l7Rules.begin(); itr != m_l7Rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

}


vector<InsL7Rules> CertIdInsL7Rules::GetL7Rules() const
{
    return m_l7Rules;
}

void CertIdInsL7Rules::SetL7Rules(const vector<InsL7Rules>& _l7Rules)
{
    m_l7Rules = _l7Rules;
    m_l7RulesHasBeenSet = true;
}

bool CertIdInsL7Rules::L7RulesHasBeenSet() const
{
    return m_l7RulesHasBeenSet;
}

string CertIdInsL7Rules::GetCertId() const
{
    return m_certId;
}

void CertIdInsL7Rules::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertIdInsL7Rules::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

