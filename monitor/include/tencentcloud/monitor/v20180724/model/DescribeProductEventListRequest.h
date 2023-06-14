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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListDimensions.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeProductEventList请求参数结构体
                */
                class DescribeProductEventListRequest : public AbstractModel
                {
                public:
                    DescribeProductEventListRequest();
                    ~DescribeProductEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口模块名，固定值"monitor"
                     * @return Module 接口模块名，固定值"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置接口模块名，固定值"monitor"
                     * @param _module 接口模块名，固定值"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取产品类型过滤，例如"cvm"表示云服务器
                     * @return ProductName 产品类型过滤，例如"cvm"表示云服务器
                     * 
                     */
                    std::vector<std::string> GetProductName() const;

                    /**
                     * 设置产品类型过滤，例如"cvm"表示云服务器
                     * @param _productName 产品类型过滤，例如"cvm"表示云服务器
                     * 
                     */
                    void SetProductName(const std::vector<std::string>& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取事件名称过滤，例如"guest_reboot"表示机器重启
                     * @return EventName 事件名称过滤，例如"guest_reboot"表示机器重启
                     * 
                     */
                    std::vector<std::string> GetEventName() const;

                    /**
                     * 设置事件名称过滤，例如"guest_reboot"表示机器重启
                     * @param _eventName 事件名称过滤，例如"guest_reboot"表示机器重启
                     * 
                     */
                    void SetEventName(const std::vector<std::string>& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取影响对象，例如"ins-19708ino"
                     * @return InstanceId 影响对象，例如"ins-19708ino"
                     * 
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置影响对象，例如"ins-19708ino"
                     * @param _instanceId 影响对象，例如"ins-19708ino"
                     * 
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取维度过滤，例如外网IP:10.0.0.1
                     * @return Dimensions 维度过滤，例如外网IP:10.0.0.1
                     * 
                     */
                    std::vector<DescribeProductEventListDimensions> GetDimensions() const;

                    /**
                     * 设置维度过滤，例如外网IP:10.0.0.1
                     * @param _dimensions 维度过滤，例如外网IP:10.0.0.1
                     * 
                     */
                    void SetDimensions(const std::vector<DescribeProductEventListDimensions>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取产品事件地域过滤参数，例如gz，各地域缩写可参见[地域列表](https://cloud.tencent.com/document/product/248/50863)
                     * @return RegionList 产品事件地域过滤参数，例如gz，各地域缩写可参见[地域列表](https://cloud.tencent.com/document/product/248/50863)
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 设置产品事件地域过滤参数，例如gz，各地域缩写可参见[地域列表](https://cloud.tencent.com/document/product/248/50863)
                     * @param _regionList 产品事件地域过滤参数，例如gz，各地域缩写可参见[地域列表](https://cloud.tencent.com/document/product/248/50863)
                     * 
                     */
                    void SetRegionList(const std::vector<std::string>& _regionList);

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取事件类型过滤，取值范围["status_change","abnormal"]，分别表示状态变更、异常事件
                     * @return Type 事件类型过滤，取值范围["status_change","abnormal"]，分别表示状态变更、异常事件
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置事件类型过滤，取值范围["status_change","abnormal"]，分别表示状态变更、异常事件
                     * @param _type 事件类型过滤，取值范围["status_change","abnormal"]，分别表示状态变更、异常事件
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件状态过滤，取值范围["recover","alarm","-"]，分别表示已恢复、未恢复、无状态
                     * @return Status 事件状态过滤，取值范围["recover","alarm","-"]，分别表示已恢复、未恢复、无状态
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置事件状态过滤，取值范围["recover","alarm","-"]，分别表示已恢复、未恢复、无状态
                     * @param _status 事件状态过滤，取值范围["recover","alarm","-"]，分别表示已恢复、未恢复、无状态
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目ID过滤
                     * @return Project 项目ID过滤
                     * 
                     */
                    std::vector<std::string> GetProject() const;

                    /**
                     * 设置项目ID过滤
                     * @param _project 项目ID过滤
                     * 
                     */
                    void SetProject(const std::vector<std::string>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取告警状态配置过滤，1表示已配置，0表示未配置
                     * @return IsAlarmConfig 告警状态配置过滤，1表示已配置，0表示未配置
                     * 
                     */
                    int64_t GetIsAlarmConfig() const;

                    /**
                     * 设置告警状态配置过滤，1表示已配置，0表示未配置
                     * @param _isAlarmConfig 告警状态配置过滤，1表示已配置，0表示未配置
                     * 
                     */
                    void SetIsAlarmConfig(const int64_t& _isAlarmConfig);

                    /**
                     * 判断参数 IsAlarmConfig 是否已赋值
                     * @return IsAlarmConfig 是否已赋值
                     * 
                     */
                    bool IsAlarmConfigHasBeenSet() const;

                    /**
                     * 获取按更新时间排序，ASC表示升序，DESC表示降序，默认DESC
                     * @return TimeOrder 按更新时间排序，ASC表示升序，DESC表示降序，默认DESC
                     * 
                     */
                    std::string GetTimeOrder() const;

                    /**
                     * 设置按更新时间排序，ASC表示升序，DESC表示降序，默认DESC
                     * @param _timeOrder 按更新时间排序，ASC表示升序，DESC表示降序，默认DESC
                     * 
                     */
                    void SetTimeOrder(const std::string& _timeOrder);

                    /**
                     * 判断参数 TimeOrder 是否已赋值
                     * @return TimeOrder 是否已赋值
                     * 
                     */
                    bool TimeOrderHasBeenSet() const;

                    /**
                     * 获取起始时间，默认一天前的时间戳
                     * @return StartTime 起始时间，默认一天前的时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，默认一天前的时间戳
                     * @param _startTime 起始时间，默认一天前的时间戳
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，默认当前时间戳
                     * @return EndTime 结束时间，默认当前时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，默认当前时间戳
                     * @param _endTime 结束时间，默认当前时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页偏移量，默认0
                     * @return Offset 页偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移量，默认0
                     * @param _offset 页偏移量，默认0
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
                     * 获取每页返回的数量，默认20
                     * @return Limit 每页返回的数量，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页返回的数量，默认20
                     * @param _limit 每页返回的数量，默认20
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
                     * 接口模块名，固定值"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 产品类型过滤，例如"cvm"表示云服务器
                     */
                    std::vector<std::string> m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 事件名称过滤，例如"guest_reboot"表示机器重启
                     */
                    std::vector<std::string> m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 影响对象，例如"ins-19708ino"
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 维度过滤，例如外网IP:10.0.0.1
                     */
                    std::vector<DescribeProductEventListDimensions> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 产品事件地域过滤参数，例如gz，各地域缩写可参见[地域列表](https://cloud.tencent.com/document/product/248/50863)
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 事件类型过滤，取值范围["status_change","abnormal"]，分别表示状态变更、异常事件
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件状态过滤，取值范围["recover","alarm","-"]，分别表示已恢复、未恢复、无状态
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID过滤
                     */
                    std::vector<std::string> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 告警状态配置过滤，1表示已配置，0表示未配置
                     */
                    int64_t m_isAlarmConfig;
                    bool m_isAlarmConfigHasBeenSet;

                    /**
                     * 按更新时间排序，ASC表示升序，DESC表示降序，默认DESC
                     */
                    std::string m_timeOrder;
                    bool m_timeOrderHasBeenSet;

                    /**
                     * 起始时间，默认一天前的时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，默认当前时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页返回的数量，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTREQUEST_H_
