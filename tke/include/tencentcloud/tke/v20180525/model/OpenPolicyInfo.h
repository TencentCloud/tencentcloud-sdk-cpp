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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OpenConstraintInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * opa策略信息
                */
                class OpenPolicyInfo : public AbstractModel
                {
                public:
                    OpenPolicyInfo();
                    ~OpenPolicyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * @return PolicyCategory 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * 
                     */
                    std::string GetPolicyCategory() const;

                    /**
                     * 设置策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * @param _policyCategory 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     * 
                     */
                    void SetPolicyCategory(const std::string& _policyCategory);

                    /**
                     * 判断参数 PolicyCategory 是否已赋值
                     * @return PolicyCategory 是否已赋值
                     * 
                     */
                    bool PolicyCategoryHasBeenSet() const;

                    /**
                     * 获取策略中文名称
                     * @return PolicyName 策略中文名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略中文名称
                     * @param _policyName 策略中文名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略描述
                     * @return PolicyDesc 策略描述
                     * 
                     */
                    std::string GetPolicyDesc() const;

                    /**
                     * 设置策略描述
                     * @param _policyDesc 策略描述
                     * 
                     */
                    void SetPolicyDesc(const std::string& _policyDesc);

                    /**
                     * 判断参数 PolicyDesc 是否已赋值
                     * @return PolicyDesc 是否已赋值
                     * 
                     */
                    bool PolicyDescHasBeenSet() const;

                    /**
                     * 获取策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @return EnforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    std::string GetEnforcementAction() const;

                    /**
                     * 设置策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @param _enforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    void SetEnforcementAction(const std::string& _enforcementAction);

                    /**
                     * 判断参数 EnforcementAction 是否已赋值
                     * @return EnforcementAction 是否已赋值
                     * 
                     */
                    bool EnforcementActionHasBeenSet() const;

                    /**
                     * 获取关联的事件数量(最近7d)
                     * @return EventNums 关联的事件数量(最近7d)
                     * 
                     */
                    uint64_t GetEventNums() const;

                    /**
                     * 设置关联的事件数量(最近7d)
                     * @param _eventNums 关联的事件数量(最近7d)
                     * 
                     */
                    void SetEventNums(const uint64_t& _eventNums);

                    /**
                     * 判断参数 EventNums 是否已赋值
                     * @return EventNums 是否已赋值
                     * 
                     */
                    bool EventNumsHasBeenSet() const;

                    /**
                     * 获取策略英文名称
                     * @return Name 策略英文名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略英文名称
                     * @param _name 策略英文名称
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
                     * 获取策略模板类型
                     * @return Kind 策略模板类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置策略模板类型
                     * @param _kind 策略模板类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取策略开关状态：open打开，close关闭
                     * @return EnabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置策略开关状态：open打开，close关闭
                     * @param _enabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     * 
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取策略的实例的yaml示例base64编码
                     * @return ConstraintYamlExample 策略的实例的yaml示例base64编码
                     * 
                     */
                    std::string GetConstraintYamlExample() const;

                    /**
                     * 设置策略的实例的yaml示例base64编码
                     * @param _constraintYamlExample 策略的实例的yaml示例base64编码
                     * 
                     */
                    void SetConstraintYamlExample(const std::string& _constraintYamlExample);

                    /**
                     * 判断参数 ConstraintYamlExample 是否已赋值
                     * @return ConstraintYamlExample 是否已赋值
                     * 
                     */
                    bool ConstraintYamlExampleHasBeenSet() const;

                    /**
                     * 获取策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenConstraintInfoList 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OpenConstraintInfo> GetOpenConstraintInfoList() const;

                    /**
                     * 设置策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openConstraintInfoList 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenConstraintInfoList(const std::vector<OpenConstraintInfo>& _openConstraintInfoList);

                    /**
                     * 判断参数 OpenConstraintInfoList 是否已赋值
                     * @return OpenConstraintInfoList 是否已赋值
                     * 
                     */
                    bool OpenConstraintInfoListHasBeenSet() const;

                private:

                    /**
                     * 策略分类：cluster集群策略、node节点策略、namespace命名空间策略、configuration配置相关策略、compute计算资源策略、storage存储资源策略、network网络资源策略
                     */
                    std::string m_policyCategory;
                    bool m_policyCategoryHasBeenSet;

                    /**
                     * 策略中文名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略描述
                     */
                    std::string m_policyDesc;
                    bool m_policyDescHasBeenSet;

                    /**
                     * 策略运行模式：dryrun空跑不生效，deny拦截生效
                     */
                    std::string m_enforcementAction;
                    bool m_enforcementActionHasBeenSet;

                    /**
                     * 关联的事件数量(最近7d)
                     */
                    uint64_t m_eventNums;
                    bool m_eventNumsHasBeenSet;

                    /**
                     * 策略英文名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略模板类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 策略开关状态：open打开，close关闭
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * 策略的实例的yaml示例base64编码
                     */
                    std::string m_constraintYamlExample;
                    bool m_constraintYamlExampleHasBeenSet;

                    /**
                     * 策略关联的实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpenConstraintInfo> m_openConstraintInfoList;
                    bool m_openConstraintInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYINFO_H_
