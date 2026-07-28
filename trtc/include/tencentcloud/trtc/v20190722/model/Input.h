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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_INPUT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_INPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 拉流输入源
                */
                class Input : public AbstractModel
                {
                public:
                    Input();
                    ~Input() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>直播拉流地址</p><p>入参限制：字符长度小于2048</p>
                     * @return Url <p>直播拉流地址</p><p>入参限制：字符长度小于2048</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>直播拉流地址</p><p>入参限制：字符长度小于2048</p>
                     * @param _url <p>直播拉流地址</p><p>入参限制：字符长度小于2048</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>显式协议</p><p>枚举值：</p><ul><li>rtmp： rtmp协议</li></ul>
                     * @return Format <p>显式协议</p><p>枚举值：</p><ul><li>rtmp： rtmp协议</li></ul>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>显式协议</p><p>枚举值：</p><ul><li>rtmp： rtmp协议</li></ul>
                     * @param _format <p>显式协议</p><p>枚举值：</p><ul><li>rtmp： rtmp协议</li></ul>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * <p>直播拉流地址</p><p>入参限制：字符长度小于2048</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>显式协议</p><p>枚举值：</p><ul><li>rtmp： rtmp协议</li></ul>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_INPUT_H_
