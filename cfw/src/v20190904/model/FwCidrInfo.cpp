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

#include <tencentcloud/cfw/v20190904/model/FwCidrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

FwCidrInfo::FwCidrInfo() :
    m_fwCidrTypeHasBeenSet(false),
    m_fwCidrLstHasBeenSet(false),
    m_comFwCidrHasBeenSet(false)
{
}

CoreInternalOutcome FwCidrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FwCidrType") && !value["FwCidrType"].IsNull())
    {
        if (!value["FwCidrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwCidrInfo.FwCidrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwCidrType = string(value["FwCidrType"].GetString());
        m_fwCidrTypeHasBeenSet = true;
    }

    if (value.HasMember("FwCidrLst") && !value["FwCidrLst"].IsNull())
    {
        if (!value["FwCidrLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FwCidrInfo.FwCidrLst` is not array type"));

        const rapidjson::Value &tmpValue = value["FwCidrLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FwVpcCidr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fwCidrLst.push_back(item);
        }
        m_fwCidrLstHasBeenSet = true;
    }

    if (value.HasMember("ComFwCidr") && !value["ComFwCidr"].IsNull())
    {
        if (!value["ComFwCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FwCidrInfo.ComFwCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comFwCidr = string(value["ComFwCidr"].GetString());
        m_comFwCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FwCidrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fwCidrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwCidrType.c_str(), allocator).Move(), allocator);
    }

    if (m_fwCidrLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwCidrLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fwCidrLst.begin(); itr != m_fwCidrLst.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_comFwCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComFwCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comFwCidr.c_str(), allocator).Move(), allocator);
    }

}


string FwCidrInfo::GetFwCidrType() const
{
    return m_fwCidrType;
}

void FwCidrInfo::SetFwCidrType(const string& _fwCidrType)
{
    m_fwCidrType = _fwCidrType;
    m_fwCidrTypeHasBeenSet = true;
}

bool FwCidrInfo::FwCidrTypeHasBeenSet() const
{
    return m_fwCidrTypeHasBeenSet;
}

vector<FwVpcCidr> FwCidrInfo::GetFwCidrLst() const
{
    return m_fwCidrLst;
}

void FwCidrInfo::SetFwCidrLst(const vector<FwVpcCidr>& _fwCidrLst)
{
    m_fwCidrLst = _fwCidrLst;
    m_fwCidrLstHasBeenSet = true;
}

bool FwCidrInfo::FwCidrLstHasBeenSet() const
{
    return m_fwCidrLstHasBeenSet;
}

string FwCidrInfo::GetComFwCidr() const
{
    return m_comFwCidr;
}

void FwCidrInfo::SetComFwCidr(const string& _comFwCidr)
{
    m_comFwCidr = _comFwCidr;
    m_comFwCidrHasBeenSet = true;
}

bool FwCidrInfo::ComFwCidrHasBeenSet() const
{
    return m_comFwCidrHasBeenSet;
}

