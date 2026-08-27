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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeKafka请求参数结构体
                */
                class DescribeKafkaRequest : public AbstractModel
                {
                public:
                    DescribeKafkaRequest();
                    ~DescribeKafkaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取kafka地址
                     * @return Brokers kafka地址
                     * 
                     */
                    std::string GetBrokers() const;

                    /**
                     * 设置kafka地址
                     * @param _brokers kafka地址
                     * 
                     */
                    void SetBrokers(const std::string& _brokers);

                    /**
                     * 判断参数 Brokers 是否已赋值
                     * @return Brokers 是否已赋值
                     * 
                     */
                    bool BrokersHasBeenSet() const;

                    /**
                     * 获取转发部署地域列表
                     * @return DispenseRegions 转发部署地域列表
                     * 
                     */
                    std::vector<std::string> GetDispenseRegions() const;

                    /**
                     * 设置转发部署地域列表
                     * @param _dispenseRegions 转发部署地域列表
                     * 
                     */
                    void SetDispenseRegions(const std::vector<std::string>& _dispenseRegions);

                    /**
                     * 判断参数 DispenseRegions 是否已赋值
                     * @return DispenseRegions 是否已赋值
                     * 
                     */
                    bool DispenseRegionsHasBeenSet() const;

                private:

                    /**
                     * kafka地址
                     */
                    std::string m_brokers;
                    bool m_brokersHasBeenSet;

                    /**
                     * 转发部署地域列表
                     */
                    std::vector<std::string> m_dispenseRegions;
                    bool m_dispenseRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEKAFKAREQUEST_H_
