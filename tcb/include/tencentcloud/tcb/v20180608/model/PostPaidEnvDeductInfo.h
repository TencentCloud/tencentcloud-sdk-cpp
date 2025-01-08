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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAIDENVDEDUCTINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAIDENVDEDUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 后付费计费详情
                */
                class PostPaidEnvDeductInfo : public AbstractModel
                {
                public:
                    PostPaidEnvDeductInfo();
                    ~PostPaidEnvDeductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源方
                     * @return ResourceType 资源方
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源方
                     * @param _resourceType 资源方
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取按量计费详情
                     * @return ResQuota 按量计费详情
                     * 
                     */
                    double GetResQuota() const;

                    /**
                     * 设置按量计费详情
                     * @param _resQuota 按量计费详情
                     * 
                     */
                    void SetResQuota(const double& _resQuota);

                    /**
                     * 判断参数 ResQuota 是否已赋值
                     * @return ResQuota 是否已赋值
                     * 
                     */
                    bool ResQuotaHasBeenSet() const;

                    /**
                     * 获取资源包抵扣详情
                     * @return PkgQuota 资源包抵扣详情
                     * 
                     */
                    double GetPkgQuota() const;

                    /**
                     * 设置资源包抵扣详情
                     * @param _pkgQuota 资源包抵扣详情
                     * 
                     */
                    void SetPkgQuota(const double& _pkgQuota);

                    /**
                     * 判断参数 PkgQuota 是否已赋值
                     * @return PkgQuota 是否已赋值
                     * 
                     */
                    bool PkgQuotaHasBeenSet() const;

                    /**
                     * 获取免费额度抵扣详情
                     * @return FreeQuota 免费额度抵扣详情
                     * 
                     */
                    double GetFreeQuota() const;

                    /**
                     * 设置免费额度抵扣详情
                     * @param _freeQuota 免费额度抵扣详情
                     * 
                     */
                    void SetFreeQuota(const double& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * 资源方
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 按量计费详情
                     */
                    double m_resQuota;
                    bool m_resQuotaHasBeenSet;

                    /**
                     * 资源包抵扣详情
                     */
                    double m_pkgQuota;
                    bool m_pkgQuotaHasBeenSet;

                    /**
                     * 免费额度抵扣详情
                     */
                    double m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAIDENVDEDUCTINFO_H_
