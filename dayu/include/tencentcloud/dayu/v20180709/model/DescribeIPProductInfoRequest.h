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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFOREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeIPProductInfo请求参数结构体
                */
                class DescribeIPProductInfoRequest : public AbstractModel
                {
                public:
                    DescribeIPProductInfoRequest();
                    ~DescribeIPProductInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * @return Business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * @param _business 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取IP列表
                     * @return IpList IP列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP列表
                     * @param _ipList IP列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgp表示独享包；bgp-multip表示共享包）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * IP列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPPRODUCTINFOREQUEST_H_
