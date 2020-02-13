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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDPOLICYOFROLE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDPOLICYOFROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 角色关联的策略信息
                */
                class AttachedPolicyOfRole : public AbstractModel
                {
                public:
                    AttachedPolicyOfRole();
                    ~AttachedPolicyOfRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param PolicyId 策略ID
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param PolicyName 策略名称
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取绑定时间
                     * @return AddTime 绑定时间
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置绑定时间
                     * @param AddTime 绑定时间
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取策略类型，User表示自定义策略，QCS表示预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyType 策略类型，User表示自定义策略，QCS表示预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置策略类型，User表示自定义策略，QCS表示预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PolicyType 策略类型，User表示自定义策略，QCS表示预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取策略创建方式，1表示按产品功能或项目权限创建，其他表示按策略语法创建
                     * @return CreateMode 策略创建方式，1表示按产品功能或项目权限创建，其他表示按策略语法创建
                     */
                    uint64_t GetCreateMode() const;

                    /**
                     * 设置策略创建方式，1表示按产品功能或项目权限创建，其他表示按策略语法创建
                     * @param CreateMode 策略创建方式，1表示按产品功能或项目权限创建，其他表示按策略语法创建
                     */
                    void SetCreateMode(const uint64_t& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deactived 是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDeactived() const;

                    /**
                     * 设置是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Deactived 是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeactived(const uint64_t& _deactived);

                    /**
                     * 判断参数 Deactived 是否已赋值
                     * @return Deactived 是否已赋值
                     */
                    bool DeactivedHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 绑定时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 策略类型，User表示自定义策略，QCS表示预设策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 策略创建方式，1表示按产品功能或项目权限创建，其他表示按策略语法创建
                     */
                    uint64_t m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 是否已下线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deactived;
                    bool m_deactivedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ATTACHEDPOLICYOFROLE_H_
