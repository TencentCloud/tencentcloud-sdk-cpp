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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYL4KEEPTIMEREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYL4KEEPTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyL4KeepTime请求参数结构体
                */
                class ModifyL4KeepTimeRequest : public AbstractModel
                {
                public:
                    ModifyL4KeepTimeRequest();
                    ~ModifyL4KeepTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @return KeepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * 
                     */
                    uint64_t GetKeepEnable() const;

                    /**
                     * 设置会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * @param _keepEnable 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     * 
                     */
                    void SetKeepEnable(const uint64_t& _keepEnable);

                    /**
                     * 判断参数 KeepEnable 是否已赋值
                     * @return KeepEnable 是否已赋值
                     * 
                     */
                    bool KeepEnableHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位秒
                     * @return KeepTime 会话保持时间，单位秒
                     * 
                     */
                    uint64_t GetKeepTime() const;

                    /**
                     * 设置会话保持时间，单位秒
                     * @param _keepTime 会话保持时间，单位秒
                     * 
                     */
                    void SetKeepTime(const uint64_t& _keepTime);

                    /**
                     * 判断参数 KeepTime 是否已赋值
                     * @return KeepTime 是否已赋值
                     * 
                     */
                    bool KeepTimeHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 会话保持开关，取值[0(会话保持关闭)，1(会话保持开启)]
                     */
                    uint64_t m_keepEnable;
                    bool m_keepEnableHasBeenSet;

                    /**
                     * 会话保持时间，单位秒
                     */
                    uint64_t m_keepTime;
                    bool m_keepTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYL4KEEPTIMEREQUEST_H_
