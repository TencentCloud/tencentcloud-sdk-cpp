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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESTROYKTVROBOTREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESTROYKTVROBOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DestroyKTVRobot请求参数结构体
                */
                class DestroyKTVRobotRequest : public AbstractModel
                {
                public:
                    DestroyKTVRobotRequest();
                    ~DestroyKTVRobotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人Id。
                     * @return RobotId 机器人Id。
                     */
                    std::string GetRobotId() const;

                    /**
                     * 设置机器人Id。
                     * @param RobotId 机器人Id。
                     */
                    void SetRobotId(const std::string& _robotId);

                    /**
                     * 判断参数 RobotId 是否已赋值
                     * @return RobotId 是否已赋值
                     */
                    bool RobotIdHasBeenSet() const;

                private:

                    /**
                     * 机器人Id。
                     */
                    std::string m_robotId;
                    bool m_robotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESTROYKTVROBOTREQUEST_H_
