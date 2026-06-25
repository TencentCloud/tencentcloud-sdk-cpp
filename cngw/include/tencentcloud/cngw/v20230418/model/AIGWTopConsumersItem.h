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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOPCONSUMERSITEM_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOPCONSUMERSITEM_H_

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
                * 最高Token用量消费者
                */
                class AIGWTopConsumersItem : public AbstractModel
                {
                public:
                    AIGWTopConsumersItem();
                    ~AIGWTopConsumersItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费者Id</p>
                     * @return ConsumerId <p>消费者Id</p>
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置<p>消费者Id</p>
                     * @param _consumerId <p>消费者Id</p>
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取<p>消费者名称</p>
                     * @return ConsumerName <p>消费者名称</p>
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置<p>消费者名称</p>
                     * @param _consumerName <p>消费者名称</p>
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取<p>该消费者花费的Token数</p>
                     * @return TotalTokens <p>该消费者花费的Token数</p>
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>该消费者花费的Token数</p>
                     * @param _totalTokens <p>该消费者花费的Token数</p>
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                private:

                    /**
                     * <p>消费者Id</p>
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * <p>消费者名称</p>
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * <p>该消费者花费的Token数</p>
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWTOPCONSUMERSITEM_H_
