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

#include <tencentcloud/clb/v20180317/model/RewriteLocationMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

RewriteLocationMap::RewriteLocationMap() :
    m_sourceLocationIdHasBeenSet(false),
    m_targetLocationIdHasBeenSet(false)
{
}

CoreInternalOutcome RewriteLocationMap::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RewriteLocationMap.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("TargetLocationId") && !value["TargetLocationId"].IsNull())
    {
        if (!value["TargetLocationId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RewriteLocationMap.TargetLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLocationId = string(value["TargetLocationId"].GetString());
        m_targetLocationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RewriteLocationMap::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_sourceLocationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLocationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_targetLocationId.c_str(), allocator).Move(), allocator);
    }

}


string RewriteLocationMap::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void RewriteLocationMap::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool RewriteLocationMap::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string RewriteLocationMap::GetTargetLocationId() const
{
    return m_targetLocationId;
}

void RewriteLocationMap::SetTargetLocationId(const string& _targetLocationId)
{
    m_targetLocationId = _targetLocationId;
    m_targetLocationIdHasBeenSet = true;
}

bool RewriteLocationMap::TargetLocationIdHasBeenSet() const
{
    return m_targetLocationIdHasBeenSet;
}

