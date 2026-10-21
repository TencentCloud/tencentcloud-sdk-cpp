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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWMANAGEDREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWMANAGEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyCfwManaged请求参数结构体
                */
                class ModifyCfwManagedRequest : public AbstractModel
                {
                public:
                    ModifyCfwManagedRequest();
                    ~ModifyCfwManagedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标成员 Id
                     * @return MemberId 目标成员 Id
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置目标成员 Id
                     * @param _memberId 目标成员 Id
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取云防火墙纳管：0-关闭，1-开启
                     * @return CfwManaged 云防火墙纳管：0-关闭，1-开启
                     * 
                     */
                    int64_t GetCfwManaged() const;

                    /**
                     * 设置云防火墙纳管：0-关闭，1-开启
                     * @param _cfwManaged 云防火墙纳管：0-关闭，1-开启
                     * 
                     */
                    void SetCfwManaged(const int64_t& _cfwManaged);

                    /**
                     * 判断参数 CfwManaged 是否已赋值
                     * @return CfwManaged 是否已赋值
                     * 
                     */
                    bool CfwManagedHasBeenSet() const;

                private:

                    /**
                     * 目标成员 Id
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 云防火墙纳管：0-关闭，1-开启
                     */
                    int64_t m_cfwManaged;
                    bool m_cfwManagedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYCFWMANAGEDREQUEST_H_
