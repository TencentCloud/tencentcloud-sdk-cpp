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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowsByTemplatesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowsByTemplatesResponse::CreateFlowsByTemplatesResponse() :
    m_flowIdsHasBeenSet(false),
    m_customerDataHasBeenSet(false),
    m_errorMessagesHasBeenSet(false),
    m_previewUrlsHasBeenSet(false),
    m_taskInfosHasBeenSet(false),
    m_flowApproversHasBeenSet(false)
{
}

CoreInternalOutcome CreateFlowsByTemplatesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FlowIds") && !rsp["FlowIds"].IsNull())
    {
        if (!rsp["FlowIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIds.push_back((*itr).GetString());
        }
        m_flowIdsHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerData") && !rsp["CustomerData"].IsNull())
    {
        if (!rsp["CustomerData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomerData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomerData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customerData.push_back((*itr).GetString());
        }
        m_customerDataHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMessages") && !rsp["ErrorMessages"].IsNull())
    {
        if (!rsp["ErrorMessages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ErrorMessages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ErrorMessages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorMessages.push_back((*itr).GetString());
        }
        m_errorMessagesHasBeenSet = true;
    }

    if (rsp.HasMember("PreviewUrls") && !rsp["PreviewUrls"].IsNull())
    {
        if (!rsp["PreviewUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PreviewUrls` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PreviewUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_previewUrls.push_back((*itr).GetString());
        }
        m_previewUrlsHasBeenSet = true;
    }

    if (rsp.HasMember("TaskInfos") && !rsp["TaskInfos"].IsNull())
    {
        if (!rsp["TaskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskInfos.push_back(item);
        }
        m_taskInfosHasBeenSet = true;
    }

    if (rsp.HasMember("FlowApprovers") && !rsp["FlowApprovers"].IsNull())
    {
        if (!rsp["FlowApprovers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowApprovers` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FlowApprovers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FlowApproverItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_flowApprovers.push_back(item);
        }
        m_flowApproversHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateFlowsByTemplatesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_flowIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIds.begin(); itr != m_flowIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customerDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerData.begin(); itr != m_customerData.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorMessages.begin(); itr != m_errorMessages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_previewUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_previewUrls.begin(); itr != m_previewUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfos.begin(); itr != m_taskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flowApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowApprovers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowApprovers.begin(); itr != m_flowApprovers.end(); ++itr, ++i)
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


vector<string> CreateFlowsByTemplatesResponse::GetFlowIds() const
{
    return m_flowIds;
}

bool CreateFlowsByTemplatesResponse::FlowIdsHasBeenSet() const
{
    return m_flowIdsHasBeenSet;
}

vector<string> CreateFlowsByTemplatesResponse::GetCustomerData() const
{
    return m_customerData;
}

bool CreateFlowsByTemplatesResponse::CustomerDataHasBeenSet() const
{
    return m_customerDataHasBeenSet;
}

vector<string> CreateFlowsByTemplatesResponse::GetErrorMessages() const
{
    return m_errorMessages;
}

bool CreateFlowsByTemplatesResponse::ErrorMessagesHasBeenSet() const
{
    return m_errorMessagesHasBeenSet;
}

vector<string> CreateFlowsByTemplatesResponse::GetPreviewUrls() const
{
    return m_previewUrls;
}

bool CreateFlowsByTemplatesResponse::PreviewUrlsHasBeenSet() const
{
    return m_previewUrlsHasBeenSet;
}

vector<TaskInfo> CreateFlowsByTemplatesResponse::GetTaskInfos() const
{
    return m_taskInfos;
}

bool CreateFlowsByTemplatesResponse::TaskInfosHasBeenSet() const
{
    return m_taskInfosHasBeenSet;
}

vector<FlowApproverItem> CreateFlowsByTemplatesResponse::GetFlowApprovers() const
{
    return m_flowApprovers;
}

bool CreateFlowsByTemplatesResponse::FlowApproversHasBeenSet() const
{
    return m_flowApproversHasBeenSet;
}


