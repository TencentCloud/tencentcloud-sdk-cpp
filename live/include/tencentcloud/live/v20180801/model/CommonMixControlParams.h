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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 通用混流控制参数
                */
                class CommonMixControlParams : public AbstractModel
                {
                public:
                    CommonMixControlParams();
                    ~CommonMixControlParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取取值范围[0,1]。
填1时，当参数中图层分辨率参数与视频实际分辨率不一致时，自动从视频中按图层设置的分辨率比例进行裁剪。
                     * @return UseMixCropCenter 取值范围[0,1]。
填1时，当参数中图层分辨率参数与视频实际分辨率不一致时，自动从视频中按图层设置的分辨率比例进行裁剪。
                     */
                    int64_t GetUseMixCropCenter() const;

                    /**
                     * 设置取值范围[0,1]。
填1时，当参数中图层分辨率参数与视频实际分辨率不一致时，自动从视频中按图层设置的分辨率比例进行裁剪。
                     * @param UseMixCropCenter 取值范围[0,1]。
填1时，当参数中图层分辨率参数与视频实际分辨率不一致时，自动从视频中按图层设置的分辨率比例进行裁剪。
                     */
                    void SetUseMixCropCenter(const int64_t& _useMixCropCenter);

                    /**
                     * 判断参数 UseMixCropCenter 是否已赋值
                     * @return UseMixCropCenter 是否已赋值
                     */
                    bool UseMixCropCenterHasBeenSet() const;

                private:

                    /**
                     * 取值范围[0,1]。
填1时，当参数中图层分辨率参数与视频实际分辨率不一致时，自动从视频中按图层设置的分辨率比例进行裁剪。
                     */
                    int64_t m_useMixCropCenter;
                    bool m_useMixCropCenterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXCONTROLPARAMS_H_
