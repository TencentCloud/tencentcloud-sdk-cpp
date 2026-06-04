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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_QPSDATA_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_QPSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 获取弹性qps的默认相关值
                */
                class QpsData : public AbstractModel
                {
                public:
                    QpsData();
                    ~QpsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>弹性qps默认值</p>
                     * @return ElasticBillingDefault <p>弹性qps默认值</p>
                     * 
                     */
                    uint64_t GetElasticBillingDefault() const;

                    /**
                     * 设置<p>弹性qps默认值</p>
                     * @param _elasticBillingDefault <p>弹性qps默认值</p>
                     * 
                     */
                    void SetElasticBillingDefault(const uint64_t& _elasticBillingDefault);

                    /**
                     * 判断参数 ElasticBillingDefault 是否已赋值
                     * @return ElasticBillingDefault 是否已赋值
                     * 
                     */
                    bool ElasticBillingDefaultHasBeenSet() const;

                    /**
                     * 获取<p>弹性qps最小值</p>
                     * @return ElasticBillingMin <p>弹性qps最小值</p>
                     * 
                     */
                    uint64_t GetElasticBillingMin() const;

                    /**
                     * 设置<p>弹性qps最小值</p>
                     * @param _elasticBillingMin <p>弹性qps最小值</p>
                     * 
                     */
                    void SetElasticBillingMin(const uint64_t& _elasticBillingMin);

                    /**
                     * 判断参数 ElasticBillingMin 是否已赋值
                     * @return ElasticBillingMin 是否已赋值
                     * 
                     */
                    bool ElasticBillingMinHasBeenSet() const;

                    /**
                     * 获取<p>弹性qps最大值</p>
                     * @return ElasticBillingMax <p>弹性qps最大值</p>
                     * 
                     */
                    uint64_t GetElasticBillingMax() const;

                    /**
                     * 设置<p>弹性qps最大值</p>
                     * @param _elasticBillingMax <p>弹性qps最大值</p>
                     * 
                     */
                    void SetElasticBillingMax(const uint64_t& _elasticBillingMax);

                    /**
                     * 判断参数 ElasticBillingMax 是否已赋值
                     * @return ElasticBillingMax 是否已赋值
                     * 
                     */
                    bool ElasticBillingMaxHasBeenSet() const;

                    /**
                     * 获取<p>业务扩展包最大qps</p>
                     * @return QPSExtendMax <p>业务扩展包最大qps</p>
                     * 
                     */
                    uint64_t GetQPSExtendMax() const;

                    /**
                     * 设置<p>业务扩展包最大qps</p>
                     * @param _qPSExtendMax <p>业务扩展包最大qps</p>
                     * 
                     */
                    void SetQPSExtendMax(const uint64_t& _qPSExtendMax);

                    /**
                     * 判断参数 QPSExtendMax 是否已赋值
                     * @return QPSExtendMax 是否已赋值
                     * 
                     */
                    bool QPSExtendMaxHasBeenSet() const;

                    /**
                     * 获取<p>境外业务扩展包最大qps</p>
                     * @return QPSExtendIntlMax <p>境外业务扩展包最大qps</p>
                     * 
                     */
                    uint64_t GetQPSExtendIntlMax() const;

                    /**
                     * 设置<p>境外业务扩展包最大qps</p>
                     * @param _qPSExtendIntlMax <p>境外业务扩展包最大qps</p>
                     * 
                     */
                    void SetQPSExtendIntlMax(const uint64_t& _qPSExtendIntlMax);

                    /**
                     * 判断参数 QPSExtendIntlMax 是否已赋值
                     * @return QPSExtendIntlMax 是否已赋值
                     * 
                     */
                    bool QPSExtendIntlMaxHasBeenSet() const;

                    /**
                     * 获取<p>预付费/后付费QPS扩容比</p>
                     * @return ElasticPrepaidRatio <p>预付费/后付费QPS扩容比</p>
                     * 
                     */
                    double GetElasticPrepaidRatio() const;

                    /**
                     * 设置<p>预付费/后付费QPS扩容比</p>
                     * @param _elasticPrepaidRatio <p>预付费/后付费QPS扩容比</p>
                     * 
                     */
                    void SetElasticPrepaidRatio(const double& _elasticPrepaidRatio);

                    /**
                     * 判断参数 ElasticPrepaidRatio 是否已赋值
                     * @return ElasticPrepaidRatio 是否已赋值
                     * 
                     */
                    bool ElasticPrepaidRatioHasBeenSet() const;

                private:

                    /**
                     * <p>弹性qps默认值</p>
                     */
                    uint64_t m_elasticBillingDefault;
                    bool m_elasticBillingDefaultHasBeenSet;

                    /**
                     * <p>弹性qps最小值</p>
                     */
                    uint64_t m_elasticBillingMin;
                    bool m_elasticBillingMinHasBeenSet;

                    /**
                     * <p>弹性qps最大值</p>
                     */
                    uint64_t m_elasticBillingMax;
                    bool m_elasticBillingMaxHasBeenSet;

                    /**
                     * <p>业务扩展包最大qps</p>
                     */
                    uint64_t m_qPSExtendMax;
                    bool m_qPSExtendMaxHasBeenSet;

                    /**
                     * <p>境外业务扩展包最大qps</p>
                     */
                    uint64_t m_qPSExtendIntlMax;
                    bool m_qPSExtendIntlMaxHasBeenSet;

                    /**
                     * <p>预付费/后付费QPS扩容比</p>
                     */
                    double m_elasticPrepaidRatio;
                    bool m_elasticPrepaidRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_QPSDATA_H_
