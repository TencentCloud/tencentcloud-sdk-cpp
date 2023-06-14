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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGSDESTINATIONS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGSDESTINATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 创建媒体传输流的输出的RTMP的目标地址。
                */
                class CreateOutputRtmpSettingsDestinations : public AbstractModel
                {
                public:
                    CreateOutputRtmpSettingsDestinations();
                    ~CreateOutputRtmpSettingsDestinations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转推的URL，格式如：rtmp://domain/live。
                     * @return Url 转推的URL，格式如：rtmp://domain/live。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转推的URL，格式如：rtmp://domain/live。
                     * @param _url 转推的URL，格式如：rtmp://domain/live。
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
                     * 获取转推的StreamKey，格式如：stream?key=value。
                     * @return StreamKey 转推的StreamKey，格式如：stream?key=value。
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置转推的StreamKey，格式如：stream?key=value。
                     * @param _streamKey 转推的StreamKey，格式如：stream?key=value。
                     * 
                     */
                    void SetStreamKey(const std::string& _streamKey);

                    /**
                     * 判断参数 StreamKey 是否已赋值
                     * @return StreamKey 是否已赋值
                     * 
                     */
                    bool StreamKeyHasBeenSet() const;

                private:

                    /**
                     * 转推的URL，格式如：rtmp://domain/live。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 转推的StreamKey，格式如：stream?key=value。
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGSDESTINATIONS_H_
