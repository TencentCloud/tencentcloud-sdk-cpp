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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REGIONFWSTATUS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REGIONFWSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 地域的防火墙引流网络状态
                */
                class RegionFwStatus : public AbstractModel
                {
                public:
                    RegionFwStatus();
                    ~RegionFwStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取引流网络部署状态
1. "NotDeployed"  防火墙集群未部署
2. "Deployed"        防火墙集群已部署，但未创建引流网络
3. "Auto"                防火墙集群已部署，并自动选择网段创建了引流网络
4. "Custom"            防火墙集群已部署，并根据用户自定义网段创建了引流网络
                     * @return Status 引流网络部署状态
1. "NotDeployed"  防火墙集群未部署
2. "Deployed"        防火墙集群已部署，但未创建引流网络
3. "Auto"                防火墙集群已部署，并自动选择网段创建了引流网络
4. "Custom"            防火墙集群已部署，并根据用户自定义网段创建了引流网络
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置引流网络部署状态
1. "NotDeployed"  防火墙集群未部署
2. "Deployed"        防火墙集群已部署，但未创建引流网络
3. "Auto"                防火墙集群已部署，并自动选择网段创建了引流网络
4. "Custom"            防火墙集群已部署，并根据用户自定义网段创建了引流网络
                     * @param _status 引流网络部署状态
1. "NotDeployed"  防火墙集群未部署
2. "Deployed"        防火墙集群已部署，但未创建引流网络
3. "Auto"                防火墙集群已部署，并自动选择网段创建了引流网络
4. "Custom"            防火墙集群已部署，并根据用户自定义网段创建了引流网络
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取引流网络的cidr，如果没有部署引流网络则为空
                     * @return Cidr 引流网络的cidr，如果没有部署引流网络则为空
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置引流网络的cidr，如果没有部署引流网络则为空
                     * @param _cidr 引流网络的cidr，如果没有部署引流网络则为空
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 引流网络部署状态
1. "NotDeployed"  防火墙集群未部署
2. "Deployed"        防火墙集群已部署，但未创建引流网络
3. "Auto"                防火墙集群已部署，并自动选择网段创建了引流网络
4. "Custom"            防火墙集群已部署，并根据用户自定义网段创建了引流网络
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 引流网络的cidr，如果没有部署引流网络则为空
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REGIONFWSTATUS_H_
