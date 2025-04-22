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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 重定向目标的信息
                */
                class RewriteTarget : public AbstractModel
                {
                public:
                    RewriteTarget();
                    ~RewriteTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重定向目标的监听器ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetListenerId 重定向目标的监听器ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetListenerId() const;

                    /**
                     * 设置重定向目标的监听器ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetListenerId 重定向目标的监听器ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetListenerId(const std::string& _targetListenerId);

                    /**
                     * 判断参数 TargetListenerId 是否已赋值
                     * @return TargetListenerId 是否已赋值
                     * 
                     */
                    bool TargetListenerIdHasBeenSet() const;

                    /**
                     * 获取重定向目标的转发规则ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetLocationId 重定向目标的转发规则ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetLocationId() const;

                    /**
                     * 设置重定向目标的转发规则ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetLocationId 重定向目标的转发规则ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetLocationId(const std::string& _targetLocationId);

                    /**
                     * 判断参数 TargetLocationId 是否已赋值
                     * @return TargetLocationId 是否已赋值
                     * 
                     */
                    bool TargetLocationIdHasBeenSet() const;

                    /**
                     * 获取重定向状态码
                     * @return RewriteCode 重定向状态码
                     * 
                     */
                    int64_t GetRewriteCode() const;

                    /**
                     * 设置重定向状态码
                     * @param _rewriteCode 重定向状态码
                     * 
                     */
                    void SetRewriteCode(const int64_t& _rewriteCode);

                    /**
                     * 判断参数 RewriteCode 是否已赋值
                     * @return RewriteCode 是否已赋值
                     * 
                     */
                    bool RewriteCodeHasBeenSet() const;

                    /**
                     * 获取重定向是否携带匹配的url
                     * @return TakeUrl 重定向是否携带匹配的url
                     * 
                     */
                    bool GetTakeUrl() const;

                    /**
                     * 设置重定向是否携带匹配的url
                     * @param _takeUrl 重定向是否携带匹配的url
                     * 
                     */
                    void SetTakeUrl(const bool& _takeUrl);

                    /**
                     * 判断参数 TakeUrl 是否已赋值
                     * @return TakeUrl 是否已赋值
                     * 
                     */
                    bool TakeUrlHasBeenSet() const;

                    /**
                     * 获取重定向类型，Manual: 手动重定向，Auto:  自动重定向
                     * @return RewriteType 重定向类型，Manual: 手动重定向，Auto:  自动重定向
                     * 
                     */
                    std::string GetRewriteType() const;

                    /**
                     * 设置重定向类型，Manual: 手动重定向，Auto:  自动重定向
                     * @param _rewriteType 重定向类型，Manual: 手动重定向，Auto:  自动重定向
                     * 
                     */
                    void SetRewriteType(const std::string& _rewriteType);

                    /**
                     * 判断参数 RewriteType 是否已赋值
                     * @return RewriteType 是否已赋值
                     * 
                     */
                    bool RewriteTypeHasBeenSet() const;

                private:

                    /**
                     * 重定向目标的监听器ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetListenerId;
                    bool m_targetListenerIdHasBeenSet;

                    /**
                     * 重定向目标的转发规则ID，该字段仅配置了重定向时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetLocationId;
                    bool m_targetLocationIdHasBeenSet;

                    /**
                     * 重定向状态码
                     */
                    int64_t m_rewriteCode;
                    bool m_rewriteCodeHasBeenSet;

                    /**
                     * 重定向是否携带匹配的url
                     */
                    bool m_takeUrl;
                    bool m_takeUrlHasBeenSet;

                    /**
                     * 重定向类型，Manual: 手动重定向，Auto:  自动重定向
                     */
                    std::string m_rewriteType;
                    bool m_rewriteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REWRITETARGET_H_
