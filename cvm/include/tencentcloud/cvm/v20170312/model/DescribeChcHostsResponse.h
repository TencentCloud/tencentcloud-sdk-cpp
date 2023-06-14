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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBECHCHOSTSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBECHCHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ChcHost.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeChcHosts返回参数结构体
                */
                class DescribeChcHostsResponse : public AbstractModel
                {
                public:
                    DescribeChcHostsResponse();
                    ~DescribeChcHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例数量。
                     * @return TotalCount 符合条件的实例数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回的实例列表
                     * @return ChcHostSet 返回的实例列表
                     * 
                     */
                    std::vector<ChcHost> GetChcHostSet() const;

                    /**
                     * 判断参数 ChcHostSet 是否已赋值
                     * @return ChcHostSet 是否已赋值
                     * 
                     */
                    bool ChcHostSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的实例列表
                     */
                    std::vector<ChcHost> m_chcHostSet;
                    bool m_chcHostSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBECHCHOSTSRESPONSE_H_
