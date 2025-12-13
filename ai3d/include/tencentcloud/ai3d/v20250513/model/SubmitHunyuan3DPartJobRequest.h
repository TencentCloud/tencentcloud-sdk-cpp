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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitHunyuan3DPartJob请求参数结构体
                */
                class SubmitHunyuan3DPartJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuan3DPartJobRequest();
                    ~SubmitHunyuan3DPartJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需进行组件生成的3D模型文件，仅支持FBX格式。
                     * @return File 需进行组件生成的3D模型文件，仅支持FBX格式。
                     * 
                     */
                    InputFile3D GetFile() const;

                    /**
                     * 设置需进行组件生成的3D模型文件，仅支持FBX格式。
                     * @param _file 需进行组件生成的3D模型文件，仅支持FBX格式。
                     * 
                     */
                    void SetFile(const InputFile3D& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * 需进行组件生成的3D模型文件，仅支持FBX格式。
                     */
                    InputFile3D m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITHUNYUAN3DPARTJOBREQUEST_H_
