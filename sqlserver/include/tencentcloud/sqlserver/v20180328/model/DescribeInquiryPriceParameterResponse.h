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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINQUIRYPRICEPARAMETERRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINQUIRYPRICEPARAMETERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeInquiryPriceParameter返回参数结构体
                */
                class DescribeInquiryPriceParameterResponse : public AbstractModel
                {
                public:
                    DescribeInquiryPriceParameterResponse();
                    ~DescribeInquiryPriceParameterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计费参数
                     * @return Parameter 计费参数
                     * 
                     */
                    std::string GetParameter() const;

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     * 
                     */
                    bool ParameterHasBeenSet() const;

                private:

                    /**
                     * 计费参数
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINQUIRYPRICEPARAMETERRESPONSE_H_
