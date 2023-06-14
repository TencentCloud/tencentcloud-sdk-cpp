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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeScript返回参数结构体
                */
                class DescribeTKEEdgeScriptResponse : public AbstractModel
                {
                public:
                    DescribeTKEEdgeScriptResponse();
                    ~DescribeTKEEdgeScriptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载链接
                     * @return Link 下载链接
                     * 
                     */
                    std::string GetLink() const;

                    /**
                     * 判断参数 Link 是否已赋值
                     * @return Link 是否已赋值
                     * 
                     */
                    bool LinkHasBeenSet() const;

                    /**
                     * 获取下载需要的token
                     * @return Token 下载需要的token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取下载命令
                     * @return Command 下载命令
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取edgectl脚本版本，默认拉取最新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptVersion edgectl脚本版本，默认拉取最新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptVersion() const;

                    /**
                     * 判断参数 ScriptVersion 是否已赋值
                     * @return ScriptVersion 是否已赋值
                     * 
                     */
                    bool ScriptVersionHasBeenSet() const;

                private:

                    /**
                     * 下载链接
                     */
                    std::string m_link;
                    bool m_linkHasBeenSet;

                    /**
                     * 下载需要的token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 下载命令
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * edgectl脚本版本，默认拉取最新版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptVersion;
                    bool m_scriptVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGESCRIPTRESPONSE_H_
