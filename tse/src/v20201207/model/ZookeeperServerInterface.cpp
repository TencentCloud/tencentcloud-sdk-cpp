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

#include <tencentcloud/tse/v20201207/model/ZookeeperServerInterface.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ZookeeperServerInterface::ZookeeperServerInterface() :
    m_interfaceHasBeenSet(false)
{
}

CoreInternalOutcome ZookeeperServerInterface::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Interface") && !value["Interface"].IsNull())
    {
        if (!value["Interface"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperServerInterface.Interface` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interface = string(value["Interface"].GetString());
        m_interfaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZookeeperServerInterface::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interfaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interface";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interface.c_str(), allocator).Move(), allocator);
    }

}


string ZookeeperServerInterface::GetInterface() const
{
    return m_interface;
}

void ZookeeperServerInterface::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool ZookeeperServerInterface::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

