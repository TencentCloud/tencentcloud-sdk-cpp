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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASERESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateDDoSPolicyCase返回参数结构体
                */
                class CreateDDoSPolicyCaseResponse : public AbstractModel
                {
                public:
                    CreateDDoSPolicyCaseResponse();
                    ~CreateDDoSPolicyCaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略场景ID
                     * @return SceneId 策略场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                private:

                    /**
                     * 策略场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASERESPONSE_H_
