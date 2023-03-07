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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITBYUINLISTREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITBYUINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryCreditByUinList请求参数结构体
                */
                class QueryCreditByUinListRequest : public AbstractModel
                {
                public:
                    QueryCreditByUinListRequest();
                    ~QueryCreditByUinListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户列表
                     * @return UinList 用户列表
                     */
                    std::vector<uint64_t> GetUinList() const;

                    /**
                     * 设置用户列表
                     * @param UinList 用户列表
                     */
                    void SetUinList(const std::vector<uint64_t>& _uinList);

                    /**
                     * 判断参数 UinList 是否已赋值
                     * @return UinList 是否已赋值
                     */
                    bool UinListHasBeenSet() const;

                private:

                    /**
                     * 用户列表
                     */
                    std::vector<uint64_t> m_uinList;
                    bool m_uinListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITBYUINLISTREQUEST_H_
