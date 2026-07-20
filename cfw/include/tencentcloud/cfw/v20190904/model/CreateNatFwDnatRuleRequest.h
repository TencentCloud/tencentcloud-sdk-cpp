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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWDNATRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWDNATRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateNatFwDnatRule请求参数结构体
                */
                class CreateNatFwDnatRuleRequest : public AbstractModel
                {
                public:
                    CreateNatFwDnatRuleRequest();
                    ~CreateNatFwDnatRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0：cfw新增模式，1：cfw接入模式。</p>
                     * @return Mode <p>0：cfw新增模式，1：cfw接入模式。</p>
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置<p>0：cfw新增模式，1：cfw接入模式。</p>
                     * @param _mode <p>0：cfw新增模式，1：cfw接入模式。</p>
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例id，该字段必须传递。</p>
                     * @return CfwInstance <p>防火墙实例id，该字段必须传递。</p>
                     * 
                     */
                    std::string GetCfwInstance() const;

                    /**
                     * 设置<p>防火墙实例id，该字段必须传递。</p>
                     * @param _cfwInstance <p>防火墙实例id，该字段必须传递。</p>
                     * 
                     */
                    void SetCfwInstance(const std::string& _cfwInstance);

                    /**
                     * 判断参数 CfwInstance 是否已赋值
                     * @return CfwInstance 是否已赋值
                     * 
                     */
                    bool CfwInstanceHasBeenSet() const;

                    /**
                     * 获取<p>添加或删除操作的Dnat规则列表。</p>
                     * @return DnatRules <p>添加或删除操作的Dnat规则列表。</p>
                     * 
                     */
                    std::vector<CfwNatDnatRule> GetDnatRules() const;

                    /**
                     * 设置<p>添加或删除操作的Dnat规则列表。</p>
                     * @param _dnatRules <p>添加或删除操作的Dnat规则列表。</p>
                     * 
                     */
                    void SetDnatRules(const std::vector<CfwNatDnatRule>& _dnatRules);

                    /**
                     * 判断参数 DnatRules 是否已赋值
                     * @return DnatRules 是否已赋值
                     * 
                     */
                    bool DnatRulesHasBeenSet() const;

                private:

                    /**
                     * <p>0：cfw新增模式，1：cfw接入模式。</p>
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>防火墙实例id，该字段必须传递。</p>
                     */
                    std::string m_cfwInstance;
                    bool m_cfwInstanceHasBeenSet;

                    /**
                     * <p>添加或删除操作的Dnat规则列表。</p>
                     */
                    std::vector<CfwNatDnatRule> m_dnatRules;
                    bool m_dnatRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWDNATRULEREQUEST_H_
