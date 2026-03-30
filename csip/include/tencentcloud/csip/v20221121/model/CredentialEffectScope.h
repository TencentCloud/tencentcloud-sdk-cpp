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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 生效机器范围，用于指定凭证在哪些机器上生效
                */
                class CredentialEffectScope : public AbstractModel
                {
                public:
                    CredentialEffectScope();
                    ~CredentialEffectScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否排除模式
枚举值：
0：包含模式（仅Instances中的机器生效），此时Instances必填
1：排除模式（Instances中的机器不生效，其余机器生效），此时Instances可选（空列表表示全部机器生效）
                     * @return Exclude 是否排除模式
枚举值：
0：包含模式（仅Instances中的机器生效），此时Instances必填
1：排除模式（Instances中的机器不生效，其余机器生效），此时Instances可选（空列表表示全部机器生效）
                     * 
                     */
                    int64_t GetExclude() const;

                    /**
                     * 设置是否排除模式
枚举值：
0：包含模式（仅Instances中的机器生效），此时Instances必填
1：排除模式（Instances中的机器不生效，其余机器生效），此时Instances可选（空列表表示全部机器生效）
                     * @param _exclude 是否排除模式
枚举值：
0：包含模式（仅Instances中的机器生效），此时Instances必填
1：排除模式（Instances中的机器不生效，其余机器生效），此时Instances可选（空列表表示全部机器生效）
                     * 
                     */
                    void SetExclude(const int64_t& _exclude);

                    /**
                     * 判断参数 Exclude 是否已赋值
                     * @return Exclude 是否已赋值
                     * 
                     */
                    bool ExcludeHasBeenSet() const;

                    /**
                     * 获取机器实例ID列表。Exclude为0时必填，表示仅这些机器可访问凭证；Exclude为1时可选，表示这些机器不可访问凭证（空列表表示全部机器生效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Instances 机器实例ID列表。Exclude为0时必填，表示仅这些机器可访问凭证；Exclude为1时可选，表示这些机器不可访问凭证（空列表表示全部机器生效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInstances() const;

                    /**
                     * 设置机器实例ID列表。Exclude为0时必填，表示仅这些机器可访问凭证；Exclude为1时可选，表示这些机器不可访问凭证（空列表表示全部机器生效）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instances 机器实例ID列表。Exclude为0时必填，表示仅这些机器可访问凭证；Exclude为1时可选，表示这些机器不可访问凭证（空列表表示全部机器生效）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstances(const std::vector<std::string>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 是否排除模式
枚举值：
0：包含模式（仅Instances中的机器生效），此时Instances必填
1：排除模式（Instances中的机器不生效，其余机器生效），此时Instances可选（空列表表示全部机器生效）
                     */
                    int64_t m_exclude;
                    bool m_excludeHasBeenSet;

                    /**
                     * 机器实例ID列表。Exclude为0时必填，表示仅这些机器可访问凭证；Exclude为1时可选，表示这些机器不可访问凭证（空列表表示全部机器生效）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREDENTIALEFFECTSCOPE_H_
