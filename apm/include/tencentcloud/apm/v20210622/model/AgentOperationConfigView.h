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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 探针有关接口的相关配置
                */
                class AgentOperationConfigView : public AbstractModel
                {
                public:
                    AgentOperationConfigView();
                    ~AgentOperationConfigView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前接口配置是否开启了接口白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionValid 当前接口配置是否开启了接口白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRetentionValid() const;

                    /**
                     * 设置当前接口配置是否开启了接口白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionValid 当前接口配置是否开启了接口白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionValid(const bool& _retentionValid);

                    /**
                     * 判断参数 RetentionValid 是否已赋值
                     * @return RetentionValid 是否已赋值
                     * 
                     */
                    bool RetentionValidHasBeenSet() const;

                    /**
                     * 获取RetentionValid为false时生效，接口配置中的黑名单配置，配置中的接口不采集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreOperation RetentionValid为false时生效，接口配置中的黑名单配置，配置中的接口不采集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreOperation() const;

                    /**
                     * 设置RetentionValid为false时生效，接口配置中的黑名单配置，配置中的接口不采集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreOperation RetentionValid为false时生效，接口配置中的黑名单配置，配置中的接口不采集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreOperation(const std::string& _ignoreOperation);

                    /**
                     * 判断参数 IgnoreOperation 是否已赋值
                     * @return IgnoreOperation 是否已赋值
                     * 
                     */
                    bool IgnoreOperationHasBeenSet() const;

                    /**
                     * 获取RetentionValid为true时生效，接口配置中的白名单配置，仅采集配置中的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetentionOperation RetentionValid为true时生效，接口配置中的白名单配置，仅采集配置中的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRetentionOperation() const;

                    /**
                     * 设置RetentionValid为true时生效，接口配置中的白名单配置，仅采集配置中的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retentionOperation RetentionValid为true时生效，接口配置中的白名单配置，仅采集配置中的接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetentionOperation(const std::string& _retentionOperation);

                    /**
                     * 判断参数 RetentionOperation 是否已赋值
                     * @return RetentionOperation 是否已赋值
                     * 
                     */
                    bool RetentionOperationHasBeenSet() const;

                private:

                    /**
                     * 当前接口配置是否开启了接口白名单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_retentionValid;
                    bool m_retentionValidHasBeenSet;

                    /**
                     * RetentionValid为false时生效，接口配置中的黑名单配置，配置中的接口不采集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreOperation;
                    bool m_ignoreOperationHasBeenSet;

                    /**
                     * RetentionValid为true时生效，接口配置中的白名单配置，仅采集配置中的接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_retentionOperation;
                    bool m_retentionOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_AGENTOPERATIONCONFIGVIEW_H_
