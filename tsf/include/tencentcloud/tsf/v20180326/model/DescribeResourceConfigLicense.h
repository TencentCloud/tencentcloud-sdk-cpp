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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigLicenseFunction.h>
#include <tencentcloud/tsf/v20180326/model/DescribeResourceConfigLicenseResource.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeResourceConfig
                */
                class DescribeResourceConfigLicense : public AbstractModel
                {
                public:
                    DescribeResourceConfigLicense();
                    ~DescribeResourceConfigLicense() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Function 功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeResourceConfigLicenseFunction> GetFunction() const;

                    /**
                     * 设置功能
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _function 功能
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunction(const std::vector<DescribeResourceConfigLicenseFunction>& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeResourceConfigLicenseResource> GetResource() const;

                    /**
                     * 设置资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const std::vector<DescribeResourceConfigLicenseResource>& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Countdown utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCountdown() const;

                    /**
                     * 设置utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _countdown utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountdown(const uint64_t& _countdown);

                    /**
                     * 判断参数 Countdown 是否已赋值
                     * @return Countdown 是否已赋值
                     * 
                     */
                    bool CountdownHasBeenSet() const;

                    /**
                     * 获取规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec 规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * 功能
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeResourceConfigLicenseFunction> m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeResourceConfigLicenseResource> m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * utc时间 单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_countdown;
                    bool m_countdownHasBeenSet;

                    /**
                     * 规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSE_H_
