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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_RUNSECURITYSERVICEENABLED_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_RUNSECURITYSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 描述了 “云安全” 服务相关的信息。
                */
                class RunSecurityServiceEnabled : public AbstractModel
                {
                public:
                    RunSecurityServiceEnabled();
                    ~RunSecurityServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启[云安全](/document/product/296)服务。取值范围：<br><li>TRUE：表示开启云安全服务</li><br><li>FALSE：表示不开启云安全服务</li><br><br>默认取值：TRUE。
                     * @return Enabled 是否开启[云安全](/document/product/296)服务。取值范围：<br><li>TRUE：表示开启云安全服务</li><br><li>FALSE：表示不开启云安全服务</li><br><br>默认取值：TRUE。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启[云安全](/document/product/296)服务。取值范围：<br><li>TRUE：表示开启云安全服务</li><br><li>FALSE：表示不开启云安全服务</li><br><br>默认取值：TRUE。
                     * @param _enabled 是否开启[云安全](/document/product/296)服务。取值范围：<br><li>TRUE：表示开启云安全服务</li><br><li>FALSE：表示不开启云安全服务</li><br><br>默认取值：TRUE。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 是否开启[云安全](/document/product/296)服务。取值范围：<br><li>TRUE：表示开启云安全服务</li><br><li>FALSE：表示不开启云安全服务</li><br><br>默认取值：TRUE。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_RUNSECURITYSERVICEENABLED_H_
