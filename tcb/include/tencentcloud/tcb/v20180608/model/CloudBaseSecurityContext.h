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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASESECURITYCONTEXT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASESECURITYCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseCapabilities.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * cloudrun安全特性
                */
                class CloudBaseSecurityContext : public AbstractModel
                {
                public:
                    CloudBaseSecurityContext();
                    ~CloudBaseSecurityContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全特性
                     * @return Capabilities 安全特性
                     * 
                     */
                    CloudBaseCapabilities GetCapabilities() const;

                    /**
                     * 设置安全特性
                     * @param _capabilities 安全特性
                     * 
                     */
                    void SetCapabilities(const CloudBaseCapabilities& _capabilities);

                    /**
                     * 判断参数 Capabilities 是否已赋值
                     * @return Capabilities 是否已赋值
                     * 
                     */
                    bool CapabilitiesHasBeenSet() const;

                private:

                    /**
                     * 安全特性
                     */
                    CloudBaseCapabilities m_capabilities;
                    bool m_capabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASESECURITYCONTEXT_H_
