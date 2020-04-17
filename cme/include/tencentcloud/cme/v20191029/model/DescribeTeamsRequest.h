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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeTeams请求参数结构体
                */
                class DescribeTeamsRequest : public AbstractModel
                {
                public:
                    DescribeTeamsRequest();
                    ~DescribeTeamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取团队 ID 列表，限30个。
                     * @return TeamIds 团队 ID 列表，限30个。
                     */
                    std::vector<std::string> GetTeamIds() const;

                    /**
                     * 设置团队 ID 列表，限30个。
                     * @param TeamIds 团队 ID 列表，限30个。
                     */
                    void SetTeamIds(const std::vector<std::string>& _teamIds);

                    /**
                     * 判断参数 TeamIds 是否已赋值
                     * @return TeamIds 是否已赋值
                     */
                    bool TeamIdsHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 团队 ID 列表，限30个。
                     */
                    std::vector<std::string> m_teamIds;
                    bool m_teamIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMSREQUEST_H_
