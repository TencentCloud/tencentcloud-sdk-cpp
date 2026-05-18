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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseBindList请求参数结构体
                */
                class DescribeLicenseBindListRequest : public AbstractModel
                {
                public:
                    DescribeLicenseBindListRequest();
                    ~DescribeLicenseBindListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>授权ID取DescribeLicenseList接口List对象下的LicenseId参数值</p>
                     * @return LicenseId <p>授权ID取DescribeLicenseList接口List对象下的LicenseId参数值</p>
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置<p>授权ID取DescribeLicenseList接口List对象下的LicenseId参数值</p>
                     * @param _licenseId <p>授权ID取DescribeLicenseList接口List对象下的LicenseId参数值</p>
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取<p>授权类型</p><p>枚举值：</p><ul><li>0： 专业版-按量计费</li><li>1： 专业版-包年包月(主机安全)</li><li>2： 旗舰版-包年包月(主机安全)</li><li>3： 轻量版-LH-包年包月</li><li>6： 专业版-包年包月（云安全中心）</li><li>7： 旗舰版-包年包月（云安全中心）</li></ul>
                     * @return LicenseType <p>授权类型</p><p>枚举值：</p><ul><li>0： 专业版-按量计费</li><li>1： 专业版-包年包月(主机安全)</li><li>2： 旗舰版-包年包月(主机安全)</li><li>3： 轻量版-LH-包年包月</li><li>6： 专业版-包年包月（云安全中心）</li><li>7： 旗舰版-包年包月（云安全中心）</li></ul>
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置<p>授权类型</p><p>枚举值：</p><ul><li>0： 专业版-按量计费</li><li>1： 专业版-包年包月(主机安全)</li><li>2： 旗舰版-包年包月(主机安全)</li><li>3： 轻量版-LH-包年包月</li><li>6： 专业版-包年包月（云安全中心）</li><li>7： 旗舰版-包年包月（云安全中心）</li></ul>
                     * @param _licenseType <p>授权类型</p><p>枚举值：</p><ul><li>0： 专业版-按量计费</li><li>1： 专业版-包年包月(主机安全)</li><li>2： 旗舰版-包年包月(主机安全)</li><li>3： 轻量版-LH-包年包月</li><li>6： 专业版-包年包月（云安全中心）</li><li>7： 旗舰版-包年包月（云安全中心）</li></ul>
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源ID,取DescribeLicenseList接口List对象下的ResourceId参数值</p>
                     * @return ResourceId <p>资源ID,取DescribeLicenseList接口List对象下的ResourceId参数值</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID,取DescribeLicenseList接口List对象下的ResourceId参数值</p>
                     * @param _resourceId <p>资源ID,取DescribeLicenseList接口List对象下的ResourceId参数值</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<li>InstanceID、IP、<p>MachineName 模糊查询</li></p>
                     * @return Filters <li>InstanceID、IP、<p>MachineName 模糊查询</li></p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<li>InstanceID、IP、<p>MachineName 模糊查询</li></p>
                     * @param _filters <li>InstanceID、IP、<p>MachineName 模糊查询</li></p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>限制条数,默认10.</p>
                     * @return Limit <p>限制条数,默认10.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限制条数,默认10.</p>
                     * @param _limit <p>限制条数,默认10.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量,默认0.</p>
                     * @return Offset <p>偏移量,默认0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量,默认0.</p>
                     * @param _offset <p>偏移量,默认0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>授权ID取DescribeLicenseList接口List对象下的LicenseId参数值</p>
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * <p>授权类型</p><p>枚举值：</p><ul><li>0： 专业版-按量计费</li><li>1： 专业版-包年包月(主机安全)</li><li>2： 旗舰版-包年包月(主机安全)</li><li>3： 轻量版-LH-包年包月</li><li>6： 专业版-包年包月（云安全中心）</li><li>7： 旗舰版-包年包月（云安全中心）</li></ul>
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>资源ID,取DescribeLicenseList接口List对象下的ResourceId参数值</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <li>InstanceID、IP、<p>MachineName 模糊查询</li></p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>限制条数,默认10.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量,默认0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEBINDLISTREQUEST_H_
