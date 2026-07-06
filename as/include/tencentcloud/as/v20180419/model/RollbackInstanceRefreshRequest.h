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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_ROLLBACKINSTANCEREFRESHREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_ROLLBACKINSTANCEREFRESHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshSettings.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * RollbackInstanceRefresh请求参数结构体
                */
                class RollbackInstanceRefreshRequest : public AbstractModel
                {
                public:
                    RollbackInstanceRefreshRequest();
                    ~RollbackInstanceRefreshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>伸缩组ID。可以通过以下方式获取可用的伸缩组ID： </p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @return AutoScalingGroupId <p>伸缩组ID。可以通过以下方式获取可用的伸缩组ID： </p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置<p>伸缩组ID。可以通过以下方式获取可用的伸缩组ID： </p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     * @param _autoScalingGroupId <p>伸缩组ID。可以通过以下方式获取可用的伸缩组ID： </p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
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
                     * 获取<p>刷新设置。</p>
                     * @return RefreshSettings <p>刷新设置。</p>
                     * 
                     */
                    RefreshSettings GetRefreshSettings() const;

                    /**
                     * 设置<p>刷新设置。</p>
                     * @param _refreshSettings <p>刷新设置。</p>
                     * 
                     */
                    void SetRefreshSettings(const RefreshSettings& _refreshSettings);

                    /**
                     * 判断参数 RefreshSettings 是否已赋值
                     * @return RefreshSettings 是否已赋值
                     * 
                     */
                    bool RefreshSettingsHasBeenSet() const;

                    /**
                     * 获取<p>原始刷新活动 ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/99175">DescribeRefreshActivities</a> ，取返回信息中的 OriginRefreshActivityId 获取原始刷新活动ID。</p>
                     * @return OriginRefreshActivityId <p>原始刷新活动 ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/99175">DescribeRefreshActivities</a> ，取返回信息中的 OriginRefreshActivityId 获取原始刷新活动ID。</p>
                     * 
                     */
                    std::string GetOriginRefreshActivityId() const;

                    /**
                     * 设置<p>原始刷新活动 ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/99175">DescribeRefreshActivities</a> ，取返回信息中的 OriginRefreshActivityId 获取原始刷新活动ID。</p>
                     * @param _originRefreshActivityId <p>原始刷新活动 ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/99175">DescribeRefreshActivities</a> ，取返回信息中的 OriginRefreshActivityId 获取原始刷新活动ID。</p>
                     * 
                     */
                    void SetOriginRefreshActivityId(const std::string& _originRefreshActivityId);

                    /**
                     * 判断参数 OriginRefreshActivityId 是否已赋值
                     * @return OriginRefreshActivityId 是否已赋值
                     * 
                     */
                    bool OriginRefreshActivityIdHasBeenSet() const;

                    /**
                     * 获取<p>刷新模式，目前仅支持滚动更新，默认值为 ROLLING_UPDATE_RESET。</p>
                     * @return RefreshMode <p>刷新模式，目前仅支持滚动更新，默认值为 ROLLING_UPDATE_RESET。</p>
                     * 
                     */
                    std::string GetRefreshMode() const;

                    /**
                     * 设置<p>刷新模式，目前仅支持滚动更新，默认值为 ROLLING_UPDATE_RESET。</p>
                     * @param _refreshMode <p>刷新模式，目前仅支持滚动更新，默认值为 ROLLING_UPDATE_RESET。</p>
                     * 
                     */
                    void SetRefreshMode(const std::string& _refreshMode);

                    /**
                     * 判断参数 RefreshMode 是否已赋值
                     * @return RefreshMode 是否已赋值
                     * 
                     */
                    bool RefreshModeHasBeenSet() const;

                private:

                    /**
                     * <p>伸缩组ID。可以通过以下方式获取可用的伸缩组ID： </p><li>通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 查询伸缩组ID。</li><li>通过调用接口 [DescribeAutoScalingGroups](https://cloud.tencent.com/document/api/377/20438) ，取返回信息中的 AutoScalingGroupId 获取伸缩组ID。</li>
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * <p>刷新设置。</p>
                     */
                    RefreshSettings m_refreshSettings;
                    bool m_refreshSettingsHasBeenSet;

                    /**
                     * <p>原始刷新活动 ID。可以通过调用接口 <a href="https://cloud.tencent.com/document/api/377/99175">DescribeRefreshActivities</a> ，取返回信息中的 OriginRefreshActivityId 获取原始刷新活动ID。</p>
                     */
                    std::string m_originRefreshActivityId;
                    bool m_originRefreshActivityIdHasBeenSet;

                    /**
                     * <p>刷新模式，目前仅支持滚动更新，默认值为 ROLLING_UPDATE_RESET。</p>
                     */
                    std::string m_refreshMode;
                    bool m_refreshModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_ROLLBACKINSTANCEREFRESHREQUEST_H_
