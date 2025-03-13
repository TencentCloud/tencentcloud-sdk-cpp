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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTIMELINE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTIMELINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 云录像时间片段
                */
                class RecordTimeLine : public AbstractModel
                {
                public:
                    RecordTimeLine();
                    ~RecordTimeLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间片段开始时间，UTC秒数，例如：1662114146
                     * @return Begin 时间片段开始时间，UTC秒数，例如：1662114146
                     * 
                     */
                    uint64_t GetBegin() const;

                    /**
                     * 设置时间片段开始时间，UTC秒数，例如：1662114146
                     * @param _begin 时间片段开始时间，UTC秒数，例如：1662114146
                     * 
                     */
                    void SetBegin(const uint64_t& _begin);

                    /**
                     * 判断参数 Begin 是否已赋值
                     * @return Begin 是否已赋值
                     * 
                     */
                    bool BeginHasBeenSet() const;

                    /**
                     * 获取时间片段结束时间，UTC秒数，例如：1662114146
                     * @return End 时间片段结束时间，UTC秒数，例如：1662114146
                     * 
                     */
                    uint64_t GetEnd() const;

                    /**
                     * 设置时间片段结束时间，UTC秒数，例如：1662114146
                     * @param _end 时间片段结束时间，UTC秒数，例如：1662114146
                     * 
                     */
                    void SetEnd(const uint64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取对应时间片段的播放url
                     * @return HlsUrl 对应时间片段的播放url
                     * 
                     */
                    std::string GetHlsUrl() const;

                    /**
                     * 设置对应时间片段的播放url
                     * @param _hlsUrl 对应时间片段的播放url
                     * 
                     */
                    void SetHlsUrl(const std::string& _hlsUrl);

                    /**
                     * 判断参数 HlsUrl 是否已赋值
                     * @return HlsUrl 是否已赋值
                     * 
                     */
                    bool HlsUrlHasBeenSet() const;

                private:

                    /**
                     * 时间片段开始时间，UTC秒数，例如：1662114146
                     */
                    uint64_t m_begin;
                    bool m_beginHasBeenSet;

                    /**
                     * 时间片段结束时间，UTC秒数，例如：1662114146
                     */
                    uint64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 对应时间片段的播放url
                     */
                    std::string m_hlsUrl;
                    bool m_hlsUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDTIMELINE_H_
