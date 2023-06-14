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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/UnbindClientElem.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeUnbindClientList返回参数结构体
                */
                class DescribeUnbindClientListResponse : public AbstractModel
                {
                public:
                    DescribeUnbindClientListResponse();
                    ~DescribeUnbindClientListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的解绑客户数量
                     * @return TotalCount 符合条件的解绑客户数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合条件的解绑客户列表
                     * @return UnbindClientList 符合条件的解绑客户列表
                     * 
                     */
                    std::vector<UnbindClientElem> GetUnbindClientList() const;

                    /**
                     * 判断参数 UnbindClientList 是否已赋值
                     * @return UnbindClientList 是否已赋值
                     * 
                     */
                    bool UnbindClientListHasBeenSet() const;

                private:

                    /**
                     * 符合条件的解绑客户数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合条件的解绑客户列表
                     */
                    std::vector<UnbindClientElem> m_unbindClientList;
                    bool m_unbindClientListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTRESPONSE_H_
