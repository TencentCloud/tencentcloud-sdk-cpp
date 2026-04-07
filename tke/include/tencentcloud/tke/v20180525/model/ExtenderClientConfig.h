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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERCLIENTCONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERCLIENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ServiceReference.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 扩展调度器(Extenders)客户端配置
                */
                class ExtenderClientConfig : public AbstractModel
                {
                public:
                    ExtenderClientConfig();
                    ~ExtenderClientConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问extender服务url设置
                     * @return Service 访问extender服务url设置
                     * 
                     */
                    ServiceReference GetService() const;

                    /**
                     * 设置访问extender服务url设置
                     * @param _service 访问extender服务url设置
                     * 
                     */
                    void SetService(const ServiceReference& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * 访问extender服务url设置
                     */
                    ServiceReference m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXTENDERCLIENTCONFIG_H_
