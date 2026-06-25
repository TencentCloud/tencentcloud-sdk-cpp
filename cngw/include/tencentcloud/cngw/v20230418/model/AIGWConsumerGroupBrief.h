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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERGROUPBRIEF_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERGROUPBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关中消费者组简要信息
                */
                class AIGWConsumerGroupBrief : public AbstractModel
                {
                public:
                    AIGWConsumerGroupBrief();
                    ~AIGWConsumerGroupBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费者组名称</p>
                     * @return Name <p>消费者组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消费者组名称</p>
                     * @param _name <p>消费者组名称</p>
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
                     * 获取<p>消费者组Id</p>
                     * @return ConsumerGroupId <p>消费者组Id</p>
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置<p>消费者组Id</p>
                     * @param _consumerGroupId <p>消费者组Id</p>
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>消费者组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>消费者组Id</p>
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCONSUMERGROUPBRIEF_H_
