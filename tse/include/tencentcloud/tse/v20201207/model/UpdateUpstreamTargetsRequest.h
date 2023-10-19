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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongTarget.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * UpdateUpstreamTargets请求参数结构体
                */
                class UpdateUpstreamTargetsRequest : public AbstractModel
                {
                public:
                    UpdateUpstreamTargetsRequest();
                    ~UpdateUpstreamTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例ID
                     * @return GatewayId 网关实例ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayId 网关实例ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取服务名称或ID
                     * @return Name 服务名称或ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务名称或ID
                     * @param _name 服务名称或ID
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例列表
                     * @return Targets 实例列表
                     * 
                     */
                    std::vector<KongTarget> GetTargets() const;

                    /**
                     * 设置实例列表
                     * @param _targets 实例列表
                     * 
                     */
                    void SetTargets(const std::vector<KongTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 服务名称或ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<KongTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPDATEUPSTREAMTARGETSREQUEST_H_
