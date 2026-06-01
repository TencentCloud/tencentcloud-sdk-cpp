/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcbr/v20220217/model/PublicNetConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

PublicNetConf::PublicNetConf() :
    m_publicNetStatusHasBeenSet(false)
{
}

CoreInternalOutcome PublicNetConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicNetStatus") && !value["PublicNetStatus"].IsNull())
    {
        if (!value["PublicNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicNetConf.PublicNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetStatus = string(value["PublicNetStatus"].GetString());
        m_publicNetStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublicNetConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetStatus.c_str(), allocator).Move(), allocator);
    }

}


string PublicNetConf::GetPublicNetStatus() const
{
    return m_publicNetStatus;
}

void PublicNetConf::SetPublicNetStatus(const string& _publicNetStatus)
{
    m_publicNetStatus = _publicNetStatus;
    m_publicNetStatusHasBeenSet = true;
}

bool PublicNetConf::PublicNetStatusHasBeenSet() const
{
    return m_publicNetStatusHasBeenSet;
}

