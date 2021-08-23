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

#include <tencentcloud/batch/v20170312/model/InputMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

InputMapping::InputMapping() :
    m_sourcePathHasBeenSet(false),
    m_destinationPathHasBeenSet(false),
    m_mountOptionParameterHasBeenSet(false)
{
}

CoreInternalOutcome InputMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourcePath") && !value["SourcePath"].IsNull())
    {
        if (!value["SourcePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputMapping.SourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePath = string(value["SourcePath"].GetString());
        m_sourcePathHasBeenSet = true;
    }

    if (value.HasMember("DestinationPath") && !value["DestinationPath"].IsNull())
    {
        if (!value["DestinationPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputMapping.DestinationPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationPath = string(value["DestinationPath"].GetString());
        m_destinationPathHasBeenSet = true;
    }

    if (value.HasMember("MountOptionParameter") && !value["MountOptionParameter"].IsNull())
    {
        if (!value["MountOptionParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputMapping.MountOptionParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountOptionParameter = string(value["MountOptionParameter"].GetString());
        m_mountOptionParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mountOptionParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountOptionParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountOptionParameter.c_str(), allocator).Move(), allocator);
    }

}


string InputMapping::GetSourcePath() const
{
    return m_sourcePath;
}

void InputMapping::SetSourcePath(const string& _sourcePath)
{
    m_sourcePath = _sourcePath;
    m_sourcePathHasBeenSet = true;
}

bool InputMapping::SourcePathHasBeenSet() const
{
    return m_sourcePathHasBeenSet;
}

string InputMapping::GetDestinationPath() const
{
    return m_destinationPath;
}

void InputMapping::SetDestinationPath(const string& _destinationPath)
{
    m_destinationPath = _destinationPath;
    m_destinationPathHasBeenSet = true;
}

bool InputMapping::DestinationPathHasBeenSet() const
{
    return m_destinationPathHasBeenSet;
}

string InputMapping::GetMountOptionParameter() const
{
    return m_mountOptionParameter;
}

void InputMapping::SetMountOptionParameter(const string& _mountOptionParameter)
{
    m_mountOptionParameter = _mountOptionParameter;
    m_mountOptionParameterHasBeenSet = true;
}

bool InputMapping::MountOptionParameterHasBeenSet() const
{
    return m_mountOptionParameterHasBeenSet;
}

