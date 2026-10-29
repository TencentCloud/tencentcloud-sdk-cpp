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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * EnablePGDocumentExt返回参数结构体
                */
                class EnablePGDocumentExtResponse : public AbstractModel
                {
                public:
                    EnablePGDocumentExtResponse();
                    ~EnablePGDocumentExtResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否开启成功标记</p><p>枚举值：</p><ul><li>true： 开启成功</li><li>false： 开启失败</li></ul>
                     * @return Enabled <p>是否开启成功标记</p><p>枚举值：</p><ul><li>true： 开启成功</li><li>false： 开启失败</li></ul>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启成功标记</p><p>枚举值：</p><ul><li>true： 开启成功</li><li>false： 开启失败</li></ul>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ENABLEPGDOCUMENTEXTRESPONSE_H_
