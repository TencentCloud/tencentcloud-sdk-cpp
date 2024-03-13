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

#include <tencentcloud/es/v20180416/model/DiDataSinkServerless.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

DiDataSinkServerless::DiDataSinkServerless() :
    m_serverlessIdHasBeenSet(false)
{
}

CoreInternalOutcome DiDataSinkServerless::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerlessId") && !value["ServerlessId"].IsNull())
    {
        if (!value["ServerlessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiDataSinkServerless.ServerlessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessId = string(value["ServerlessId"].GetString());
        m_serverlessIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiDataSinkServerless::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverlessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessId.c_str(), allocator).Move(), allocator);
    }

}


string DiDataSinkServerless::GetServerlessId() const
{
    return m_serverlessId;
}

void DiDataSinkServerless::SetServerlessId(const string& _serverlessId)
{
    m_serverlessId = _serverlessId;
    m_serverlessIdHasBeenSet = true;
}

bool DiDataSinkServerless::ServerlessIdHasBeenSet() const
{
    return m_serverlessIdHasBeenSet;
}

