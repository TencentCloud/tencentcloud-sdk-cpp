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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYIPSMODESWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYIPSMODESWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyIpsModeSwitch请求参数结构体
                */
                class ModifyIpsModeSwitchRequest : public AbstractModel
                {
                public:
                    ModifyIpsModeSwitchRequest();
                    ~ModifyIpsModeSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护模式：0-观察模式, 1-拦截模式, 2-严格模式
                     * @return Mode 防护模式：0-观察模式, 1-拦截模式, 2-严格模式
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置防护模式：0-观察模式, 1-拦截模式, 2-严格模式
                     * @param _mode 防护模式：0-观察模式, 1-拦截模式, 2-严格模式
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 防护模式：0-观察模式, 1-拦截模式, 2-严格模式
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYIPSMODESWITCHREQUEST_H_
