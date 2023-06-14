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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEARINSTANCEREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEARINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * ClearInstance请求参数结构体
                */
                class ClearInstanceRequest : public AbstractModel
                {
                public:
                    ClearInstanceRequest();
                    ~ClearInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，如：kee-6ubhg****。
                     * @return InstanceId 实例 ID，如：kee-6ubhg****。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，如：kee-6ubhg****。
                     * @param _instanceId 实例 ID，如：kee-6ubhg****。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例访问密码。
实例为免密访问，则无需设置该参数。
                     * @return Password 实例访问密码。
实例为免密访问，则无需设置该参数。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例访问密码。
实例为免密访问，则无需设置该参数。
                     * @param _password 实例访问密码。
实例为免密访问，则无需设置该参数。
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
                     * 实例 ID，如：kee-6ubhg****。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例访问密码。
实例为免密访问，则无需设置该参数。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CLEARINSTANCEREQUEST_H_
