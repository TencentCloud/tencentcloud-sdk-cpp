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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYACCESSPERIODREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYACCESSPERIODREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyAccessPeriod请求参数结构体
                */
                class ModifyAccessPeriodRequest : public AbstractModel
                {
                public:
                    ModifyAccessPeriodRequest();
                    ~ModifyAccessPeriodRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取访问日志保存期限，范围为[1, 30]
                     * @return Period 访问日志保存期限，范围为[1, 30]
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置访问日志保存期限，范围为[1, 30]
                     * @param _period 访问日志保存期限，范围为[1, 30]
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取日志主题
                     * @return TopicId 日志主题
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题
                     * @param _topicId 日志主题
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 访问日志保存期限，范围为[1, 30]
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 日志主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYACCESSPERIODREQUEST_H_
