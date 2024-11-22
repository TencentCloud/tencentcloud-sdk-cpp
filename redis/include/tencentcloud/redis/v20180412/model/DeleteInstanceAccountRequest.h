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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEINSTANCEACCOUNTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEINSTANCEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DeleteInstanceAccount请求参数结构体
                */
                class DeleteInstanceAccountRequest : public AbstractModel
                {
                public:
                    DeleteInstanceAccountRequest();
                    ~DeleteInstanceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取子账号名称。请登录[Redis控制台](https://console.cloud.tencent.com/redis)，切换至**账号管理**页面获取。具体信息，请参见[管理账号](https://cloud.tencent.com/document/product/239/36710)。
                     * @return AccountName 子账号名称。请登录[Redis控制台](https://console.cloud.tencent.com/redis)，切换至**账号管理**页面获取。具体信息，请参见[管理账号](https://cloud.tencent.com/document/product/239/36710)。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置子账号名称。请登录[Redis控制台](https://console.cloud.tencent.com/redis)，切换至**账号管理**页面获取。具体信息，请参见[管理账号](https://cloud.tencent.com/document/product/239/36710)。
                     * @param _accountName 子账号名称。请登录[Redis控制台](https://console.cloud.tencent.com/redis)，切换至**账号管理**页面获取。具体信息，请参见[管理账号](https://cloud.tencent.com/document/product/239/36710)。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子账号名称。请登录[Redis控制台](https://console.cloud.tencent.com/redis)，切换至**账号管理**页面获取。具体信息，请参见[管理账号](https://cloud.tencent.com/document/product/239/36710)。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEINSTANCEACCOUNTREQUEST_H_
