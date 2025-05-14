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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/TransDetail.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ImageTranslateLLM返回参数结构体
                */
                class ImageTranslateLLMResponse : public AbstractModel
                {
                public:
                    ImageTranslateLLMResponse();
                    ~ImageTranslateLLMResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取逆时针图片角度，取值范围为0-359
                     * @return Angle 逆时针图片角度，取值范围为0-359
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取翻译详情信息
                     * @return TransDetails 翻译详情信息
                     * 
                     */
                    std::vector<TransDetail> GetTransDetails() const;

                    /**
                     * 判断参数 TransDetails 是否已赋值
                     * @return TransDetails 是否已赋值
                     * 
                     */
                    bool TransDetailsHasBeenSet() const;

                private:

                    /**
                     * 逆时针图片角度，取值范围为0-359
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 翻译详情信息
                     */
                    std::vector<TransDetail> m_transDetails;
                    bool m_transDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_IMAGETRANSLATELLMRESPONSE_H_
