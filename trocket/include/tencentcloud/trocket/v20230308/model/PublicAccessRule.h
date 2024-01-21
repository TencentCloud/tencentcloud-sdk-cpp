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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_PUBLICACCESSRULE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_PUBLICACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 公网访问安全规则
                */
                class PublicAccessRule : public AbstractModel
                {
                public:
                    PublicAccessRule();
                    ~PublicAccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip网段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpRule ip网段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpRule() const;

                    /**
                     * 设置ip网段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipRule ip网段信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpRule(const std::string& _ipRule);

                    /**
                     * 判断参数 IpRule 是否已赋值
                     * @return IpRule 是否已赋值
                     * 
                     */
                    bool IpRuleHasBeenSet() const;

                    /**
                     * 获取允许或者拒绝
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Allow 允许或者拒绝
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllow() const;

                    /**
                     * 设置允许或者拒绝
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allow 允许或者拒绝
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllow(const bool& _allow);

                    /**
                     * 判断参数 Allow 是否已赋值
                     * @return Allow 是否已赋值
                     * 
                     */
                    bool AllowHasBeenSet() const;

                    /**
                     * 获取备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注信息
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
                     * ip网段信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipRule;
                    bool m_ipRuleHasBeenSet;

                    /**
                     * 允许或者拒绝
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allow;
                    bool m_allowHasBeenSet;

                    /**
                     * 备注信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_PUBLICACCESSRULE_H_
