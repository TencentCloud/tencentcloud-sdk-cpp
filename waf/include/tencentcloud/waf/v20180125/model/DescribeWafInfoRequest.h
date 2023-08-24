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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFOREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClbHostsParams.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeWafInfo请求参数结构体
                */
                class DescribeWafInfoRequest : public AbstractModel
                {
                public:
                    DescribeWafInfoRequest();
                    ~DescribeWafInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB回调WAF接口（获取、删除）的参数
                     * @return Params CLB回调WAF接口（获取、删除）的参数
                     * 
                     */
                    std::vector<ClbHostsParams> GetParams() const;

                    /**
                     * 设置CLB回调WAF接口（获取、删除）的参数
                     * @param _params CLB回调WAF接口（获取、删除）的参数
                     * 
                     */
                    void SetParams(const std::vector<ClbHostsParams>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * CLB回调WAF接口（获取、删除）的参数
                     */
                    std::vector<ClbHostsParams> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEWAFINFOREQUEST_H_
