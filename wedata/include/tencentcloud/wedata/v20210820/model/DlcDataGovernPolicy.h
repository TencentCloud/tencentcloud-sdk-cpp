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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DlcRewriteDataInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcExpiredSnapshotsInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcRemoveOrphanFilesInfo.h>
#include <tencentcloud/wedata/v20210820/model/DlcMergeManifestsInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据治理配置项
                */
                class DlcDataGovernPolicy : public AbstractModel
                {
                public:
                    DlcDataGovernPolicy();
                    ~DlcDataGovernPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据排布治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewriteDataPolicy 数据排布治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DlcRewriteDataInfo GetRewriteDataPolicy() const;

                    /**
                     * 设置数据排布治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rewriteDataPolicy 数据排布治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRewriteDataPolicy(const DlcRewriteDataInfo& _rewriteDataPolicy);

                    /**
                     * 判断参数 RewriteDataPolicy 是否已赋值
                     * @return RewriteDataPolicy 是否已赋值
                     * 
                     */
                    bool RewriteDataPolicyHasBeenSet() const;

                    /**
                     * 获取快照过期治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredSnapshotsPolicy 快照过期治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DlcExpiredSnapshotsInfo GetExpiredSnapshotsPolicy() const;

                    /**
                     * 设置快照过期治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredSnapshotsPolicy 快照过期治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredSnapshotsPolicy(const DlcExpiredSnapshotsInfo& _expiredSnapshotsPolicy);

                    /**
                     * 判断参数 ExpiredSnapshotsPolicy 是否已赋值
                     * @return ExpiredSnapshotsPolicy 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsPolicyHasBeenSet() const;

                    /**
                     * 获取移除孤立文件治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoveOrphanFilesPolicy 移除孤立文件治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DlcRemoveOrphanFilesInfo GetRemoveOrphanFilesPolicy() const;

                    /**
                     * 设置移除孤立文件治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _removeOrphanFilesPolicy 移除孤立文件治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoveOrphanFilesPolicy(const DlcRemoveOrphanFilesInfo& _removeOrphanFilesPolicy);

                    /**
                     * 判断参数 RemoveOrphanFilesPolicy 是否已赋值
                     * @return RemoveOrphanFilesPolicy 是否已赋值
                     * 
                     */
                    bool RemoveOrphanFilesPolicyHasBeenSet() const;

                    /**
                     * 获取合并元数据Manifests治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MergeManifestsPolicy 合并元数据Manifests治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DlcMergeManifestsInfo GetMergeManifestsPolicy() const;

                    /**
                     * 设置合并元数据Manifests治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mergeManifestsPolicy 合并元数据Manifests治理项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMergeManifestsPolicy(const DlcMergeManifestsInfo& _mergeManifestsPolicy);

                    /**
                     * 判断参数 MergeManifestsPolicy 是否已赋值
                     * @return MergeManifestsPolicy 是否已赋值
                     * 
                     */
                    bool MergeManifestsPolicyHasBeenSet() const;

                    /**
                     * 获取是否集成库规则：default（默认继承）、none（不继承）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InheritDataBase 是否集成库规则：default（默认继承）、none（不继承）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInheritDataBase() const;

                    /**
                     * 设置是否集成库规则：default（默认继承）、none（不继承）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inheritDataBase 是否集成库规则：default（默认继承）、none（不继承）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInheritDataBase(const std::string& _inheritDataBase);

                    /**
                     * 判断参数 InheritDataBase 是否已赋值
                     * @return InheritDataBase 是否已赋值
                     * 
                     */
                    bool InheritDataBaseHasBeenSet() const;

                    /**
                     * 获取治理规则类型，Customize: 自定义；Intelligence: 智能治理
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 治理规则类型，Customize: 自定义；Intelligence: 智能治理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置治理规则类型，Customize: 自定义；Intelligence: 智能治理
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 治理规则类型，Customize: 自定义；Intelligence: 智能治理
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取治理引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GovernEngine 治理引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGovernEngine() const;

                    /**
                     * 设置治理引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _governEngine 治理引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGovernEngine(const std::string& _governEngine);

                    /**
                     * 判断参数 GovernEngine 是否已赋值
                     * @return GovernEngine 是否已赋值
                     * 
                     */
                    bool GovernEngineHasBeenSet() const;

                private:

                    /**
                     * 数据排布治理项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DlcRewriteDataInfo m_rewriteDataPolicy;
                    bool m_rewriteDataPolicyHasBeenSet;

                    /**
                     * 快照过期治理项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DlcExpiredSnapshotsInfo m_expiredSnapshotsPolicy;
                    bool m_expiredSnapshotsPolicyHasBeenSet;

                    /**
                     * 移除孤立文件治理项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DlcRemoveOrphanFilesInfo m_removeOrphanFilesPolicy;
                    bool m_removeOrphanFilesPolicyHasBeenSet;

                    /**
                     * 合并元数据Manifests治理项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DlcMergeManifestsInfo m_mergeManifestsPolicy;
                    bool m_mergeManifestsPolicyHasBeenSet;

                    /**
                     * 是否集成库规则：default（默认继承）、none（不继承）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inheritDataBase;
                    bool m_inheritDataBaseHasBeenSet;

                    /**
                     * 治理规则类型，Customize: 自定义；Intelligence: 智能治理
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 治理引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_governEngine;
                    bool m_governEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCDATAGOVERNPOLICY_H_
