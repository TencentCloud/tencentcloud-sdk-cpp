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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeQuotas请求参数结构体
                */
                class DescribeQuotasRequest : public AbstractModel
                {
                public:
                    DescribeQuotasRequest();
                    ~DescribeQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * @return ResourceNames 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * @param _resourceNames 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * 
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                private:

                    /**
                     * 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASREQUEST_H_
