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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/FixedResponseInfo.h>
#include <tencentcloud/alb/v20251030/model/InsertHTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPRedirectInfo.h>
#include <tencentcloud/alb/v20251030/model/RemoveHTTPHeaderInfo.h>
#include <tencentcloud/alb/v20251030/model/HTTPRewriteInfo.h>
#include <tencentcloud/alb/v20251030/model/TargetGroupConfig.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 转发规则动作
                */
                class RuleAction : public AbstractModel
                {
                public:
                    RuleAction();
                    ~RuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发动作执行顺序，不能重复，按从小到大顺序执行。取值范围：1 ~ 50000。
                     * @return Order 转发动作执行顺序，不能重复，按从小到大顺序执行。取值范围：1 ~ 50000。
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置转发动作执行顺序，不能重复，按从小到大顺序执行。取值范围：1 ~ 50000。
                     * @param _order 转发动作执行顺序，不能重复，按从小到大顺序执行。取值范围：1 ~ 50000。
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * @return Type 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     * @param _type 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
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
                     * 获取固定响应内容配置。
                     * @return FixedResponseConfig 固定响应内容配置。
                     * 
                     */
                    FixedResponseInfo GetFixedResponseConfig() const;

                    /**
                     * 设置固定响应内容配置。
                     * @param _fixedResponseConfig 固定响应内容配置。
                     * 
                     */
                    void SetFixedResponseConfig(const FixedResponseInfo& _fixedResponseConfig);

                    /**
                     * 判断参数 FixedResponseConfig 是否已赋值
                     * @return FixedResponseConfig 是否已赋值
                     * 
                     */
                    bool FixedResponseConfigHasBeenSet() const;

                    /**
                     * 获取插入HTTP Header配置。
                     * @return InsertHeaderConfig 插入HTTP Header配置。
                     * 
                     */
                    InsertHTTPHeaderInfo GetInsertHeaderConfig() const;

                    /**
                     * 设置插入HTTP Header配置。
                     * @param _insertHeaderConfig 插入HTTP Header配置。
                     * 
                     */
                    void SetInsertHeaderConfig(const InsertHTTPHeaderInfo& _insertHeaderConfig);

                    /**
                     * 判断参数 InsertHeaderConfig 是否已赋值
                     * @return InsertHeaderConfig 是否已赋值
                     * 
                     */
                    bool InsertHeaderConfigHasBeenSet() const;

                    /**
                     * 获取重定向配置。除HttpCode外，其他配置不能都使用默认值。
                     * @return RedirectConfig 重定向配置。除HttpCode外，其他配置不能都使用默认值。
                     * 
                     */
                    HTTPRedirectInfo GetRedirectConfig() const;

                    /**
                     * 设置重定向配置。除HttpCode外，其他配置不能都使用默认值。
                     * @param _redirectConfig 重定向配置。除HttpCode外，其他配置不能都使用默认值。
                     * 
                     */
                    void SetRedirectConfig(const HTTPRedirectInfo& _redirectConfig);

                    /**
                     * 判断参数 RedirectConfig 是否已赋值
                     * @return RedirectConfig 是否已赋值
                     * 
                     */
                    bool RedirectConfigHasBeenSet() const;

                    /**
                     * 获取删除HTTP Header配置。
                     * @return RemoveHeaderConfig 删除HTTP Header配置。
                     * 
                     */
                    RemoveHTTPHeaderInfo GetRemoveHeaderConfig() const;

                    /**
                     * 设置删除HTTP Header配置。
                     * @param _removeHeaderConfig 删除HTTP Header配置。
                     * 
                     */
                    void SetRemoveHeaderConfig(const RemoveHTTPHeaderInfo& _removeHeaderConfig);

                    /**
                     * 判断参数 RemoveHeaderConfig 是否已赋值
                     * @return RemoveHeaderConfig 是否已赋值
                     * 
                     */
                    bool RemoveHeaderConfigHasBeenSet() const;

                    /**
                     * 获取重写配置。
                     * @return RewriteConfig 重写配置。
                     * 
                     */
                    HTTPRewriteInfo GetRewriteConfig() const;

                    /**
                     * 设置重写配置。
                     * @param _rewriteConfig 重写配置。
                     * 
                     */
                    void SetRewriteConfig(const HTTPRewriteInfo& _rewriteConfig);

                    /**
                     * 判断参数 RewriteConfig 是否已赋值
                     * @return RewriteConfig 是否已赋值
                     * 
                     */
                    bool RewriteConfigHasBeenSet() const;

                    /**
                     * 获取转发目标组配置。
                     * @return TargetGroupConfig 转发目标组配置。
                     * 
                     */
                    TargetGroupConfig GetTargetGroupConfig() const;

                    /**
                     * 设置转发目标组配置。
                     * @param _targetGroupConfig 转发目标组配置。
                     * 
                     */
                    void SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig);

                    /**
                     * 判断参数 TargetGroupConfig 是否已赋值
                     * @return TargetGroupConfig 是否已赋值
                     * 
                     */
                    bool TargetGroupConfigHasBeenSet() const;

                private:

                    /**
                     * 转发动作执行顺序，不能重复，按从小到大顺序执行。取值范围：1 ~ 50000。
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 转发动作类型。取值：
TargetGroup：转发至目标组。
Redirect：重定向。
FixedResponse：返回固定内容。
Rewrite：重写。
InsertHeader：写入HTTP Header。
RemoveHeader：删除HTTP Header。
转发动作必选包含TargetGroup,Redirect,FixedResponse其中一个，并且执行顺序放在最后。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 固定响应内容配置。
                     */
                    FixedResponseInfo m_fixedResponseConfig;
                    bool m_fixedResponseConfigHasBeenSet;

                    /**
                     * 插入HTTP Header配置。
                     */
                    InsertHTTPHeaderInfo m_insertHeaderConfig;
                    bool m_insertHeaderConfigHasBeenSet;

                    /**
                     * 重定向配置。除HttpCode外，其他配置不能都使用默认值。
                     */
                    HTTPRedirectInfo m_redirectConfig;
                    bool m_redirectConfigHasBeenSet;

                    /**
                     * 删除HTTP Header配置。
                     */
                    RemoveHTTPHeaderInfo m_removeHeaderConfig;
                    bool m_removeHeaderConfigHasBeenSet;

                    /**
                     * 重写配置。
                     */
                    HTTPRewriteInfo m_rewriteConfig;
                    bool m_rewriteConfigHasBeenSet;

                    /**
                     * 转发目标组配置。
                     */
                    TargetGroupConfig m_targetGroupConfig;
                    bool m_targetGroupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_RULEACTION_H_
