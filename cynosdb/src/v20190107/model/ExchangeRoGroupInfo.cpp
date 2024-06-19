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

#include <tencentcloud/cynosdb/v20190107/model/ExchangeRoGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExchangeRoGroupInfo::ExchangeRoGroupInfo() :
    m_srcRoGroupInfoHasBeenSet(false),
    m_dstRoGroupInfoHasBeenSet(false)
{
}

CoreInternalOutcome ExchangeRoGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcRoGroupInfo") && !value["SrcRoGroupInfo"].IsNull())
    {
        if (!value["SrcRoGroupInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeRoGroupInfo.SrcRoGroupInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcRoGroupInfo.Deserialize(value["SrcRoGroupInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcRoGroupInfoHasBeenSet = true;
    }

    if (value.HasMember("DstRoGroupInfo") && !value["DstRoGroupInfo"].IsNull())
    {
        if (!value["DstRoGroupInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeRoGroupInfo.DstRoGroupInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstRoGroupInfo.Deserialize(value["DstRoGroupInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstRoGroupInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExchangeRoGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcRoGroupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRoGroupInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcRoGroupInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstRoGroupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRoGroupInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstRoGroupInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


RollbackRoGroupInfo ExchangeRoGroupInfo::GetSrcRoGroupInfo() const
{
    return m_srcRoGroupInfo;
}

void ExchangeRoGroupInfo::SetSrcRoGroupInfo(const RollbackRoGroupInfo& _srcRoGroupInfo)
{
    m_srcRoGroupInfo = _srcRoGroupInfo;
    m_srcRoGroupInfoHasBeenSet = true;
}

bool ExchangeRoGroupInfo::SrcRoGroupInfoHasBeenSet() const
{
    return m_srcRoGroupInfoHasBeenSet;
}

RollbackRoGroupInfo ExchangeRoGroupInfo::GetDstRoGroupInfo() const
{
    return m_dstRoGroupInfo;
}

void ExchangeRoGroupInfo::SetDstRoGroupInfo(const RollbackRoGroupInfo& _dstRoGroupInfo)
{
    m_dstRoGroupInfo = _dstRoGroupInfo;
    m_dstRoGroupInfoHasBeenSet = true;
}

bool ExchangeRoGroupInfo::DstRoGroupInfoHasBeenSet() const
{
    return m_dstRoGroupInfoHasBeenSet;
}

