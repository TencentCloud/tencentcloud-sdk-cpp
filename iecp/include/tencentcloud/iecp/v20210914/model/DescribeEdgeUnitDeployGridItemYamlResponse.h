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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITDEPLOYGRIDITEMYAMLRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITDEPLOYGRIDITEMYAMLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitDeployGridItemYaml返回参数结构体
                */
                class DescribeEdgeUnitDeployGridItemYamlResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitDeployGridItemYamlResponse();
                    ~DescribeEdgeUnitDeployGridItemYamlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取yaml，base64编码字符串
                     * @return Yaml yaml，base64编码字符串
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取对应类型的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Replicas 对应类型的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetReplicas() const;

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * yaml，base64编码字符串
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * 对应类型的副本数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITDEPLOYGRIDITEMYAMLRESPONSE_H_
