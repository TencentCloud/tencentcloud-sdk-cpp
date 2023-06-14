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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 防护机器信息
                */
                class ProtectHostConfig : public AbstractModel
                {
                public:
                    ProtectHostConfig();
                    ~ProtectHostConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器唯一ID
                     * @return Quuid 机器唯一ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器唯一ID
                     * @param _quuid 机器唯一ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取防护开关 0  关闭 1开启
                     * @return ProtectSwitch 防护开关 0  关闭 1开启
                     * 
                     */
                    uint64_t GetProtectSwitch() const;

                    /**
                     * 设置防护开关 0  关闭 1开启
                     * @param _protectSwitch 防护开关 0  关闭 1开启
                     * 
                     */
                    void SetProtectSwitch(const uint64_t& _protectSwitch);

                    /**
                     * 判断参数 ProtectSwitch 是否已赋值
                     * @return ProtectSwitch 是否已赋值
                     * 
                     */
                    bool ProtectSwitchHasBeenSet() const;

                    /**
                     * 获取自动恢复开关 0 关闭 1开启
                     * @return AutoRecovery 自动恢复开关 0 关闭 1开启
                     * 
                     */
                    uint64_t GetAutoRecovery() const;

                    /**
                     * 设置自动恢复开关 0 关闭 1开启
                     * @param _autoRecovery 自动恢复开关 0 关闭 1开启
                     * 
                     */
                    void SetAutoRecovery(const uint64_t& _autoRecovery);

                    /**
                     * 判断参数 AutoRecovery 是否已赋值
                     * @return AutoRecovery 是否已赋值
                     * 
                     */
                    bool AutoRecoveryHasBeenSet() const;

                private:

                    /**
                     * 机器唯一ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 防护开关 0  关闭 1开启
                     */
                    uint64_t m_protectSwitch;
                    bool m_protectSwitchHasBeenSet;

                    /**
                     * 自动恢复开关 0 关闭 1开启
                     */
                    uint64_t m_autoRecovery;
                    bool m_autoRecoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTHOSTCONFIG_H_
