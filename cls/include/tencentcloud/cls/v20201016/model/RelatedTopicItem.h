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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RELATEDTOPICITEM_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RELATEDTOPICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 已关联主题
                */
                class RelatedTopicItem : public AbstractModel
                {
                public:
                    RelatedTopicItem();
                    ~RelatedTopicItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主题 ID</p>
                     * @return TopicId <p>主题 ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题 ID</p>
                     * @param _topicId <p>主题 ID</p>
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
                     * 获取<p>主题地域</p>
                     * @return Region <p>主题地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>主题地域</p>
                     * @param _region <p>主题地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>日志类型</p><p>枚举值：</p><ul><li>Auditlog： 审计日志</li><li>Eventlog： 事件日志</li><li>ComponentLog： 组件日志</li></ul>
                     * @return LogType <p>日志类型</p><p>枚举值：</p><ul><li>Auditlog： 审计日志</li><li>Eventlog： 事件日志</li><li>ComponentLog： 组件日志</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型</p><p>枚举值：</p><ul><li>Auditlog： 审计日志</li><li>Eventlog： 事件日志</li><li>ComponentLog： 组件日志</li></ul>
                     * @param _logType <p>日志类型</p><p>枚举值：</p><ul><li>Auditlog： 审计日志</li><li>Eventlog： 事件日志</li><li>ComponentLog： 组件日志</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志类型， 0: 日志主题 ; 1: 指标主题</p><p>枚举值：</p><ul><li>0： 日志主题</li><li>1： 指标主题</li></ul>
                     * @return BizType <p>日志类型， 0: 日志主题 ; 1: 指标主题</p><p>枚举值：</p><ul><li>0： 日志主题</li><li>1： 指标主题</li></ul>
                     * 
                     */
                    int64_t GetBizType() const;

                    /**
                     * 设置<p>日志类型， 0: 日志主题 ; 1: 指标主题</p><p>枚举值：</p><ul><li>0： 日志主题</li><li>1： 指标主题</li></ul>
                     * @param _bizType <p>日志类型， 0: 日志主题 ; 1: 指标主题</p><p>枚举值：</p><ul><li>0： 日志主题</li><li>1： 指标主题</li></ul>
                     * 
                     */
                    void SetBizType(const int64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * <p>主题 ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>主题地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>日志类型</p><p>枚举值：</p><ul><li>Auditlog： 审计日志</li><li>Eventlog： 事件日志</li><li>ComponentLog： 组件日志</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>日志类型， 0: 日志主题 ; 1: 指标主题</p><p>枚举值：</p><ul><li>0： 日志主题</li><li>1： 指标主题</li></ul>
                     */
                    int64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RELATEDTOPICITEM_H_
