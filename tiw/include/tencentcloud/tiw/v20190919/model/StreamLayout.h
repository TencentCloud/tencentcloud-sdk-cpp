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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/LayoutParams.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 流布局参数
                */
                class StreamLayout : public AbstractModel
                {
                public:
                    StreamLayout();
                    ~StreamLayout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流布局配置参数
                     * @return LayoutParams 流布局配置参数
                     * 
                     */
                    LayoutParams GetLayoutParams() const;

                    /**
                     * 设置流布局配置参数
                     * @param _layoutParams 流布局配置参数
                     * 
                     */
                    void SetLayoutParams(const LayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取视频流ID
流ID的取值含义如下：
1. tic_record_user - 表示当前画面用于显示白板视频流
2. tic_substream - 表示当前画面用于显示辅路视频流
3. 特定用户ID - 表示当前画面用于显示指定用户的视频流
4. 不填 - 表示当前画面用于备选，当有新的视频流加入时，会从这些备选的空位中选择一个没有被占用的位置来显示新的视频流画面
                     * @return InputStreamId 视频流ID
流ID的取值含义如下：
1. tic_record_user - 表示当前画面用于显示白板视频流
2. tic_substream - 表示当前画面用于显示辅路视频流
3. 特定用户ID - 表示当前画面用于显示指定用户的视频流
4. 不填 - 表示当前画面用于备选，当有新的视频流加入时，会从这些备选的空位中选择一个没有被占用的位置来显示新的视频流画面
                     * 
                     */
                    std::string GetInputStreamId() const;

                    /**
                     * 设置视频流ID
流ID的取值含义如下：
1. tic_record_user - 表示当前画面用于显示白板视频流
2. tic_substream - 表示当前画面用于显示辅路视频流
3. 特定用户ID - 表示当前画面用于显示指定用户的视频流
4. 不填 - 表示当前画面用于备选，当有新的视频流加入时，会从这些备选的空位中选择一个没有被占用的位置来显示新的视频流画面
                     * @param _inputStreamId 视频流ID
流ID的取值含义如下：
1. tic_record_user - 表示当前画面用于显示白板视频流
2. tic_substream - 表示当前画面用于显示辅路视频流
3. 特定用户ID - 表示当前画面用于显示指定用户的视频流
4. 不填 - 表示当前画面用于备选，当有新的视频流加入时，会从这些备选的空位中选择一个没有被占用的位置来显示新的视频流画面
                     * 
                     */
                    void SetInputStreamId(const std::string& _inputStreamId);

                    /**
                     * 判断参数 InputStreamId 是否已赋值
                     * @return InputStreamId 是否已赋值
                     * 
                     */
                    bool InputStreamIdHasBeenSet() const;

                    /**
                     * 获取背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * @return BackgroundColor 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * 
                     */
                    std::string GetBackgroundColor() const;

                    /**
                     * 设置背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * @param _backgroundColor 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     * 
                     */
                    void SetBackgroundColor(const std::string& _backgroundColor);

                    /**
                     * 判断参数 BackgroundColor 是否已赋值
                     * @return BackgroundColor 是否已赋值
                     * 
                     */
                    bool BackgroundColorHasBeenSet() const;

                    /**
                     * 获取视频画面填充模式。

0 - 自适应模式，对视频画面进行等比例缩放，在指定区域内显示完整的画面。此模式可能存在黑边。
1 - 全屏模式，对视频画面进行等比例缩放，让画面填充满整个指定区域。此模式不会存在黑边，但会将超出区域的那一部分画面裁剪掉。
                     * @return FillMode 视频画面填充模式。

0 - 自适应模式，对视频画面进行等比例缩放，在指定区域内显示完整的画面。此模式可能存在黑边。
1 - 全屏模式，对视频画面进行等比例缩放，让画面填充满整个指定区域。此模式不会存在黑边，但会将超出区域的那一部分画面裁剪掉。
                     * 
                     */
                    int64_t GetFillMode() const;

                    /**
                     * 设置视频画面填充模式。

0 - 自适应模式，对视频画面进行等比例缩放，在指定区域内显示完整的画面。此模式可能存在黑边。
1 - 全屏模式，对视频画面进行等比例缩放，让画面填充满整个指定区域。此模式不会存在黑边，但会将超出区域的那一部分画面裁剪掉。
                     * @param _fillMode 视频画面填充模式。

0 - 自适应模式，对视频画面进行等比例缩放，在指定区域内显示完整的画面。此模式可能存在黑边。
1 - 全屏模式，对视频画面进行等比例缩放，让画面填充满整个指定区域。此模式不会存在黑边，但会将超出区域的那一部分画面裁剪掉。
                     * 
                     */
                    void SetFillMode(const int64_t& _fillMode);

                    /**
                     * 判断参数 FillMode 是否已赋值
                     * @return FillMode 是否已赋值
                     * 
                     */
                    bool FillModeHasBeenSet() const;

                private:

                    /**
                     * 流布局配置参数
                     */
                    LayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * 视频流ID
流ID的取值含义如下：
1. tic_record_user - 表示当前画面用于显示白板视频流
2. tic_substream - 表示当前画面用于显示辅路视频流
3. 特定用户ID - 表示当前画面用于显示指定用户的视频流
4. 不填 - 表示当前画面用于备选，当有新的视频流加入时，会从这些备选的空位中选择一个没有被占用的位置来显示新的视频流画面
                     */
                    std::string m_inputStreamId;
                    bool m_inputStreamIdHasBeenSet;

                    /**
                     * 背景颜色，默认为黑色，格式为RGB格式，如红色为"#FF0000"
                     */
                    std::string m_backgroundColor;
                    bool m_backgroundColorHasBeenSet;

                    /**
                     * 视频画面填充模式。

0 - 自适应模式，对视频画面进行等比例缩放，在指定区域内显示完整的画面。此模式可能存在黑边。
1 - 全屏模式，对视频画面进行等比例缩放，让画面填充满整个指定区域。此模式不会存在黑边，但会将超出区域的那一部分画面裁剪掉。
                     */
                    int64_t m_fillMode;
                    bool m_fillModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_STREAMLAYOUT_H_
