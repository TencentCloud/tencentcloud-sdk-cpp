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

#include <tencentcloud/ecm/v20190719/model/ISP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ISP::ISP() :
    m_iSPIdHasBeenSet(false),
    m_iSPNameHasBeenSet(false)
{
}

CoreInternalOutcome ISP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ISPId") && !value["ISPId"].IsNull())
    {
        if (!value["ISPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISP.ISPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSPId = string(value["ISPId"].GetString());
        m_iSPIdHasBeenSet = true;
    }

    if (value.HasMember("ISPName") && !value["ISPName"].IsNull())
    {
        if (!value["ISPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISP.ISPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSPName = string(value["ISPName"].GetString());
        m_iSPNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ISP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iSPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSPId.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSPName.c_str(), allocator).Move(), allocator);
    }

}


string ISP::GetISPId() const
{
    return m_iSPId;
}

void ISP::SetISPId(const string& _iSPId)
{
    m_iSPId = _iSPId;
    m_iSPIdHasBeenSet = true;
}

bool ISP::ISPIdHasBeenSet() const
{
    return m_iSPIdHasBeenSet;
}

string ISP::GetISPName() const
{
    return m_iSPName;
}

void ISP::SetISPName(const string& _iSPName)
{
    m_iSPName = _iSPName;
    m_iSPNameHasBeenSet = true;
}

bool ISP::ISPNameHasBeenSet() const
{
    return m_iSPNameHasBeenSet;
}

