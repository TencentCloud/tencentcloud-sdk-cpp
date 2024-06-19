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

#include <tencentcloud/cynosdb/v20190107/model/ExchangeInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExchangeInstanceInfo::ExchangeInstanceInfo() :
    m_srcInstanceInfoHasBeenSet(false),
    m_dstInstanceInfoHasBeenSet(false)
{
}

CoreInternalOutcome ExchangeInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceInfo") && !value["SrcInstanceInfo"].IsNull())
    {
        if (!value["SrcInstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeInstanceInfo.SrcInstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInstanceInfo.Deserialize(value["SrcInstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInstanceInfoHasBeenSet = true;
    }

    if (value.HasMember("DstInstanceInfo") && !value["DstInstanceInfo"].IsNull())
    {
        if (!value["DstInstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeInstanceInfo.DstInstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInstanceInfo.Deserialize(value["DstInstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInstanceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExchangeInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInstanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstInstanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInstanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


RollbackInstanceInfo ExchangeInstanceInfo::GetSrcInstanceInfo() const
{
    return m_srcInstanceInfo;
}

void ExchangeInstanceInfo::SetSrcInstanceInfo(const RollbackInstanceInfo& _srcInstanceInfo)
{
    m_srcInstanceInfo = _srcInstanceInfo;
    m_srcInstanceInfoHasBeenSet = true;
}

bool ExchangeInstanceInfo::SrcInstanceInfoHasBeenSet() const
{
    return m_srcInstanceInfoHasBeenSet;
}

RollbackInstanceInfo ExchangeInstanceInfo::GetDstInstanceInfo() const
{
    return m_dstInstanceInfo;
}

void ExchangeInstanceInfo::SetDstInstanceInfo(const RollbackInstanceInfo& _dstInstanceInfo)
{
    m_dstInstanceInfo = _dstInstanceInfo;
    m_dstInstanceInfoHasBeenSet = true;
}

bool ExchangeInstanceInfo::DstInstanceInfoHasBeenSet() const
{
    return m_dstInstanceInfoHasBeenSet;
}

