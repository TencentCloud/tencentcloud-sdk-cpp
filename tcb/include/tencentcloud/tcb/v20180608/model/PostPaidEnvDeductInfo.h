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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源方
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源方
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceType 资源方
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MetricName 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取按量计费详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResQuota 按量计费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetResQuota() const;

                    /**
                     * 设置按量计费详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResQuota 按量计费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResQuota(const double& _resQuota);

                    /**
                     * 判断参数 ResQuota 是否已赋值
                     * @return ResQuota 是否已赋值
                     */
                    bool ResQuotaHasBeenSet() const;

                    /**
                     * 获取资源包抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgQuota 资源包抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetPkgQuota() const;

                    /**
                     * 设置资源包抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PkgQuota 资源包抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPkgQuota(const double& _pkgQuota);

                    /**
                     * 判断参数 PkgQuota 是否已赋值
                     * @return PkgQuota 是否已赋值
                     */
                    bool PkgQuotaHasBeenSet() const;

                    /**
                     * 获取免费额度抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeQuota 免费额度抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetFreeQuota() const;

                    /**
                     * 设置免费额度抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreeQuota 免费额度抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreeQuota(const double& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取环境id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvId 环境id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnvId 环境id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * 资源方
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 指标名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 按量计费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_resQuota;
                    bool m_resQuotaHasBeenSet;

                    /**
                     * 资源包抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_pkgQuota;
                    bool m_pkgQuotaHasBeenSet;

                    /**
                     * 免费额度抵扣详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 环境id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAIDENVDEDUCTINFO_H_
