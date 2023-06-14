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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFOREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDevicePriceInfo请求参数结构体
                */
                class DescribeDevicePriceInfoRequest : public AbstractModel
                {
                public:
                    DescribeDevicePriceInfoRequest();
                    ~DescribeDevicePriceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的实例列表
                     * @return InstanceIds 需要查询的实例列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要查询的实例列表
                     * @param _instanceIds 需要查询的实例列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取购买时长单位，当前只支持取值为m
                     * @return TimeUnit 购买时长单位，当前只支持取值为m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位，当前只支持取值为m
                     * @param _timeUnit 购买时长单位，当前只支持取值为m
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取购买时长
                     * @return TimeSpan 购买时长
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长
                     * @param _timeSpan 购买时长
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                private:

                    /**
                     * 需要查询的实例列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 购买时长单位，当前只支持取值为m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 购买时长
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFOREQUEST_H_
