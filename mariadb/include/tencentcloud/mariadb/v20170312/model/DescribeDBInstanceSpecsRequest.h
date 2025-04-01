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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceSpecs请求参数结构体
                */
                class DescribeDBInstanceSpecsRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceSpecsRequest();
                    ~DescribeDBInstanceSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @return CpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * @param _cpuType Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                private:

                    /**
                     * Cpu类型，如：英特尔：Intel/AMD，海光：Hygon，默认Intel/AMD
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBINSTANCESPECSREQUEST_H_
