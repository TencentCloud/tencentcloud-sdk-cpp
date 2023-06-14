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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 画面超分控制参数
                */
                class SuperResolutionInfo : public AbstractModel
                {
                public:
                    SuperResolutionInfo();
                    ~SuperResolutionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画面超分控制开关，可选值：
<li>ON：开启画面超分；</li>
<li>OFF：关闭画面超分。</li>
当开启画面超分时，默认2倍超分。
                     * @return Switch 画面超分控制开关，可选值：
<li>ON：开启画面超分；</li>
<li>OFF：关闭画面超分。</li>
当开启画面超分时，默认2倍超分。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置画面超分控制开关，可选值：
<li>ON：开启画面超分；</li>
<li>OFF：关闭画面超分。</li>
当开启画面超分时，默认2倍超分。
                     * @param _switch 画面超分控制开关，可选值：
<li>ON：开启画面超分；</li>
<li>OFF：关闭画面超分。</li>
当开启画面超分时，默认2倍超分。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取画面超分类型，仅当画面超分控制开关为 ON 时有效，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
                     * @return Type 画面超分类型，仅当画面超分控制开关为 ON 时有效，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置画面超分类型，仅当画面超分控制开关为 ON 时有效，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
                     * @param _type 画面超分类型，仅当画面超分控制开关为 ON 时有效，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
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
                     * 获取超分倍数，可选值：2。
默认值：2。
                     * @return Size 超分倍数，可选值：2。
默认值：2。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置超分倍数，可选值：2。
默认值：2。
                     * @param _size 超分倍数，可选值：2。
默认值：2。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 画面超分控制开关，可选值：
<li>ON：开启画面超分；</li>
<li>OFF：关闭画面超分。</li>
当开启画面超分时，默认2倍超分。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 画面超分类型，仅当画面超分控制开关为 ON 时有效，可选值：
<li>lq：针对低清晰度有较多噪声视频的超分；</li>
<li>hq：针对高清晰度视频超分。</li>
默认值：lq。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 超分倍数，可选值：2。
默认值：2。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUPERRESOLUTIONINFO_H_
