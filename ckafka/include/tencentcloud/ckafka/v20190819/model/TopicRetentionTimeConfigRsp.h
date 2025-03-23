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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Topic消息保留时间配置返回信息
                */
                class TopicRetentionTimeConfigRsp : public AbstractModel
                {
                public:
                    TopicRetentionTimeConfigRsp();
                    ~TopicRetentionTimeConfigRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取期望值，即用户配置的Topic消息保留时间(单位分钟)
                     * @return Expect 期望值，即用户配置的Topic消息保留时间(单位分钟)
                     * 
                     */
                    int64_t GetExpect() const;

                    /**
                     * 设置期望值，即用户配置的Topic消息保留时间(单位分钟)
                     * @param _expect 期望值，即用户配置的Topic消息保留时间(单位分钟)
                     * 
                     */
                    void SetExpect(const int64_t& _expect);

                    /**
                     * 判断参数 Expect 是否已赋值
                     * @return Expect 是否已赋值
                     * 
                     */
                    bool ExpectHasBeenSet() const;

                    /**
                     * 获取当前值，即当前生效值(可能存在动态调整，单位分钟)
                     * @return Current 当前值，即当前生效值(可能存在动态调整，单位分钟)
                     * 
                     */
                    int64_t GetCurrent() const;

                    /**
                     * 设置当前值，即当前生效值(可能存在动态调整，单位分钟)
                     * @param _current 当前值，即当前生效值(可能存在动态调整，单位分钟)
                     * 
                     */
                    void SetCurrent(const int64_t& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取最近变更时间
                     * @return ModTimeStamp 最近变更时间
                     * 
                     */
                    int64_t GetModTimeStamp() const;

                    /**
                     * 设置最近变更时间
                     * @param _modTimeStamp 最近变更时间
                     * 
                     */
                    void SetModTimeStamp(const int64_t& _modTimeStamp);

                    /**
                     * 判断参数 ModTimeStamp 是否已赋值
                     * @return ModTimeStamp 是否已赋值
                     * 
                     */
                    bool ModTimeStampHasBeenSet() const;

                private:

                    /**
                     * 期望值，即用户配置的Topic消息保留时间(单位分钟)
                     */
                    int64_t m_expect;
                    bool m_expectHasBeenSet;

                    /**
                     * 当前值，即当前生效值(可能存在动态调整，单位分钟)
                     */
                    int64_t m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * 最近变更时间
                     */
                    int64_t m_modTimeStamp;
                    bool m_modTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICRETENTIONTIMECONFIGRSP_H_
