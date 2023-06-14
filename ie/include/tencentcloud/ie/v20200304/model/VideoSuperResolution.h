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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_VIDEOSUPERRESOLUTION_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_VIDEOSUPERRESOLUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 视频超分
                */
                class VideoSuperResolution : public AbstractModel
                {
                public:
                    VideoSuperResolution();
                    ~VideoSuperResolution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取超分视频类型：可选值：lq,hq
lq: 针对低清晰度有较多噪声视频的超分;
hq: 针对高清晰度视频超分;
默认取值：lq。
                     * @return Type 超分视频类型：可选值：lq,hq
lq: 针对低清晰度有较多噪声视频的超分;
hq: 针对高清晰度视频超分;
默认取值：lq。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置超分视频类型：可选值：lq,hq
lq: 针对低清晰度有较多噪声视频的超分;
hq: 针对高清晰度视频超分;
默认取值：lq。
                     * @param _type 超分视频类型：可选值：lq,hq
lq: 针对低清晰度有较多噪声视频的超分;
hq: 针对高清晰度视频超分;
默认取值：lq。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取超分倍数，可选值：2。
注意：当前只支持两倍超分。
                     * @return Size 超分倍数，可选值：2。
注意：当前只支持两倍超分。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置超分倍数，可选值：2。
注意：当前只支持两倍超分。
                     * @param _size 超分倍数，可选值：2。
注意：当前只支持两倍超分。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 超分视频类型：可选值：lq,hq
lq: 针对低清晰度有较多噪声视频的超分;
hq: 针对高清晰度视频超分;
默认取值：lq。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 超分倍数，可选值：2。
注意：当前只支持两倍超分。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_VIDEOSUPERRESOLUTION_H_
