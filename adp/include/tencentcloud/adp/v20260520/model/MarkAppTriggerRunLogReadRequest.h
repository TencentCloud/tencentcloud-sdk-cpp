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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MARKAPPTRIGGERRUNLOGREADREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MARKAPPTRIGGERRUNLOGREADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MarkAppTriggerRunLogRead请求参数结构体
                */
                class MarkAppTriggerRunLogReadRequest : public AbstractModel
                {
                public:
                    MarkAppTriggerRunLogReadRequest();
                    ~MarkAppTriggerRunLogReadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用触发器运行实例ID列表</p>
                     * @return InstanceIdList <p>应用触发器运行实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置<p>应用触发器运行实例ID列表</p>
                     * @param _instanceIdList <p>应用触发器运行实例ID列表</p>
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取<p>应用触发器ID</p>
                     * @return TriggerId <p>应用触发器ID</p>
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置<p>应用触发器ID</p>
                     * @param _triggerId <p>应用触发器ID</p>
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用触发器运行实例ID列表</p>
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * <p>应用触发器ID</p>
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MARKAPPTRIGGERRUNLOGREADREQUEST_H_
