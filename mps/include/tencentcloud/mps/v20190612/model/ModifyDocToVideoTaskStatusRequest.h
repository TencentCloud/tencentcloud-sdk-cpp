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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModifyDocToVideoTaskStatusInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyDocToVideoTaskStatus请求参数结构体
                */
                class ModifyDocToVideoTaskStatusRequest : public AbstractModel
                {
                public:
                    ModifyDocToVideoTaskStatusRequest();
                    ~ModifyDocToVideoTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修改AIGC文档生视频任务状态的输入</p>
                     * @return Input <p>修改AIGC文档生视频任务状态的输入</p>
                     * 
                     */
                    ModifyDocToVideoTaskStatusInput GetInput() const;

                    /**
                     * 设置<p>修改AIGC文档生视频任务状态的输入</p>
                     * @param _input <p>修改AIGC文档生视频任务状态的输入</p>
                     * 
                     */
                    void SetInput(const ModifyDocToVideoTaskStatusInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * <p>修改AIGC文档生视频任务状态的输入</p>
                     */
                    ModifyDocToVideoTaskStatusInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYDOCTOVIDEOTASKSTATUSREQUEST_H_
