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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/SourceTopicInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 源日志主题配置
                */
                class SourceTopicConfig : public AbstractModel
                {
                public:
                    SourceTopicConfig();
                    ~SourceTopicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志主题筛选方式。</p><p>枚举值：</p><ul><li>1： 静态选择</li></ul>
                     * @return TopicFilterType <p>日志主题筛选方式。</p><p>枚举值：</p><ul><li>1： 静态选择</li></ul>
                     * 
                     */
                    uint64_t GetTopicFilterType() const;

                    /**
                     * 设置<p>日志主题筛选方式。</p><p>枚举值：</p><ul><li>1： 静态选择</li></ul>
                     * @param _topicFilterType <p>日志主题筛选方式。</p><p>枚举值：</p><ul><li>1： 静态选择</li></ul>
                     * 
                     */
                    void SetTopicFilterType(const uint64_t& _topicFilterType);

                    /**
                     * 判断参数 TopicFilterType 是否已赋值
                     * @return TopicFilterType 是否已赋值
                     * 
                     */
                    bool TopicFilterTypeHasBeenSet() const;

                    /**
                     * 获取<p>源日志集id</p>
                     * @return LogsetId <p>源日志集id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>源日志集id</p>
                     * @param _logsetId <p>源日志集id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>源日志主题列表</p><p>TopicFilterType=1时必填</p>
                     * @return Topics <p>源日志主题列表</p><p>TopicFilterType=1时必填</p>
                     * 
                     */
                    std::vector<SourceTopicInfo> GetTopics() const;

                    /**
                     * 设置<p>源日志主题列表</p><p>TopicFilterType=1时必填</p>
                     * @param _topics <p>源日志主题列表</p><p>TopicFilterType=1时必填</p>
                     * 
                     */
                    void SetTopics(const std::vector<SourceTopicInfo>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题筛选方式。</p><p>枚举值：</p><ul><li>1： 静态选择</li></ul>
                     */
                    uint64_t m_topicFilterType;
                    bool m_topicFilterTypeHasBeenSet;

                    /**
                     * <p>源日志集id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>源日志主题列表</p><p>TopicFilterType=1时必填</p>
                     */
                    std::vector<SourceTopicInfo> m_topics;
                    bool m_topicsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SOURCETOPICCONFIG_H_
