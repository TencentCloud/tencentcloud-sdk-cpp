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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWTOOLNODEOUTPUTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWTOOLNODEOUTPUTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SaveWorkflowToolNodeOutput返回参数结构体
                */
                class SaveWorkflowToolNodeOutputResponse : public AbstractModel
                {
                public:
                    SaveWorkflowToolNodeOutputResponse();
                    ~SaveWorkflowToolNodeOutputResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>状态码</p><p>枚举值：</p><ul><li>0： 成功</li><li>1000： 失败</li></ul>
                     * @return Code <p>状态码</p><p>枚举值：</p><ul><li>0： 成功</li><li>1000： 失败</li></ul>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>错误描述</p>
                     * @return Msg <p>错误描述</p>
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * <p>状态码</p><p>枚举值：</p><ul><li>0： 成功</li><li>1000： 失败</li></ul>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>错误描述</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SAVEWORKFLOWTOOLNODEOUTPUTRESPONSE_H_
