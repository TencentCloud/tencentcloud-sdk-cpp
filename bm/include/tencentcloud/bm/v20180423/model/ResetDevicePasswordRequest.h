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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_RESETDEVICEPASSWORDREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_RESETDEVICEPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * ResetDevicePassword请求参数结构体
                */
                class ResetDevicePasswordRequest : public AbstractModel
                {
                public:
                    ResetDevicePasswordRequest();
                    ~ResetDevicePasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要重置密码的服务器ID列表
                     * @return InstanceIds 需要重置密码的服务器ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要重置密码的服务器ID列表
                     * @param _instanceIds 需要重置密码的服务器ID列表
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
                     * 获取新密码
                     * @return Password 新密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新密码
                     * @param _password 新密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 需要重置密码的服务器ID列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 新密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_RESETDEVICEPASSWORDREQUEST_H_
