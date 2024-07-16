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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstanceUsage请求参数结构体
                */
                class DescribePrometheusInstanceUsageRequest : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceUsageRequest();
                    ~DescribePrometheusInstanceUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。
                     * @return InstanceIds 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。
                     * @param _instanceIds 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。
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
                     * 获取开始时间
                     * @return StartCalcDate 开始时间
                     * 
                     */
                    std::string GetStartCalcDate() const;

                    /**
                     * 设置开始时间
                     * @param _startCalcDate 开始时间
                     * 
                     */
                    void SetStartCalcDate(const std::string& _startCalcDate);

                    /**
                     * 判断参数 StartCalcDate 是否已赋值
                     * @return StartCalcDate 是否已赋值
                     * 
                     */
                    bool StartCalcDateHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndCalcDate 结束时间
                     * 
                     */
                    std::string GetEndCalcDate() const;

                    /**
                     * 设置结束时间
                     * @param _endCalcDate 结束时间
                     * 
                     */
                    void SetEndCalcDate(const std::string& _endCalcDate);

                    /**
                     * 判断参数 EndCalcDate 是否已赋值
                     * @return EndCalcDate 是否已赋值
                     * 
                     */
                    bool EndCalcDateHasBeenSet() const;

                private:

                    /**
                     * 按照一个或者多个实例ID查询。实例ID形如：prom-xxxxxxxx。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startCalcDate;
                    bool m_startCalcDateHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endCalcDate;
                    bool m_endCalcDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEUSAGEREQUEST_H_
