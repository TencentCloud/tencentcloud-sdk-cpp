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
                     * 获取<p>监控类型</p>
                     * @return MonitorType <p>监控类型</p>
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置<p>监控类型</p>
                     * @param _monitorType <p>监控类型</p>
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
                     * 获取<p>起始时间点，unix秒级时间戳</p>
                     * @return QueryBaseTime <p>起始时间点，unix秒级时间戳</p>
                     * 
                     */
                    int64_t GetQueryBaseTime() const;

                    /**
                     * 设置<p>起始时间点，unix秒级时间戳</p>
                     * @param _queryBaseTime <p>起始时间点，unix秒级时间戳</p>
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
                     * 获取<p>从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒</p>
                     * @return QueryBeforeSeconds <p>从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒</p>
                     * 
                     */
                    int64_t GetQueryBeforeSeconds() const;

                    /**
                     * 设置<p>从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒</p>
                     * @param _queryBeforeSeconds <p>从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒</p>
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
                     * 获取<p>分页参数</p>
                     * @return PageParams <p>分页参数</p>
                     * 
                     */
                    PageByNoParams GetPageParams() const;

                    /**
                     * 设置<p>分页参数</p>
                     * @param _pageParams <p>分页参数</p>
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
                     * 获取<p>当监控类型为 MT_QCE 时候需要填写，归属的命名空间</p>
                     * @return Namespace <p>当监控类型为 MT_QCE 时候需要填写，归属的命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>当监控类型为 MT_QCE 时候需要填写，归属的命名空间</p>
                     * @param _namespace <p>当监控类型为 MT_QCE 时候需要填写，归属的命名空间</p>
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
                     * 获取<p>当监控类型为 MT_QCE 时候需要填写， 告警策略类型</p>
                     * @return ModelName <p>当监控类型为 MT_QCE 时候需要填写， 告警策略类型</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>当监控类型为 MT_QCE 时候需要填写， 告警策略类型</p>
                     * @param _modelName <p>当监控类型为 MT_QCE 时候需要填写， 告警策略类型</p>
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
                     * 获取<p>查询某个策略的通知历史</p>
                     * @return PolicyId <p>查询某个策略的通知历史</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>查询某个策略的通知历史</p>
                     * @param _policyId <p>查询某个策略的通知历史</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>详情页展示所需id</p>
                     * @return NotifyId <p>详情页展示所需id</p>
                     * 
                     */
                    std::string GetNotifyId() const;

                    /**
                     * 设置<p>详情页展示所需id</p>
                     * @param _notifyId <p>详情页展示所需id</p>
                     * 
                     */
                    void SetNotifyId(const std::string& _notifyId);

                    /**
                     * 判断参数 NotifyId 是否已赋值
                     * @return NotifyId 是否已赋值
                     * 
                     */
                    bool NotifyIdHasBeenSet() const;

                private:

                    /**
                     * <p>监控类型</p>
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * <p>起始时间点，unix秒级时间戳</p>
                     */
                    int64_t m_queryBaseTime;
                    bool m_queryBaseTimeHasBeenSet;

                    /**
                     * <p>从 QueryBaseTime 开始，需要查询往前多久的时间，单位秒</p>
                     */
                    int64_t m_queryBeforeSeconds;
                    bool m_queryBeforeSecondsHasBeenSet;

                    /**
                     * <p>分页参数</p>
                     */
                    PageByNoParams m_pageParams;
                    bool m_pageParamsHasBeenSet;

                    /**
                     * <p>当监控类型为 MT_QCE 时候需要填写，归属的命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>当监控类型为 MT_QCE 时候需要填写， 告警策略类型</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>查询某个策略的通知历史</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>详情页展示所需id</p>
                     */
                    std::string m_notifyId;
                    bool m_notifyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEALARMNOTIFYHISTORIESREQUEST_H_
