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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPRESPONSE_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DeployApp返回参数结构体
                */
                class DeployAppResponse : public AbstractModel
                {
                public:
                    DeployAppResponse();
                    ~DeployAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取构建id
                     * @return BuildId 构建id
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取发布错误code
                     * @return DeployErrCode 发布错误code
                     * 
                     */
                    uint64_t GetDeployErrCode() const;

                    /**
                     * 判断参数 DeployErrCode 是否已赋值
                     * @return DeployErrCode 是否已赋值
                     * 
                     */
                    bool DeployErrCodeHasBeenSet() const;

                    /**
                     * 获取发布错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployErrMsg 发布错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployErrMsg() const;

                    /**
                     * 判断参数 DeployErrMsg 是否已赋值
                     * @return DeployErrMsg 是否已赋值
                     * 
                     */
                    bool DeployErrMsgHasBeenSet() const;

                private:

                    /**
                     * 构建id
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * 发布错误code
                     */
                    uint64_t m_deployErrCode;
                    bool m_deployErrCodeHasBeenSet;

                    /**
                     * 发布错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployErrMsg;
                    bool m_deployErrMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DEPLOYAPPRESPONSE_H_
