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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONTOPIC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONTOPIC_H_

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
                * 工作区关联的Topic
                */
                class RelationTopic : public AbstractModel
                {
                public:
                    RelationTopic();
                    ~RelationTopic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志主题id</p>
                     * @return TopicId <p>日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p>
                     * @param _topicId <p>日志主题id</p>
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
                     * 获取<p>日志主题名称</p>
                     * @return TopicName <p>日志主题名称</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>日志主题名称</p>
                     * @param _topicName <p>日志主题名称</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>日志主题类型</p><p>枚举值：</p><ul><li>entity： 实体主题</li><li>relation： 关系主题</li><li>ebpf： ebpf采集主题</li></ul>
                     * @return Type <p>日志主题类型</p><p>枚举值：</p><ul><li>entity： 实体主题</li><li>relation： 关系主题</li><li>ebpf： ebpf采集主题</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>日志主题类型</p><p>枚举值：</p><ul><li>entity： 实体主题</li><li>relation： 关系主题</li><li>ebpf： ebpf采集主题</li></ul>
                     * @param _type <p>日志主题类型</p><p>枚举值：</p><ul><li>entity： 实体主题</li><li>relation： 关系主题</li><li>ebpf： ebpf采集主题</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志主题名称</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>日志主题类型</p><p>枚举值：</p><ul><li>entity： 实体主题</li><li>relation： 关系主题</li><li>ebpf： ebpf采集主题</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONTOPIC_H_
