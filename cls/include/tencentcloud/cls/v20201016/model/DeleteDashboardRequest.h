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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEDASHBOARDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEDASHBOARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteDashboard请求参数结构体
                */
                class DeleteDashboardRequest : public AbstractModel
                {
                public:
                    DeleteDashboardRequest();
                    ~DeleteDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仪表盘id
                     * @return DashboardId 仪表盘id
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置仪表盘id
                     * @param _dashboardId 仪表盘id
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                private:

                    /**
                     * 仪表盘id
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEDASHBOARDREQUEST_H_
