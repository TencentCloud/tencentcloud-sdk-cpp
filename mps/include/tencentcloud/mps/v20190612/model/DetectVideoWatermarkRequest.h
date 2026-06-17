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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DetectVideoWatermark请求参数结构体
                */
                class DetectVideoWatermarkRequest : public AbstractModel
                {
                public:
                    DetectVideoWatermarkRequest();
                    ~DetectVideoWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入信息，当前仅支持 URL、COS</p>
                     * @return InputInfo <p>输入信息，当前仅支持 URL、COS</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>输入信息，当前仅支持 URL、COS</p>
                     * @param _inputInfo <p>输入信息，当前仅支持 URL、COS</p>
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数，默认不填</p>
                     * @return UserExtPara <p>扩展参数，默认不填</p>
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置<p>扩展参数，默认不填</p>
                     * @param _userExtPara <p>扩展参数，默认不填</p>
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                private:

                    /**
                     * <p>输入信息，当前仅支持 URL、COS</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>扩展参数，默认不填</p>
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DETECTVIDEOWATERMARKREQUEST_H_
