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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyEnvironmentAttributes返回参数结构体
                */
                class ModifyEnvironmentAttributesResponse : public AbstractModel
                {
                public:
                    ModifyEnvironmentAttributesResponse();
                    ~ModifyEnvironmentAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间名称。
                     * @return EnvironmentId 命名空间名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取未消费消息过期时间，单位：秒。
                     * @return MsgTTL 未消费消息过期时间，单位：秒。
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取备注，字符串最长不超过128。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注，字符串最长不超过128。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                private:

                    /**
                     * 命名空间名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 未消费消息过期时间，单位：秒。
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 备注，字符串最长不超过128。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYENVIRONMENTATTRIBUTESRESPONSE_H_
