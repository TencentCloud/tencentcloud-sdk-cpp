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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBCapacity.h>
#include <tencentcloud/adp/v20260520/model/ESConfig.h>
#include <tencentcloud/adp/v20260520/model/KBModelConfig.h>
#include <tencentcloud/adp/v20260520/model/Operator.h>
#include <tencentcloud/adp/v20260520/model/KBSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeKB返回参数结构体
                */
                class DescribeKBResponse : public AbstractModel
                {
                public:
                    DescribeKBResponse();
                    ~DescribeKBResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关联的应用 ID 列表</p>
                     * @return AppIdList <p>关联的应用 ID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                    /**
                     * 获取<p>容量信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapacityInfo <p>容量信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBCapacity GetCapacityInfo() const;

                    /**
                     * 判断参数 CapacityInfo 是否已赋值
                     * @return CapacityInfo 是否已赋值
                     * 
                     */
                    bool CapacityInfoHasBeenSet() const;

                    /**
                     * 获取<p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConfig <p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ESConfig GetEsConfig() const;

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelConfig <p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBModelConfig GetModelConfig() const;

                    /**
                     * 判断参数 ModelConfig 是否已赋值
                     * @return ModelConfig 是否已赋值
                     * 
                     */
                    bool ModelConfigHasBeenSet() const;

                    /**
                     * 获取<p>所有者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner <p>所有者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Operator GetOwner() const;

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>知识库摘要信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary <p>知识库摘要信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KBSummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * <p>关联的应用 ID 列表</p>
                     */
                    std::vector<std::string> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * <p>容量信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBCapacity m_capacityInfo;
                    bool m_capacityInfoHasBeenSet;

                    /**
                     * <p>ES 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ESConfig m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>模型配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBModelConfig m_modelConfig;
                    bool m_modelConfigHasBeenSet;

                    /**
                     * <p>所有者信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Operator m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>知识库摘要信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KBSummary m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEKBRESPONSE_H_
