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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoInput.h>
#include <tencentcloud/mps/v20190612/model/DocToVideoCosInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateDocToVideoTask请求参数结构体
                */
                class CreateDocToVideoTaskRequest : public AbstractModel
                {
                public:
                    CreateDocToVideoTaskRequest();
                    ~CreateDocToVideoTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AIGC文档生成视频的输入信息</p>
                     * @return Input <p>AIGC文档生成视频的输入信息</p>
                     * 
                     */
                    DocToVideoInput GetInput() const;

                    /**
                     * 设置<p>AIGC文档生成视频的输入信息</p>
                     * @param _input <p>AIGC文档生成视频的输入信息</p>
                     * 
                     */
                    void SetInput(const DocToVideoInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>用户cos信息，用于保存生成结果</p>
                     * @return CosInfo <p>用户cos信息，用于保存生成结果</p>
                     * 
                     */
                    DocToVideoCosInfo GetCosInfo() const;

                    /**
                     * 设置<p>用户cos信息，用于保存生成结果</p>
                     * @param _cosInfo <p>用户cos信息，用于保存生成结果</p>
                     * 
                     */
                    void SetCosInfo(const DocToVideoCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC文档生成视频的输入信息</p>
                     */
                    DocToVideoInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>用户cos信息，用于保存生成结果</p>
                     */
                    DocToVideoCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEDOCTOVIDEOTASKREQUEST_H_
