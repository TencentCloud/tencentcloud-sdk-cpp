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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSnapshotFiles请求参数结构体
                */
                class DescribeSnapshotFilesRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotFilesRequest();
                    ~DescribeSnapshotFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型，目前支持安全组：securitygroup。
                     * @return BusinessType 业务类型，目前支持安全组：securitygroup。
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置业务类型，目前支持安全组：securitygroup。
                     * @param _businessType 业务类型，目前支持安全组：securitygroup。
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取业务实例Id，和BusinessType对应。
                     * @return InstanceId 业务实例Id，和BusinessType对应。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务实例Id，和BusinessType对应。
                     * @param _instanceId 业务实例Id，和BusinessType对应。
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
                     * 获取开始日期，格式%Y-%m-%d %H:%M:%S。
                     * @return StartDate 开始日期，格式%Y-%m-%d %H:%M:%S。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期，格式%Y-%m-%d %H:%M:%S。
                     * @param _startDate 开始日期，格式%Y-%m-%d %H:%M:%S。
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期，格式%Y-%m-%d %H:%M:%S。
                     * @return EndDate 结束日期，格式%Y-%m-%d %H:%M:%S。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期，格式%Y-%m-%d %H:%M:%S。
                     * @param _endDate 结束日期，格式%Y-%m-%d %H:%M:%S。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大为100。
                     * @return Limit 返回数量，默认为20，最大为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大为100。
                     * @param _limit 返回数量，默认为20，最大为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 业务类型，目前支持安全组：securitygroup。
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 业务实例Id，和BusinessType对应。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始日期，格式%Y-%m-%d %H:%M:%S。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期，格式%Y-%m-%d %H:%M:%S。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_
