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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUPGRADERESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUPGRADERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeUpgrade返回参数结构体
                */
                class DescribeUpgradeResponse : public AbstractModel
                {
                public:
                    DescribeUpgradeResponse();
                    ~DescribeUpgradeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可以升级到的大版本</p>
                     * @return EsVersions <p>可以升级到的大版本</p>
                     * 
                     */
                    std::vector<std::string> GetEsVersions() const;

                    /**
                     * 判断参数 EsVersions 是否已赋值
                     * @return EsVersions 是否已赋值
                     * 
                     */
                    bool EsVersionsHasBeenSet() const;

                    /**
                     * 获取<p>可以升级到的商业特性</p>
                     * @return EsLicenses <p>可以升级到的商业特性</p>
                     * 
                     */
                    std::vector<std::string> GetEsLicenses() const;

                    /**
                     * 判断参数 EsLicenses 是否已赋值
                     * @return EsLicenses 是否已赋值
                     * 
                     */
                    bool EsLicensesHasBeenSet() const;

                    /**
                     * 获取<p>可以升级到的子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsSubProducts <p>可以升级到的子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEsSubProducts() const;

                    /**
                     * 判断参数 EsSubProducts 是否已赋值
                     * @return EsSubProducts 是否已赋值
                     * 
                     */
                    bool EsSubProductsHasBeenSet() const;

                    /**
                     * 获取<p>可以升级到的商业特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsRealLicenses <p>可以升级到的商业特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEsRealLicenses() const;

                    /**
                     * 判断参数 EsRealLicenses 是否已赋值
                     * @return EsRealLicenses 是否已赋值
                     * 
                     */
                    bool EsRealLicensesHasBeenSet() const;

                private:

                    /**
                     * <p>可以升级到的大版本</p>
                     */
                    std::vector<std::string> m_esVersions;
                    bool m_esVersionsHasBeenSet;

                    /**
                     * <p>可以升级到的商业特性</p>
                     */
                    std::vector<std::string> m_esLicenses;
                    bool m_esLicensesHasBeenSet;

                    /**
                     * <p>可以升级到的子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_esSubProducts;
                    bool m_esSubProductsHasBeenSet;

                    /**
                     * <p>可以升级到的商业特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_esRealLicenses;
                    bool m_esRealLicensesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUPGRADERESPONSE_H_
