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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SmallVideoLayoutParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCU混流布局参数
                */
                class LayoutParams : public AbstractModel
                {
                public:
                    LayoutParams();
                    ~LayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板。
                     * @return Template 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板。
                     */
                    uint64_t GetTemplate() const;

                    /**
                     * 设置混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板。
                     * @param Template 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板。
                     */
                    void SetTemplate(const uint64_t& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * @return MainVideoUserId 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     */
                    std::string GetMainVideoUserId() const;

                    /**
                     * 设置屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * @param MainVideoUserId 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     */
                    void SetMainVideoUserId(const std::string& _mainVideoUserId);

                    /**
                     * 判断参数 MainVideoUserId 是否已赋值
                     * @return MainVideoUserId 是否已赋值
                     */
                    bool MainVideoUserIdHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * @return MainVideoStreamType 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     */
                    uint64_t GetMainVideoStreamType() const;

                    /**
                     * 设置屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * @param MainVideoStreamType 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     */
                    void SetMainVideoStreamType(const uint64_t& _mainVideoStreamType);

                    /**
                     * 判断参数 MainVideoStreamType 是否已赋值
                     * @return MainVideoStreamType 是否已赋值
                     */
                    bool MainVideoStreamTypeHasBeenSet() const;

                    /**
                     * 获取画中画模板中有效，代表小画面的布局参数。
                     * @return SmallVideoLayoutParams 画中画模板中有效，代表小画面的布局参数。
                     */
                    SmallVideoLayoutParams GetSmallVideoLayoutParams() const;

                    /**
                     * 设置画中画模板中有效，代表小画面的布局参数。
                     * @param SmallVideoLayoutParams 画中画模板中有效，代表小画面的布局参数。
                     */
                    void SetSmallVideoLayoutParams(const SmallVideoLayoutParams& _smallVideoLayoutParams);

                    /**
                     * 判断参数 SmallVideoLayoutParams 是否已赋值
                     * @return SmallVideoLayoutParams 是否已赋值
                     */
                    bool SmallVideoLayoutParamsHasBeenSet() const;

                private:

                    /**
                     * 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板。
                     */
                    uint64_t m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     */
                    std::string m_mainVideoUserId;
                    bool m_mainVideoUserIdHasBeenSet;

                    /**
                     * 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     */
                    uint64_t m_mainVideoStreamType;
                    bool m_mainVideoStreamTypeHasBeenSet;

                    /**
                     * 画中画模板中有效，代表小画面的布局参数。
                     */
                    SmallVideoLayoutParams m_smallVideoLayoutParams;
                    bool m_smallVideoLayoutParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
