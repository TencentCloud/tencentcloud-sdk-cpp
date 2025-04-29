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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 渲染移动模式参数，不渲染移动模式时，请勿设置此参数。
                */
                class EmulateMobileParams : public AbstractModel
                {
                public:
                    EmulateMobileParams();
                    ~EmulateMobileParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取移动设备类型，
0: 手机
1: 平板
                     * @return MobileDeviceType 移动设备类型，
0: 手机
1: 平板
                     * 
                     */
                    uint64_t GetMobileDeviceType() const;

                    /**
                     * 设置移动设备类型，
0: 手机
1: 平板
                     * @param _mobileDeviceType 移动设备类型，
0: 手机
1: 平板
                     * 
                     */
                    void SetMobileDeviceType(const uint64_t& _mobileDeviceType);

                    /**
                     * 判断参数 MobileDeviceType 是否已赋值
                     * @return MobileDeviceType 是否已赋值
                     * 
                     */
                    bool MobileDeviceTypeHasBeenSet() const;

                    /**
                     * 获取屏幕方向，
0: 竖屏，
1: 横屏
                     * @return ScreenOrientation 屏幕方向，
0: 竖屏，
1: 横屏
                     * 
                     */
                    uint64_t GetScreenOrientation() const;

                    /**
                     * 设置屏幕方向，
0: 竖屏，
1: 横屏
                     * @param _screenOrientation 屏幕方向，
0: 竖屏，
1: 横屏
                     * 
                     */
                    void SetScreenOrientation(const uint64_t& _screenOrientation);

                    /**
                     * 判断参数 ScreenOrientation 是否已赋值
                     * @return ScreenOrientation 是否已赋值
                     * 
                     */
                    bool ScreenOrientationHasBeenSet() const;

                private:

                    /**
                     * 移动设备类型，
0: 手机
1: 平板
                     */
                    uint64_t m_mobileDeviceType;
                    bool m_mobileDeviceTypeHasBeenSet;

                    /**
                     * 屏幕方向，
0: 竖屏，
1: 横屏
                     */
                    uint64_t m_screenOrientation;
                    bool m_screenOrientationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EMULATEMOBILEPARAMS_H_
