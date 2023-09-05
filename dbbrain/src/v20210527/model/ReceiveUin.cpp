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

#include <tencentcloud/dbbrain/v20210527/model/ReceiveUin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ReceiveUin::ReceiveUin() :
    m_uinNameHasBeenSet(false),
    m_uinHasBeenSet(false)
{
}

CoreInternalOutcome ReceiveUin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UinName") && !value["UinName"].IsNull())
    {
        if (!value["UinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveUin.UinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uinName = string(value["UinName"].GetString());
        m_uinNameHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveUin.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiveUin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uinName.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

}


string ReceiveUin::GetUinName() const
{
    return m_uinName;
}

void ReceiveUin::SetUinName(const string& _uinName)
{
    m_uinName = _uinName;
    m_uinNameHasBeenSet = true;
}

bool ReceiveUin::UinNameHasBeenSet() const
{
    return m_uinNameHasBeenSet;
}

string ReceiveUin::GetUin() const
{
    return m_uin;
}

void ReceiveUin::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ReceiveUin::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

