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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetTag返回参数结构体
                */
                class ModifyAssetTagResponse : public AbstractModel
                {
                public:
                    ModifyAssetTagResponse();
                    ~ModifyAssetTagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>状态码</p>
                     * @return Code <p>状态码</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>信息</p>
                     * @return Message <p>信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>该打标规则是否在执行中</p>
                     * @return HasRunningApply <p>该打标规则是否在执行中</p>
                     * 
                     */
                    bool GetHasRunningApply() const;

                    /**
                     * 判断参数 HasRunningApply 是否已赋值
                     * @return HasRunningApply 是否已赋值
                     * 
                     */
                    bool HasRunningApplyHasBeenSet() const;

                private:

                    /**
                     * <p>状态码</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>该打标规则是否在执行中</p>
                     */
                    bool m_hasRunningApply;
                    bool m_hasRunningApplyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGRESPONSE_H_
