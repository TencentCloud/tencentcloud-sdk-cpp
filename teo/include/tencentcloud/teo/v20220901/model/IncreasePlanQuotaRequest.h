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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * IncreasePlanQuota请求参数结构体
                */
                class IncreasePlanQuotaRequest : public AbstractModel
                {
                public:
                    IncreasePlanQuotaRequest();
                    ~IncreasePlanQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID, 形如 edgeone-2unuvzjmmn2q。
                     * @return PlanId 套餐 ID, 形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置套餐 ID, 形如 edgeone-2unuvzjmmn2q。
                     * @param _planId 套餐 ID, 形如 edgeone-2unuvzjmmn2q。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取新增的套餐配额类型，取值有：<li> site：站点数；</li><li> precise_access_control_rule：Web 防护 - 自定义规则 - 精准匹配策略的规则配额；</li><li> rate_limiting_rule：Web 防护 - 速率限制 - 精准速率限制模块的规则配额。</li>
                     * @return QuotaType 新增的套餐配额类型，取值有：<li> site：站点数；</li><li> precise_access_control_rule：Web 防护 - 自定义规则 - 精准匹配策略的规则配额；</li><li> rate_limiting_rule：Web 防护 - 速率限制 - 精准速率限制模块的规则配额。</li>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置新增的套餐配额类型，取值有：<li> site：站点数；</li><li> precise_access_control_rule：Web 防护 - 自定义规则 - 精准匹配策略的规则配额；</li><li> rate_limiting_rule：Web 防护 - 速率限制 - 精准速率限制模块的规则配额。</li>
                     * @param _quotaType 新增的套餐配额类型，取值有：<li> site：站点数；</li><li> precise_access_control_rule：Web 防护 - 自定义规则 - 精准匹配策略的规则配额；</li><li> rate_limiting_rule：Web 防护 - 速率限制 - 精准速率限制模块的规则配额。</li>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取新增的配额个数。单次新增的配额个数上限为 100。
                     * @return QuotaNumber 新增的配额个数。单次新增的配额个数上限为 100。
                     * 
                     */
                    int64_t GetQuotaNumber() const;

                    /**
                     * 设置新增的配额个数。单次新增的配额个数上限为 100。
                     * @param _quotaNumber 新增的配额个数。单次新增的配额个数上限为 100。
                     * 
                     */
                    void SetQuotaNumber(const int64_t& _quotaNumber);

                    /**
                     * 判断参数 QuotaNumber 是否已赋值
                     * @return QuotaNumber 是否已赋值
                     * 
                     */
                    bool QuotaNumberHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID, 形如 edgeone-2unuvzjmmn2q。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 新增的套餐配额类型，取值有：<li> site：站点数；</li><li> precise_access_control_rule：Web 防护 - 自定义规则 - 精准匹配策略的规则配额；</li><li> rate_limiting_rule：Web 防护 - 速率限制 - 精准速率限制模块的规则配额。</li>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 新增的配额个数。单次新增的配额个数上限为 100。
                     */
                    int64_t m_quotaNumber;
                    bool m_quotaNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INCREASEPLANQUOTAREQUEST_H_
