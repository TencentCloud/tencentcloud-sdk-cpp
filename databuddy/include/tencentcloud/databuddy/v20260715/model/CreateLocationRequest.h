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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATELOCATIONREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/CosEventSubscription.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateLocation请求参数结构体
                */
                class CreateLocationRequest : public AbstractModel
                {
                public:
                    CreateLocationRequest();
                    ~CreateLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS 文件事件订阅配置，可选；不设置时不订阅（仅 COS 类型 Location 生效）。设置时先订阅 COS 桶事件投递到 CKafka 再创建 Location，创建失败自动回滚退订
                     * @return FileEventSubscription COS 文件事件订阅配置，可选；不设置时不订阅（仅 COS 类型 Location 生效）。设置时先订阅 COS 桶事件投递到 CKafka 再创建 Location，创建失败自动回滚退订
                     * 
                     */
                    CosEventSubscription GetFileEventSubscription() const;

                    /**
                     * 设置COS 文件事件订阅配置，可选；不设置时不订阅（仅 COS 类型 Location 生效）。设置时先订阅 COS 桶事件投递到 CKafka 再创建 Location，创建失败自动回滚退订
                     * @param _fileEventSubscription COS 文件事件订阅配置，可选；不设置时不订阅（仅 COS 类型 Location 生效）。设置时先订阅 COS 桶事件投递到 CKafka 再创建 Location，创建失败自动回滚退订
                     * 
                     */
                    void SetFileEventSubscription(const CosEventSubscription& _fileEventSubscription);

                    /**
                     * 判断参数 FileEventSubscription 是否已赋值
                     * @return FileEventSubscription 是否已赋值
                     * 
                     */
                    bool FileEventSubscriptionHasBeenSet() const;

                private:

                    /**
                     * COS 文件事件订阅配置，可选；不设置时不订阅（仅 COS 类型 Location 生效）。设置时先订阅 COS 桶事件投递到 CKafka 再创建 Location，创建失败自动回滚退订
                     */
                    CosEventSubscription m_fileEventSubscription;
                    bool m_fileEventSubscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATELOCATIONREQUEST_H_
