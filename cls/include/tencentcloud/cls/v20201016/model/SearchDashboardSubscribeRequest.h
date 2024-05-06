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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DashboardSubscribeData.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SearchDashboardSubscribe请求参数结构体
                */
                class SearchDashboardSubscribeRequest : public AbstractModel
                {
                public:
                    SearchDashboardSubscribeRequest();
                    ~SearchDashboardSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仪表盘id。
                     * @return DashboardId 仪表盘id。
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置仪表盘id。
                     * @param _dashboardId 仪表盘id。
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
                     * 获取仪表盘订阅数据。
                     * @return SubscribeData 仪表盘订阅数据。
                     * 
                     */
                    DashboardSubscribeData GetSubscribeData() const;

                    /**
                     * 设置仪表盘订阅数据。
                     * @param _subscribeData 仪表盘订阅数据。
                     * 
                     */
                    void SetSubscribeData(const DashboardSubscribeData& _subscribeData);

                    /**
                     * 判断参数 SubscribeData 是否已赋值
                     * @return SubscribeData 是否已赋值
                     * 
                     */
                    bool SubscribeDataHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅Id。
                     * @return Id 仪表盘订阅Id。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置仪表盘订阅Id。
                     * @param _id 仪表盘订阅Id。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取仪表盘订阅名称。
                     * @return Name 仪表盘订阅名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仪表盘订阅名称。
                     * @param _name 仪表盘订阅名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 仪表盘id。
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                    /**
                     * 仪表盘订阅数据。
                     */
                    DashboardSubscribeData m_subscribeData;
                    bool m_subscribeDataHasBeenSet;

                    /**
                     * 仪表盘订阅Id。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 仪表盘订阅名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHDASHBOARDSUBSCRIBEREQUEST_H_
