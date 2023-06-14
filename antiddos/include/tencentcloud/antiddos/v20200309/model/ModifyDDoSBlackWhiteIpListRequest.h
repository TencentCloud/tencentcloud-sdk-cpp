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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSBLACKWHITEIPLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSBLACKWHITEIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/IpSegment.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDDoSBlackWhiteIpList请求参数结构体
                */
                class ModifyDDoSBlackWhiteIpListRequest : public AbstractModel
                {
                public:
                    ModifyDDoSBlackWhiteIpListRequest();
                    ~ModifyDDoSBlackWhiteIpListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源Id
                     * @return InstanceId 资源Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源Id
                     * @param _instanceId 资源Id
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
                     * 获取当前配置的黑白名单类型，取值black时表示黑名单；取值white时表示白名单
                     * @return OldIpType 当前配置的黑白名单类型，取值black时表示黑名单；取值white时表示白名单
                     * 
                     */
                    std::string GetOldIpType() const;

                    /**
                     * 设置当前配置的黑白名单类型，取值black时表示黑名单；取值white时表示白名单
                     * @param _oldIpType 当前配置的黑白名单类型，取值black时表示黑名单；取值white时表示白名单
                     * 
                     */
                    void SetOldIpType(const std::string& _oldIpType);

                    /**
                     * 判断参数 OldIpType 是否已赋值
                     * @return OldIpType 是否已赋值
                     * 
                     */
                    bool OldIpTypeHasBeenSet() const;

                    /**
                     * 获取当前配置的Ip段，包含ip与掩码
                     * @return OldIp 当前配置的Ip段，包含ip与掩码
                     * 
                     */
                    IpSegment GetOldIp() const;

                    /**
                     * 设置当前配置的Ip段，包含ip与掩码
                     * @param _oldIp 当前配置的Ip段，包含ip与掩码
                     * 
                     */
                    void SetOldIp(const IpSegment& _oldIp);

                    /**
                     * 判断参数 OldIp 是否已赋值
                     * @return OldIp 是否已赋值
                     * 
                     */
                    bool OldIpHasBeenSet() const;

                    /**
                     * 获取修改后黑白名单类型，取值black时黑名单，取值white时白名单
                     * @return NewIpType 修改后黑白名单类型，取值black时黑名单，取值white时白名单
                     * 
                     */
                    std::string GetNewIpType() const;

                    /**
                     * 设置修改后黑白名单类型，取值black时黑名单，取值white时白名单
                     * @param _newIpType 修改后黑白名单类型，取值black时黑名单，取值white时白名单
                     * 
                     */
                    void SetNewIpType(const std::string& _newIpType);

                    /**
                     * 判断参数 NewIpType 是否已赋值
                     * @return NewIpType 是否已赋值
                     * 
                     */
                    bool NewIpTypeHasBeenSet() const;

                    /**
                     * 获取当前配置的Ip段，包含ip与掩码
                     * @return NewIp 当前配置的Ip段，包含ip与掩码
                     * 
                     */
                    IpSegment GetNewIp() const;

                    /**
                     * 设置当前配置的Ip段，包含ip与掩码
                     * @param _newIp 当前配置的Ip段，包含ip与掩码
                     * 
                     */
                    void SetNewIp(const IpSegment& _newIp);

                    /**
                     * 判断参数 NewIp 是否已赋值
                     * @return NewIp 是否已赋值
                     * 
                     */
                    bool NewIpHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 当前配置的黑白名单类型，取值black时表示黑名单；取值white时表示白名单
                     */
                    std::string m_oldIpType;
                    bool m_oldIpTypeHasBeenSet;

                    /**
                     * 当前配置的Ip段，包含ip与掩码
                     */
                    IpSegment m_oldIp;
                    bool m_oldIpHasBeenSet;

                    /**
                     * 修改后黑白名单类型，取值black时黑名单，取值white时白名单
                     */
                    std::string m_newIpType;
                    bool m_newIpTypeHasBeenSet;

                    /**
                     * 当前配置的Ip段，包含ip与掩码
                     */
                    IpSegment m_newIp;
                    bool m_newIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSBLACKWHITEIPLISTREQUEST_H_
