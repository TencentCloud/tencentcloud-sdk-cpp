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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyDashboard请求参数结构体
                */
                class ModifyDashboardRequest : public AbstractModel
                {
                public:
                    ModifyDashboardRequest();
                    ~ModifyDashboardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仪表盘id。通过 [获取仪表盘](https://cloud.tencent.com/document/api/614/95636)接口获取DashboardId。
                     * @return DashboardId 仪表盘id。通过 [获取仪表盘](https://cloud.tencent.com/document/api/614/95636)接口获取DashboardId。
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置仪表盘id。通过 [获取仪表盘](https://cloud.tencent.com/document/api/614/95636)接口获取DashboardId。
                     * @param _dashboardId 仪表盘id。通过 [获取仪表盘](https://cloud.tencent.com/document/api/614/95636)接口获取DashboardId。
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

                    /**
                     * 获取仪表盘名称
                     * @return DashboardName 仪表盘名称
                     * 
                     */
                    std::string GetDashboardName() const;

                    /**
                     * 设置仪表盘名称
                     * @param _dashboardName 仪表盘名称
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
                     * 获取仪表盘配置数据
                     * @return Data 仪表盘配置数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置仪表盘配置数据
                     * @param _data 仪表盘配置数据
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @return Tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * @param _tags 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 仪表盘id。通过 [获取仪表盘](https://cloud.tencent.com/document/api/614/95636)接口获取DashboardId。
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * 仪表盘名称
                     */
                    std::string m_dashboardName;
                    bool m_dashboardNameHasBeenSet;

                    /**
                     * 仪表盘配置数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 标签描述列表，通过指定该参数可以同时绑定标签到相应的日志主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYDASHBOARDREQUEST_H_
