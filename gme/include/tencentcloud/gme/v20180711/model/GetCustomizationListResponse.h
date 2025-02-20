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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/CustomizationConfigs.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * GetCustomizationList返回参数结构体
                */
                class GetCustomizationListResponse : public AbstractModel
                {
                public:
                    GetCustomizationListResponse();
                    ~GetCustomizationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取语音消息转文本热句模型配置
                     * @return CustomizationConfigs 语音消息转文本热句模型配置
                     * 
                     */
                    std::vector<CustomizationConfigs> GetCustomizationConfigs() const;

                    /**
                     * 判断参数 CustomizationConfigs 是否已赋值
                     * @return CustomizationConfigs 是否已赋值
                     * 
                     */
                    bool CustomizationConfigsHasBeenSet() const;

                private:

                    /**
                     * 语音消息转文本热句模型配置
                     */
                    std::vector<CustomizationConfigs> m_customizationConfigs;
                    bool m_customizationConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_GETCUSTOMIZATIONLISTRESPONSE_H_
