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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPUSEDETAILREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPUSEDETAILREQUEST_H_

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
                * DescribeGroupUseDetail请求参数结构体
                */
                class DescribeGroupUseDetailRequest : public AbstractModel
                {
                public:
                    DescribeGroupUseDetailRequest();
                    ~DescribeGroupUseDetailRequest() = default;
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
                     * 获取指定top的条数,默认为10
                     * @return Count 指定top的条数,默认为10
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置指定top的条数,默认为10
                     * @param _count 指定top的条数,默认为10
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 网关部署组ID
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * 网关分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

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
                     * 指定top的条数,默认为10
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEGROUPUSEDETAILREQUEST_H_
