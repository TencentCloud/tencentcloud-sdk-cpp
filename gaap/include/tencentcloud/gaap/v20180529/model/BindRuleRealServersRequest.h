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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDRULEREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDRULEREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RealServerBindSetReq.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * BindRuleRealServers请求参数结构体
                */
                class BindRuleRealServersRequest : public AbstractModel
                {
                public:
                    BindRuleRealServersRequest();
                    ~BindRuleRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转发规则ID
                     * @return RuleId 转发规则ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则ID
                     * @param _ruleId 转发规则ID
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
                     * 获取需要绑定的源站信息列表。
如果已经存在绑定的源站，则会覆盖更新成这个源站列表。
当不带该字段时，表示解绑该规则上的所有源站。
如果该规则的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。
                     * @return RealServerBindSet 需要绑定的源站信息列表。
如果已经存在绑定的源站，则会覆盖更新成这个源站列表。
当不带该字段时，表示解绑该规则上的所有源站。
如果该规则的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。
                     * 
                     */
                    std::vector<RealServerBindSetReq> GetRealServerBindSet() const;

                    /**
                     * 设置需要绑定的源站信息列表。
如果已经存在绑定的源站，则会覆盖更新成这个源站列表。
当不带该字段时，表示解绑该规则上的所有源站。
如果该规则的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。
                     * @param _realServerBindSet 需要绑定的源站信息列表。
如果已经存在绑定的源站，则会覆盖更新成这个源站列表。
当不带该字段时，表示解绑该规则上的所有源站。
如果该规则的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。
                     * 
                     */
                    void SetRealServerBindSet(const std::vector<RealServerBindSetReq>& _realServerBindSet);

                    /**
                     * 判断参数 RealServerBindSet 是否已赋值
                     * @return RealServerBindSet 是否已赋值
                     * 
                     */
                    bool RealServerBindSetHasBeenSet() const;

                private:

                    /**
                     * 转发规则ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 需要绑定的源站信息列表。
如果已经存在绑定的源站，则会覆盖更新成这个源站列表。
当不带该字段时，表示解绑该规则上的所有源站。
如果该规则的源站调度策略是加权轮询，需要填写源站权重 RealServerWeight, 不填或者其他调度类型默认源站权重为1。
                     */
                    std::vector<RealServerBindSetReq> m_realServerBindSet;
                    bool m_realServerBindSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDRULEREALSERVERSREQUEST_H_
