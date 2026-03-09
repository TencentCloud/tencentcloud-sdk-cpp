/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_

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
                * GetMetricLabelValues请求参数结构体
                */
                class GetMetricLabelValuesRequest : public AbstractModel
                {
                public:
                    GetMetricLabelValuesRequest();
                    ~GetMetricLabelValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>时序主题id</p>
                     * @return TopicId <p>时序主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>时序主题id</p>
                     * @param _topicId <p>时序主题id</p>
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
                     * 获取<p>时序label名称</p>
                     * @return LabelName <p>时序label名称</p>
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置<p>时序label名称</p>
                     * @param _labelName <p>时序label名称</p>
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取<p>起始时间</p>
                     * @return Start <p>起始时间</p>
                     * 
                     */
                    uint64_t GetStart() const;

                    /**
                     * 设置<p>起始时间</p>
                     * @param _start <p>起始时间</p>
                     * 
                     */
                    void SetStart(const uint64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return End <p>结束时间</p>
                     * 
                     */
                    uint64_t GetEnd() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _end <p>结束时间</p>
                     * 
                     */
                    void SetEnd(const uint64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取<p>Label匹配规则</p>
                     * @return Match <p>Label匹配规则</p>
                     * 
                     */
                    std::vector<std::string> GetMatch() const;

                    /**
                     * 设置<p>Label匹配规则</p>
                     * @param _match <p>Label匹配规则</p>
                     * 
                     */
                    void SetMatch(const std::vector<std::string>& _match);

                    /**
                     * 判断参数 Match 是否已赋值
                     * @return Match 是否已赋值
                     * 
                     */
                    bool MatchHasBeenSet() const;

                private:

                    /**
                     * <p>时序主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>时序label名称</p>
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * <p>起始时间</p>
                     */
                    uint64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    uint64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * <p>Label匹配规则</p>
                     */
                    std::vector<std::string> m_match;
                    bool m_matchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GETMETRICLABELVALUESREQUEST_H_
