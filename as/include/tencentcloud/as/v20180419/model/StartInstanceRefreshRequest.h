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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_

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
                * StartInstanceRefresh请求参数结构体
                */
                class StartInstanceRefreshRequest : public AbstractModel
                {
                public:
                    StartInstanceRefreshRequest();
                    ~StartInstanceRefreshRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。
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
                     * 获取刷新设置。
                     * @return RefreshSettings 刷新设置。
                     * 
                     */
                    RefreshSettings GetRefreshSettings() const;

                    /**
                     * 设置刷新设置。
                     * @param _refreshSettings 刷新设置。
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
                     * 获取刷新模式。默认值为 ROLLING_UPDATE_RESET，取值范围：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * @return RefreshMode 刷新模式。默认值为 ROLLING_UPDATE_RESET，取值范围：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * 
                     */
                    std::string GetRefreshMode() const;

                    /**
                     * 设置刷新模式。默认值为 ROLLING_UPDATE_RESET，取值范围：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     * @param _refreshMode 刷新模式。默认值为 ROLLING_UPDATE_RESET，取值范围：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
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
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 刷新设置。
                     */
                    RefreshSettings m_refreshSettings;
                    bool m_refreshSettingsHasBeenSet;

                    /**
                     * 刷新模式。默认值为 ROLLING_UPDATE_RESET，取值范围：
<li>ROLLING_UPDATE_RESET：重装系统进行滚动更新</li>
<li>ROLLING_UPDATE_REPLACE：新建实例替换进行滚动更新，该模式暂不支持回滚接口</li>
                     */
                    std::string m_refreshMode;
                    bool m_refreshModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHREQUEST_H_
