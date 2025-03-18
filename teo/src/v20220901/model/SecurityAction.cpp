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

#include <tencentcloud/teo/v20220901/model/SecurityAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityAction::SecurityAction() :
    m_nameHasBeenSet(false),
    m_blockIPActionParametersHasBeenSet(false),
    m_returnCustomPageActionParametersHasBeenSet(false),
    m_redirectActionParametersHasBeenSet(false)
{
}

CoreInternalOutcome SecurityAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("BlockIPActionParameters") && !value["BlockIPActionParameters"].IsNull())
    {
        if (!value["BlockIPActionParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAction.BlockIPActionParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blockIPActionParameters.Deserialize(value["BlockIPActionParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blockIPActionParametersHasBeenSet = true;
    }

    if (value.HasMember("ReturnCustomPageActionParameters") && !value["ReturnCustomPageActionParameters"].IsNull())
    {
        if (!value["ReturnCustomPageActionParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAction.ReturnCustomPageActionParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_returnCustomPageActionParameters.Deserialize(value["ReturnCustomPageActionParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_returnCustomPageActionParametersHasBeenSet = true;
    }

    if (value.HasMember("RedirectActionParameters") && !value["RedirectActionParameters"].IsNull())
    {
        if (!value["RedirectActionParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityAction.RedirectActionParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectActionParameters.Deserialize(value["RedirectActionParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectActionParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIPActionParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIPActionParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blockIPActionParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_returnCustomPageActionParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCustomPageActionParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_returnCustomPageActionParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redirectActionParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectActionParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectActionParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SecurityAction::GetName() const
{
    return m_name;
}

void SecurityAction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SecurityAction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

BlockIPActionParameters SecurityAction::GetBlockIPActionParameters() const
{
    return m_blockIPActionParameters;
}

void SecurityAction::SetBlockIPActionParameters(const BlockIPActionParameters& _blockIPActionParameters)
{
    m_blockIPActionParameters = _blockIPActionParameters;
    m_blockIPActionParametersHasBeenSet = true;
}

bool SecurityAction::BlockIPActionParametersHasBeenSet() const
{
    return m_blockIPActionParametersHasBeenSet;
}

ReturnCustomPageActionParameters SecurityAction::GetReturnCustomPageActionParameters() const
{
    return m_returnCustomPageActionParameters;
}

void SecurityAction::SetReturnCustomPageActionParameters(const ReturnCustomPageActionParameters& _returnCustomPageActionParameters)
{
    m_returnCustomPageActionParameters = _returnCustomPageActionParameters;
    m_returnCustomPageActionParametersHasBeenSet = true;
}

bool SecurityAction::ReturnCustomPageActionParametersHasBeenSet() const
{
    return m_returnCustomPageActionParametersHasBeenSet;
}

RedirectActionParameters SecurityAction::GetRedirectActionParameters() const
{
    return m_redirectActionParameters;
}

void SecurityAction::SetRedirectActionParameters(const RedirectActionParameters& _redirectActionParameters)
{
    m_redirectActionParameters = _redirectActionParameters;
    m_redirectActionParametersHasBeenSet = true;
}

bool SecurityAction::RedirectActionParametersHasBeenSet() const
{
    return m_redirectActionParametersHasBeenSet;
}

