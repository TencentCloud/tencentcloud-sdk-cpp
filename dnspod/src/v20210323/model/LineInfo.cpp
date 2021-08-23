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

#include <tencentcloud/dnspod/v20210323/model/LineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineInfo::LineInfo() :
    m_nameHasBeenSet(false),
    m_lineIdHasBeenSet(false)
{
}

CoreInternalOutcome LineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LineId") && !value["LineId"].IsNull())
    {
        if (!value["LineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineInfo.LineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineId = string(value["LineId"].GetString());
        m_lineIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
    }

}


string LineInfo::GetName() const
{
    return m_name;
}

void LineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LineInfo::GetLineId() const
{
    return m_lineId;
}

void LineInfo::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool LineInfo::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

