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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSNODE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/ListGrantServiceAccessService.h>
#include <tencentcloud/cam/v20190116/model/ListGrantServiceAccessActionNode.h>
#include <tencentcloud/cam/v20190116/model/ListGrantServiceAccessPolicy.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 用于ListPoliciesGrantingServiceAccess接口的List节点
                */
                class ListGrantServiceAccessNode : public AbstractModel
                {
                public:
                    ListGrantServiceAccessNode();
                    ~ListGrantServiceAccessNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务
                     * @return Service 服务
                     * 
                     */
                    ListGrantServiceAccessService GetService() const;

                    /**
                     * 设置服务
                     * @param _service 服务
                     * 
                     */
                    void SetService(const ListGrantServiceAccessService& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取接口信息
                     * @return Action 接口信息
                     * 
                     */
                    std::vector<ListGrantServiceAccessActionNode> GetAction() const;

                    /**
                     * 设置接口信息
                     * @param _action 接口信息
                     * 
                     */
                    void SetAction(const std::vector<ListGrantServiceAccessActionNode>& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取授权的策略
                     * @return Policy 授权的策略
                     * 
                     */
                    std::vector<ListGrantServiceAccessPolicy> GetPolicy() const;

                    /**
                     * 设置授权的策略
                     * @param _policy 授权的策略
                     * 
                     */
                    void SetPolicy(const std::vector<ListGrantServiceAccessPolicy>& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * 服务
                     */
                    ListGrantServiceAccessService m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 接口信息
                     */
                    std::vector<ListGrantServiceAccessActionNode> m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 授权的策略
                     */
                    std::vector<ListGrantServiceAccessPolicy> m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTGRANTSERVICEACCESSNODE_H_
