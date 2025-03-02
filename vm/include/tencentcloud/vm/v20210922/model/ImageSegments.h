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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGESEGMENTS_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGESEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/ImageResult.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
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

                    /**
                     * 获取时间
                     * @return CreatedAt 时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置时间
                     * @param _createdAt 时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取截帧毫秒时间
                     * @return OffsetusTime 截帧毫秒时间
                     * 
                     */
                    std::string GetOffsetusTime() const;

                    /**
                     * 设置截帧毫秒时间
                     * @param _offsetusTime 截帧毫秒时间
                     * 
                     */
                    void SetOffsetusTime(const std::string& _offsetusTime);

                    /**
                     * 判断参数 OffsetusTime 是否已赋值
                     * @return OffsetusTime 是否已赋值
                     * 
                     */
                    bool OffsetusTimeHasBeenSet() const;

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

                    /**
                     * 时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 截帧毫秒时间
                     */
                    std::string m_offsetusTime;
                    bool m_offsetusTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGESEGMENTS_H_
