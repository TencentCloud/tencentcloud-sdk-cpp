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

#include <tencentcloud/waf/v20180125/model/DescribeCustomRulesPagingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace rapidjson;
using namespace std;

DescribeCustomRulesPagingInfo::DescribeCustomRulesPagingInfo() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomRulesPagingInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DescribeCustomRulesPagingInfo.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DescribeCustomRulesPagingInfo.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCustomRulesPagingInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

}


int64_t DescribeCustomRulesPagingInfo::GetOffset() const
{
    return m_offset;
}

void DescribeCustomRulesPagingInfo::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCustomRulesPagingInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCustomRulesPagingInfo::GetLimit() const
{
    return m_limit;
}

void DescribeCustomRulesPagingInfo::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCustomRulesPagingInfo::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

