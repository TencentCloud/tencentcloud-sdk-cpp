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
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取团队 ID 列表，限30个。若不填，则默认获取平台下所有团队。
                     * @return TeamIds 团队 ID 列表，限30个。若不填，则默认获取平台下所有团队。
                     * 
                     */
                    std::vector<std::string> GetTeamIds() const;

                    /**
                     * 设置团队 ID 列表，限30个。若不填，则默认获取平台下所有团队。
                     * @param _teamIds 团队 ID 列表，限30个。若不填，则默认获取平台下所有团队。
                     * 
                     */
                    void SetTeamIds(const std::vector<std::string>& _teamIds);

                    /**
                     * 判断参数 TeamIds 是否已赋值
                     * @return TeamIds 是否已赋值
                     * 
                     */
                    bool TeamIdsHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：20，最大值：30。
                     * @return Limit 返回记录条数，默认值：20，最大值：30。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：20，最大值：30。
                     * @param _limit 返回记录条数，默认值：20，最大值：30。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 团队 ID 列表，限30个。若不填，则默认获取平台下所有团队。
                     */
                    std::vector<std::string> m_teamIds;
                    bool m_teamIdsHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：20，最大值：30。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBETEAMSREQUEST_H_
