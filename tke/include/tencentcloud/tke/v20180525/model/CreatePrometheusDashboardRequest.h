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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSDASHBOARDREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSDASHBOARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreatePrometheusDashboard请求参数结构体
                */
                class CreatePrometheusDashboardRequest : public AbstractModel
                {
                public:
                    CreatePrometheusDashboardRequest();
                    ~CreatePrometheusDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取面板组名称
                     * @return DashboardName 面板组名称
                     * 
                     */
                    std::string GetDashboardName() const;

                    /**
                     * 设置面板组名称
                     * @param _dashboardName 面板组名称
                     * 
                     */
                    void SetDashboardName(const std::string& _dashboardName);

                    /**
                     * 判断参数 DashboardName 是否已赋值
                     * @return DashboardName 是否已赋值
                     * 
                     */
                    bool DashboardNameHasBeenSet() const;

                    /**
                     * 获取面板列表
每一项是一个grafana dashboard的json定义
                     * @return Contents 面板列表
每一项是一个grafana dashboard的json定义
                     * 
                     */
                    std::vector<std::string> GetContents() const;

                    /**
                     * 设置面板列表
每一项是一个grafana dashboard的json定义
                     * @param _contents 面板列表
每一项是一个grafana dashboard的json定义
                     * 
                     */
                    void SetContents(const std::vector<std::string>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 面板组名称
                     */
                    std::string m_dashboardName;
                    bool m_dashboardNameHasBeenSet;

                    /**
                     * 面板列表
每一项是一个grafana dashboard的json定义
                     */
                    std::vector<std::string> m_contents;
                    bool m_contentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSDASHBOARDREQUEST_H_
