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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Liveness请求参数结构体
                */
                class LivenessRequest : public AbstractModel
                {
                public:
                    LivenessRequest();
                    ~LivenessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * @return VideoBase64 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * @param _videoBase64 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * 
                     */
                    void SetVideoBase64(const std::string& _videoBase64);

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @return LivenessType 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @param _livenessType 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     * 
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取数字模式传参：数字验证码(1234)，需先调用接口获取数字验证码；
动作模式传参：传动作顺序(2,1 or 1,2)，需先调用接口获取动作顺序；
静默模式传参：不需要传递此参数。
                     * @return ValidateData 数字模式传参：数字验证码(1234)，需先调用接口获取数字验证码；
动作模式传参：传动作顺序(2,1 or 1,2)，需先调用接口获取动作顺序；
静默模式传参：不需要传递此参数。
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置数字模式传参：数字验证码(1234)，需先调用接口获取数字验证码；
动作模式传参：传动作顺序(2,1 or 1,2)，需先调用接口获取动作顺序；
静默模式传参：不需要传递此参数。
                     * @param _validateData 数字模式传参：数字验证码(1234)，需先调用接口获取数字验证码；
动作模式传参：传动作顺序(2,1 or 1,2)，需先调用接口获取动作顺序；
静默模式传参：不需要传递此参数。
                     * 
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     * 
                     */
                    bool ValidateDataHasBeenSet() const;

                    /**
                     * 获取额外配置，传入JSON字符串。
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围1-10
}
                     * @return Optional 额外配置，传入JSON字符串。
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围1-10
}
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置额外配置，传入JSON字符串。
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围1-10
}
                     * @param _optional 额外配置，传入JSON字符串。
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围1-10
}
                     * 
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     * 
                     */
                    bool OptionalHasBeenSet() const;

                private:

                    /**
                     * 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * 活体检测类型，取值：LIP/ACTION/SILENT。
LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * 数字模式传参：数字验证码(1234)，需先调用接口获取数字验证码；
动作模式传参：传动作顺序(2,1 or 1,2)，需先调用接口获取动作顺序；
静默模式传参：不需要传递此参数。
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                    /**
                     * 额外配置，传入JSON字符串。
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围1-10
}
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSREQUEST_H_
