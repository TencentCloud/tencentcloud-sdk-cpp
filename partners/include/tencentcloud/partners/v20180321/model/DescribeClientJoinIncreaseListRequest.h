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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTJOININCREASELISTREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTJOININCREASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeClientJoinIncreaseList请求参数结构体
                */
                class DescribeClientJoinIncreaseListRequest : public AbstractModel
                {
                public:
                    DescribeClientJoinIncreaseListRequest();
                    ~DescribeClientJoinIncreaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户UIN列表
                     * @return ClientUins 客户UIN列表
                     * 
                     */
                    std::vector<std::string> GetClientUins() const;

                    /**
                     * 设置客户UIN列表
                     * @param _clientUins 客户UIN列表
                     * 
                     */
                    void SetClientUins(const std::vector<std::string>& _clientUins);

                    /**
                     * 判断参数 ClientUins 是否已赋值
                     * @return ClientUins 是否已赋值
                     * 
                     */
                    bool ClientUinsHasBeenSet() const;

                private:

                    /**
                     * 客户UIN列表
                     */
                    std::vector<std::string> m_clientUins;
                    bool m_clientUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTJOININCREASELISTREQUEST_H_
