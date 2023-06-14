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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 实时录制白板参数，例如白板宽高等
                */
                class Whiteboard : public AbstractModel
                {
                public:
                    Whiteboard();
                    ~Whiteboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时录制结果里白板视频宽，取值必须大于等于2，默认为1280
                     * @return Width 实时录制结果里白板视频宽，取值必须大于等于2，默认为1280
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置实时录制结果里白板视频宽，取值必须大于等于2，默认为1280
                     * @param _width 实时录制结果里白板视频宽，取值必须大于等于2，默认为1280
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取实时录制结果里白板视频高，取值必须大于等于2，默认为960
                     * @return Height 实时录制结果里白板视频高，取值必须大于等于2，默认为960
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置实时录制结果里白板视频高，取值必须大于等于2，默认为960
                     * @param _height 实时录制结果里白板视频高，取值必须大于等于2，默认为960
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取白板初始化参数，透传到白板 SDK
                     * @return InitParam 白板初始化参数，透传到白板 SDK
                     * 
                     */
                    std::string GetInitParam() const;

                    /**
                     * 设置白板初始化参数，透传到白板 SDK
                     * @param _initParam 白板初始化参数，透传到白板 SDK
                     * 
                     */
                    void SetInitParam(const std::string& _initParam);

                    /**
                     * 判断参数 InitParam 是否已赋值
                     * @return InitParam 是否已赋值
                     * 
                     */
                    bool InitParamHasBeenSet() const;

                private:

                    /**
                     * 实时录制结果里白板视频宽，取值必须大于等于2，默认为1280
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 实时录制结果里白板视频高，取值必须大于等于2，默认为960
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 白板初始化参数，透传到白板 SDK
                     */
                    std::string m_initParam;
                    bool m_initParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARD_H_
