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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ModifySubscribeName请求参数结构体
                */
                class ModifySubscribeNameRequest : public AbstractModel
                {
                public:
                    ModifySubscribeNameRequest();
                    ~ModifySubscribeNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID
                     * @return SubscribeId 数据订阅实例的ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的ID
                     * @param _subscribeId 数据订阅实例的ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取修改后的数据订阅实例的名称，长度限制为[1,60]
                     * @return SubscribeName 修改后的数据订阅实例的名称，长度限制为[1,60]
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置修改后的数据订阅实例的名称，长度限制为[1,60]
                     * @param _subscribeName 修改后的数据订阅实例的名称，长度限制为[1,60]
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 修改后的数据订阅实例的名称，长度限制为[1,60]
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MODIFYSUBSCRIBENAMEREQUEST_H_
