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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOROTATIONMODE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOROTATIONMODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 视频横转竖的控制参数
                */
                class VideoRotationMode : public AbstractModel
                {
                public:
                    VideoRotationMode();
                    ~VideoRotationMode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成的视频是否需要横屏转竖屏。
                     * @return ActiveVideoRotation 生成的视频是否需要横屏转竖屏。
                     * 
                     */
                    bool GetActiveVideoRotation() const;

                    /**
                     * 设置生成的视频是否需要横屏转竖屏。
                     * @param _activeVideoRotation 生成的视频是否需要横屏转竖屏。
                     * 
                     */
                    void SetActiveVideoRotation(const bool& _activeVideoRotation);

                    /**
                     * 判断参数 ActiveVideoRotation 是否已赋值
                     * @return ActiveVideoRotation 是否已赋值
                     * 
                     */
                    bool ActiveVideoRotationHasBeenSet() const;

                private:

                    /**
                     * 生成的视频是否需要横屏转竖屏。
                     */
                    bool m_activeVideoRotation;
                    bool m_activeVideoRotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_VIDEOROTATIONMODE_H_
