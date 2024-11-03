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
                     * 获取弹性qps默认值
                     * @return ElasticBillingDefault 弹性qps默认值
                     * 
                     */
                    uint64_t GetElasticBillingDefault() const;

                    /**
                     * 设置弹性qps默认值
                     * @param _elasticBillingDefault 弹性qps默认值
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
                     * 获取弹性qps最小值
                     * @return ElasticBillingMin 弹性qps最小值
                     * 
                     */
                    uint64_t GetElasticBillingMin() const;

                    /**
                     * 设置弹性qps最小值
                     * @param _elasticBillingMin 弹性qps最小值
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
                     * 获取弹性qps最大值
                     * @return ElasticBillingMax 弹性qps最大值
                     * 
                     */
                    uint64_t GetElasticBillingMax() const;

                    /**
                     * 设置弹性qps最大值
                     * @param _elasticBillingMax 弹性qps最大值
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
                     * 获取业务扩展包最大qps
                     * @return QPSExtendMax 业务扩展包最大qps
                     * 
                     */
                    uint64_t GetQPSExtendMax() const;

                    /**
                     * 设置业务扩展包最大qps
                     * @param _qPSExtendMax 业务扩展包最大qps
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
                     * 获取境外业务扩展包最大qps
                     * @return QPSExtendIntlMax 境外业务扩展包最大qps
                     * 
                     */
                    uint64_t GetQPSExtendIntlMax() const;

                    /**
                     * 设置境外业务扩展包最大qps
                     * @param _qPSExtendIntlMax 境外业务扩展包最大qps
                     * 
                     */
                    void SetQPSExtendIntlMax(const uint64_t& _qPSExtendIntlMax);

                    /**
                     * 判断参数 QPSExtendIntlMax 是否已赋值
                     * @return QPSExtendIntlMax 是否已赋值
                     * 
                     */
                    bool QPSExtendIntlMaxHasBeenSet() const;

                private:

                    /**
                     * 弹性qps默认值
                     */
                    uint64_t m_elasticBillingDefault;
                    bool m_elasticBillingDefaultHasBeenSet;

                    /**
                     * 弹性qps最小值
                     */
                    uint64_t m_elasticBillingMin;
                    bool m_elasticBillingMinHasBeenSet;

                    /**
                     * 弹性qps最大值
                     */
                    uint64_t m_elasticBillingMax;
                    bool m_elasticBillingMaxHasBeenSet;

                    /**
                     * 业务扩展包最大qps
                     */
                    uint64_t m_qPSExtendMax;
                    bool m_qPSExtendMaxHasBeenSet;

                    /**
                     * 境外业务扩展包最大qps
                     */
                    uint64_t m_qPSExtendIntlMax;
                    bool m_qPSExtendIntlMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_QPSDATA_H_
