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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENRISKASSETSTOPREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENRISKASSETSTOPREQUEST_H_

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
                * DescribeScreenRiskAssetsTop请求参数结构体
                */
                class DescribeScreenRiskAssetsTopRequest : public AbstractModel
                {
                public:
                    DescribeScreenRiskAssetsTopRequest();
                    ~DescribeScreenRiskAssetsTopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取统计类型：0:潜在威胁 1:失陷 2:漏洞 3:基线
                     * @return BusinessType 统计类型：0:潜在威胁 1:失陷 2:漏洞 3:基线
                     * 
                     */
                    uint64_t GetBusinessType() const;

                    /**
                     * 设置统计类型：0:潜在威胁 1:失陷 2:漏洞 3:基线
                     * @param _businessType 统计类型：0:潜在威胁 1:失陷 2:漏洞 3:基线
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
                     * 统计类型：0:潜在威胁 1:失陷 2:漏洞 3:基线
                     */
                    uint64_t m_businessType;
                    bool m_businessTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCREENRISKASSETSTOPREQUEST_H_
