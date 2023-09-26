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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAccelerationDomain请求参数结构体
                */
                class CreateAccelerationDomainRequest : public AbstractModel
                {
                public:
                    CreateAccelerationDomainRequest();
                    ~CreateAccelerationDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点 ID。
                     * @return ZoneId 加速域名所属站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点 ID。
                     * @param _zoneId 加速域名所属站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取加速域名。
                     * @return DomainName 加速域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置加速域名。
                     * @param _domainName 加速域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取源站信息。
                     * @return OriginInfo 源站信息。
                     * 
                     */
                    OriginInfo GetOriginInfo() const;

                    /**
                     * 设置源站信息。
                     * @param _originInfo 源站信息。
                     * 
                     */
                    void SetOriginInfo(const OriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 加速域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 源站信息。
                     */
                    OriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINREQUEST_H_
