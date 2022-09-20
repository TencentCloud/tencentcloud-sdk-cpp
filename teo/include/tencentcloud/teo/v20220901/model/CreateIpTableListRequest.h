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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEIPTABLELISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEIPTABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IpTableRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateIpTableList请求参数结构体
                */
                class CreateIpTableListRequest : public AbstractModel
                {
                public:
                    CreateIpTableListRequest();
                    ~CreateIpTableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。
                     * @return Entity 子域名/应用名。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。
                     * @param Entity 子域名/应用名。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取基础访问管控Ip规则列表。
                     * @return IpTableRules 基础访问管控Ip规则列表。
                     */
                    std::vector<IpTableRule> GetIpTableRules() const;

                    /**
                     * 设置基础访问管控Ip规则列表。
                     * @param IpTableRules 基础访问管控Ip规则列表。
                     */
                    void SetIpTableRules(const std::vector<IpTableRule>& _ipTableRules);

                    /**
                     * 判断参数 IpTableRules 是否已赋值
                     * @return IpTableRules 是否已赋值
                     */
                    bool IpTableRulesHasBeenSet() const;

                private:

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 基础访问管控Ip规则列表。
                     */
                    std::vector<IpTableRule> m_ipTableRules;
                    bool m_ipTableRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEIPTABLELISTREQUEST_H_
