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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceRenew请求参数结构体
                */
                class InquirePriceRenewRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewRequest();
                    ~InquirePriceRenewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取购买时长,与TimeUnit组合才能生效
                     * @return TimeSpan 购买时长,与TimeUnit组合才能生效
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长,与TimeUnit组合才能生效
                     * @param _timeSpan 购买时长,与TimeUnit组合才能生效
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * @return TimeUnit 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * @param _timeUnit 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 购买时长,与TimeUnit组合才能生效
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 购买时长单位, 与TimeSpan组合生效，可选:日:d,月:m
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWREQUEST_H_
