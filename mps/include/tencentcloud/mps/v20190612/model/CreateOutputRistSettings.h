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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRISTSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRISTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建媒体传输流的输出的RIST配置。
                */
                class CreateOutputRistSettings : public AbstractModel
                {
                public:
                    CreateOutputRistSettings();
                    ~CreateOutputRistSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RIST模式，可选[LISTENER|CALLER]，默认为LISTENER。
                     * @return Mode RIST模式，可选[LISTENER|CALLER]，默认为LISTENER。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置RIST模式，可选[LISTENER|CALLER]，默认为LISTENER。
                     * @param _mode RIST模式，可选[LISTENER|CALLER]，默认为LISTENER。
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
                     * 获取RIST配置方案，可选[MAIN|SIMPLE]，默认为MAIN。
                     * @return Profile RIST配置方案，可选[MAIN|SIMPLE]，默认为MAIN。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置RIST配置方案，可选[MAIN|SIMPLE]，默认为MAIN。
                     * @param _profile RIST配置方案，可选[MAIN|SIMPLE]，默认为MAIN。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取RIST缓冲区大小，单位为毫秒。最小值为50毫秒，最大值为5000毫秒。默认值：120
                     * @return Buffer RIST缓冲区大小，单位为毫秒。最小值为50毫秒，最大值为5000毫秒。默认值：120
                     * 
                     */
                    int64_t GetBuffer() const;

                    /**
                     * 设置RIST缓冲区大小，单位为毫秒。最小值为50毫秒，最大值为5000毫秒。默认值：120
                     * @param _buffer RIST缓冲区大小，单位为毫秒。最小值为50毫秒，最大值为5000毫秒。默认值：120
                     * 
                     */
                    void SetBuffer(const int64_t& _buffer);

                    /**
                     * 判断参数 Buffer 是否已赋值
                     * @return Buffer 是否已赋值
                     * 
                     */
                    bool BufferHasBeenSet() const;

                private:

                    /**
                     * RIST模式，可选[LISTENER|CALLER]，默认为LISTENER。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * RIST配置方案，可选[MAIN|SIMPLE]，默认为MAIN。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * RIST缓冲区大小，单位为毫秒。最小值为50毫秒，最大值为5000毫秒。默认值：120
                     */
                    int64_t m_buffer;
                    bool m_bufferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRISTSETTINGS_H_
