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

#include <tencentcloud/ccc/v20200210/model/AITransferItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AITransferItem::AITransferItem() :
    m_transferFunctionNameHasBeenSet(false),
    m_transferFunctionDescHasBeenSet(false),
    m_transferSkillGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome AITransferItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransferFunctionName") && !value["TransferFunctionName"].IsNull())
    {
        if (!value["TransferFunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITransferItem.TransferFunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferFunctionName = string(value["TransferFunctionName"].GetString());
        m_transferFunctionNameHasBeenSet = true;
    }

    if (value.HasMember("TransferFunctionDesc") && !value["TransferFunctionDesc"].IsNull())
    {
        if (!value["TransferFunctionDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AITransferItem.TransferFunctionDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferFunctionDesc = string(value["TransferFunctionDesc"].GetString());
        m_transferFunctionDescHasBeenSet = true;
    }

    if (value.HasMember("TransferSkillGroupId") && !value["TransferSkillGroupId"].IsNull())
    {
        if (!value["TransferSkillGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AITransferItem.TransferSkillGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transferSkillGroupId = value["TransferSkillGroupId"].GetUint64();
        m_transferSkillGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AITransferItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transferFunctionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferFunctionName.c_str(), allocator).Move(), allocator);
    }

    if (m_transferFunctionDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferFunctionDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferFunctionDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_transferSkillGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferSkillGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferSkillGroupId, allocator);
    }

}


string AITransferItem::GetTransferFunctionName() const
{
    return m_transferFunctionName;
}

void AITransferItem::SetTransferFunctionName(const string& _transferFunctionName)
{
    m_transferFunctionName = _transferFunctionName;
    m_transferFunctionNameHasBeenSet = true;
}

bool AITransferItem::TransferFunctionNameHasBeenSet() const
{
    return m_transferFunctionNameHasBeenSet;
}

string AITransferItem::GetTransferFunctionDesc() const
{
    return m_transferFunctionDesc;
}

void AITransferItem::SetTransferFunctionDesc(const string& _transferFunctionDesc)
{
    m_transferFunctionDesc = _transferFunctionDesc;
    m_transferFunctionDescHasBeenSet = true;
}

bool AITransferItem::TransferFunctionDescHasBeenSet() const
{
    return m_transferFunctionDescHasBeenSet;
}

uint64_t AITransferItem::GetTransferSkillGroupId() const
{
    return m_transferSkillGroupId;
}

void AITransferItem::SetTransferSkillGroupId(const uint64_t& _transferSkillGroupId)
{
    m_transferSkillGroupId = _transferSkillGroupId;
    m_transferSkillGroupIdHasBeenSet = true;
}

bool AITransferItem::TransferSkillGroupIdHasBeenSet() const
{
    return m_transferSkillGroupIdHasBeenSet;
}

