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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FRAMERATEWITHDENINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FRAMERATEWITHDENINFO_H_

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
                * 插帧帧率配置。
                */
                class FrameRateWithDenInfo : public AbstractModel
                {
                public:
                    FrameRateWithDenInfo();
                    ~FrameRateWithDenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插帧帧率配置控制开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @return Switch 插帧帧率配置控制开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置插帧帧率配置控制开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     * @param _switch 插帧帧率配置控制开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
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
                     * 获取帧率分子，取值范围：非负数，除以分母后小于100，单位：Hz。 默认值 0。 注意：对于转码，该参数会覆盖 VideoTemplate 内部的 Fps。
                     * @return FpsNum 帧率分子，取值范围：非负数，除以分母后小于100，单位：Hz。 默认值 0。 注意：对于转码，该参数会覆盖 VideoTemplate 内部的 Fps。
                     * 
                     */
                    int64_t GetFpsNum() const;

                    /**
                     * 设置帧率分子，取值范围：非负数，除以分母后小于100，单位：Hz。 默认值 0。 注意：对于转码，该参数会覆盖 VideoTemplate 内部的 Fps。
                     * @param _fpsNum 帧率分子，取值范围：非负数，除以分母后小于100，单位：Hz。 默认值 0。 注意：对于转码，该参数会覆盖 VideoTemplate 内部的 Fps。
                     * 
                     */
                    void SetFpsNum(const int64_t& _fpsNum);

                    /**
                     * 判断参数 FpsNum 是否已赋值
                     * @return FpsNum 是否已赋值
                     * 
                     */
                    bool FpsNumHasBeenSet() const;

                    /**
                     * 获取帧率分母，取值范围：大于等于1。 默认值 1。
                     * @return FpsDen 帧率分母，取值范围：大于等于1。 默认值 1。
                     * 
                     */
                    int64_t GetFpsDen() const;

                    /**
                     * 设置帧率分母，取值范围：大于等于1。 默认值 1。
                     * @param _fpsDen 帧率分母，取值范围：大于等于1。 默认值 1。
                     * 
                     */
                    void SetFpsDen(const int64_t& _fpsDen);

                    /**
                     * 判断参数 FpsDen 是否已赋值
                     * @return FpsDen 是否已赋值
                     * 
                     */
                    bool FpsDenHasBeenSet() const;

                private:

                    /**
                     * 插帧帧率配置控制开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 帧率分子，取值范围：非负数，除以分母后小于100，单位：Hz。 默认值 0。 注意：对于转码，该参数会覆盖 VideoTemplate 内部的 Fps。
                     */
                    int64_t m_fpsNum;
                    bool m_fpsNumHasBeenSet;

                    /**
                     * 帧率分母，取值范围：大于等于1。 默认值 1。
                     */
                    int64_t m_fpsDen;
                    bool m_fpsDenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FRAMERATEWITHDENINFO_H_
