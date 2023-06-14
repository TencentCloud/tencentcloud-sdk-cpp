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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DeleteScript返回参数结构体
                */
                class DeleteScriptResponse : public AbstractModel
                {
                public:
                    DeleteScriptResponse();
                    ~DeleteScriptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除的脚本数量
                     * @return ScriptsAffected 删除的脚本数量
                     * 
                     */
                    int64_t GetScriptsAffected() const;

                    /**
                     * 判断参数 ScriptsAffected 是否已赋值
                     * @return ScriptsAffected 是否已赋值
                     * 
                     */
                    bool ScriptsAffectedHasBeenSet() const;

                private:

                    /**
                     * 删除的脚本数量
                     */
                    int64_t m_scriptsAffected;
                    bool m_scriptsAffectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DELETESCRIPTRESPONSE_H_
