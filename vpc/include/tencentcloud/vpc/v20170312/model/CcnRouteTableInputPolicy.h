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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRouteBroadcastPolicyRouteCondition.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网路由接收策略
                */
                class CcnRouteTableInputPolicy : public AbstractModel
                {
                public:
                    CcnRouteTableInputPolicy();
                    ~CcnRouteTableInputPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由条件。
                     * @return RouteConditions 路由条件。
                     * 
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> GetRouteConditions() const;

                    /**
                     * 设置路由条件。
                     * @param _routeConditions 路由条件。
                     * 
                     */
                    void SetRouteConditions(const std::vector<CcnRouteBroadcastPolicyRouteCondition>& _routeConditions);

                    /**
                     * 判断参数 RouteConditions 是否已赋值
                     * @return RouteConditions 是否已赋值
                     * 
                     */
                    bool RouteConditionsHasBeenSet() const;

                    /**
                     * 获取路由行为，`accept` 允许，`drop` 拒绝。
                     * @return Action 路由行为，`accept` 允许，`drop` 拒绝。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置路由行为，`accept` 允许，`drop` 拒绝。
                     * @param _action 路由行为，`accept` 允许，`drop` 拒绝。
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
                     * 获取策略描述。
                     * @return Description 策略描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置策略描述。
                     * @param _description 策略描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取as-path操作
                     * @return OperateAsPath as-path操作
                     * 
                     */
                    std::string GetOperateAsPath() const;

                    /**
                     * 设置as-path操作
                     * @param _operateAsPath as-path操作
                     * 
                     */
                    void SetOperateAsPath(const std::string& _operateAsPath);

                    /**
                     * 判断参数 OperateAsPath 是否已赋值
                     * @return OperateAsPath 是否已赋值
                     * 
                     */
                    bool OperateAsPathHasBeenSet() const;

                    /**
                     * 获取as-path操作模式
                     * @return AsPathOperateMode as-path操作模式
                     * 
                     */
                    std::string GetAsPathOperateMode() const;

                    /**
                     * 设置as-path操作模式
                     * @param _asPathOperateMode as-path操作模式
                     * 
                     */
                    void SetAsPathOperateMode(const std::string& _asPathOperateMode);

                    /**
                     * 判断参数 AsPathOperateMode 是否已赋值
                     * @return AsPathOperateMode 是否已赋值
                     * 
                     */
                    bool AsPathOperateModeHasBeenSet() const;

                private:

                    /**
                     * 路由条件。
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> m_routeConditions;
                    bool m_routeConditionsHasBeenSet;

                    /**
                     * 路由行为，`accept` 允许，`drop` 拒绝。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 策略描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * as-path操作
                     */
                    std::string m_operateAsPath;
                    bool m_operateAsPathHasBeenSet;

                    /**
                     * as-path操作模式
                     */
                    std::string m_asPathOperateMode;
                    bool m_asPathOperateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEINPUTPOLICY_H_
