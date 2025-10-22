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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMSTATUSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyPullStreamStatus请求参数结构体
                */
                class ModifyPullStreamStatusRequest : public AbstractModel
                {
                public:
                    ModifyPullStreamStatusRequest();
                    ~ModifyPullStreamStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置 ID 列表。
                     * @return ConfigIds 配置 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetConfigIds() const;

                    /**
                     * 设置配置 ID 列表。
                     * @param _configIds 配置 ID 列表。
                     * 
                     */
                    void SetConfigIds(const std::vector<std::string>& _configIds);

                    /**
                     * 判断参数 ConfigIds 是否已赋值
                     * @return ConfigIds 是否已赋值
                     * 
                     */
                    bool ConfigIdsHasBeenSet() const;

                    /**
                     * 获取目标状态。0无效，2正在运行，4暂停。
                     * @return Status 目标状态。0无效，2正在运行，4暂停。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置目标状态。0无效，2正在运行，4暂停。
                     * @param _status 目标状态。0无效，2正在运行，4暂停。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 配置 ID 列表。
                     */
                    std::vector<std::string> m_configIds;
                    bool m_configIdsHasBeenSet;

                    /**
                     * 目标状态。0无效，2正在运行，4暂停。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMSTATUSREQUEST_H_
