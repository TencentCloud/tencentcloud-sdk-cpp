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

#include <tencentcloud/trtc/v20190722/model/McuPublishCdnParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuPublishCdnParam::McuPublishCdnParam() :
    m_publishCdnUrlHasBeenSet(false),
    m_isTencentCdnHasBeenSet(false)
{
}

CoreInternalOutcome McuPublishCdnParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublishCdnUrl") && !value["PublishCdnUrl"].IsNull())
    {
        if (!value["PublishCdnUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuPublishCdnParam.PublishCdnUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishCdnUrl = string(value["PublishCdnUrl"].GetString());
        m_publishCdnUrlHasBeenSet = true;
    }

    if (value.HasMember("IsTencentCdn") && !value["IsTencentCdn"].IsNull())
    {
        if (!value["IsTencentCdn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuPublishCdnParam.IsTencentCdn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isTencentCdn = value["IsTencentCdn"].GetUint64();
        m_isTencentCdnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuPublishCdnParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publishCdnUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishCdnUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishCdnUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isTencentCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTencentCdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTencentCdn, allocator);
    }

}


string McuPublishCdnParam::GetPublishCdnUrl() const
{
    return m_publishCdnUrl;
}

void McuPublishCdnParam::SetPublishCdnUrl(const string& _publishCdnUrl)
{
    m_publishCdnUrl = _publishCdnUrl;
    m_publishCdnUrlHasBeenSet = true;
}

bool McuPublishCdnParam::PublishCdnUrlHasBeenSet() const
{
    return m_publishCdnUrlHasBeenSet;
}

uint64_t McuPublishCdnParam::GetIsTencentCdn() const
{
    return m_isTencentCdn;
}

void McuPublishCdnParam::SetIsTencentCdn(const uint64_t& _isTencentCdn)
{
    m_isTencentCdn = _isTencentCdn;
    m_isTencentCdnHasBeenSet = true;
}

bool McuPublishCdnParam::IsTencentCdnHasBeenSet() const
{
    return m_isTencentCdnHasBeenSet;
}

