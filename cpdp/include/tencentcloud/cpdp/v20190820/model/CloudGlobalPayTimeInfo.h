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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDGLOBALPAYTIMEINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDGLOBALPAYTIMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 全局支付时间信息
                */
                class CloudGlobalPayTimeInfo : public AbstractModel
                {
                public:
                    CloudGlobalPayTimeInfo();
                    ~CloudGlobalPayTimeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单开始时间。
不指定时默认为当前时间。
                     * @return StartTimestamp 订单开始时间。
不指定时默认为当前时间。
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 设置订单开始时间。
不指定时默认为当前时间。
                     * @param _startTimestamp 订单开始时间。
不指定时默认为当前时间。
                     * 
                     */
                    void SetStartTimestamp(const int64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取订单结束时间。
逾期将会拒绝下单。不指定时默认为当前时间的7天后结束。
                     * @return ExpireTimestamp 订单结束时间。
逾期将会拒绝下单。不指定时默认为当前时间的7天后结束。
                     * 
                     */
                    int64_t GetExpireTimestamp() const;

                    /**
                     * 设置订单结束时间。
逾期将会拒绝下单。不指定时默认为当前时间的7天后结束。
                     * @param _expireTimestamp 订单结束时间。
逾期将会拒绝下单。不指定时默认为当前时间的7天后结束。
                     * 
                     */
                    void SetExpireTimestamp(const int64_t& _expireTimestamp);

                    /**
                     * 判断参数 ExpireTimestamp 是否已赋值
                     * @return ExpireTimestamp 是否已赋值
                     * 
                     */
                    bool ExpireTimestampHasBeenSet() const;

                    /**
                     * 获取时区。
不指定时默认为28800，表示北京时间（东八区）。
                     * @return TimeOffset 时区。
不指定时默认为28800，表示北京时间（东八区）。
                     * 
                     */
                    int64_t GetTimeOffset() const;

                    /**
                     * 设置时区。
不指定时默认为28800，表示北京时间（东八区）。
                     * @param _timeOffset 时区。
不指定时默认为28800，表示北京时间（东八区）。
                     * 
                     */
                    void SetTimeOffset(const int64_t& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 订单开始时间。
不指定时默认为当前时间。
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 订单结束时间。
逾期将会拒绝下单。不指定时默认为当前时间的7天后结束。
                     */
                    int64_t m_expireTimestamp;
                    bool m_expireTimestampHasBeenSet;

                    /**
                     * 时区。
不指定时默认为28800，表示北京时间（东八区）。
                     */
                    int64_t m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDGLOBALPAYTIMEINFO_H_
