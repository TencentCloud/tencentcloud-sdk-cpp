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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSERESPONSE_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/LicenseUnion.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * DescribeKBLicense返回参数结构体
                */
                class DescribeKBLicenseResponse : public AbstractModel
                {
                public:
                    DescribeKBLicenseResponse();
                    ~DescribeKBLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取许可证列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseList 许可证列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LicenseUnion> GetLicenseList() const;

                    /**
                     * 判断参数 LicenseList 是否已赋值
                     * @return LicenseList 是否已赋值
                     * 
                     */
                    bool LicenseListHasBeenSet() const;

                    /**
                     * 获取用于匹配的License表达式
                     * @return NormalizedLicenseExpression 用于匹配的License表达式
                     * 
                     */
                    std::string GetNormalizedLicenseExpression() const;

                    /**
                     * 判断参数 NormalizedLicenseExpression 是否已赋值
                     * @return NormalizedLicenseExpression 是否已赋值
                     * 
                     */
                    bool NormalizedLicenseExpressionHasBeenSet() const;

                private:

                    /**
                     * 许可证列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LicenseUnion> m_licenseList;
                    bool m_licenseListHasBeenSet;

                    /**
                     * 用于匹配的License表达式
                     */
                    std::string m_normalizedLicenseExpression;
                    bool m_normalizedLicenseExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSERESPONSE_H_
