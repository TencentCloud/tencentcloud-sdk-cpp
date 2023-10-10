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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENEVENTSCNTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENEVENTSCNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScreenEventsCnt请求参数结构体
                */
                class DescribeScreenEventsCntRequest : public AbstractModel
                {
                public:
                    DescribeScreenEventsCntRequest();
                    ~DescribeScreenEventsCntRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据类型：0:待处理风险总数 1:影响资产总数，默认为0
                     * @return BusinessType 数据类型：0:待处理风险总数 1:影响资产总数，默认为0
                     * 
                     */
                    uint64_t GetBusinessType() const;

                    /**
                     * 设置数据类型：0:待处理风险总数 1:影响资产总数，默认为0
                     * @param _businessType 数据类型：0:待处理风险总数 1:影响资产总数，默认为0
                     * 
                     */
                    void SetBusinessType(const uint64_t& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                private:

                    /**
                     * 数据类型：0:待处理风险总数 1:影响资产总数，默认为0
                     */
                    uint64_t m_businessType;
                    bool m_businessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENEVENTSCNTREQUEST_H_
