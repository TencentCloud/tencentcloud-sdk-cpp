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

#include <tencentcloud/emr/v20190103/model/ExternalAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ExternalAccess::ExternalAccess() :
    m_typeHasBeenSet(false),
    m_cLBServerHasBeenSet(false)
{
}

CoreInternalOutcome ExternalAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAccess.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CLBServer") && !value["CLBServer"].IsNull())
    {
        if (!value["CLBServer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalAccess.CLBServer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLBServer.Deserialize(value["CLBServer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLBServerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cLBServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLBServer.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ExternalAccess::GetType() const
{
    return m_type;
}

void ExternalAccess::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExternalAccess::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

CLBSetting ExternalAccess::GetCLBServer() const
{
    return m_cLBServer;
}

void ExternalAccess::SetCLBServer(const CLBSetting& _cLBServer)
{
    m_cLBServer = _cLBServer;
    m_cLBServerHasBeenSet = true;
}

bool ExternalAccess::CLBServerHasBeenSet() const
{
    return m_cLBServerHasBeenSet;
}

