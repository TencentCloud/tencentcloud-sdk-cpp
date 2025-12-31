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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNASSOCIATEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNASSOCIATEDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CcnAssociatedInstance.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCcnAssociatedInstances返回参数结构体
                */
                class DescribeCcnAssociatedInstancesResponse : public AbstractModel
                {
                public:
                    DescribeCcnAssociatedInstancesResponse();
                    ~DescribeCcnAssociatedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例总数
                     * @return Total 实例总数
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
                     * 获取云联网关联的实例信息
                     * @return CcnAssociatedInstances 云联网关联的实例信息
                     * 
                     */
                    std::vector<CcnAssociatedInstance> GetCcnAssociatedInstances() const;

                    /**
                     * 判断参数 CcnAssociatedInstances 是否已赋值
                     * @return CcnAssociatedInstances 是否已赋值
                     * 
                     */
                    bool CcnAssociatedInstancesHasBeenSet() const;

                private:

                    /**
                     * 实例总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 云联网关联的实例信息
                     */
                    std::vector<CcnAssociatedInstance> m_ccnAssociatedInstances;
                    bool m_ccnAssociatedInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNASSOCIATEDINSTANCESRESPONSE_H_
