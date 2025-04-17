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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_STREAMURLDETAIL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_STREAMURLDETAIL_H_

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
                * 描述 URL 的完整信息
                */
                class StreamUrlDetail : public AbstractModel
                {
                public:
                    StreamUrlDetail();
                    ~StreamUrlDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会描述运营商信息等
                     * @return Label 会描述运营商信息等
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置会描述运营商信息等
                     * @param _label 会描述运营商信息等
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取URL
                     * @return Url URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL
                     * @param _url URL
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
                     * 获取Playback: 拉流播放地址； RelayDestination：转推目的地址；SourceCaptureUrl：回源拉流地址；IngestEndpoint：推流地址
                     * @return Type Playback: 拉流播放地址； RelayDestination：转推目的地址；SourceCaptureUrl：回源拉流地址；IngestEndpoint：推流地址
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Playback: 拉流播放地址； RelayDestination：转推目的地址；SourceCaptureUrl：回源拉流地址；IngestEndpoint：推流地址
                     * @param _type Playback: 拉流播放地址； RelayDestination：转推目的地址；SourceCaptureUrl：回源拉流地址；IngestEndpoint：推流地址
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
                     * 会描述运营商信息等
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Playback: 拉流播放地址； RelayDestination：转推目的地址；SourceCaptureUrl：回源拉流地址；IngestEndpoint：推流地址
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_STREAMURLDETAIL_H_
