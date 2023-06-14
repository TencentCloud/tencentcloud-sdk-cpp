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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSEREQUEST_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * DescribeKBLicense请求参数结构体
                */
                class DescribeKBLicenseRequest : public AbstractModel
                {
                public:
                    DescribeKBLicenseRequest();
                    ~DescribeKBLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取License表达式
                     * @return LicenseExpression License表达式
                     * 
                     */
                    std::string GetLicenseExpression() const;

                    /**
                     * 设置License表达式
                     * @param _licenseExpression License表达式
                     * 
                     */
                    void SetLicenseExpression(const std::string& _licenseExpression);

                    /**
                     * 判断参数 LicenseExpression 是否已赋值
                     * @return LicenseExpression 是否已赋值
                     * 
                     */
                    bool LicenseExpressionHasBeenSet() const;

                private:

                    /**
                     * License表达式
                     */
                    std::string m_licenseExpression;
                    bool m_licenseExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBLICENSEREQUEST_H_
