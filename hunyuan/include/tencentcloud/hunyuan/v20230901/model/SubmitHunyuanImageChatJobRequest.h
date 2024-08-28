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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANIMAGECHATJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANIMAGECHATJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/LogoParam.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitHunyuanImageChatJob请求参数结构体
                */
                class SubmitHunyuanImageChatJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanImageChatJobRequest();
                    ~SubmitHunyuanImageChatJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本轮对话的文本描述。
提交一个任务请求对应发起一轮生图对话，每轮对话中可输入一条 Prompt，生成一张图像，支持通过多轮输入 Prompt 来不断调整图像内容。
推荐使用中文，最多可传1024个 utf-8 字符。
输入示例：
<li> 第一轮对话：一颗红色的苹果 </li>
<li> 第二轮对话：将苹果改为绿色 </li>
<li> 第三轮对话：苹果放在桌子上 </li>
                     * @return Prompt 本轮对话的文本描述。
提交一个任务请求对应发起一轮生图对话，每轮对话中可输入一条 Prompt，生成一张图像，支持通过多轮输入 Prompt 来不断调整图像内容。
推荐使用中文，最多可传1024个 utf-8 字符。
输入示例：
<li> 第一轮对话：一颗红色的苹果 </li>
<li> 第二轮对话：将苹果改为绿色 </li>
<li> 第三轮对话：苹果放在桌子上 </li>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置本轮对话的文本描述。
提交一个任务请求对应发起一轮生图对话，每轮对话中可输入一条 Prompt，生成一张图像，支持通过多轮输入 Prompt 来不断调整图像内容。
推荐使用中文，最多可传1024个 utf-8 字符。
输入示例：
<li> 第一轮对话：一颗红色的苹果 </li>
<li> 第二轮对话：将苹果改为绿色 </li>
<li> 第三轮对话：苹果放在桌子上 </li>
                     * @param _prompt 本轮对话的文本描述。
提交一个任务请求对应发起一轮生图对话，每轮对话中可输入一条 Prompt，生成一张图像，支持通过多轮输入 Prompt 来不断调整图像内容。
推荐使用中文，最多可传1024个 utf-8 字符。
输入示例：
<li> 第一轮对话：一颗红色的苹果 </li>
<li> 第二轮对话：将苹果改为绿色 </li>
<li> 第三轮对话：苹果放在桌子上 </li>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取上传上一轮对话的 ChatId，本轮对话将在指定的上一轮对话结果基础上继续生成图像。
如果不传代表新建一个对话组，重新开启一轮新的对话。
一个对话组中，最多支持进行100轮对话。
                     * @return ChatId 上传上一轮对话的 ChatId，本轮对话将在指定的上一轮对话结果基础上继续生成图像。
如果不传代表新建一个对话组，重新开启一轮新的对话。
一个对话组中，最多支持进行100轮对话。
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置上传上一轮对话的 ChatId，本轮对话将在指定的上一轮对话结果基础上继续生成图像。
如果不传代表新建一个对话组，重新开启一轮新的对话。
一个对话组中，最多支持进行100轮对话。
                     * @param _chatId 上传上一轮对话的 ChatId，本轮对话将在指定的上一轮对话结果基础上继续生成图像。
如果不传代表新建一个对话组，重新开启一轮新的对话。
一个对话组中，最多支持进行100轮对话。
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @return LogoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @param _logoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * 本轮对话的文本描述。
提交一个任务请求对应发起一轮生图对话，每轮对话中可输入一条 Prompt，生成一张图像，支持通过多轮输入 Prompt 来不断调整图像内容。
推荐使用中文，最多可传1024个 utf-8 字符。
输入示例：
<li> 第一轮对话：一颗红色的苹果 </li>
<li> 第二轮对话：将苹果改为绿色 </li>
<li> 第三轮对话：苹果放在桌子上 </li>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 上传上一轮对话的 ChatId，本轮对话将在指定的上一轮对话结果基础上继续生成图像。
如果不传代表新建一个对话组，重新开启一轮新的对话。
一个对话组中，最多支持进行100轮对话。
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 为生成结果图添加显式水印标识的开关，默认为1。  
1：添加。  
0：不添加。  
其他数值：默认按1处理。  
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANIMAGECHATJOBREQUEST_H_
