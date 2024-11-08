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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * 安全策略
                */
                class SecurityPolicy : public AbstractModel
                {
                public:
                    SecurityPolicy();
                    ~SecurityPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip或者网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Route ip或者网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRoute() const;

                    /**
                     * 设置ip或者网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _route ip或者网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoute(const std::string& _route);

                    /**
                     * 判断参数 Route 是否已赋值
                     * @return Route 是否已赋值
                     * 
                     */
                    bool RouteHasBeenSet() const;

                    /**
                     * 获取策略 true就是允许，白名单或者 false 拒绝 黑名单

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Policy 策略 true就是允许，白名单或者 false 拒绝 黑名单

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetPolicy() const;

                    /**
                     * 设置策略 true就是允许，白名单或者 false 拒绝 黑名单

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policy 策略 true就是允许，白名单或者 false 拒绝 黑名单

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicy(const bool& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ip或者网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_route;
                    bool m_routeHasBeenSet;

                    /**
                     * 策略 true就是允许，白名单或者 false 拒绝 黑名单

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SECURITYPOLICY_H_
