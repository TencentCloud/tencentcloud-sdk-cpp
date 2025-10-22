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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/PageByNoParams.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotifyHistories请求参数结构体
                */
                class DescribeAlarmNotifyHistoriesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNotifyHistoriesRequest();
                    ~DescribeAlarmNotifyHistoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取起始时间点，unix秒级时间戳
                     * @return QueryBaseTime 起始时间点，unix秒级时间戳
                     * 
                     */
                    int64_t GetQueryBaseTime() const;

                    /**
                     * 设置起始时间点，unix秒级时间戳
                     * @param _queryBaseTime 起始时间点，unix秒级时间戳
                     * 
                     */
                    void SetQueryBaseTime(const int64_t& _queryBaseTime);

                    /**
                     * 判断参数 QueryBaseTime 是否已赋值
                     * @return QueryBaseTime 是否已赋值
                     * 
                     */
                    bool QueryBaseTimeHasBeenSet() const;

                    /**
                     * 获取从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒
                     * @return QueryBeforeSeconds 从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒
                     * 
                     */
                    int64_t GetQueryBeforeSeconds() const;

                    /**
                     * 设置从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒
                     * @param _queryBeforeSeconds 从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒
                     * 
                     */
                    void SetQueryBeforeSeconds(const int64_t& _queryBeforeSeconds);

                    /**
                     * 判断参数 QueryBeforeSeconds 是否已赋值
                     * @return QueryBeforeSeconds 是否已赋值
                     * 
                     */
                    bool QueryBeforeSecondsHasBeenSet() const;

                    /**
                     * 获取分页参数
                     * @return PageParams 分页参数
                     * 
                     */
                    PageByNoParams GetPageParams() const;

                    /**
                     * 设置分页参数
                     * @param _pageParams 分页参数
                     * 
                     */
                    void SetPageParams(const PageByNoParams& _pageParams);

                    /**
                     * 判断参数 PageParams 是否已赋值
                     * @return PageParams 是否已赋值
                     * 
                     */
                    bool PageParamsHasBeenSet() const;

                    /**
                     * 获取当监控类型为 MT_QCE 时候需要填写，归属的命名空间
                     * @return Namespace 当监控类型为 MT_QCE 时候需要填写，归属的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置当监控类型为 MT_QCE 时候需要填写，归属的命名空间
                     * @param _namespace 当监控类型为 MT_QCE 时候需要填写，归属的命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取当监控类型为 MT_QCE 时候需要填写， 告警策略类型
                     * @return ModelName 当监控类型为 MT_QCE 时候需要填写， 告警策略类型
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置当监控类型为 MT_QCE 时候需要填写， 告警策略类型
                     * @param _modelName 当监控类型为 MT_QCE 时候需要填写， 告警策略类型
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取查询某个策略的通知历史
                     * @return PolicyId 查询某个策略的通知历史
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置查询某个策略的通知历史
                     * @param _policyId 查询某个策略的通知历史
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 起始时间点，unix秒级时间戳
                     */
                    int64_t m_queryBaseTime;
                    bool m_queryBaseTimeHasBeenSet;

                    /**
                     * 从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒
                     */
                    int64_t m_queryBeforeSeconds;
                    bool m_queryBeforeSecondsHasBeenSet;

                    /**
                     * 分页参数
                     */
                    PageByNoParams m_pageParams;
                    bool m_pageParamsHasBeenSet;

                    /**
                     * 当监控类型为 MT_QCE 时候需要填写，归属的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 当监控类型为 MT_QCE 时候需要填写， 告警策略类型
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 查询某个策略的通知历史
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_
