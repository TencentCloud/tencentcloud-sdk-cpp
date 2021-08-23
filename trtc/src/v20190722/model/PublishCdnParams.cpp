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

#include <tencentcloud/trtc/v20190722/model/PublishCdnParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

PublishCdnParams::PublishCdnParams() :
    m_bizIdHasBeenSet(false),
    m_publishCdnUrlsHasBeenSet(false)
{
}

CoreInternalOutcome PublishCdnParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PublishCdnParams.BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("PublishCdnUrls") && !value["PublishCdnUrls"].IsNull())
    {
        if (!value["PublishCdnUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PublishCdnParams.PublishCdnUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["PublishCdnUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publishCdnUrls.push_back((*itr).GetString());
        }
        m_publishCdnUrlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PublishCdnParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_publishCdnUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishCdnUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_publishCdnUrls.begin(); itr != m_publishCdnUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t PublishCdnParams::GetBizId() const
{
    return m_bizId;
}

void PublishCdnParams::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool PublishCdnParams::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

vector<string> PublishCdnParams::GetPublishCdnUrls() const
{
    return m_publishCdnUrls;
}

void PublishCdnParams::SetPublishCdnUrls(const vector<string>& _publishCdnUrls)
{
    m_publishCdnUrls = _publishCdnUrls;
    m_publishCdnUrlsHasBeenSet = true;
}

bool PublishCdnParams::PublishCdnUrlsHasBeenSet() const
{
    return m_publishCdnUrlsHasBeenSet;
}

