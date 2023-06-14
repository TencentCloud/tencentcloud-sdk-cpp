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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICDEFINITIONINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICDEFINITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 直播互动歌曲规格信息。
                */
                class KTVMusicDefinitionInfo : public AbstractModel
                {
                public:
                    KTVMusicDefinitionInfo();
                    ~KTVMusicDefinitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格，取值有：
<li>audio/mi：低规格；</li>
<li>audio/lo：中规格；</li>
<li>audio/hi：高规格。</li>
                     * @return Definition 规格，取值有：
<li>audio/mi：低规格；</li>
<li>audio/lo：中规格；</li>
<li>audio/hi：高规格。</li>
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置规格，取值有：
<li>audio/mi：低规格；</li>
<li>audio/lo：中规格；</li>
<li>audio/hi：高规格。</li>
                     * @param _definition 规格，取值有：
<li>audio/mi：低规格；</li>
<li>audio/lo：中规格；</li>
<li>audio/hi：高规格。</li>
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取码率，单位为 bps。
                     * @return Bitrate 码率，单位为 bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置码率，单位为 bps。
                     * @param _bitrate 码率，单位为 bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取文件大小，单位为字节。
                     * @return Size 文件大小，单位为字节。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小，单位为字节。
                     * @param _size 文件大小，单位为字节。
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
                     * 规格，取值有：
<li>audio/mi：低规格；</li>
<li>audio/lo：中规格；</li>
<li>audio/hi：高规格。</li>
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 码率，单位为 bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 文件大小，单位为字节。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICDEFINITIONINFO_H_
