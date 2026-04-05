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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeVoices请求参数结构体
                */
                class DescribeVoicesRequest : public AbstractModel
                {
                public:
                    DescribeVoicesRequest();
                    ~DescribeVoicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * @return VoiceType <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * 
                     */
                    std::string GetVoiceType() const;

                    /**
                     * 设置<p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * @param _voiceType <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     * 
                     */
                    void SetVoiceType(const std::string& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     * 
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * @return ExtParam <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * @param _extParam <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>音色类别</p><p>枚举值：</p><ul><li>system： 系统音色</li></ul>
                     */
                    std::string m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * <p>扩展参数，json字符串</p><p>其他筛选条件voiceName String 音色名，模糊匹配labels Array of String 标签，匹配包含这些标签的音色</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEVOICESREQUEST_H_
