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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeCosRecharges请求参数结构体
                */
                class DescribeCosRechargesRequest : public AbstractModel
                {
                public:
                    DescribeCosRechargesRequest();
                    ~DescribeCosRechargesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题 ID
                     * @return TopicId 日志主题 ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题 ID
                     * @param _topicId 日志主题 ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
                     * @return Status 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
                     * @param _status 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否启用:   0： 未启用  ， 1：启用
                     * @return Enable 是否启用:   0： 未启用  ， 1：启用
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置是否启用:   0： 未启用  ， 1：启用
                     * @param _enable 是否启用:   0： 未启用  ， 1：启用
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 日志主题 ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 状态   status 0: 已创建, 1: 运行中, 2: 已停止, 3: 已完成, 4: 运行失败。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否启用:   0： 未启用  ， 1：启用
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESREQUEST_H_
