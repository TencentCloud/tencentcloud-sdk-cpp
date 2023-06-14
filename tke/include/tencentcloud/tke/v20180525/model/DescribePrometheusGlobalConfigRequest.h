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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribePrometheusGlobalConfig请求参数结构体
                */
                class DescribePrometheusGlobalConfigRequest : public AbstractModel
                {
                public:
                    DescribePrometheusGlobalConfigRequest();
                    ~DescribePrometheusGlobalConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例级别抓取配置
                     * @return InstanceId 实例级别抓取配置
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例级别抓取配置
                     * @param _instanceId 实例级别抓取配置
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
                     * 获取是否禁用统计
                     * @return DisableStatistics 是否禁用统计
                     * 
                     */
                    bool GetDisableStatistics() const;

                    /**
                     * 设置是否禁用统计
                     * @param _disableStatistics 是否禁用统计
                     * 
                     */
                    void SetDisableStatistics(const bool& _disableStatistics);

                    /**
                     * 判断参数 DisableStatistics 是否已赋值
                     * @return DisableStatistics 是否已赋值
                     * 
                     */
                    bool DisableStatisticsHasBeenSet() const;

                private:

                    /**
                     * 实例级别抓取配置
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否禁用统计
                     */
                    bool m_disableStatistics;
                    bool m_disableStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSGLOBALCONFIGREQUEST_H_
