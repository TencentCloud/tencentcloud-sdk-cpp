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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVROBOTSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVROBOTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVRobotInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeKTVRobots返回参数结构体
                */
                class DescribeKTVRobotsResponse : public AbstractModel
                {
                public:
                    DescribeKTVRobotsResponse();
                    ~DescribeKTVRobotsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人总数。
                     * @return TotalCount 机器人总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取机器人信息集合。
                     * @return KTVRobotInfoSet 机器人信息集合。
                     * 
                     */
                    std::vector<KTVRobotInfo> GetKTVRobotInfoSet() const;

                    /**
                     * 判断参数 KTVRobotInfoSet 是否已赋值
                     * @return KTVRobotInfoSet 是否已赋值
                     * 
                     */
                    bool KTVRobotInfoSetHasBeenSet() const;

                private:

                    /**
                     * 机器人总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 机器人信息集合。
                     */
                    std::vector<KTVRobotInfo> m_kTVRobotInfoSet;
                    bool m_kTVRobotInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEKTVROBOTSRESPONSE_H_
