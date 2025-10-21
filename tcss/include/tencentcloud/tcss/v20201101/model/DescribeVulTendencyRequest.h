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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTENDENCYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTENDENCYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulTendency请求参数结构体
                */
                class DescribeVulTendencyRequest : public AbstractModel
                {
                public:
                    DescribeVulTendencyRequest();
                    ~DescribeVulTendencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取枚举类型：
LATEST：最新版本
CONTAINER: 运行容器
                     * @return SphereOfInfluence 枚举类型：
LATEST：最新版本
CONTAINER: 运行容器
                     * 
                     */
                    std::string GetSphereOfInfluence() const;

                    /**
                     * 设置枚举类型：
LATEST：最新版本
CONTAINER: 运行容器
                     * @param _sphereOfInfluence 枚举类型：
LATEST：最新版本
CONTAINER: 运行容器
                     * 
                     */
                    void SetSphereOfInfluence(const std::string& _sphereOfInfluence);

                    /**
                     * 判断参数 SphereOfInfluence 是否已赋值
                     * @return SphereOfInfluence 是否已赋值
                     * 
                     */
                    bool SphereOfInfluenceHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 枚举类型：
LATEST：最新版本
CONTAINER: 运行容器
                     */
                    std::string m_sphereOfInfluence;
                    bool m_sphereOfInfluenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULTENDENCYREQUEST_H_
