/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20210820/model/LineageCommonInfoVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LineageCommonInfoVO::LineageCommonInfoVO() :
    m_currentResourceHasBeenSet(false),
    m_parentSetHasBeenSet(false),
    m_childSetHasBeenSet(false),
    m_downStreamCountHasBeenSet(false),
    m_upStreamCountHasBeenSet(false),
    m_streamCountFlagHasBeenSet(false)
{
}

CoreInternalOutcome LineageCommonInfoVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CurrentResource") && !value["CurrentResource"].IsNull())
    {
        if (!value["CurrentResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.CurrentResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentResource.Deserialize(value["CurrentResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentResourceHasBeenSet = true;
    }

    if (value.HasMember("ParentSet") && !value["ParentSet"].IsNull())
    {
        if (!value["ParentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.ParentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ParentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageNodeInfoVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parentSet.push_back(item);
        }
        m_parentSetHasBeenSet = true;
    }

    if (value.HasMember("ChildSet") && !value["ChildSet"].IsNull())
    {
        if (!value["ChildSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.ChildSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageNodeInfoVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childSet.push_back(item);
        }
        m_childSetHasBeenSet = true;
    }

    if (value.HasMember("DownStreamCount") && !value["DownStreamCount"].IsNull())
    {
        if (!value["DownStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.DownStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downStreamCount = value["DownStreamCount"].GetInt64();
        m_downStreamCountHasBeenSet = true;
    }

    if (value.HasMember("UpStreamCount") && !value["UpStreamCount"].IsNull())
    {
        if (!value["UpStreamCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.UpStreamCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upStreamCount = value["UpStreamCount"].GetInt64();
        m_upStreamCountHasBeenSet = true;
    }

    if (value.HasMember("StreamCountFlag") && !value["StreamCountFlag"].IsNull())
    {
        if (!value["StreamCountFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LineageCommonInfoVO.StreamCountFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_streamCountFlag = value["StreamCountFlag"].GetBool();
        m_streamCountFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineageCommonInfoVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currentResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parentSet.begin(); itr != m_parentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_childSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childSet.begin(); itr != m_childSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_downStreamCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownStreamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downStreamCount, allocator);
    }

    if (m_upStreamCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpStreamCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upStreamCount, allocator);
    }

    if (m_streamCountFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamCountFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamCountFlag, allocator);
    }

}


LineageResouce LineageCommonInfoVO::GetCurrentResource() const
{
    return m_currentResource;
}

void LineageCommonInfoVO::SetCurrentResource(const LineageResouce& _currentResource)
{
    m_currentResource = _currentResource;
    m_currentResourceHasBeenSet = true;
}

bool LineageCommonInfoVO::CurrentResourceHasBeenSet() const
{
    return m_currentResourceHasBeenSet;
}

vector<LineageNodeInfoVO> LineageCommonInfoVO::GetParentSet() const
{
    return m_parentSet;
}

void LineageCommonInfoVO::SetParentSet(const vector<LineageNodeInfoVO>& _parentSet)
{
    m_parentSet = _parentSet;
    m_parentSetHasBeenSet = true;
}

bool LineageCommonInfoVO::ParentSetHasBeenSet() const
{
    return m_parentSetHasBeenSet;
}

vector<LineageNodeInfoVO> LineageCommonInfoVO::GetChildSet() const
{
    return m_childSet;
}

void LineageCommonInfoVO::SetChildSet(const vector<LineageNodeInfoVO>& _childSet)
{
    m_childSet = _childSet;
    m_childSetHasBeenSet = true;
}

bool LineageCommonInfoVO::ChildSetHasBeenSet() const
{
    return m_childSetHasBeenSet;
}

int64_t LineageCommonInfoVO::GetDownStreamCount() const
{
    return m_downStreamCount;
}

void LineageCommonInfoVO::SetDownStreamCount(const int64_t& _downStreamCount)
{
    m_downStreamCount = _downStreamCount;
    m_downStreamCountHasBeenSet = true;
}

bool LineageCommonInfoVO::DownStreamCountHasBeenSet() const
{
    return m_downStreamCountHasBeenSet;
}

int64_t LineageCommonInfoVO::GetUpStreamCount() const
{
    return m_upStreamCount;
}

void LineageCommonInfoVO::SetUpStreamCount(const int64_t& _upStreamCount)
{
    m_upStreamCount = _upStreamCount;
    m_upStreamCountHasBeenSet = true;
}

bool LineageCommonInfoVO::UpStreamCountHasBeenSet() const
{
    return m_upStreamCountHasBeenSet;
}

bool LineageCommonInfoVO::GetStreamCountFlag() const
{
    return m_streamCountFlag;
}

void LineageCommonInfoVO::SetStreamCountFlag(const bool& _streamCountFlag)
{
    m_streamCountFlag = _streamCountFlag;
    m_streamCountFlagHasBeenSet = true;
}

bool LineageCommonInfoVO::StreamCountFlagHasBeenSet() const
{
    return m_streamCountFlagHasBeenSet;
}

