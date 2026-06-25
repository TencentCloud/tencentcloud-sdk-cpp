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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPLANSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPLANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEnvPlans请求参数结构体
                */
                class DescribeEnvPlansRequest : public AbstractModel
                {
                public:
                    DescribeEnvPlansRequest();
                    ~DescribeEnvPlansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>套餐英文标识，不指定则返回所有可售卖套餐</p><p>枚举值：</p><ul><li>baas_integration： 集成版</li><li>baas_personal： 个人版</li><li>baas_pf_standard： 标准版</li><li>baas_pf_enterprise： 企业版</li><li>baas_pf_enterprise_senior： 企业高级版</li></ul>
                     * @return PackageId <p>套餐英文标识，不指定则返回所有可售卖套餐</p><p>枚举值：</p><ul><li>baas_integration： 集成版</li><li>baas_personal： 个人版</li><li>baas_pf_standard： 标准版</li><li>baas_pf_enterprise： 企业版</li><li>baas_pf_enterprise_senior： 企业高级版</li></ul>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>套餐英文标识，不指定则返回所有可售卖套餐</p><p>枚举值：</p><ul><li>baas_integration： 集成版</li><li>baas_personal： 个人版</li><li>baas_pf_standard： 标准版</li><li>baas_pf_enterprise： 企业版</li><li>baas_pf_enterprise_senior： 企业高级版</li></ul>
                     * @param _packageId <p>套餐英文标识，不指定则返回所有可售卖套餐</p><p>枚举值：</p><ul><li>baas_integration： 集成版</li><li>baas_personal： 个人版</li><li>baas_pf_standard： 标准版</li><li>baas_pf_enterprise： 企业版</li><li>baas_pf_enterprise_senior： 企业高级版</li></ul>
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                private:

                    /**
                     * <p>套餐英文标识，不指定则返回所有可售卖套餐</p><p>枚举值：</p><ul><li>baas_integration： 集成版</li><li>baas_personal： 个人版</li><li>baas_pf_standard： 标准版</li><li>baas_pf_enterprise： 企业版</li><li>baas_pf_enterprise_senior： 企业高级版</li></ul>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENVPLANSREQUEST_H_
