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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Taint.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 计算资源高级设置
                */
                class ComputeResourceAdvanceParams : public AbstractModel
                {
                public:
                    ComputeResourceAdvanceParams();
                    ~ComputeResourceAdvanceParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点Label数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>节点Label数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>节点Label数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels <p>节点Label数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>节点污点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Taints <p>节点污点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>节点污点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taints <p>节点污点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取<p>base64 编码的用户脚本，在初始化节点之前执行</p>
                     * @return PreStartUserScript <p>base64 编码的用户脚本，在初始化节点之前执行</p>
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置<p>base64 编码的用户脚本，在初始化节点之前执行</p>
                     * @param _preStartUserScript <p>base64 编码的用户脚本，在初始化节点之前执行</p>
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                    /**
                     * 获取<p>base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看</p>
                     * @return UserScript <p>base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看</p>
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置<p>base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看</p>
                     * @param _userScript <p>base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看</p>
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                private:

                    /**
                     * <p>节点Label数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>节点污点</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>base64 编码的用户脚本，在初始化节点之前执行</p>
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * <p>base64 编码的用户脚本, 此脚本会在 k8s 组件运行后执行, 需要用户保证脚本的可重入及重试逻辑, 脚本及其生成的日志文件可在节点的 /data/ccs_userscript/ 路径查看</p>
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_
