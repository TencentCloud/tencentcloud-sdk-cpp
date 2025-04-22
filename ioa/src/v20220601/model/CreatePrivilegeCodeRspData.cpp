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

#include <tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeRspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

CreatePrivilegeCodeRspData::CreatePrivilegeCodeRspData() :
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome CreatePrivilegeCodeRspData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatePrivilegeCodeRspData.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreatePrivilegeCodeRspData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

}


string CreatePrivilegeCodeRspData::GetCode() const
{
    return m_code;
}

void CreatePrivilegeCodeRspData::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreatePrivilegeCodeRspData::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

