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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIUSEDETAILREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIUSEDETAILREQUEST_H_

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
                * DescribeApiUseDetail请求参数结构体
                */
                class DescribeApiUseDetailRequest : public AbstractModel
                {
                public:
                    DescribeApiUseDetailRequest();
                    ~DescribeApiUseDetailRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIUSEDETAILREQUEST_H_
