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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RETENTIONPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RETENTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 消息保留策略
                */
                class RetentionPolicy : public AbstractModel
                {
                public:
                    RetentionPolicy();
                    ~RetentionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息保留时长
                     * @return TimeInMinutes 消息保留时长
                     * 
                     */
                    int64_t GetTimeInMinutes() const;

                    /**
                     * 设置消息保留时长
                     * @param _timeInMinutes 消息保留时长
                     * 
                     */
                    void SetTimeInMinutes(const int64_t& _timeInMinutes);

                    /**
                     * 判断参数 TimeInMinutes 是否已赋值
                     * @return TimeInMinutes 是否已赋值
                     * 
                     */
                    bool TimeInMinutesHasBeenSet() const;

                    /**
                     * 获取消息保留大小
                     * @return SizeInMB 消息保留大小
                     * 
                     */
                    int64_t GetSizeInMB() const;

                    /**
                     * 设置消息保留大小
                     * @param _sizeInMB 消息保留大小
                     * 
                     */
                    void SetSizeInMB(const int64_t& _sizeInMB);

                    /**
                     * 判断参数 SizeInMB 是否已赋值
                     * @return SizeInMB 是否已赋值
                     * 
                     */
                    bool SizeInMBHasBeenSet() const;

                private:

                    /**
                     * 消息保留时长
                     */
                    int64_t m_timeInMinutes;
                    bool m_timeInMinutesHasBeenSet;

                    /**
                     * 消息保留大小
                     */
                    int64_t m_sizeInMB;
                    bool m_sizeInMBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RETENTIONPOLICY_H_
