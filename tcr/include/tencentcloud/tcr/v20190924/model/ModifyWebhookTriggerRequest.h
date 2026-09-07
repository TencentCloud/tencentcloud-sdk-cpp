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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYWEBHOOKTRIGGERREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYWEBHOOKTRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/WebhookTrigger.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyWebhookTrigger请求参数结构体
                */
                class ModifyWebhookTriggerRequest : public AbstractModel
                {
                public:
                    ModifyWebhookTriggerRequest();
                    ~ModifyWebhookTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例Id</p>
                     * @return RegistryId <p>实例Id</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例Id</p>
                     * @param _registryId <p>实例Id</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>触发器参数</p>
                     * @return Trigger <p>触发器参数</p>
                     * 
                     */
                    WebhookTrigger GetTrigger() const;

                    /**
                     * 设置<p>触发器参数</p>
                     * @param _trigger <p>触发器参数</p>
                     * 
                     */
                    void SetTrigger(const WebhookTrigger& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * <p>实例Id</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>触发器参数</p>
                     */
                    WebhookTrigger m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYWEBHOOKTRIGGERREQUEST_H_
