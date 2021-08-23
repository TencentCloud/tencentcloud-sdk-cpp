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

#include <tencentcloud/batch/v20170312/model/DescribeComputeEnvCreateInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

DescribeComputeEnvCreateInfoResponse::DescribeComputeEnvCreateInfoResponse() :
    m_envIdHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_envDescriptionHasBeenSet(false),
    m_envTypeHasBeenSet(false),
    m_envDataHasBeenSet(false),
    m_mountDataDisksHasBeenSet(false),
    m_inputMappingsHasBeenSet(false),
    m_authenticationsHasBeenSet(false),
    m_notificationsHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComputeEnvCreateInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EnvId") && !rsp["EnvId"].IsNull())
    {
        if (!rsp["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(rsp["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnvName") && !rsp["EnvName"].IsNull())
    {
        if (!rsp["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(rsp["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (rsp.HasMember("EnvDescription") && !rsp["EnvDescription"].IsNull())
    {
        if (!rsp["EnvDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDescription = string(rsp["EnvDescription"].GetString());
        m_envDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("EnvType") && !rsp["EnvType"].IsNull())
    {
        if (!rsp["EnvType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envType = string(rsp["EnvType"].GetString());
        m_envTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EnvData") && !rsp["EnvData"].IsNull())
    {
        if (!rsp["EnvData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envData.Deserialize(rsp["EnvData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envDataHasBeenSet = true;
    }

    if (rsp.HasMember("MountDataDisks") && !rsp["MountDataDisks"].IsNull())
    {
        if (!rsp["MountDataDisks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MountDataDisks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MountDataDisks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MountDataDisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mountDataDisks.push_back(item);
        }
        m_mountDataDisksHasBeenSet = true;
    }

    if (rsp.HasMember("InputMappings") && !rsp["InputMappings"].IsNull())
    {
        if (!rsp["InputMappings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputMappings` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InputMappings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputMapping item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputMappings.push_back(item);
        }
        m_inputMappingsHasBeenSet = true;
    }

    if (rsp.HasMember("Authentications") && !rsp["Authentications"].IsNull())
    {
        if (!rsp["Authentications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Authentications` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Authentications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Authentication item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authentications.push_back(item);
        }
        m_authenticationsHasBeenSet = true;
    }

    if (rsp.HasMember("Notifications") && !rsp["Notifications"].IsNull())
    {
        if (!rsp["Notifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Notifications` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Notifications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Notification item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notifications.push_back(item);
        }
        m_notificationsHasBeenSet = true;
    }

    if (rsp.HasMember("DesiredComputeNodeCount") && !rsp["DesiredComputeNodeCount"].IsNull())
    {
        if (!rsp["DesiredComputeNodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DesiredComputeNodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_desiredComputeNodeCount = rsp["DesiredComputeNodeCount"].GetInt64();
        m_desiredComputeNodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeComputeEnvCreateInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_envDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_envTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envType.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mountDataDisksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDataDisks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mountDataDisks.begin(); itr != m_mountDataDisks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inputMappingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputMappings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputMappings.begin(); itr != m_inputMappings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authenticationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authentications.begin(); itr != m_authentications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_notificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifications.begin(); itr != m_notifications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeComputeEnvCreateInfoResponse::GetEnvId() const
{
    return m_envId;
}

bool DescribeComputeEnvCreateInfoResponse::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeComputeEnvCreateInfoResponse::GetEnvName() const
{
    return m_envName;
}

bool DescribeComputeEnvCreateInfoResponse::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

string DescribeComputeEnvCreateInfoResponse::GetEnvDescription() const
{
    return m_envDescription;
}

bool DescribeComputeEnvCreateInfoResponse::EnvDescriptionHasBeenSet() const
{
    return m_envDescriptionHasBeenSet;
}

string DescribeComputeEnvCreateInfoResponse::GetEnvType() const
{
    return m_envType;
}

bool DescribeComputeEnvCreateInfoResponse::EnvTypeHasBeenSet() const
{
    return m_envTypeHasBeenSet;
}

EnvData DescribeComputeEnvCreateInfoResponse::GetEnvData() const
{
    return m_envData;
}

bool DescribeComputeEnvCreateInfoResponse::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}

vector<MountDataDisk> DescribeComputeEnvCreateInfoResponse::GetMountDataDisks() const
{
    return m_mountDataDisks;
}

bool DescribeComputeEnvCreateInfoResponse::MountDataDisksHasBeenSet() const
{
    return m_mountDataDisksHasBeenSet;
}

vector<InputMapping> DescribeComputeEnvCreateInfoResponse::GetInputMappings() const
{
    return m_inputMappings;
}

bool DescribeComputeEnvCreateInfoResponse::InputMappingsHasBeenSet() const
{
    return m_inputMappingsHasBeenSet;
}

vector<Authentication> DescribeComputeEnvCreateInfoResponse::GetAuthentications() const
{
    return m_authentications;
}

bool DescribeComputeEnvCreateInfoResponse::AuthenticationsHasBeenSet() const
{
    return m_authenticationsHasBeenSet;
}

vector<Notification> DescribeComputeEnvCreateInfoResponse::GetNotifications() const
{
    return m_notifications;
}

bool DescribeComputeEnvCreateInfoResponse::NotificationsHasBeenSet() const
{
    return m_notificationsHasBeenSet;
}

int64_t DescribeComputeEnvCreateInfoResponse::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

bool DescribeComputeEnvCreateInfoResponse::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

vector<Tag> DescribeComputeEnvCreateInfoResponse::GetTags() const
{
    return m_tags;
}

bool DescribeComputeEnvCreateInfoResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


