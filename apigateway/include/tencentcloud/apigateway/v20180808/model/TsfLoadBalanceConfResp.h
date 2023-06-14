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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * TsfLoadBalanceConf 出参使用
                */
                class TsfLoadBalanceConfResp : public AbstractModel
                {
                public:
                    TsfLoadBalanceConfResp();
                    ~TsfLoadBalanceConfResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLoadBalance 是否开启负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLoadBalance() const;

                    /**
                     * 设置是否开启负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLoadBalance 是否开启负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLoadBalance(const bool& _isLoadBalance);

                    /**
                     * 判断参数 IsLoadBalance 是否已赋值
                     * @return IsLoadBalance 是否已赋值
                     * 
                     */
                    bool IsLoadBalanceHasBeenSet() const;

                    /**
                     * 获取负载均衡方式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 负载均衡方式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置负载均衡方式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 负载均衡方式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionStickRequired 是否开启会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSessionStickRequired() const;

                    /**
                     * 设置是否开启会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionStickRequired 是否开启会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionStickRequired(const bool& _sessionStickRequired);

                    /**
                     * 判断参数 SessionStickRequired 是否已赋值
                     * @return SessionStickRequired 是否已赋值
                     * 
                     */
                    bool SessionStickRequiredHasBeenSet() const;

                    /**
                     * 获取会话保持超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionStickTimeout 会话保持超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSessionStickTimeout() const;

                    /**
                     * 设置会话保持超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionStickTimeout 会话保持超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionStickTimeout(const int64_t& _sessionStickTimeout);

                    /**
                     * 判断参数 SessionStickTimeout 是否已赋值
                     * @return SessionStickTimeout 是否已赋值
                     * 
                     */
                    bool SessionStickTimeoutHasBeenSet() const;

                private:

                    /**
                     * 是否开启负载均衡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLoadBalance;
                    bool m_isLoadBalanceHasBeenSet;

                    /**
                     * 负载均衡方式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 是否开启会话保持。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sessionStickRequired;
                    bool m_sessionStickRequiredHasBeenSet;

                    /**
                     * 会话保持超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sessionStickTimeout;
                    bool m_sessionStickTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_
