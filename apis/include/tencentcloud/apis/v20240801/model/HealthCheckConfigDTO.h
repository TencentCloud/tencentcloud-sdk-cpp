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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_HEALTHCHECKCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_HEALTHCHECKCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * HealthCheckConfigDTO
                */
                class HealthCheckConfigDTO : public AbstractModel
                {
                public:
                    HealthCheckConfigDTO();
                    ~HealthCheckConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检查路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckPath 健康检查路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthCheckPath() const;

                    /**
                     * 设置健康检查路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckPath 健康检查路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckPath(const std::string& _healthCheckPath);

                    /**
                     * 判断参数 HealthCheckPath 是否已赋值
                     * @return HealthCheckPath 是否已赋值
                     * 
                     */
                    bool HealthCheckPathHasBeenSet() const;

                    /**
                     * 获取状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidHealthCheckStatusCode 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetValidHealthCheckStatusCode() const;

                    /**
                     * 设置状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validHealthCheckStatusCode 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidHealthCheckStatusCode(const std::vector<int64_t>& _validHealthCheckStatusCode);

                    /**
                     * 判断参数 ValidHealthCheckStatusCode 是否已赋值
                     * @return ValidHealthCheckStatusCode 是否已赋值
                     * 
                     */
                    bool ValidHealthCheckStatusCodeHasBeenSet() const;

                    /**
                     * 获取请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckTimeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHealthCheckTimeout() const;

                    /**
                     * 设置请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckTimeout 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckTimeout(const int64_t& _healthCheckTimeout);

                    /**
                     * 判断参数 HealthCheckTimeout 是否已赋值
                     * @return HealthCheckTimeout 是否已赋值
                     * 
                     */
                    bool HealthCheckTimeoutHasBeenSet() const;

                private:

                    /**
                     * 健康检查路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthCheckPath;
                    bool m_healthCheckPathHasBeenSet;

                    /**
                     * 状态码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_validHealthCheckStatusCode;
                    bool m_validHealthCheckStatusCodeHasBeenSet;

                    /**
                     * 请求的超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_healthCheckTimeout;
                    bool m_healthCheckTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_HEALTHCHECKCONFIGDTO_H_
