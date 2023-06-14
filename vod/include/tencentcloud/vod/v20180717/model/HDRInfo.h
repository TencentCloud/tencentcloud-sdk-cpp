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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_

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
                * 高动态范围类型控制参数。
                */
                class HDRInfo : public AbstractModel
                {
                public:
                    HDRInfo();
                    ~HDRInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高动态范围类型控制开关，可选值：
<li>ON：开启高动态范围类型转换；</li>
<li>OFF：关闭高动态范围类型转换。</li>
                     * @return Switch 高动态范围类型控制开关，可选值：
<li>ON：开启高动态范围类型转换；</li>
<li>OFF：关闭高动态范围类型转换。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置高动态范围类型控制开关，可选值：
<li>ON：开启高动态范围类型转换；</li>
<li>OFF：关闭高动态范围类型转换。</li>
                     * @param _switch 高动态范围类型控制开关，可选值：
<li>ON：开启高动态范围类型转换；</li>
<li>OFF：关闭高动态范围类型转换。</li>
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
                     * 获取高动态范围类型，可选值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>

注意：
<li> 仅当高动态范围类型控制开关为 ON 时有效；</li>
<li>当画质重生目标参数中指定视频输出参数的视频流编码格式 Codec 为 libx265 时有效。</li>
                     * @return Type 高动态范围类型，可选值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>

注意：
<li> 仅当高动态范围类型控制开关为 ON 时有效；</li>
<li>当画质重生目标参数中指定视频输出参数的视频流编码格式 Codec 为 libx265 时有效。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置高动态范围类型，可选值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>

注意：
<li> 仅当高动态范围类型控制开关为 ON 时有效；</li>
<li>当画质重生目标参数中指定视频输出参数的视频流编码格式 Codec 为 libx265 时有效。</li>
                     * @param _type 高动态范围类型，可选值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>

注意：
<li> 仅当高动态范围类型控制开关为 ON 时有效；</li>
<li>当画质重生目标参数中指定视频输出参数的视频流编码格式 Codec 为 libx265 时有效。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 高动态范围类型控制开关，可选值：
<li>ON：开启高动态范围类型转换；</li>
<li>OFF：关闭高动态范围类型转换。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 高动态范围类型，可选值：
<li>hdr10：表示 hdr10 标准；</li>
<li>hlg：表示 hlg 标准。</li>

注意：
<li> 仅当高动态范围类型控制开关为 ON 时有效；</li>
<li>当画质重生目标参数中指定视频输出参数的视频流编码格式 Codec 为 libx265 时有效。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_HDRINFO_H_
