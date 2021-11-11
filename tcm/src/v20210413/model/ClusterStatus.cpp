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

#include <tencentcloud/tcm/v20210413/model/ClusterStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ClusterStatus::ClusterStatus() :
    m_linkStateHasBeenSet(false),
    m_linkErrorDetailHasBeenSet(false)
{
}

CoreInternalOutcome ClusterStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LinkState") && !value["LinkState"].IsNull())
    {
        if (!value["LinkState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.LinkState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkState = string(value["LinkState"].GetString());
        m_linkStateHasBeenSet = true;
    }

    if (value.HasMember("LinkErrorDetail") && !value["LinkErrorDetail"].IsNull())
    {
        if (!value["LinkErrorDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterStatus.LinkErrorDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_linkErrorDetail = string(value["LinkErrorDetail"].GetString());
        m_linkErrorDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_linkStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkState.c_str(), allocator).Move(), allocator);
    }

    if (m_linkErrorDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkErrorDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_linkErrorDetail.c_str(), allocator).Move(), allocator);
    }

}


string ClusterStatus::GetLinkState() const
{
    return m_linkState;
}

void ClusterStatus::SetLinkState(const string& _linkState)
{
    m_linkState = _linkState;
    m_linkStateHasBeenSet = true;
}

bool ClusterStatus::LinkStateHasBeenSet() const
{
    return m_linkStateHasBeenSet;
}

string ClusterStatus::GetLinkErrorDetail() const
{
    return m_linkErrorDetail;
}

void ClusterStatus::SetLinkErrorDetail(const string& _linkErrorDetail)
{
    m_linkErrorDetail = _linkErrorDetail;
    m_linkErrorDetailHasBeenSet = true;
}

bool ClusterStatus::LinkErrorDetailHasBeenSet() const
{
    return m_linkErrorDetailHasBeenSet;
}

