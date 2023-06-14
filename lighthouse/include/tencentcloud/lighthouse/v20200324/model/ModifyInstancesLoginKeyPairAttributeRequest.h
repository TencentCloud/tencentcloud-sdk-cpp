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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyInstancesLoginKeyPairAttribute请求参数结构体
                */
                class ModifyInstancesLoginKeyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstancesLoginKeyPairAttributeRequest();
                    ~ModifyInstancesLoginKeyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表。每次请求批量实例的上限为 100。
                     * @return InstanceIds 实例 ID 列表。每次请求批量实例的上限为 100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。每次请求批量实例的上限为 100。
                     * @param _instanceIds 实例 ID 列表。每次请求批量实例的上限为 100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取是否允许使用默认密钥对登录，YES：允许登录；NO：禁止登录
                     * @return PermitLogin 是否允许使用默认密钥对登录，YES：允许登录；NO：禁止登录
                     * 
                     */
                    std::string GetPermitLogin() const;

                    /**
                     * 设置是否允许使用默认密钥对登录，YES：允许登录；NO：禁止登录
                     * @param _permitLogin 是否允许使用默认密钥对登录，YES：允许登录；NO：禁止登录
                     * 
                     */
                    void SetPermitLogin(const std::string& _permitLogin);

                    /**
                     * 判断参数 PermitLogin 是否已赋值
                     * @return PermitLogin 是否已赋值
                     * 
                     */
                    bool PermitLoginHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表。每次请求批量实例的上限为 100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 是否允许使用默认密钥对登录，YES：允许登录；NO：禁止登录
                     */
                    std::string m_permitLogin;
                    bool m_permitLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESLOGINKEYPAIRATTRIBUTEREQUEST_H_
