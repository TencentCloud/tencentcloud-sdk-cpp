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

#include <tencentcloud/tcb/v20180608/model/DescribeBaasPackageListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeBaasPackageListRequest::DescribeBaasPackageListRequest() :
    m_packageNameHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_envChannelHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_packageTypeListHasBeenSet(false),
    m_paymentChannelHasBeenSet(false)
{
}

string DescribeBaasPackageListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_envChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_targetActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetAction.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_packageTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageTypeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_packageTypeList.begin(); itr != m_packageTypeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_paymentChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaymentChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_paymentChannel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBaasPackageListRequest::GetPackageName() const
{
    return m_packageName;
}

void DescribeBaasPackageListRequest::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string DescribeBaasPackageListRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeBaasPackageListRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeBaasPackageListRequest::GetSource() const
{
    return m_source;
}

void DescribeBaasPackageListRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeBaasPackageListRequest::GetEnvChannel() const
{
    return m_envChannel;
}

void DescribeBaasPackageListRequest::SetEnvChannel(const string& _envChannel)
{
    m_envChannel = _envChannel;
    m_envChannelHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::EnvChannelHasBeenSet() const
{
    return m_envChannelHasBeenSet;
}

string DescribeBaasPackageListRequest::GetTargetAction() const
{
    return m_targetAction;
}

void DescribeBaasPackageListRequest::SetTargetAction(const string& _targetAction)
{
    m_targetAction = _targetAction;
    m_targetActionHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::TargetActionHasBeenSet() const
{
    return m_targetActionHasBeenSet;
}

string DescribeBaasPackageListRequest::GetGroupName() const
{
    return m_groupName;
}

void DescribeBaasPackageListRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

vector<string> DescribeBaasPackageListRequest::GetPackageTypeList() const
{
    return m_packageTypeList;
}

void DescribeBaasPackageListRequest::SetPackageTypeList(const vector<string>& _packageTypeList)
{
    m_packageTypeList = _packageTypeList;
    m_packageTypeListHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::PackageTypeListHasBeenSet() const
{
    return m_packageTypeListHasBeenSet;
}

string DescribeBaasPackageListRequest::GetPaymentChannel() const
{
    return m_paymentChannel;
}

void DescribeBaasPackageListRequest::SetPaymentChannel(const string& _paymentChannel)
{
    m_paymentChannel = _paymentChannel;
    m_paymentChannelHasBeenSet = true;
}

bool DescribeBaasPackageListRequest::PaymentChannelHasBeenSet() const
{
    return m_paymentChannelHasBeenSet;
}


