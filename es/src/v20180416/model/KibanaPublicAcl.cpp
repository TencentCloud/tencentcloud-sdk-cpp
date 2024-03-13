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

#include <tencentcloud/es/v20180416/model/KibanaPublicAcl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

KibanaPublicAcl::KibanaPublicAcl() :
    m_whiteIpListHasBeenSet(false)
{
}

CoreInternalOutcome KibanaPublicAcl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhiteIpList") && !value["WhiteIpList"].IsNull())
    {
        if (!value["WhiteIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KibanaPublicAcl.WhiteIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["WhiteIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_whiteIpList.push_back((*itr).GetString());
        }
        m_whiteIpListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KibanaPublicAcl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whiteIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_whiteIpList.begin(); itr != m_whiteIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> KibanaPublicAcl::GetWhiteIpList() const
{
    return m_whiteIpList;
}

void KibanaPublicAcl::SetWhiteIpList(const vector<string>& _whiteIpList)
{
    m_whiteIpList = _whiteIpList;
    m_whiteIpListHasBeenSet = true;
}

bool KibanaPublicAcl::WhiteIpListHasBeenSet() const
{
    return m_whiteIpListHasBeenSet;
}

