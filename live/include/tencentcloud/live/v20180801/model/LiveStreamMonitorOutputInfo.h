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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITOROUTPUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITOROUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播流监播输出流信息
                */
                class LiveStreamMonitorOutputInfo : public AbstractModel
                {
                public:
                    LiveStreamMonitorOutputInfo();
                    ~LiveStreamMonitorOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监播任务输出流宽度像素。范围[1,1920]。建议至少大于100像素。
                     * @return OutputStreamWidth 监播任务输出流宽度像素。范围[1,1920]。建议至少大于100像素。
                     * 
                     */
                    uint64_t GetOutputStreamWidth() const;

                    /**
                     * 设置监播任务输出流宽度像素。范围[1,1920]。建议至少大于100像素。
                     * @param _outputStreamWidth 监播任务输出流宽度像素。范围[1,1920]。建议至少大于100像素。
                     * 
                     */
                    void SetOutputStreamWidth(const uint64_t& _outputStreamWidth);

                    /**
                     * 判断参数 OutputStreamWidth 是否已赋值
                     * @return OutputStreamWidth 是否已赋值
                     * 
                     */
                    bool OutputStreamWidthHasBeenSet() const;

                    /**
                     * 获取监播任务输出流长度像素。范围[1,1080]，建议至少大于100像素。
                     * @return OutputStreamHeight 监播任务输出流长度像素。范围[1,1080]，建议至少大于100像素。
                     * 
                     */
                    uint64_t GetOutputStreamHeight() const;

                    /**
                     * 设置监播任务输出流长度像素。范围[1,1080]，建议至少大于100像素。
                     * @param _outputStreamHeight 监播任务输出流长度像素。范围[1,1080]，建议至少大于100像素。
                     * 
                     */
                    void SetOutputStreamHeight(const uint64_t& _outputStreamHeight);

                    /**
                     * 判断参数 OutputStreamHeight 是否已赋值
                     * @return OutputStreamHeight 是否已赋值
                     * 
                     */
                    bool OutputStreamHeightHasBeenSet() const;

                    /**
                     * 获取监播任务输出流名称。
不填时，系统会自动生成。
256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * @return OutputStreamName 监播任务输出流名称。
不填时，系统会自动生成。
256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * 
                     */
                    std::string GetOutputStreamName() const;

                    /**
                     * 设置监播任务输出流名称。
不填时，系统会自动生成。
256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * @param _outputStreamName 监播任务输出流名称。
不填时，系统会自动生成。
256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * 
                     */
                    void SetOutputStreamName(const std::string& _outputStreamName);

                    /**
                     * 判断参数 OutputStreamName 是否已赋值
                     * @return OutputStreamName 是否已赋值
                     * 
                     */
                    bool OutputStreamNameHasBeenSet() const;

                    /**
                     * 获取监播任务播放域名。128字节以内，只允许填处于启用状态的播放域名。
                     * @return OutputDomain 监播任务播放域名。128字节以内，只允许填处于启用状态的播放域名。
                     * 
                     */
                    std::string GetOutputDomain() const;

                    /**
                     * 设置监播任务播放域名。128字节以内，只允许填处于启用状态的播放域名。
                     * @param _outputDomain 监播任务播放域名。128字节以内，只允许填处于启用状态的播放域名。
                     * 
                     */
                    void SetOutputDomain(const std::string& _outputDomain);

                    /**
                     * 判断参数 OutputDomain 是否已赋值
                     * @return OutputDomain 是否已赋值
                     * 
                     */
                    bool OutputDomainHasBeenSet() const;

                    /**
                     * 获取监播任务播放路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * @return OutputApp 监播任务播放路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * 
                     */
                    std::string GetOutputApp() const;

                    /**
                     * 设置监播任务播放路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * @param _outputApp 监播任务播放路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     * 
                     */
                    void SetOutputApp(const std::string& _outputApp);

                    /**
                     * 判断参数 OutputApp 是否已赋值
                     * @return OutputApp 是否已赋值
                     * 
                     */
                    bool OutputAppHasBeenSet() const;

                private:

                    /**
                     * 监播任务输出流宽度像素。范围[1,1920]。建议至少大于100像素。
                     */
                    uint64_t m_outputStreamWidth;
                    bool m_outputStreamWidthHasBeenSet;

                    /**
                     * 监播任务输出流长度像素。范围[1,1080]，建议至少大于100像素。
                     */
                    uint64_t m_outputStreamHeight;
                    bool m_outputStreamHeightHasBeenSet;

                    /**
                     * 监播任务输出流名称。
不填时，系统会自动生成。
256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     */
                    std::string m_outputStreamName;
                    bool m_outputStreamNameHasBeenSet;

                    /**
                     * 监播任务播放域名。128字节以内，只允许填处于启用状态的播放域名。
                     */
                    std::string m_outputDomain;
                    bool m_outputDomainHasBeenSet;

                    /**
                     * 监播任务播放路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
                     */
                    std::string m_outputApp;
                    bool m_outputAppHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITOROUTPUTINFO_H_
