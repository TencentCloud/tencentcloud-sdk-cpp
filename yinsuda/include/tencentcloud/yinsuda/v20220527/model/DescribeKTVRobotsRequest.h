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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVROBOTSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVROBOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/TimeRange.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeKTVRobots请求参数结构体
                */
                class DescribeKTVRobotsRequest : public AbstractModel
                {
                public:
                    DescribeKTVRobotsRequest();
                    ~DescribeKTVRobotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取机器人Id列表。
                     * @return RobotIds 机器人Id列表。
                     * 
                     */
                    std::vector<std::string> GetRobotIds() const;

                    /**
                     * 设置机器人Id列表。
                     * @param _robotIds 机器人Id列表。
                     * 
                     */
                    void SetRobotIds(const std::vector<std::string>& _robotIds);

                    /**
                     * 判断参数 RobotIds 是否已赋值
                     * @return RobotIds 是否已赋值
                     * 
                     */
                    bool RobotIdsHasBeenSet() const;

                    /**
                     * 获取机器人状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * @return Statuses 机器人状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置机器人状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * @param _statuses 机器人状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取匹配创建时间在此时间段内的机器人。
<li>包含所指定的头尾时间点。</li>
                     * @return CreateTime 匹配创建时间在此时间段内的机器人。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置匹配创建时间在此时间段内的机器人。
<li>包含所指定的头尾时间点。</li>
                     * @param _createTime 匹配创建时间在此时间段内的机器人。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @return Offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     * @param _offset 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
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
                     * 获取分页返回的起始偏移量，默认值：10。
                     * @return Limit 分页返回的起始偏移量，默认值：10。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：10。
                     * @param _limit 分页返回的起始偏移量，默认值：10。
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
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 机器人Id列表。
                     */
                    std::vector<std::string> m_robotIds;
                    bool m_robotIdsHasBeenSet;

                    /**
                     * 机器人状态，取值有：
<li>Play：播放</li>
<li>Pause：暂停</li>
<li>Destroy：销毁</li>
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * 匹配创建时间在此时间段内的机器人。
<li>包含所指定的头尾时间点。</li>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：10。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEKTVROBOTSREQUEST_H_
