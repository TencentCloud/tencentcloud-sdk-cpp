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

#include <tencentcloud/tcr/v20190924/model/CVEWhitelistItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CVEWhitelistItem::CVEWhitelistItem() :
    m_cVEIDHasBeenSet(false)
{
}

CoreInternalOutcome CVEWhitelistItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CVEWhitelistItem.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CVEWhitelistItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

}


string CVEWhitelistItem::GetCVEID() const
{
    return m_cVEID;
}

void CVEWhitelistItem::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool CVEWhitelistItem::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

