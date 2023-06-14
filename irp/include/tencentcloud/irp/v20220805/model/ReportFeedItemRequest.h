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

#ifndef TENCENTCLOUD_IRP_V20220805_MODEL_REPORTFEEDITEMREQUEST_H_
#define TENCENTCLOUD_IRP_V20220805_MODEL_REPORTFEEDITEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220805/model/DocItem.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220805
        {
            namespace Model
            {
                /**
                * ReportFeedItem请求参数结构体
                */
                class ReportFeedItemRequest : public AbstractModel
                {
                public:
                    ReportFeedItemRequest();
                    ~ReportFeedItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，在控制台获取
                     * @return InstanceId 实例ID，在控制台获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，在控制台获取
                     * @param _instanceId 实例ID，在控制台获取
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
                     * 获取上报的信息流内容数组，一次数量不超过50
                     * @return FeedItemList 上报的信息流内容数组，一次数量不超过50
                     * 
                     */
                    std::vector<DocItem> GetFeedItemList() const;

                    /**
                     * 设置上报的信息流内容数组，一次数量不超过50
                     * @param _feedItemList 上报的信息流内容数组，一次数量不超过50
                     * 
                     */
                    void SetFeedItemList(const std::vector<DocItem>& _feedItemList);

                    /**
                     * 判断参数 FeedItemList 是否已赋值
                     * @return FeedItemList 是否已赋值
                     * 
                     */
                    bool FeedItemListHasBeenSet() const;

                private:

                    /**
                     * 实例ID，在控制台获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 上报的信息流内容数组，一次数量不超过50
                     */
                    std::vector<DocItem> m_feedItemList;
                    bool m_feedItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220805_MODEL_REPORTFEEDITEMREQUEST_H_
