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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePlanForZone请求参数结构体
                */
                class CreatePlanForZoneRequest : public AbstractModel
                {
                public:
                    CreatePlanForZoneRequest();
                    ~CreatePlanForZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
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
                     * 获取所要购买套餐的类型，取值有：
<li> sta: 全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot: 全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm: 中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot: 中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent: 全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot: 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm: 中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot: 中国大陆内容分发网络企业版套餐附带bot管理。</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>当前账户可购买套餐类型请以<a href="https://cloud.tencent.com/document/product/1552/80606">DescribeAvailablePlans</a>返回为准。
                     * @return PlanType 所要购买套餐的类型，取值有：
<li> sta: 全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot: 全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm: 中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot: 中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent: 全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot: 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm: 中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot: 中国大陆内容分发网络企业版套餐附带bot管理。</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>当前账户可购买套餐类型请以<a href="https://cloud.tencent.com/document/product/1552/80606">DescribeAvailablePlans</a>返回为准。
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置所要购买套餐的类型，取值有：
<li> sta: 全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot: 全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm: 中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot: 中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent: 全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot: 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm: 中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot: 中国大陆内容分发网络企业版套餐附带bot管理。</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>当前账户可购买套餐类型请以<a href="https://cloud.tencent.com/document/product/1552/80606">DescribeAvailablePlans</a>返回为准。
                     * @param _planType 所要购买套餐的类型，取值有：
<li> sta: 全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot: 全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm: 中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot: 中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent: 全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot: 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm: 中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot: 中国大陆内容分发网络企业版套餐附带bot管理。</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>当前账户可购买套餐类型请以<a href="https://cloud.tencent.com/document/product/1552/80606">DescribeAvailablePlans</a>返回为准。
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 所要购买套餐的类型，取值有：
<li> sta: 全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot: 全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm: 中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot: 中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent: 全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot: 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm: 中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot: 中国大陆内容分发网络企业版套餐附带bot管理。</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>当前账户可购买套餐类型请以<a href="https://cloud.tencent.com/document/product/1552/80606">DescribeAvailablePlans</a>返回为准。
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPLANFORZONEREQUEST_H_
