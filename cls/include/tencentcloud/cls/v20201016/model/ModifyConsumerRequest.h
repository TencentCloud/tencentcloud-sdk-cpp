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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>
#include <tencentcloud/cls/v20201016/model/Ckafka.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyConsumer请求参数结构体
                */
                class ModifyConsumerRequest : public AbstractModel
                {
                public:
                    ModifyConsumerRequest();
                    ~ModifyConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递任务绑定的日志主题 ID
                     * @return TopicId 投递任务绑定的日志主题 ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置投递任务绑定的日志主题 ID
                     * @param TopicId 投递任务绑定的日志主题 ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取投递任务是否生效
                     * @return Effective 投递任务是否生效
                     */
                    bool GetEffective() const;

                    /**
                     * 设置投递任务是否生效
                     * @param Effective 投递任务是否生效
                     */
                    void SetEffective(const bool& _effective);

                    /**
                     * 判断参数 Effective 是否已赋值
                     * @return Effective 是否已赋值
                     */
                    bool EffectiveHasBeenSet() const;

                    /**
                     * 获取是否投递日志的元数据信息，默认为 false
                     * @return NeedContent 是否投递日志的元数据信息，默认为 false
                     */
                    bool GetNeedContent() const;

                    /**
                     * 设置是否投递日志的元数据信息，默认为 false
                     * @param NeedContent 是否投递日志的元数据信息，默认为 false
                     */
                    void SetNeedContent(const bool& _needContent);

                    /**
                     * 判断参数 NeedContent 是否已赋值
                     * @return NeedContent 是否已赋值
                     */
                    bool NeedContentHasBeenSet() const;

                    /**
                     * 获取如果需要投递元数据信息，元数据信息的描述
                     * @return Content 如果需要投递元数据信息，元数据信息的描述
                     */
                    ConsumerContent GetContent() const;

                    /**
                     * 设置如果需要投递元数据信息，元数据信息的描述
                     * @param Content 如果需要投递元数据信息，元数据信息的描述
                     */
                    void SetContent(const ConsumerContent& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取CKafka的描述
                     * @return Ckafka CKafka的描述
                     */
                    Ckafka GetCkafka() const;

                    /**
                     * 设置CKafka的描述
                     * @param Ckafka CKafka的描述
                     */
                    void SetCkafka(const Ckafka& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     */
                    bool CkafkaHasBeenSet() const;

                private:

                    /**
                     * 投递任务绑定的日志主题 ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递任务是否生效
                     */
                    bool m_effective;
                    bool m_effectiveHasBeenSet;

                    /**
                     * 是否投递日志的元数据信息，默认为 false
                     */
                    bool m_needContent;
                    bool m_needContentHasBeenSet;

                    /**
                     * 如果需要投递元数据信息，元数据信息的描述
                     */
                    ConsumerContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * CKafka的描述
                     */
                    Ckafka m_ckafka;
                    bool m_ckafkaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYCONSUMERREQUEST_H_
