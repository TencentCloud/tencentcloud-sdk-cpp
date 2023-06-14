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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECAREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribePrivateCA请求参数结构体
                */
                class DescribePrivateCARequest : public AbstractModel
                {
                public:
                    DescribePrivateCARequest();
                    ~DescribePrivateCARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有化CA名称
                     * @return CertName 私有化CA名称
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置私有化CA名称
                     * @param _certName 私有化CA名称
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                private:

                    /**
                     * 私有化CA名称
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECAREQUEST_H_
