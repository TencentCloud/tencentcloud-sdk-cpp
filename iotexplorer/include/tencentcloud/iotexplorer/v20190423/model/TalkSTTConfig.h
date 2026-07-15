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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTTRTC.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 语音识别配置
                */
                class TalkSTTConfig : public AbstractModel
                {
                public:
                    TalkSTTConfig();
                    ~TalkSTTConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前仅支持 `trtc`（使用 TRTC 内置语音识别）。
                     * @return Type 当前仅支持 `trtc`（使用 TRTC 内置语音识别）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置当前仅支持 `trtc`（使用 TRTC 内置语音识别）。
                     * @param _type 当前仅支持 `trtc`（使用 TRTC 内置语音识别）。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取`Type=trtc` 时生效。整体省略表示全部使用 TRTC 默认值。
                     * @return TRTC `Type=trtc` 时生效。整体省略表示全部使用 TRTC 默认值。
                     * 
                     */
                    TalkSTTTRTC GetTRTC() const;

                    /**
                     * 设置`Type=trtc` 时生效。整体省略表示全部使用 TRTC 默认值。
                     * @param _tRTC `Type=trtc` 时生效。整体省略表示全部使用 TRTC 默认值。
                     * 
                     */
                    void SetTRTC(const TalkSTTTRTC& _tRTC);

                    /**
                     * 判断参数 TRTC 是否已赋值
                     * @return TRTC 是否已赋值
                     * 
                     */
                    bool TRTCHasBeenSet() const;

                private:

                    /**
                     * 当前仅支持 `trtc`（使用 TRTC 内置语音识别）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * `Type=trtc` 时生效。整体省略表示全部使用 TRTC 默认值。
                     */
                    TalkSTTTRTC m_tRTC;
                    bool m_tRTCHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIG_H_
