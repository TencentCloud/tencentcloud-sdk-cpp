/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/AssociatedInstanceInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeAssociatedInstanceList返回参数结构体
                */
                class DescribeAssociatedInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeAssociatedInstanceListResponse();
                    ~DescribeAssociatedInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例数量
                     * @return Total 实例数量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取实例列表
                     * @return Data 实例列表
                     * 
                     */
                    std::vector<AssociatedInstanceInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 实例数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<AssociatedInstanceInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEASSOCIATEDINSTANCELISTRESPONSE_H_
