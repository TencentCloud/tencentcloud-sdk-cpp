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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeUpgradeList请求参数结构体
                */
                class DescribeUpgradeListRequest : public AbstractModel
                {
                public:
                    DescribeUpgradeListRequest();
                    ~DescribeUpgradeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取分页参数，偏移量，从0开始
                     * @return Offset 分页参数，偏移量，从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，偏移量，从0开始
                     * @param _offset 分页参数，偏移量，从0开始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数，每页数目，默认为10
                     * @return Limit 分页参数，每页数目，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每页数目，默认为10
                     * @param _limit 分页参数，每页数目，默认为10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页参数，偏移量，从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，每页数目，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUPGRADELISTREQUEST_H_
