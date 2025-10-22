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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 需要配置特定回源 IP 网段回源的实例。
                */
                class OriginACLEntity : public AbstractModel
                {
                public:
                    OriginACLEntity();
                    ~OriginACLEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型，取值有：
- l7：七层加速域名；
- l4：四层代理实例。
                     * @return Type 实例类型，取值有：
- l7：七层加速域名；
- l4：四层代理实例。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例类型，取值有：
- l7：七层加速域名；
- l4：四层代理实例。
                     * @param _type 实例类型，取值有：
- l7：七层加速域名；
- l4：四层代理实例。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例详情，取值有：
- 当 Type = l7 时，请填写七层加速域名；
- 当 Type = l4 时，请填写四层代理实例 ID。
                     * @return Instances 实例详情，取值有：
- 当 Type = l7 时，请填写七层加速域名；
- 当 Type = l4 时，请填写四层代理实例 ID。
                     * 
                     */
                    std::vector<std::string> GetInstances() const;

                    /**
                     * 设置实例详情，取值有：
- 当 Type = l7 时，请填写七层加速域名；
- 当 Type = l4 时，请填写四层代理实例 ID。
                     * @param _instances 实例详情，取值有：
- 当 Type = l7 时，请填写七层加速域名；
- 当 Type = l4 时，请填写四层代理实例 ID。
                     * 
                     */
                    void SetInstances(const std::vector<std::string>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                    /**
                     * 获取操作模式，取值有：
<li>enable：启用；</li>
<li>disable：停用。</li>
                     * @return OperationMode 操作模式，取值有：
<li>enable：启用；</li>
<li>disable：停用。</li>
                     * 
                     */
                    std::string GetOperationMode() const;

                    /**
                     * 设置操作模式，取值有：
<li>enable：启用；</li>
<li>disable：停用。</li>
                     * @param _operationMode 操作模式，取值有：
<li>enable：启用；</li>
<li>disable：停用。</li>
                     * 
                     */
                    void SetOperationMode(const std::string& _operationMode);

                    /**
                     * 判断参数 OperationMode 是否已赋值
                     * @return OperationMode 是否已赋值
                     * 
                     */
                    bool OperationModeHasBeenSet() const;

                private:

                    /**
                     * 实例类型，取值有：
- l7：七层加速域名；
- l4：四层代理实例。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例详情，取值有：
- 当 Type = l7 时，请填写七层加速域名；
- 当 Type = l4 时，请填写四层代理实例 ID。
                     */
                    std::vector<std::string> m_instances;
                    bool m_instancesHasBeenSet;

                    /**
                     * 操作模式，取值有：
<li>enable：启用；</li>
<li>disable：停用。</li>
                     */
                    std::string m_operationMode;
                    bool m_operationModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLENTITY_H_
