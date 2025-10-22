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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBanMode请求参数结构体
                */
                class ModifyBanModeRequest : public AbstractModel
                {
                public:
                    ModifyBanModeRequest();
                    ~ModifyBanModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断
                     * @return Mode 阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断
                     * @param _mode 阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取阻断时间，用于标准阻断模式
                     * @return Ttl 阻断时间，用于标准阻断模式
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置阻断时间，用于标准阻断模式
                     * @param _ttl 阻断时间，用于标准阻断模式
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                private:

                    /**
                     * 阻断模式，STANDARD_MODE：标准阻断，DEEP_MODE：深度阻断
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 阻断时间，用于标准阻断模式
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANMODEREQUEST_H_
