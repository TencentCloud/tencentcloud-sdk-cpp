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

#include <tencentcloud/dataintegration/v20220613/model/BatchContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataintegration::V20220613::Model;
using namespace std;

BatchContent::BatchContent() :
    m_bodyHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

CoreInternalOutcome BatchContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchContent.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchContent.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

}


string BatchContent::GetBody() const
{
    return m_body;
}

void BatchContent::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool BatchContent::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string BatchContent::GetKey() const
{
    return m_key;
}

void BatchContent::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool BatchContent::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

