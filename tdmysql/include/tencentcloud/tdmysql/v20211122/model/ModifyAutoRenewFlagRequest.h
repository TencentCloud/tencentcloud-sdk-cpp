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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyAutoRenewFlag请求参数结构体
                */
                class ModifyAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAutoRenewFlagRequest();
                    ~ModifyAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的实例列表
                     * @return InstanceIds 需要修改的实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要修改的实例列表
                     * @param _instanceIds 需要修改的实例列表
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
                     * 获取1表示开启自动续费，0为关闭自动续费
                     * @return AutoRenewFlag 1表示开启自动续费，0为关闭自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1表示开启自动续费，0为关闭自动续费
                     * @param _autoRenewFlag 1表示开启自动续费，0为关闭自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 需要修改的实例列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 1表示开启自动续费，0为关闭自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
