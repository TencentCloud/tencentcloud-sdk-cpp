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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITAPIUSEDETAILREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITAPIUSEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeUnitApiUseDetail请求参数结构体
                */
                class DescribeUnitApiUseDetailRequest : public AbstractModel
                {
                public:
                    DescribeUnitApiUseDetailRequest();
                    ~DescribeUnitApiUseDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关部署组ID
                     * @return GatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置网关部署组ID
                     * @param _gatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    void SetGatewayDeployGroupId(const std::string& _gatewayDeployGroupId);

                    /**
                     * 判断参数 GatewayDeployGroupId 是否已赋值
                     * @return GatewayDeployGroupId 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupIdHasBeenSet() const;

                    /**
                     * 获取网关分组Api ID
                     * @return ApiId 网关分组Api ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置网关分组Api ID
                     * @param _apiId 网关分组Api ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * @return StartTime 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * @param _startTime 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * @return EndTime 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * @param _endTime 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取网关实例ID
                     * @return GatewayInstanceId 网关实例ID
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayInstanceId 网关实例ID
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                    /**
                     * 获取网关分组ID
                     * @return GroupId 网关分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置网关分组ID
                     * @param _groupId 网关分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取翻页查询偏移量
                     * @return Offset 翻页查询偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页查询偏移量
                     * @param _offset 翻页查询偏移量
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
                     * 获取翻页查询每页记录数
                     * @return Limit 翻页查询每页记录数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置翻页查询每页记录数
                     * @param _limit 翻页查询每页记录数
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
                     * 获取监控统计数据粒度
                     * @return Period 监控统计数据粒度
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置监控统计数据粒度
                     * @param _period 监控统计数据粒度
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 网关部署组ID
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * 网关分组Api ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的日期,格式：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                    /**
                     * 网关分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 翻页查询偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页查询每页记录数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 监控统计数据粒度
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEUNITAPIUSEDETAILREQUEST_H_
