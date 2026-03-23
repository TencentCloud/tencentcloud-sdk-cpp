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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TMSCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TMSCONFIGDTO_H_

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
                * 内容安全配置
                */
                class TmsConfigDTO : public AbstractModel
                {
                public:
                    TmsConfigDTO();
                    ~TmsConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测范围,请求/响应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scope 检测范围,请求/响应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetScope() const;

                    /**
                     * 设置检测范围,请求/响应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scope 检测范围,请求/响应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScope(const std::vector<std::string>& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取检测形式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 检测形式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置检测形式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mode 检测形式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取合并请求检测event数，联动Mode字段sync
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MergeCount 合并请求检测event数，联动Mode字段sync
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMergeCount() const;

                    /**
                     * 设置合并请求检测event数，联动Mode字段sync
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mergeCount 合并请求检测event数，联动Mode字段sync
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMergeCount(const uint64_t& _mergeCount);

                    /**
                     * 判断参数 MergeCount 是否已赋值
                     * @return MergeCount 是否已赋值
                     * 
                     */
                    bool MergeCountHasBeenSet() const;

                    /**
                     * 获取风控策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizType 风控策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置风控策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizType 风控策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterceptMessage 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInterceptMessage() const;

                    /**
                     * 设置响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interceptMessage 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterceptMessage(const std::string& _interceptMessage);

                    /**
                     * 判断参数 InterceptMessage 是否已赋值
                     * @return InterceptMessage 是否已赋值
                     * 
                     */
                    bool InterceptMessageHasBeenSet() const;

                private:

                    /**
                     * 检测范围,请求/响应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 检测形式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 执行动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 合并请求检测event数，联动Mode字段sync
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_mergeCount;
                    bool m_mergeCountHasBeenSet;

                    /**
                     * 风控策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 响应拦截内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interceptMessage;
                    bool m_interceptMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TMSCONFIGDTO_H_
