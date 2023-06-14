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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstances请求参数结构体
                */
                class DescribeReplicationInstancesRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstancesRequest();
                    ~DescribeReplicationInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取偏移量,默认0
                     * @return Offset 偏移量,默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量,默认0
                     * @param _offset 偏移量,默认0
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
                     * 获取最大输出条数，默认20，最大为100
                     * @return Limit 最大输出条数，默认20，最大为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大输出条数，默认20，最大为100
                     * @param _limit 最大输出条数，默认20，最大为100
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
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 偏移量,默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大输出条数，默认20，最大为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESREQUEST_H_
