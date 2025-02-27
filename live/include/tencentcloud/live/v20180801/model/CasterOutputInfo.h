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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTEROUTPUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTEROUTPUTINFO_H_

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
                * 导播台推流信息。
当导播台主监启动后，系统将自动将主监推流到腾讯云和其他第三方平台。
                */
                class CasterOutputInfo : public AbstractModel
                {
                public:
                    CasterOutputInfo();
                    ~CasterOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推流信息Index。
当OutputType为1（表示推流到腾讯云直播）时，该值固定为0。
范围[0,10]。
                     * @return OutputIndex 推流信息Index。
当OutputType为1（表示推流到腾讯云直播）时，该值固定为0。
范围[0,10]。
                     * 
                     */
                    uint64_t GetOutputIndex() const;

                    /**
                     * 设置推流信息Index。
当OutputType为1（表示推流到腾讯云直播）时，该值固定为0。
范围[0,10]。
                     * @param _outputIndex 推流信息Index。
当OutputType为1（表示推流到腾讯云直播）时，该值固定为0。
范围[0,10]。
                     * 
                     */
                    void SetOutputIndex(const uint64_t& _outputIndex);

                    /**
                     * 判断参数 OutputIndex 是否已赋值
                     * @return OutputIndex 是否已赋值
                     * 
                     */
                    bool OutputIndexHasBeenSet() const;

                    /**
                     * 获取rtmp协议推流地址。
最大允许长度512字符。
                     * @return OutputUrl rtmp协议推流地址。
最大允许长度512字符。
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 设置rtmp协议推流地址。
最大允许长度512字符。
                     * @param _outputUrl rtmp协议推流地址。
最大允许长度512字符。
                     * 
                     */
                    void SetOutputUrl(const std::string& _outputUrl);

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取描述信息。
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取推流到腾讯云直播源站时，使用的流ID。
仅当OutputType为1时生效。
最大允许128字符。
                     * @return OutputStreamId 推流到腾讯云直播源站时，使用的流ID。
仅当OutputType为1时生效。
最大允许128字符。
                     * 
                     */
                    std::string GetOutputStreamId() const;

                    /**
                     * 设置推流到腾讯云直播源站时，使用的流ID。
仅当OutputType为1时生效。
最大允许128字符。
                     * @param _outputStreamId 推流到腾讯云直播源站时，使用的流ID。
仅当OutputType为1时生效。
最大允许128字符。
                     * 
                     */
                    void SetOutputStreamId(const std::string& _outputStreamId);

                    /**
                     * 判断参数 OutputStreamId 是否已赋值
                     * @return OutputStreamId 是否已赋值
                     * 
                     */
                    bool OutputStreamIdHasBeenSet() const;

                    /**
                     * 获取推流类型。
范围[1,2]
1. 推送到腾讯云直播源站。
2. 推送到第三方源站。
                     * @return OutputType 推流类型。
范围[1,2]
1. 推送到腾讯云直播源站。
2. 推送到第三方源站。
                     * 
                     */
                    uint64_t GetOutputType() const;

                    /**
                     * 设置推流类型。
范围[1,2]
1. 推送到腾讯云直播源站。
2. 推送到第三方源站。
                     * @param _outputType 推流类型。
范围[1,2]
1. 推送到腾讯云直播源站。
2. 推送到第三方源站。
                     * 
                     */
                    void SetOutputType(const uint64_t& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取推到腾讯云直播源站时，使用的域名。
最大允许128字符，且域名需属于当前账号绑定的云直播推流域名。
仅在OutputType为1时生效。
                     * @return OutputDomainName 推到腾讯云直播源站时，使用的域名。
最大允许128字符，且域名需属于当前账号绑定的云直播推流域名。
仅在OutputType为1时生效。
                     * 
                     */
                    std::string GetOutputDomainName() const;

                    /**
                     * 设置推到腾讯云直播源站时，使用的域名。
最大允许128字符，且域名需属于当前账号绑定的云直播推流域名。
仅在OutputType为1时生效。
                     * @param _outputDomainName 推到腾讯云直播源站时，使用的域名。
最大允许128字符，且域名需属于当前账号绑定的云直播推流域名。
仅在OutputType为1时生效。
                     * 
                     */
                    void SetOutputDomainName(const std::string& _outputDomainName);

                    /**
                     * 判断参数 OutputDomainName 是否已赋值
                     * @return OutputDomainName 是否已赋值
                     * 
                     */
                    bool OutputDomainNameHasBeenSet() const;

                    /**
                     * 获取推到腾讯云直播源站时，使用的AppName。
最大允许64字符。
仅在OutputType为1时生效。
                     * @return OutputAppName 推到腾讯云直播源站时，使用的AppName。
最大允许64字符。
仅在OutputType为1时生效。
                     * 
                     */
                    std::string GetOutputAppName() const;

                    /**
                     * 设置推到腾讯云直播源站时，使用的AppName。
最大允许64字符。
仅在OutputType为1时生效。
                     * @param _outputAppName 推到腾讯云直播源站时，使用的AppName。
最大允许64字符。
仅在OutputType为1时生效。
                     * 
                     */
                    void SetOutputAppName(const std::string& _outputAppName);

                    /**
                     * 判断参数 OutputAppName 是否已赋值
                     * @return OutputAppName 是否已赋值
                     * 
                     */
                    bool OutputAppNameHasBeenSet() const;

                    /**
                     * 获取推到腾讯云直播源站时需要添加的推流参数。
最大允许长度256字符。
仅在OutputType为1时生效。
                     * @return OutputParam 推到腾讯云直播源站时需要添加的推流参数。
最大允许长度256字符。
仅在OutputType为1时生效。
                     * 
                     */
                    std::string GetOutputParam() const;

                    /**
                     * 设置推到腾讯云直播源站时需要添加的推流参数。
最大允许长度256字符。
仅在OutputType为1时生效。
                     * @param _outputParam 推到腾讯云直播源站时需要添加的推流参数。
最大允许长度256字符。
仅在OutputType为1时生效。
                     * 
                     */
                    void SetOutputParam(const std::string& _outputParam);

                    /**
                     * 判断参数 OutputParam 是否已赋值
                     * @return OutputParam 是否已赋值
                     * 
                     */
                    bool OutputParamHasBeenSet() const;

                private:

                    /**
                     * 推流信息Index。
当OutputType为1（表示推流到腾讯云直播）时，该值固定为0。
范围[0,10]。
                     */
                    uint64_t m_outputIndex;
                    bool m_outputIndexHasBeenSet;

                    /**
                     * rtmp协议推流地址。
最大允许长度512字符。
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 推流到腾讯云直播源站时，使用的流ID。
仅当OutputType为1时生效。
最大允许128字符。
                     */
                    std::string m_outputStreamId;
                    bool m_outputStreamIdHasBeenSet;

                    /**
                     * 推流类型。
范围[1,2]
1. 推送到腾讯云直播源站。
2. 推送到第三方源站。
                     */
                    uint64_t m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 推到腾讯云直播源站时，使用的域名。
最大允许128字符，且域名需属于当前账号绑定的云直播推流域名。
仅在OutputType为1时生效。
                     */
                    std::string m_outputDomainName;
                    bool m_outputDomainNameHasBeenSet;

                    /**
                     * 推到腾讯云直播源站时，使用的AppName。
最大允许64字符。
仅在OutputType为1时生效。
                     */
                    std::string m_outputAppName;
                    bool m_outputAppNameHasBeenSet;

                    /**
                     * 推到腾讯云直播源站时需要添加的推流参数。
最大允许长度256字符。
仅在OutputType为1时生效。
                     */
                    std::string m_outputParam;
                    bool m_outputParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTEROUTPUTINFO_H_
