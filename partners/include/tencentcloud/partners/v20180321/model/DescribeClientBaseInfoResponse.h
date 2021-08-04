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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBASEINFORESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBASEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/ClientBaseElem.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeClientBaseInfo返回参数结构体
                */
                class DescribeClientBaseInfoResponse : public AbstractModel
                {
                public:
                    DescribeClientBaseInfoResponse();
                    ~DescribeClientBaseInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取代客基础信息数组
                     * @return ClientBaseSet 代客基础信息数组
                     */
                    std::vector<ClientBaseElem> GetClientBaseSet() const;

                    /**
                     * 判断参数 ClientBaseSet 是否已赋值
                     * @return ClientBaseSet 是否已赋值
                     */
                    bool ClientBaseSetHasBeenSet() const;

                    /**
                     * 获取符合条件的代客数
                     * @return TotalCount 符合条件的代客数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 代客基础信息数组
                     */
                    std::vector<ClientBaseElem> m_clientBaseSet;
                    bool m_clientBaseSetHasBeenSet;

                    /**
                     * 符合条件的代客数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBECLIENTBASEINFORESPONSE_H_
