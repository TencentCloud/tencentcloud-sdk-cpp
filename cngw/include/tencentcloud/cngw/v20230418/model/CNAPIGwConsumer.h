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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWCONSUMER_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWCONSUMER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwConsumerGroup.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 消费者结构
                */
                class CNAPIGwConsumer : public AbstractModel
                {
                public:
                    CNAPIGwConsumer();
                    ~CNAPIGwConsumer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消费者 ID。</p>
                     * @return ConsumerId <p>消费者 ID。</p>
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置<p>消费者 ID。</p>
                     * @param _consumerId <p>消费者 ID。</p>
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
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * @return ModifyTime <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * @param _modifyTime <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>消费者分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerGroups <p>消费者分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CNAPIGwConsumerGroup> GetConsumerGroups() const;

                    /**
                     * 设置<p>消费者分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerGroups <p>消费者分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerGroups(const std::vector<CNAPIGwConsumerGroup>& _consumerGroups);

                    /**
                     * 判断参数 ConsumerGroups 是否已赋值
                     * @return ConsumerGroups 是否已赋值
                     * 
                     */
                    bool ConsumerGroupsHasBeenSet() const;

                private:

                    /**
                     * <p>消费者 ID。</p>
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间 yyyy-MM-dd hh:mm:ss</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>消费者分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CNAPIGwConsumerGroup> m_consumerGroups;
                    bool m_consumerGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWCONSUMER_H_
