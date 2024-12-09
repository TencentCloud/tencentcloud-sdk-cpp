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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODEAFFINITY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODEAFFINITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/NodeSelector.h>
#include <tencentcloud/emr/v20190103/model/PreferredSchedulingTerm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点亲和性设置
                */
                class NodeAffinity : public AbstractModel
                {
                public:
                    NodeAffinity();
                    ~NodeAffinity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点亲和性-强制调度设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequiredDuringSchedulingIgnoredDuringExecution 节点亲和性-强制调度设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NodeSelector GetRequiredDuringSchedulingIgnoredDuringExecution() const;

                    /**
                     * 设置节点亲和性-强制调度设置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requiredDuringSchedulingIgnoredDuringExecution 节点亲和性-强制调度设置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequiredDuringSchedulingIgnoredDuringExecution(const NodeSelector& _requiredDuringSchedulingIgnoredDuringExecution);

                    /**
                     * 判断参数 RequiredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * @return RequiredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * 
                     */
                    bool RequiredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const;

                    /**
                     * 获取节点亲和性-容忍调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreferredDuringSchedulingIgnoredDuringExecution 节点亲和性-容忍调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PreferredSchedulingTerm> GetPreferredDuringSchedulingIgnoredDuringExecution() const;

                    /**
                     * 设置节点亲和性-容忍调度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preferredDuringSchedulingIgnoredDuringExecution 节点亲和性-容忍调度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreferredDuringSchedulingIgnoredDuringExecution(const std::vector<PreferredSchedulingTerm>& _preferredDuringSchedulingIgnoredDuringExecution);

                    /**
                     * 判断参数 PreferredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * @return PreferredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * 
                     */
                    bool PreferredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const;

                private:

                    /**
                     * 节点亲和性-强制调度设置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NodeSelector m_requiredDuringSchedulingIgnoredDuringExecution;
                    bool m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet;

                    /**
                     * 节点亲和性-容忍调度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PreferredSchedulingTerm> m_preferredDuringSchedulingIgnoredDuringExecution;
                    bool m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEAFFINITY_H_
