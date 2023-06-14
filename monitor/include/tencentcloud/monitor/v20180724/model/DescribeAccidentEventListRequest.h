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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_

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
                * DescribeAccidentEventList请求参数结构体
                */
                class DescribeAccidentEventListRequest : public AbstractModel
                {
                public:
                    DescribeAccidentEventListRequest();
                    ~DescribeAccidentEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口模块名，当前接口取值monitor
                     * @return Module 接口模块名，当前接口取值monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置接口模块名，当前接口取值monitor
                     * @param _module 接口模块名，当前接口取值monitor
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
                     * 获取分页参数，每页返回的数量，取值1~100，默认20
                     * @return Limit 分页参数，每页返回的数量，取值1~100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每页返回的数量，取值1~100，默认20
                     * @param _limit 分页参数，每页返回的数量，取值1~100，默认20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数，页偏移量，从0开始计数，默认0
                     * @return Offset 分页参数，页偏移量，从0开始计数，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，页偏移量，从0开始计数，默认0
                     * @param _offset 分页参数，页偏移量，从0开始计数，默认0
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
                     * 获取根据UpdateTime排序的规则，取值asc或desc
                     * @return UpdateTimeOrder 根据UpdateTime排序的规则，取值asc或desc
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置根据UpdateTime排序的规则，取值asc或desc
                     * @param _updateTimeOrder 根据UpdateTime排序的规则，取值asc或desc
                     * 
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     * 
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取根据OccurTime排序的规则，取值asc或desc（优先根据UpdateTimeOrder排序）
                     * @return OccurTimeOrder 根据OccurTime排序的规则，取值asc或desc（优先根据UpdateTimeOrder排序）
                     * 
                     */
                    std::string GetOccurTimeOrder() const;

                    /**
                     * 设置根据OccurTime排序的规则，取值asc或desc（优先根据UpdateTimeOrder排序）
                     * @param _occurTimeOrder 根据OccurTime排序的规则，取值asc或desc（优先根据UpdateTimeOrder排序）
                     * 
                     */
                    void SetOccurTimeOrder(const std::string& _occurTimeOrder);

                    /**
                     * 判断参数 OccurTimeOrder 是否已赋值
                     * @return OccurTimeOrder 是否已赋值
                     * 
                     */
                    bool OccurTimeOrderHasBeenSet() const;

                    /**
                     * 获取根据事件类型过滤，1表示服务问题，2表示其他订阅
                     * @return AccidentType 根据事件类型过滤，1表示服务问题，2表示其他订阅
                     * 
                     */
                    std::vector<int64_t> GetAccidentType() const;

                    /**
                     * 设置根据事件类型过滤，1表示服务问题，2表示其他订阅
                     * @param _accidentType 根据事件类型过滤，1表示服务问题，2表示其他订阅
                     * 
                     */
                    void SetAccidentType(const std::vector<int64_t>& _accidentType);

                    /**
                     * 判断参数 AccidentType 是否已赋值
                     * @return AccidentType 是否已赋值
                     * 
                     */
                    bool AccidentTypeHasBeenSet() const;

                    /**
                     * 获取根据事件过滤，1表示云服务器存储问题，2表示云服务器网络连接问题，3表示云服务器运行异常，202表示运营商网络抖动
                     * @return AccidentEvent 根据事件过滤，1表示云服务器存储问题，2表示云服务器网络连接问题，3表示云服务器运行异常，202表示运营商网络抖动
                     * 
                     */
                    std::vector<int64_t> GetAccidentEvent() const;

                    /**
                     * 设置根据事件过滤，1表示云服务器存储问题，2表示云服务器网络连接问题，3表示云服务器运行异常，202表示运营商网络抖动
                     * @param _accidentEvent 根据事件过滤，1表示云服务器存储问题，2表示云服务器网络连接问题，3表示云服务器运行异常，202表示运营商网络抖动
                     * 
                     */
                    void SetAccidentEvent(const std::vector<int64_t>& _accidentEvent);

                    /**
                     * 判断参数 AccidentEvent 是否已赋值
                     * @return AccidentEvent 是否已赋值
                     * 
                     */
                    bool AccidentEventHasBeenSet() const;

                    /**
                     * 获取根据事件状态过滤，0表示已恢复，1表示未恢复
                     * @return AccidentStatus 根据事件状态过滤，0表示已恢复，1表示未恢复
                     * 
                     */
                    std::vector<int64_t> GetAccidentStatus() const;

                    /**
                     * 设置根据事件状态过滤，0表示已恢复，1表示未恢复
                     * @param _accidentStatus 根据事件状态过滤，0表示已恢复，1表示未恢复
                     * 
                     */
                    void SetAccidentStatus(const std::vector<int64_t>& _accidentStatus);

                    /**
                     * 判断参数 AccidentStatus 是否已赋值
                     * @return AccidentStatus 是否已赋值
                     * 
                     */
                    bool AccidentStatusHasBeenSet() const;

                    /**
                     * 获取根据事件地域过滤，gz表示广州，sh表示上海等
                     * @return AccidentRegion 根据事件地域过滤，gz表示广州，sh表示上海等
                     * 
                     */
                    std::vector<std::string> GetAccidentRegion() const;

                    /**
                     * 设置根据事件地域过滤，gz表示广州，sh表示上海等
                     * @param _accidentRegion 根据事件地域过滤，gz表示广州，sh表示上海等
                     * 
                     */
                    void SetAccidentRegion(const std::vector<std::string>& _accidentRegion);

                    /**
                     * 判断参数 AccidentRegion 是否已赋值
                     * @return AccidentRegion 是否已赋值
                     * 
                     */
                    bool AccidentRegionHasBeenSet() const;

                    /**
                     * 获取根据影响资源过滤，比如ins-19a06bka
                     * @return AffectResource 根据影响资源过滤，比如ins-19a06bka
                     * 
                     */
                    std::string GetAffectResource() const;

                    /**
                     * 设置根据影响资源过滤，比如ins-19a06bka
                     * @param _affectResource 根据影响资源过滤，比如ins-19a06bka
                     * 
                     */
                    void SetAffectResource(const std::string& _affectResource);

                    /**
                     * 判断参数 AffectResource 是否已赋值
                     * @return AffectResource 是否已赋值
                     * 
                     */
                    bool AffectResourceHasBeenSet() const;

                private:

                    /**
                     * 接口模块名，当前接口取值monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

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
                     * 分页参数，每页返回的数量，取值1~100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，页偏移量，从0开始计数，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 根据UpdateTime排序的规则，取值asc或desc
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * 根据OccurTime排序的规则，取值asc或desc（优先根据UpdateTimeOrder排序）
                     */
                    std::string m_occurTimeOrder;
                    bool m_occurTimeOrderHasBeenSet;

                    /**
                     * 根据事件类型过滤，1表示服务问题，2表示其他订阅
                     */
                    std::vector<int64_t> m_accidentType;
                    bool m_accidentTypeHasBeenSet;

                    /**
                     * 根据事件过滤，1表示云服务器存储问题，2表示云服务器网络连接问题，3表示云服务器运行异常，202表示运营商网络抖动
                     */
                    std::vector<int64_t> m_accidentEvent;
                    bool m_accidentEventHasBeenSet;

                    /**
                     * 根据事件状态过滤，0表示已恢复，1表示未恢复
                     */
                    std::vector<int64_t> m_accidentStatus;
                    bool m_accidentStatusHasBeenSet;

                    /**
                     * 根据事件地域过滤，gz表示广州，sh表示上海等
                     */
                    std::vector<std::string> m_accidentRegion;
                    bool m_accidentRegionHasBeenSet;

                    /**
                     * 根据影响资源过滤，比如ins-19a06bka
                     */
                    std::string m_affectResource;
                    bool m_affectResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEACCIDENTEVENTLISTREQUEST_H_
