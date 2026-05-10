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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSEraseArea.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能擦除，指定擦除区域配置。
对指定时间段内的指定区域直接进行擦除。
当BeginMs和EndMs均取0时对整个视频内的指定区域直接进行擦除。
                */
                class MPSEraseTimeArea : public AbstractModel
                {
                public:
                    MPSEraseTimeArea();
                    ~MPSEraseTimeArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>开始时间，单位:毫秒</p>
                     * @return BeginMs <p>开始时间，单位:毫秒</p>
                     * 
                     */
                    uint64_t GetBeginMs() const;

                    /**
                     * 设置<p>开始时间，单位:毫秒</p>
                     * @param _beginMs <p>开始时间，单位:毫秒</p>
                     * 
                     */
                    void SetBeginMs(const uint64_t& _beginMs);

                    /**
                     * 判断参数 BeginMs 是否已赋值
                     * @return BeginMs 是否已赋值
                     * 
                     */
                    bool BeginMsHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，单位:毫秒</p>
                     * @return EndMs <p>结束时间，单位:毫秒</p>
                     * 
                     */
                    uint64_t GetEndMs() const;

                    /**
                     * 设置<p>结束时间，单位:毫秒</p>
                     * @param _endMs <p>结束时间，单位:毫秒</p>
                     * 
                     */
                    void SetEndMs(const uint64_t& _endMs);

                    /**
                     * 判断参数 EndMs 是否已赋值
                     * @return EndMs 是否已赋值
                     * 
                     */
                    bool EndMsHasBeenSet() const;

                    /**
                     * 获取<p>时间段内擦除区域列表</p>
                     * @return Areas <p>时间段内擦除区域列表</p>
                     * 
                     */
                    std::vector<MPSEraseArea> GetAreas() const;

                    /**
                     * 设置<p>时间段内擦除区域列表</p>
                     * @param _areas <p>时间段内擦除区域列表</p>
                     * 
                     */
                    void SetAreas(const std::vector<MPSEraseArea>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间，单位:毫秒</p>
                     */
                    uint64_t m_beginMs;
                    bool m_beginMsHasBeenSet;

                    /**
                     * <p>结束时间，单位:毫秒</p>
                     */
                    uint64_t m_endMs;
                    bool m_endMsHasBeenSet;

                    /**
                     * <p>时间段内擦除区域列表</p>
                     */
                    std::vector<MPSEraseArea> m_areas;
                    bool m_areasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSERASETIMEAREA_H_
