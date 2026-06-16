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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENVPKGCREDITSUSAGE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENVPKGCREDITSUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MetricUsage.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 模块内资源点用量及原始用量数据结构
                */
                class EnvPkgCreditsUsage : public AbstractModel
                {
                public:
                    EnvPkgCreditsUsage();
                    ~EnvPkgCreditsUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>模块</p>
                     * @return Module <p>模块</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块</p>
                     * @param _module <p>模块</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>module总资源点用量</p>
                     * @return CreditsValue <p>module总资源点用量</p>
                     * 
                     */
                    double GetCreditsValue() const;

                    /**
                     * 设置<p>module总资源点用量</p>
                     * @param _creditsValue <p>module总资源点用量</p>
                     * 
                     */
                    void SetCreditsValue(const double& _creditsValue);

                    /**
                     * 判断参数 CreditsValue 是否已赋值
                     * @return CreditsValue 是否已赋值
                     * 
                     */
                    bool CreditsValueHasBeenSet() const;

                    /**
                     * 获取<p>指标用量明细</p>
                     * @return MetricUsageDetail <p>指标用量明细</p>
                     * 
                     */
                    std::vector<MetricUsage> GetMetricUsageDetail() const;

                    /**
                     * 设置<p>指标用量明细</p>
                     * @param _metricUsageDetail <p>指标用量明细</p>
                     * 
                     */
                    void SetMetricUsageDetail(const std::vector<MetricUsage>& _metricUsageDetail);

                    /**
                     * 判断参数 MetricUsageDetail 是否已赋值
                     * @return MetricUsageDetail 是否已赋值
                     * 
                     */
                    bool MetricUsageDetailHasBeenSet() const;

                    /**
                     * 获取<p>资源点套餐内用量</p>
                     * @return DeductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    double GetDeductValue() const;

                    /**
                     * 设置<p>资源点套餐内用量</p>
                     * @param _deductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    void SetDeductValue(const double& _deductValue);

                    /**
                     * 判断参数 DeductValue 是否已赋值
                     * @return DeductValue 是否已赋值
                     * 
                     */
                    bool DeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点资源包用量</p>
                     * @return PackageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    double GetPackageDeductValue() const;

                    /**
                     * 设置<p>资源点资源包用量</p>
                     * @param _packageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    void SetPackageDeductValue(const double& _packageDeductValue);

                    /**
                     * 判断参数 PackageDeductValue 是否已赋值
                     * @return PackageDeductValue 是否已赋值
                     * 
                     */
                    bool PackageDeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点按量用量</p>
                     * @return ReportValue <p>资源点按量用量</p>
                     * 
                     */
                    double GetReportValue() const;

                    /**
                     * 设置<p>资源点按量用量</p>
                     * @param _reportValue <p>资源点按量用量</p>
                     * 
                     */
                    void SetReportValue(const double& _reportValue);

                    /**
                     * 判断参数 ReportValue 是否已赋值
                     * @return ReportValue 是否已赋值
                     * 
                     */
                    bool ReportValueHasBeenSet() const;

                private:

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>模块</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>module总资源点用量</p>
                     */
                    double m_creditsValue;
                    bool m_creditsValueHasBeenSet;

                    /**
                     * <p>指标用量明细</p>
                     */
                    std::vector<MetricUsage> m_metricUsageDetail;
                    bool m_metricUsageDetailHasBeenSet;

                    /**
                     * <p>资源点套餐内用量</p>
                     */
                    double m_deductValue;
                    bool m_deductValueHasBeenSet;

                    /**
                     * <p>资源点资源包用量</p>
                     */
                    double m_packageDeductValue;
                    bool m_packageDeductValueHasBeenSet;

                    /**
                     * <p>资源点按量用量</p>
                     */
                    double m_reportValue;
                    bool m_reportValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENVPKGCREDITSUSAGE_H_
