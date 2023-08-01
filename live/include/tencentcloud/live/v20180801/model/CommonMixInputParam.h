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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CommonMixLayoutParams.h>
#include <tencentcloud/live/v20180801/model/CommonMixCropParams.h>
#include <tencentcloud/live/v20180801/model/MixPortraitSegmentParams.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 通用混流输入参数。
                */
                class CommonMixInputParam : public AbstractModel
                {
                public:
                    CommonMixInputParam();
                    ~CommonMixInputParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入流名称。80字节以内，仅含字母、数字以及下划线的字符串。
当LayoutParams.InputType=0(音视频)/4(纯音频)/5(纯视频)时，该值为需要混流的流名称。
当LayoutParams.InputType=2(图片)/3(画布)时，该值仅用作标识输入，可用类似Canvas1、Pictrue1的名称。
                     * @return InputStreamName 输入流名称。80字节以内，仅含字母、数字以及下划线的字符串。
当LayoutParams.InputType=0(音视频)/4(纯音频)/5(纯视频)时，该值为需要混流的流名称。
当LayoutParams.InputType=2(图片)/3(画布)时，该值仅用作标识输入，可用类似Canvas1、Pictrue1的名称。
                     * 
                     */
                    std::string GetInputStreamName() const;

                    /**
                     * 设置输入流名称。80字节以内，仅含字母、数字以及下划线的字符串。
当LayoutParams.InputType=0(音视频)/4(纯音频)/5(纯视频)时，该值为需要混流的流名称。
当LayoutParams.InputType=2(图片)/3(画布)时，该值仅用作标识输入，可用类似Canvas1、Pictrue1的名称。
                     * @param _inputStreamName 输入流名称。80字节以内，仅含字母、数字以及下划线的字符串。
当LayoutParams.InputType=0(音视频)/4(纯音频)/5(纯视频)时，该值为需要混流的流名称。
当LayoutParams.InputType=2(图片)/3(画布)时，该值仅用作标识输入，可用类似Canvas1、Pictrue1的名称。
                     * 
                     */
                    void SetInputStreamName(const std::string& _inputStreamName);

                    /**
                     * 判断参数 InputStreamName 是否已赋值
                     * @return InputStreamName 是否已赋值
                     * 
                     */
                    bool InputStreamNameHasBeenSet() const;

                    /**
                     * 获取输入流布局参数。
                     * @return LayoutParams 输入流布局参数。
                     * 
                     */
                    CommonMixLayoutParams GetLayoutParams() const;

                    /**
                     * 设置输入流布局参数。
                     * @param _layoutParams 输入流布局参数。
                     * 
                     */
                    void SetLayoutParams(const CommonMixLayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取输入流裁剪参数。
                     * @return CropParams 输入流裁剪参数。
                     * 
                     */
                    CommonMixCropParams GetCropParams() const;

                    /**
                     * 设置输入流裁剪参数。
                     * @param _cropParams 输入流裁剪参数。
                     * 
                     */
                    void SetCropParams(const CommonMixCropParams& _cropParams);

                    /**
                     * 判断参数 CropParams 是否已赋值
                     * @return CropParams 是否已赋值
                     * 
                     */
                    bool CropParamsHasBeenSet() const;

                    /**
                     * 获取抠图参数。
                     * @return PortraitSegmentParams 抠图参数。
                     * 
                     */
                    MixPortraitSegmentParams GetPortraitSegmentParams() const;

                    /**
                     * 设置抠图参数。
                     * @param _portraitSegmentParams 抠图参数。
                     * 
                     */
                    void SetPortraitSegmentParams(const MixPortraitSegmentParams& _portraitSegmentParams);

                    /**
                     * 判断参数 PortraitSegmentParams 是否已赋值
                     * @return PortraitSegmentParams 是否已赋值
                     * 
                     */
                    bool PortraitSegmentParamsHasBeenSet() const;

                private:

                    /**
                     * 输入流名称。80字节以内，仅含字母、数字以及下划线的字符串。
当LayoutParams.InputType=0(音视频)/4(纯音频)/5(纯视频)时，该值为需要混流的流名称。
当LayoutParams.InputType=2(图片)/3(画布)时，该值仅用作标识输入，可用类似Canvas1、Pictrue1的名称。
                     */
                    std::string m_inputStreamName;
                    bool m_inputStreamNameHasBeenSet;

                    /**
                     * 输入流布局参数。
                     */
                    CommonMixLayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * 输入流裁剪参数。
                     */
                    CommonMixCropParams m_cropParams;
                    bool m_cropParamsHasBeenSet;

                    /**
                     * 抠图参数。
                     */
                    MixPortraitSegmentParams m_portraitSegmentParams;
                    bool m_portraitSegmentParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_
