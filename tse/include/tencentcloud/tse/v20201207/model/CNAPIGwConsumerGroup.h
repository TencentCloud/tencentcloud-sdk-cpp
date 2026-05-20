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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 消费者组结构
                */
                class CNAPIGwConsumerGroup : public AbstractModel
                {
                public:
                    CNAPIGwConsumerGroup();
                    ~CNAPIGwConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组id
                     * @return ConsumerGroupId 分组id
                     * 
                     */
                    std::string GetConsumerGroupId() const;

                    /**
                     * 设置分组id
                     * @param _consumerGroupId 分组id
                     * 
                     */
                    void SetConsumerGroupId(const std::string& _consumerGroupId);

                    /**
                     * 判断参数 ConsumerGroupId 是否已赋值
                     * @return ConsumerGroupId 是否已赋值
                     * 
                     */
                    bool ConsumerGroupIdHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
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
                     * 获取状态Disable/Enable
                     * @return Status 状态Disable/Enable
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态Disable/Enable
                     * @param _status 状态Disable/Enable
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间 yyyy-MM-dd hh:mm:ss
                     * @return ModifyTime 更新时间 yyyy-MM-dd hh:mm:ss
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间 yyyy-MM-dd hh:mm:ss
                     * @param _modifyTime 更新时间 yyyy-MM-dd hh:mm:ss
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
                     * 获取绑定的消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindCount 绑定的消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBindCount() const;

                    /**
                     * 设置绑定的消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindCount 绑定的消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindCount(const uint64_t& _bindCount);

                    /**
                     * 判断参数 BindCount 是否已赋值
                     * @return BindCount 是否已赋值
                     * 
                     */
                    bool BindCountHasBeenSet() const;

                private:

                    /**
                     * 分组id
                     */
                    std::string m_consumerGroupId;
                    bool m_consumerGroupIdHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态Disable/Enable
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间 yyyy-MM-dd hh:mm:ss
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 绑定的消费者数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bindCount;
                    bool m_bindCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CNAPIGWCONSUMERGROUP_H_
