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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARSCRIPTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteLiveAvatarScript请求参数结构体
                */
                class DeleteLiveAvatarScriptRequest : public AbstractModel
                {
                public:
                    DeleteLiveAvatarScriptRequest();
                    ~DeleteLiveAvatarScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取话术ID。
                     * @return ScriptId 话术ID。
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置话术ID。
                     * @param _scriptId 话术ID。
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                private:

                    /**
                     * 话术ID。
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEAVATARSCRIPTREQUEST_H_
