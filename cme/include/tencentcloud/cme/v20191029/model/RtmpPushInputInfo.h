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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_RTMPPUSHINPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_RTMPPUSHINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 直播推流信息，包括推流地址有效时长，多媒体创作引擎后端生成直播推流地址。
                */
                class RtmpPushInputInfo : public AbstractModel
                {
                public:
                    RtmpPushInputInfo();
                    ~RtmpPushInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播推流地址有效期，单位：秒 。
                     * @return ExpiredSecond 直播推流地址有效期，单位：秒 。
                     * 
                     */
                    uint64_t GetExpiredSecond() const;

                    /**
                     * 设置直播推流地址有效期，单位：秒 。
                     * @param _expiredSecond 直播推流地址有效期，单位：秒 。
                     * 
                     */
                    void SetExpiredSecond(const uint64_t& _expiredSecond);

                    /**
                     * 判断参数 ExpiredSecond 是否已赋值
                     * @return ExpiredSecond 是否已赋值
                     * 
                     */
                    bool ExpiredSecondHasBeenSet() const;

                    /**
                     * 获取直播推流地址，入参不填默认由多媒体创作引擎生成。
                     * @return PushUrl 直播推流地址，入参不填默认由多媒体创作引擎生成。
                     * 
                     */
                    std::string GetPushUrl() const;

                    /**
                     * 设置直播推流地址，入参不填默认由多媒体创作引擎生成。
                     * @param _pushUrl 直播推流地址，入参不填默认由多媒体创作引擎生成。
                     * 
                     */
                    void SetPushUrl(const std::string& _pushUrl);

                    /**
                     * 判断参数 PushUrl 是否已赋值
                     * @return PushUrl 是否已赋值
                     * 
                     */
                    bool PushUrlHasBeenSet() const;

                private:

                    /**
                     * 直播推流地址有效期，单位：秒 。
                     */
                    uint64_t m_expiredSecond;
                    bool m_expiredSecondHasBeenSet;

                    /**
                     * 直播推流地址，入参不填默认由多媒体创作引擎生成。
                     */
                    std::string m_pushUrl;
                    bool m_pushUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_RTMPPUSHINPUTINFO_H_
