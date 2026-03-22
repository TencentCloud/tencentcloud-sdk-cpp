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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 扩展字段。
                */
                class ExtraParam : public AbstractModel
                {
                public:
                    ExtraParam();
                    ~ExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预签名的上传url，支持把视频直接传到客户指定的地址。</p>
                     * @return UserDesignatedUrl <p>预签名的上传url，支持把视频直接传到客户指定的地址。</p>
                     * 
                     */
                    std::string GetUserDesignatedUrl() const;

                    /**
                     * 设置<p>预签名的上传url，支持把视频直接传到客户指定的地址。</p>
                     * @param _userDesignatedUrl <p>预签名的上传url，支持把视频直接传到客户指定的地址。</p>
                     * 
                     */
                    void SetUserDesignatedUrl(const std::string& _userDesignatedUrl);

                    /**
                     * 判断参数 UserDesignatedUrl 是否已赋值
                     * @return UserDesignatedUrl 是否已赋值
                     * 
                     */
                    bool UserDesignatedUrlHasBeenSet() const;

                    /**
                     * 获取<p>回调地址<br>需要您在创建任务时主动设置 CallbackUrl，请求方法为 POST，当视频生成结束时，我们将向此地址发送生成结果。<br>数据格式如下：<br>{<br>    &quot;JobId&quot;: &quot;1397428070633955328&quot;,<br>    &quot;Status&quot;: &quot;DONE&quot;,<br>    &quot;ErrorCode&quot;: &quot;&quot;,<br>    &quot;ErrorMessage&quot;: &quot;&quot;,<br>    &quot;ResultVideoUrl&quot;: &quot;https://vcg.cos.tencentcos.cn/template_to_video/fa80b846-b933-4981-afad-8a39b46ef2ca.mp4&quot;<br>}</p>
                     * @return CallbackUrl <p>回调地址<br>需要您在创建任务时主动设置 CallbackUrl，请求方法为 POST，当视频生成结束时，我们将向此地址发送生成结果。<br>数据格式如下：<br>{<br>    &quot;JobId&quot;: &quot;1397428070633955328&quot;,<br>    &quot;Status&quot;: &quot;DONE&quot;,<br>    &quot;ErrorCode&quot;: &quot;&quot;,<br>    &quot;ErrorMessage&quot;: &quot;&quot;,<br>    &quot;ResultVideoUrl&quot;: &quot;https://vcg.cos.tencentcos.cn/template_to_video/fa80b846-b933-4981-afad-8a39b46ef2ca.mp4&quot;<br>}</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调地址<br>需要您在创建任务时主动设置 CallbackUrl，请求方法为 POST，当视频生成结束时，我们将向此地址发送生成结果。<br>数据格式如下：<br>{<br>    &quot;JobId&quot;: &quot;1397428070633955328&quot;,<br>    &quot;Status&quot;: &quot;DONE&quot;,<br>    &quot;ErrorCode&quot;: &quot;&quot;,<br>    &quot;ErrorMessage&quot;: &quot;&quot;,<br>    &quot;ResultVideoUrl&quot;: &quot;https://vcg.cos.tencentcos.cn/template_to_video/fa80b846-b933-4981-afad-8a39b46ef2ca.mp4&quot;<br>}</p>
                     * @param _callbackUrl <p>回调地址<br>需要您在创建任务时主动设置 CallbackUrl，请求方法为 POST，当视频生成结束时，我们将向此地址发送生成结果。<br>数据格式如下：<br>{<br>    &quot;JobId&quot;: &quot;1397428070633955328&quot;,<br>    &quot;Status&quot;: &quot;DONE&quot;,<br>    &quot;ErrorCode&quot;: &quot;&quot;,<br>    &quot;ErrorMessage&quot;: &quot;&quot;,<br>    &quot;ResultVideoUrl&quot;: &quot;https://vcg.cos.tencentcos.cn/template_to_video/fa80b846-b933-4981-afad-8a39b46ef2ca.mp4&quot;<br>}</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>BGM音频文本。</p>
                     * @return BGMText <p>BGM音频文本。</p>
                     * 
                     */
                    std::string GetBGMText() const;

                    /**
                     * 设置<p>BGM音频文本。</p>
                     * @param _bGMText <p>BGM音频文本。</p>
                     * 
                     */
                    void SetBGMText(const std::string& _bGMText);

                    /**
                     * 判断参数 BGMText 是否已赋值
                     * @return BGMText 是否已赋值
                     * 
                     */
                    bool BGMTextHasBeenSet() const;

                private:

                    /**
                     * <p>预签名的上传url，支持把视频直接传到客户指定的地址。</p>
                     */
                    std::string m_userDesignatedUrl;
                    bool m_userDesignatedUrlHasBeenSet;

                    /**
                     * <p>回调地址<br>需要您在创建任务时主动设置 CallbackUrl，请求方法为 POST，当视频生成结束时，我们将向此地址发送生成结果。<br>数据格式如下：<br>{<br>    &quot;JobId&quot;: &quot;1397428070633955328&quot;,<br>    &quot;Status&quot;: &quot;DONE&quot;,<br>    &quot;ErrorCode&quot;: &quot;&quot;,<br>    &quot;ErrorMessage&quot;: &quot;&quot;,<br>    &quot;ResultVideoUrl&quot;: &quot;https://vcg.cos.tencentcos.cn/template_to_video/fa80b846-b933-4981-afad-8a39b46ef2ca.mp4&quot;<br>}</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>BGM音频文本。</p>
                     */
                    std::string m_bGMText;
                    bool m_bGMTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_EXTRAPARAM_H_
