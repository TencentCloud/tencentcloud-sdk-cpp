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

#include <tencentcloud/trro/v20220325/model/PublishParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

PublishParams::PublishParams() :
    m_publishUrlHasBeenSet(false),
    m_isTencentUrlHasBeenSet(false)
{
}

CoreInternalOutcome PublishParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublishUrl") && !value["PublishUrl"].IsNull())
    {
        if (!value["PublishUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublishParams.PublishUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishUrl = string(value["PublishUrl"].GetString());
        m_publishUrlHasBeenSet = true;
    }

    if (value.HasMember("IsTencentUrl") && !value["IsTencentUrl"].IsNull())
    {
        if (!value["IsTencentUrl"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PublishParams.IsTencentUrl` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTencentUrl = value["IsTencentUrl"].GetInt64();
        m_isTencentUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublishParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publishUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isTencentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTencentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTencentUrl, allocator);
    }

}


string PublishParams::GetPublishUrl() const
{
    return m_publishUrl;
}

void PublishParams::SetPublishUrl(const string& _publishUrl)
{
    m_publishUrl = _publishUrl;
    m_publishUrlHasBeenSet = true;
}

bool PublishParams::PublishUrlHasBeenSet() const
{
    return m_publishUrlHasBeenSet;
}

int64_t PublishParams::GetIsTencentUrl() const
{
    return m_isTencentUrl;
}

void PublishParams::SetIsTencentUrl(const int64_t& _isTencentUrl)
{
    m_isTencentUrl = _isTencentUrl;
    m_isTencentUrlHasBeenSet = true;
}

bool PublishParams::IsTencentUrlHasBeenSet() const
{
    return m_isTencentUrlHasBeenSet;
}

