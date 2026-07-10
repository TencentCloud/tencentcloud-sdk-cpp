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

#include <tencentcloud/monitor/v20180724/model/EnablePredefinedPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

EnablePredefinedPoliciesRequest::EnablePredefinedPoliciesRequest() :
    m_predefinedConfigIDHasBeenSet(false),
    m_predefinedGroupIDHasBeenSet(false),
    m_noticeIDsHasBeenSet(false)
{
}

string EnablePredefinedPoliciesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_predefinedConfigIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedConfigID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_predefinedConfigID.c_str(), allocator).Move(), allocator);
    }

    if (m_predefinedGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredefinedGroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_predefinedGroupID.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeIDs.begin(); itr != m_noticeIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnablePredefinedPoliciesRequest::GetPredefinedConfigID() const
{
    return m_predefinedConfigID;
}

void EnablePredefinedPoliciesRequest::SetPredefinedConfigID(const string& _predefinedConfigID)
{
    m_predefinedConfigID = _predefinedConfigID;
    m_predefinedConfigIDHasBeenSet = true;
}

bool EnablePredefinedPoliciesRequest::PredefinedConfigIDHasBeenSet() const
{
    return m_predefinedConfigIDHasBeenSet;
}

string EnablePredefinedPoliciesRequest::GetPredefinedGroupID() const
{
    return m_predefinedGroupID;
}

void EnablePredefinedPoliciesRequest::SetPredefinedGroupID(const string& _predefinedGroupID)
{
    m_predefinedGroupID = _predefinedGroupID;
    m_predefinedGroupIDHasBeenSet = true;
}

bool EnablePredefinedPoliciesRequest::PredefinedGroupIDHasBeenSet() const
{
    return m_predefinedGroupIDHasBeenSet;
}

vector<string> EnablePredefinedPoliciesRequest::GetNoticeIDs() const
{
    return m_noticeIDs;
}

void EnablePredefinedPoliciesRequest::SetNoticeIDs(const vector<string>& _noticeIDs)
{
    m_noticeIDs = _noticeIDs;
    m_noticeIDsHasBeenSet = true;
}

bool EnablePredefinedPoliciesRequest::NoticeIDsHasBeenSet() const
{
    return m_noticeIDsHasBeenSet;
}


