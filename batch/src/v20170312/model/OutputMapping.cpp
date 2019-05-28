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

#include <tencentcloud/batch/v20170312/model/OutputMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

OutputMapping::OutputMapping() :
    m_sourcePathHasBeenSet(false),
    m_destinationPathHasBeenSet(false)
{
}

CoreInternalOutcome OutputMapping::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SourcePath") && !value["SourcePath"].IsNull())
    {
        if (!value["SourcePath"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputMapping.SourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePath = string(value["SourcePath"].GetString());
        m_sourcePathHasBeenSet = true;
    }

    if (value.HasMember("DestinationPath") && !value["DestinationPath"].IsNull())
    {
        if (!value["DestinationPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputMapping.DestinationPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationPath = string(value["DestinationPath"].GetString());
        m_destinationPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputMapping::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sourcePathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destinationPath.c_str(), allocator).Move(), allocator);
    }

}


string OutputMapping::GetSourcePath() const
{
    return m_sourcePath;
}

void OutputMapping::SetSourcePath(const string& _sourcePath)
{
    m_sourcePath = _sourcePath;
    m_sourcePathHasBeenSet = true;
}

bool OutputMapping::SourcePathHasBeenSet() const
{
    return m_sourcePathHasBeenSet;
}

string OutputMapping::GetDestinationPath() const
{
    return m_destinationPath;
}

void OutputMapping::SetDestinationPath(const string& _destinationPath)
{
    m_destinationPath = _destinationPath;
    m_destinationPathHasBeenSet = true;
}

bool OutputMapping::DestinationPathHasBeenSet() const
{
    return m_destinationPathHasBeenSet;
}

