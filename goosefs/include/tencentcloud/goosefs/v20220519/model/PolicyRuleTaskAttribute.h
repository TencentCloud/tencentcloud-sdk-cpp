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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_POLICYRULETASKATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_POLICYRULETASKATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/ExecutionPlan.h>
#include <tencentcloud/goosefs/v20220519/model/PolicyRuleOperator.h>
#include <tencentcloud/goosefs/v20220519/model/ManifestAttr.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 扫描规则信息
                */
                class PolicyRuleTaskAttribute : public AbstractModel
                {
                public:
                    PolicyRuleTaskAttribute();
                    ~PolicyRuleTaskAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则id</p>
                     * @return RuleId <p>规则id</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>规则id</p>
                     * @param _ruleId <p>规则id</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return Name <p>规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _name <p>规则名称</p>
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
                     * 获取<p>扫描目录</p>
                     * @return ScanDir <p>扫描目录</p>
                     * 
                     */
                    std::string GetScanDir() const;

                    /**
                     * 设置<p>扫描目录</p>
                     * @param _scanDir <p>扫描目录</p>
                     * 
                     */
                    void SetScanDir(const std::string& _scanDir);

                    /**
                     * 判断参数 ScanDir 是否已赋值
                     * @return ScanDir 是否已赋值
                     * 
                     */
                    bool ScanDirHasBeenSet() const;

                    /**
                     * 获取<p>执行计划</p>
                     * @return Execution <p>执行计划</p>
                     * 
                     */
                    ExecutionPlan GetExecution() const;

                    /**
                     * 设置<p>执行计划</p>
                     * @param _execution <p>执行计划</p>
                     * 
                     */
                    void SetExecution(const ExecutionPlan& _execution);

                    /**
                     * 判断参数 Execution 是否已赋值
                     * @return Execution 是否已赋值
                     * 
                     */
                    bool ExecutionHasBeenSet() const;

                    /**
                     * 获取<p>扫描规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyRuleSet <p>扫描规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PolicyRuleOperator> GetPolicyRuleSet() const;

                    /**
                     * 设置<p>扫描规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyRuleSet <p>扫描规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyRuleSet(const std::vector<PolicyRuleOperator>& _policyRuleSet);

                    /**
                     * 判断参数 PolicyRuleSet 是否已赋值
                     * @return PolicyRuleSet 是否已赋值
                     * 
                     */
                    bool PolicyRuleSetHasBeenSet() const;

                    /**
                     * 获取<p>是否输出清单</p>
                     * @return EnableManifest <p>是否输出清单</p>
                     * 
                     */
                    bool GetEnableManifest() const;

                    /**
                     * 设置<p>是否输出清单</p>
                     * @param _enableManifest <p>是否输出清单</p>
                     * 
                     */
                    void SetEnableManifest(const bool& _enableManifest);

                    /**
                     * 判断参数 EnableManifest 是否已赋值
                     * @return EnableManifest 是否已赋值
                     * 
                     */
                    bool EnableManifestHasBeenSet() const;

                    /**
                     * 获取<p>输出清单配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manifest <p>输出清单配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ManifestAttr GetManifest() const;

                    /**
                     * 设置<p>输出清单配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manifest <p>输出清单配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManifest(const ManifestAttr& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>0： 启用（enable）</li><li>1： 禁用（disable）</li></ul><p>默认值：0</p>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>0： 启用（enable）</li><li>1： 禁用（disable）</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>0： 启用（enable）</li><li>1： 禁用（disable）</li></ul><p>默认值：0</p>
                     * @param _status <p>任务状态</p><p>枚举值：</p><ul><li>0： 启用（enable）</li><li>1： 禁用（disable）</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>规则id</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扫描目录</p>
                     */
                    std::string m_scanDir;
                    bool m_scanDirHasBeenSet;

                    /**
                     * <p>执行计划</p>
                     */
                    ExecutionPlan m_execution;
                    bool m_executionHasBeenSet;

                    /**
                     * <p>扫描规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PolicyRuleOperator> m_policyRuleSet;
                    bool m_policyRuleSetHasBeenSet;

                    /**
                     * <p>是否输出清单</p>
                     */
                    bool m_enableManifest;
                    bool m_enableManifestHasBeenSet;

                    /**
                     * <p>输出清单配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ManifestAttr m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>0： 启用（enable）</li><li>1： 禁用（disable）</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_POLICYRULETASKATTRIBUTE_H_
