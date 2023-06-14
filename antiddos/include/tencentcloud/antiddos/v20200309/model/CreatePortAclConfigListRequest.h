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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPORTACLCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPORTACLCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/AclConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreatePortAclConfigList请求参数结构体
                */
                class CreatePortAclConfigListRequest : public AbstractModel
                {
                public:
                    CreatePortAclConfigListRequest();
                    ~CreatePortAclConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID列表
                     * @return InstanceIdList 资源实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置资源实例ID列表
                     * @param _instanceIdList 资源实例ID列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取端口acl策略
                     * @return AclConfig 端口acl策略
                     * 
                     */
                    AclConfig GetAclConfig() const;

                    /**
                     * 设置端口acl策略
                     * @param _aclConfig 端口acl策略
                     * 
                     */
                    void SetAclConfig(const AclConfig& _aclConfig);

                    /**
                     * 判断参数 AclConfig 是否已赋值
                     * @return AclConfig 是否已赋值
                     * 
                     */
                    bool AclConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * 端口acl策略
                     */
                    AclConfig m_aclConfig;
                    bool m_aclConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEPORTACLCONFIGLISTREQUEST_H_
