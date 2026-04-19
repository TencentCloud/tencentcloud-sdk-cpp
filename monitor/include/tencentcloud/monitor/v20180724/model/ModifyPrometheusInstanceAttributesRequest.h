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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusRuleKV.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyPrometheusInstanceAttributes请求参数结构体
                */
                class ModifyPrometheusInstanceAttributesRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusInstanceAttributesRequest();
                    ~ModifyPrometheusInstanceAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * @return DataRetentionTime <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * 
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置<p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * @param _dataRetentionTime <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     * 
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     * 
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @return InstanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    std::vector<PrometheusRuleKV> GetInstanceAttributes() const;

                    /**
                     * 设置<p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * @param _instanceAttributes <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     * 
                     */
                    void SetInstanceAttributes(const std::vector<PrometheusRuleKV>& _instanceAttributes);

                    /**
                     * 判断参数 InstanceAttributes 是否已赋值
                     * @return InstanceAttributes 是否已赋值
                     * 
                     */
                    bool InstanceAttributesHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>数据存储时间（单位天），限制值为15, 30, 45, 90, 180, 365, 730之一</p>
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * <p>标识prom实例特殊属性</p><p>归档存储时长(天):<br>key: LongTermStorageRetentionTime<br>value: 60-730</p>
                     */
                    std::vector<PrometheusRuleKV> m_instanceAttributes;
                    bool m_instanceAttributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSINSTANCEATTRIBUTESREQUEST_H_
