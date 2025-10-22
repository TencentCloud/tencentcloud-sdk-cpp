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

#ifndef TENCENTCLOUD_VM_V20200709_MODEL_IMAGESEGMENTS_H_
#define TENCENTCLOUD_VM_V20200709_MODEL_IMAGESEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20200709/model/ImageResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            namespace Model
            {
                /**
                * 图片段信息
                */
                class ImageSegments : public AbstractModel
                {
                public:
                    ImageSegments();
                    ~ImageSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截帧时间。
点播文件：该值为相对于视频偏移时间，单位为秒，例如：0，5，10
直播流：该值为时间戳，例如：1594650717
                     * @return OffsetTime 截帧时间。
点播文件：该值为相对于视频偏移时间，单位为秒，例如：0，5，10
直播流：该值为时间戳，例如：1594650717
                     * 
                     */
                    std::string GetOffsetTime() const;

                    /**
                     * 设置截帧时间。
点播文件：该值为相对于视频偏移时间，单位为秒，例如：0，5，10
直播流：该值为时间戳，例如：1594650717
                     * @param _offsetTime 截帧时间。
点播文件：该值为相对于视频偏移时间，单位为秒，例如：0，5，10
直播流：该值为时间戳，例如：1594650717
                     * 
                     */
                    void SetOffsetTime(const std::string& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取画面截帧结果详情
                     * @return Result 画面截帧结果详情
                     * 
                     */
                    ImageResult GetResult() const;

                    /**
                     * 设置画面截帧结果详情
                     * @param _result 画面截帧结果详情
                     * 
                     */
                    void SetResult(const ImageResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 截帧时间。
点播文件：该值为相对于视频偏移时间，单位为秒，例如：0，5，10
直播流：该值为时间戳，例如：1594650717
                     */
                    std::string m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * 画面截帧结果详情
                     */
                    ImageResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_MODEL_IMAGESEGMENTS_H_
