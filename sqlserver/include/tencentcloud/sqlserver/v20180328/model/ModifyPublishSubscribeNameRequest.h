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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyPublishSubscribeName请求参数结构体
                */
                class ModifyPublishSubscribeNameRequest : public AbstractModel
                {
                public:
                    ModifyPublishSubscribeNameRequest();
                    ~ModifyPublishSubscribeNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取发布订阅ID
                     * @return PublishSubscribeId 发布订阅ID
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置发布订阅ID
                     * @param _publishSubscribeId 发布订阅ID
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取待修改的发布订阅名称
                     * @return PublishSubscribeName 待修改的发布订阅名称
                     * 
                     */
                    std::string GetPublishSubscribeName() const;

                    /**
                     * 设置待修改的发布订阅名称
                     * @param _publishSubscribeName 待修改的发布订阅名称
                     * 
                     */
                    void SetPublishSubscribeName(const std::string& _publishSubscribeName);

                    /**
                     * 判断参数 PublishSubscribeName 是否已赋值
                     * @return PublishSubscribeName 是否已赋值
                     * 
                     */
                    bool PublishSubscribeNameHasBeenSet() const;

                private:

                    /**
                     * 发布订阅ID
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * 待修改的发布订阅名称
                     */
                    std::string m_publishSubscribeName;
                    bool m_publishSubscribeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBENAMEREQUEST_H_
