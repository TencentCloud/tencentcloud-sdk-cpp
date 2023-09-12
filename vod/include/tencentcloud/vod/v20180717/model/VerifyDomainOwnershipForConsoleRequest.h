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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINOWNERSHIPFORCONSOLEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINOWNERSHIPFORCONSOLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * VerifyDomainOwnershipForConsole请求参数结构体
                */
                class VerifyDomainOwnershipForConsoleRequest : public AbstractModel
                {
                public:
                    VerifyDomainOwnershipForConsoleRequest();
                    ~VerifyDomainOwnershipForConsoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要接入点播的域名。
                     * @return Domain 需要接入点播的域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要接入点播的域名。
                     * @param _domain 需要接入点播的域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取需要开启加速的区域： <li>Mainland: 中国大陆地区</li> <li>Internation: 海外地区及港澳台</li> <li>Global: 全球</li> 不填会根据用户注册腾讯云时的地域信息自动判断 Mainland 或 Internation	
                     * @return AccelerateArea 需要开启加速的区域： <li>Mainland: 中国大陆地区</li> <li>Internation: 海外地区及港澳台</li> <li>Global: 全球</li> 不填会根据用户注册腾讯云时的地域信息自动判断 Mainland 或 Internation	
                     * 
                     */
                    std::string GetAccelerateArea() const;

                    /**
                     * 设置需要开启加速的区域： <li>Mainland: 中国大陆地区</li> <li>Internation: 海外地区及港澳台</li> <li>Global: 全球</li> 不填会根据用户注册腾讯云时的地域信息自动判断 Mainland 或 Internation	
                     * @param _accelerateArea 需要开启加速的区域： <li>Mainland: 中国大陆地区</li> <li>Internation: 海外地区及港澳台</li> <li>Global: 全球</li> 不填会根据用户注册腾讯云时的地域信息自动判断 Mainland 或 Internation	
                     * 
                     */
                    void SetAccelerateArea(const std::string& _accelerateArea);

                    /**
                     * 判断参数 AccelerateArea 是否已赋值
                     * @return AccelerateArea 是否已赋值
                     * 
                     */
                    bool AccelerateAreaHasBeenSet() const;

                private:

                    /**
                     * 需要接入点播的域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要开启加速的区域： <li>Mainland: 中国大陆地区</li> <li>Internation: 海外地区及港澳台</li> <li>Global: 全球</li> 不填会根据用户注册腾讯云时的地域信息自动判断 Mainland 或 Internation	
                     */
                    std::string m_accelerateArea;
                    bool m_accelerateAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VERIFYDOMAINOWNERSHIPFORCONSOLEREQUEST_H_
