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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERVERSION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 集群的版本相关信息
                */
                class ClusterVersion : public AbstractModel
                {
                public:
                    ClusterVersion();
                    ~ClusterVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Flink 集群的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlink() const;

                    /**
                     * 设置集群的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flink 集群的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlink(const std::string& _flink);

                    /**
                     * 判断参数 Flink 是否已赋值
                     * @return Flink 是否已赋值
                     * 
                     */
                    bool FlinkHasBeenSet() const;

                    /**
                     * 获取集群支持的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportedFlink 集群支持的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSupportedFlink() const;

                    /**
                     * 设置集群支持的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportedFlink 集群支持的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportedFlink(const std::vector<std::string>& _supportedFlink);

                    /**
                     * 判断参数 SupportedFlink 是否已赋值
                     * @return SupportedFlink 是否已赋值
                     * 
                     */
                    bool SupportedFlinkHasBeenSet() const;

                private:

                    /**
                     * 集群的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flink;
                    bool m_flinkHasBeenSet;

                    /**
                     * 集群支持的Flink版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_supportedFlink;
                    bool m_supportedFlinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CLUSTERVERSION_H_
