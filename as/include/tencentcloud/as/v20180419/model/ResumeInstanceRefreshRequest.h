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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ResumeInstanceRefresh请求参数结构体
                */
                class ResumeInstanceRefreshRequest : public AbstractModel
                {
                public:
                    ResumeInstanceRefreshRequest();
                    ~ResumeInstanceRefreshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。可通过如下方式获取：
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @return AutoScalingGroupId 伸缩组ID。可通过如下方式获取：
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。可通过如下方式获取：
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @param _autoScalingGroupId 伸缩组ID。可通过如下方式获取：
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取刷新活动ID。可以通过调用接口 [DescribeRefreshActivities](https://cloud.tencent.com/document/api/377/99175) ，取返回信息中的 RefreshActivityId 获取实例刷新活动ID。
                     * @return RefreshActivityId 刷新活动ID。可以通过调用接口 [DescribeRefreshActivities](https://cloud.tencent.com/document/api/377/99175) ，取返回信息中的 RefreshActivityId 获取实例刷新活动ID。
                     * 
                     */
                    std::string GetRefreshActivityId() const;

                    /**
                     * 设置刷新活动ID。可以通过调用接口 [DescribeRefreshActivities](https://cloud.tencent.com/document/api/377/99175) ，取返回信息中的 RefreshActivityId 获取实例刷新活动ID。
                     * @param _refreshActivityId 刷新活动ID。可以通过调用接口 [DescribeRefreshActivities](https://cloud.tencent.com/document/api/377/99175) ，取返回信息中的 RefreshActivityId 获取实例刷新活动ID。
                     * 
                     */
                    void SetRefreshActivityId(const std::string& _refreshActivityId);

                    /**
                     * 判断参数 RefreshActivityId 是否已赋值
                     * @return RefreshActivityId 是否已赋值
                     * 
                     */
                    bool RefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取当前批次刷新失败实例的恢复方式，如不存在失败实例，该参数无效。默认值为RETRY，取值范围如下：<li>RETRY: 重试当前批次刷新失败实例</li><li>CONTINUE: 跳过当前批次刷新失败实例</li>
                     * @return ResumeMode 当前批次刷新失败实例的恢复方式，如不存在失败实例，该参数无效。默认值为RETRY，取值范围如下：<li>RETRY: 重试当前批次刷新失败实例</li><li>CONTINUE: 跳过当前批次刷新失败实例</li>
                     * 
                     */
                    std::string GetResumeMode() const;

                    /**
                     * 设置当前批次刷新失败实例的恢复方式，如不存在失败实例，该参数无效。默认值为RETRY，取值范围如下：<li>RETRY: 重试当前批次刷新失败实例</li><li>CONTINUE: 跳过当前批次刷新失败实例</li>
                     * @param _resumeMode 当前批次刷新失败实例的恢复方式，如不存在失败实例，该参数无效。默认值为RETRY，取值范围如下：<li>RETRY: 重试当前批次刷新失败实例</li><li>CONTINUE: 跳过当前批次刷新失败实例</li>
                     * 
                     */
                    void SetResumeMode(const std::string& _resumeMode);

                    /**
                     * 判断参数 ResumeMode 是否已赋值
                     * @return ResumeMode 是否已赋值
                     * 
                     */
                    bool ResumeModeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。可通过如下方式获取：
<li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li>
<li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 刷新活动ID。可以通过调用接口 [DescribeRefreshActivities](https://cloud.tencent.com/document/api/377/99175) ，取返回信息中的 RefreshActivityId 获取实例刷新活动ID。
                     */
                    std::string m_refreshActivityId;
                    bool m_refreshActivityIdHasBeenSet;

                    /**
                     * 当前批次刷新失败实例的恢复方式，如不存在失败实例，该参数无效。默认值为RETRY，取值范围如下：<li>RETRY: 重试当前批次刷新失败实例</li><li>CONTINUE: 跳过当前批次刷新失败实例</li>
                     */
                    std::string m_resumeMode;
                    bool m_resumeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_RESUMEINSTANCEREFRESHREQUEST_H_
