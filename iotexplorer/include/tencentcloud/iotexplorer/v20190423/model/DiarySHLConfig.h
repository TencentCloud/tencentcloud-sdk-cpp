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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIARYSHLCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIARYSHLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * Diary Simple Highlight 配置
                */
                class DiarySHLConfig : public AbstractModel
                {
                public:
                    DiarySHLConfig();
                    ~DiarySHLConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每个视频偏移时长，单位秒
                     * @return StartOffset 每个视频偏移时长，单位秒
                     * 
                     */
                    uint64_t GetStartOffset() const;

                    /**
                     * 设置每个视频偏移时长，单位秒
                     * @param _startOffset 每个视频偏移时长，单位秒
                     * 
                     */
                    void SetStartOffset(const uint64_t& _startOffset);

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取视频浓缩倍数，支持1,2,4之间
                     * @return PlaySpeed 视频浓缩倍数，支持1,2,4之间
                     * 
                     */
                    uint64_t GetPlaySpeed() const;

                    /**
                     * 设置视频浓缩倍数，支持1,2,4之间
                     * @param _playSpeed 视频浓缩倍数，支持1,2,4之间
                     * 
                     */
                    void SetPlaySpeed(const uint64_t& _playSpeed);

                    /**
                     * 判断参数 PlaySpeed 是否已赋值
                     * @return PlaySpeed 是否已赋值
                     * 
                     */
                    bool PlaySpeedHasBeenSet() const;

                    /**
                     * 获取单个视频最小提取时长，单位秒
                     * @return MiniExtract 单个视频最小提取时长，单位秒
                     * 
                     */
                    uint64_t GetMiniExtract() const;

                    /**
                     * 设置单个视频最小提取时长，单位秒
                     * @param _miniExtract 单个视频最小提取时长，单位秒
                     * 
                     */
                    void SetMiniExtract(const uint64_t& _miniExtract);

                    /**
                     * 判断参数 MiniExtract 是否已赋值
                     * @return MiniExtract 是否已赋值
                     * 
                     */
                    bool MiniExtractHasBeenSet() const;

                    /**
                     * 获取每天最终输出视频时长，单位秒
注：免费版固定10s
                     * @return OutDuration 每天最终输出视频时长，单位秒
注：免费版固定10s
                     * 
                     */
                    uint64_t GetOutDuration() const;

                    /**
                     * 设置每天最终输出视频时长，单位秒
注：免费版固定10s
                     * @param _outDuration 每天最终输出视频时长，单位秒
注：免费版固定10s
                     * 
                     */
                    void SetOutDuration(const uint64_t& _outDuration);

                    /**
                     * 判断参数 OutDuration 是否已赋值
                     * @return OutDuration 是否已赋值
                     * 
                     */
                    bool OutDurationHasBeenSet() const;

                private:

                    /**
                     * 每个视频偏移时长，单位秒
                     */
                    uint64_t m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 视频浓缩倍数，支持1,2,4之间
                     */
                    uint64_t m_playSpeed;
                    bool m_playSpeedHasBeenSet;

                    /**
                     * 单个视频最小提取时长，单位秒
                     */
                    uint64_t m_miniExtract;
                    bool m_miniExtractHasBeenSet;

                    /**
                     * 每天最终输出视频时长，单位秒
注：免费版固定10s
                     */
                    uint64_t m_outDuration;
                    bool m_outDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DIARYSHLCONFIG_H_
