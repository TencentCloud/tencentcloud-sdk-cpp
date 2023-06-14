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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略列表详情标签返回体
                */
                class TagInstance : public AbstractModel
                {
                public:
                    TagInstance();
                    ~TagInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 标签Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签Key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key 标签Key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取标签Value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 标签Value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签Value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 标签Value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceSum 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceSum 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     * 
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取产品类型，如：cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceType 产品类型，如：cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置产品类型，如：cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceType 产品类型，如：cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取绑定状态，2：绑定成功，1：绑定中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingStatus 绑定状态，2：绑定成功，1：绑定中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBindingStatus() const;

                    /**
                     * 设置绑定状态，2：绑定成功，1：绑定中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindingStatus 绑定状态，2：绑定成功，1：绑定中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindingStatus(const int64_t& _bindingStatus);

                    /**
                     * 判断参数 BindingStatus 是否已赋值
                     * @return BindingStatus 是否已赋值
                     * 
                     */
                    bool BindingStatusHasBeenSet() const;

                    /**
                     * 获取标签状态，2：标签存在，1：标签不存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagStatus 标签状态，2：标签存在，1：标签不存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTagStatus() const;

                    /**
                     * 设置标签状态，2：标签存在，1：标签不存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagStatus 标签状态，2：标签存在，1：标签不存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagStatus(const int64_t& _tagStatus);

                    /**
                     * 判断参数 TagStatus 是否已赋值
                     * @return TagStatus 是否已赋值
                     * 
                     */
                    bool TagStatusHasBeenSet() const;

                private:

                    /**
                     * 标签Key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签Value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * 产品类型，如：cvm
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 绑定状态，2：绑定成功，1：绑定中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bindingStatus;
                    bool m_bindingStatusHasBeenSet;

                    /**
                     * 标签状态，2：标签存在，1：标签不存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tagStatus;
                    bool m_tagStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TAGINSTANCE_H_
