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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSRESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/ResourceInfo.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeVsms返回参数结构体
                */
                class DescribeVsmsResponse : public AbstractModel
                {
                public:
                    DescribeVsmsResponse();
                    ~DescribeVsmsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取获取实例的总个数
                     * @return TotalCount 获取实例的总个数
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
                     * 获取资源信息
                     * @return VsmList 资源信息
                     * 
                     */
                    std::vector<ResourceInfo> GetVsmList() const;

                    /**
                     * 判断参数 VsmList 是否已赋值
                     * @return VsmList 是否已赋值
                     * 
                     */
                    bool VsmListHasBeenSet() const;

                private:

                    /**
                     * 获取实例的总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 资源信息
                     */
                    std::vector<ResourceInfo> m_vsmList;
                    bool m_vsmListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVSMSRESPONSE_H_
