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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 组件日志采集配置
                */
                class ComponentLogConfig : public AbstractModel
                {
                public:
                    ComponentLogConfig();
                    ~ComponentLogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称
                     * @return Name 组件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组件名称
                     * @param _name 组件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志级别，对于支持动态调整日志级别的组件，开启日志时可指定该参数
                     * @return LogLevel 日志级别，对于支持动态调整日志级别的组件，开启日志时可指定该参数
                     * 
                     */
                    int64_t GetLogLevel() const;

                    /**
                     * 设置日志级别，对于支持动态调整日志级别的组件，开启日志时可指定该参数
                     * @param _logLevel 日志级别，对于支持动态调整日志级别的组件，开启日志时可指定该参数
                     * 
                     */
                    void SetLogLevel(const int64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取日志集ID。如果不指定，则自动创建
                     * @return LogSetId 日志集ID。如果不指定，则自动创建
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置日志集ID。如果不指定，则自动创建
                     * @param _logSetId 日志集ID。如果不指定，则自动创建
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取日志主题ID。如果不指定，则自动创建
                     * @return TopicId 日志主题ID。如果不指定，则自动创建
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID。如果不指定，则自动创建
                     * @param _topicId 日志主题ID。如果不指定，则自动创建
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
                     * 获取topic 所属region。 该参数可实现日志跨地域投递
                     * @return TopicRegion topic 所属region。 该参数可实现日志跨地域投递
                     * 
                     */
                    std::string GetTopicRegion() const;

                    /**
                     * 设置topic 所属region。 该参数可实现日志跨地域投递
                     * @param _topicRegion topic 所属region。 该参数可实现日志跨地域投递
                     * 
                     */
                    void SetTopicRegion(const std::string& _topicRegion);

                    /**
                     * 判断参数 TopicRegion 是否已赋值
                     * @return TopicRegion 是否已赋值
                     * 
                     */
                    bool TopicRegionHasBeenSet() const;

                private:

                    /**
                     * 组件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志级别，对于支持动态调整日志级别的组件，开启日志时可指定该参数
                     */
                    int64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * 日志集ID。如果不指定，则自动创建
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 日志主题ID。如果不指定，则自动创建
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * topic 所属region。 该参数可实现日志跨地域投递
                     */
                    std::string m_topicRegion;
                    bool m_topicRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_COMPONENTLOGCONFIG_H_
