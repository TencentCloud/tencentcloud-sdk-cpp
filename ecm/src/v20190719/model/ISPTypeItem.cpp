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

#include <tencentcloud/ecm/v20190719/model/ISPTypeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ISPTypeItem::ISPTypeItem() :
    m_iSPTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ISPTypeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ISPType") && !value["ISPType"].IsNull())
    {
        if (!value["ISPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ISPTypeItem.ISPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSPType = string(value["ISPType"].GetString());
        m_iSPTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ISPTypeItem.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ISPTypeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iSPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSPType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ISPTypeItem::GetISPType() const
{
    return m_iSPType;
}

void ISPTypeItem::SetISPType(const string& _iSPType)
{
    m_iSPType = _iSPType;
    m_iSPTypeHasBeenSet = true;
}

bool ISPTypeItem::ISPTypeHasBeenSet() const
{
    return m_iSPTypeHasBeenSet;
}

uint64_t ISPTypeItem::GetCount() const
{
    return m_count;
}

void ISPTypeItem::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ISPTypeItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

