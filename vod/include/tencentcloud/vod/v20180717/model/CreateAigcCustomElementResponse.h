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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcCustomElement返回参数结构体
                */
                class CreateAigcCustomElementResponse : public AbstractModel
                {
                public:
                    CreateAigcCustomElementResponse();
                    ~CreateAigcCustomElementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主体ID。需自行记录下返回的主体ID。
                     * @return ElementId 主体ID。需自行记录下返回的主体ID。
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                private:

                    /**
                     * 主体ID。需自行记录下返回的主体ID。
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTRESPONSE_H_
