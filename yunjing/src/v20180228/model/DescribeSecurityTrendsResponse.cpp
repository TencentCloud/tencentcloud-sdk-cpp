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

#include <tencentcloud/yunjing/v20180228/model/DescribeSecurityTrendsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DescribeSecurityTrendsResponse::DescribeSecurityTrendsResponse() :
    m_malwaresHasBeenSet(false),
    m_nonLocalLoginPlacesHasBeenSet(false),
    m_bruteAttacksHasBeenSet(false),
    m_vulsHasBeenSet(false),
    m_baseLinesHasBeenSet(false),
    m_maliciousRequestsHasBeenSet(false),
    m_highRiskBashsHasBeenSet(false),
    m_reverseShellsHasBeenSet(false),
    m_privilegeEscalationsHasBeenSet(false),
    m_cyberAttacksHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecurityTrendsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Malwares") && !rsp["Malwares"].IsNull())
    {
        if (!rsp["Malwares"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Malwares` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Malwares"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_malwares.push_back(item);
        }
        m_malwaresHasBeenSet = true;
    }

    if (rsp.HasMember("NonLocalLoginPlaces") && !rsp["NonLocalLoginPlaces"].IsNull())
    {
        if (!rsp["NonLocalLoginPlaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlaces` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NonLocalLoginPlaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nonLocalLoginPlaces.push_back(item);
        }
        m_nonLocalLoginPlacesHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAttacks") && !rsp["BruteAttacks"].IsNull())
    {
        if (!rsp["BruteAttacks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BruteAttacks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BruteAttacks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bruteAttacks.push_back(item);
        }
        m_bruteAttacksHasBeenSet = true;
    }

    if (rsp.HasMember("Vuls") && !rsp["Vuls"].IsNull())
    {
        if (!rsp["Vuls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Vuls` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Vuls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vuls.push_back(item);
        }
        m_vulsHasBeenSet = true;
    }

    if (rsp.HasMember("BaseLines") && !rsp["BaseLines"].IsNull())
    {
        if (!rsp["BaseLines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaseLines` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BaseLines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baseLines.push_back(item);
        }
        m_baseLinesHasBeenSet = true;
    }

    if (rsp.HasMember("MaliciousRequests") && !rsp["MaliciousRequests"].IsNull())
    {
        if (!rsp["MaliciousRequests"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MaliciousRequests` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MaliciousRequests"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_maliciousRequests.push_back(item);
        }
        m_maliciousRequestsHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskBashs") && !rsp["HighRiskBashs"].IsNull())
    {
        if (!rsp["HighRiskBashs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HighRiskBashs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HighRiskBashs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highRiskBashs.push_back(item);
        }
        m_highRiskBashsHasBeenSet = true;
    }

    if (rsp.HasMember("ReverseShells") && !rsp["ReverseShells"].IsNull())
    {
        if (!rsp["ReverseShells"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReverseShells` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReverseShells"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reverseShells.push_back(item);
        }
        m_reverseShellsHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeEscalations") && !rsp["PrivilegeEscalations"].IsNull())
    {
        if (!rsp["PrivilegeEscalations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeEscalations` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PrivilegeEscalations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privilegeEscalations.push_back(item);
        }
        m_privilegeEscalationsHasBeenSet = true;
    }

    if (rsp.HasMember("CyberAttacks") && !rsp["CyberAttacks"].IsNull())
    {
        if (!rsp["CyberAttacks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CyberAttacks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CyberAttacks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityTrend item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cyberAttacks.push_back(item);
        }
        m_cyberAttacksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecurityTrendsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_malwaresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Malwares";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_malwares.begin(); itr != m_malwares.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nonLocalLoginPlacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonLocalLoginPlaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nonLocalLoginPlaces.begin(); itr != m_nonLocalLoginPlaces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bruteAttacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAttacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bruteAttacks.begin(); itr != m_bruteAttacks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vuls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vuls.begin(); itr != m_vuls.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baseLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baseLines.begin(); itr != m_baseLines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maliciousRequestsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaliciousRequests";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_maliciousRequests.begin(); itr != m_maliciousRequests.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_highRiskBashsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskBashs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highRiskBashs.begin(); itr != m_highRiskBashs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_reverseShellsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReverseShells";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reverseShells.begin(); itr != m_reverseShells.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privilegeEscalationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeEscalations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privilegeEscalations.begin(); itr != m_privilegeEscalations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cyberAttacksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CyberAttacks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cyberAttacks.begin(); itr != m_cyberAttacks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<SecurityTrend> DescribeSecurityTrendsResponse::GetMalwares() const
{
    return m_malwares;
}

bool DescribeSecurityTrendsResponse::MalwaresHasBeenSet() const
{
    return m_malwaresHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetNonLocalLoginPlaces() const
{
    return m_nonLocalLoginPlaces;
}

bool DescribeSecurityTrendsResponse::NonLocalLoginPlacesHasBeenSet() const
{
    return m_nonLocalLoginPlacesHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetBruteAttacks() const
{
    return m_bruteAttacks;
}

bool DescribeSecurityTrendsResponse::BruteAttacksHasBeenSet() const
{
    return m_bruteAttacksHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetVuls() const
{
    return m_vuls;
}

bool DescribeSecurityTrendsResponse::VulsHasBeenSet() const
{
    return m_vulsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetBaseLines() const
{
    return m_baseLines;
}

bool DescribeSecurityTrendsResponse::BaseLinesHasBeenSet() const
{
    return m_baseLinesHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetMaliciousRequests() const
{
    return m_maliciousRequests;
}

bool DescribeSecurityTrendsResponse::MaliciousRequestsHasBeenSet() const
{
    return m_maliciousRequestsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetHighRiskBashs() const
{
    return m_highRiskBashs;
}

bool DescribeSecurityTrendsResponse::HighRiskBashsHasBeenSet() const
{
    return m_highRiskBashsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetReverseShells() const
{
    return m_reverseShells;
}

bool DescribeSecurityTrendsResponse::ReverseShellsHasBeenSet() const
{
    return m_reverseShellsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetPrivilegeEscalations() const
{
    return m_privilegeEscalations;
}

bool DescribeSecurityTrendsResponse::PrivilegeEscalationsHasBeenSet() const
{
    return m_privilegeEscalationsHasBeenSet;
}

vector<SecurityTrend> DescribeSecurityTrendsResponse::GetCyberAttacks() const
{
    return m_cyberAttacks;
}

bool DescribeSecurityTrendsResponse::CyberAttacksHasBeenSet() const
{
    return m_cyberAttacksHasBeenSet;
}


