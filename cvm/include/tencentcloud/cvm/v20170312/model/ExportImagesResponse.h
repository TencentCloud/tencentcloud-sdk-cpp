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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ExportImages返回参数结构体
                */
                class ExportImagesResponse : public AbstractModel
                {
                public:
                    ExportImagesResponse();
                    ~ExportImagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导出镜像任务ID
                     * @return TaskId 导出镜像任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取导出镜像的COS文件名列表。其中，文件名格式如下。
* 系统盘：前缀名_镜像ID_system_快照ID.镜像格式
* 数据盘：前缀名_镜像ID_data_快照ID.镜像格式
                     * @return CosPaths 导出镜像的COS文件名列表。其中，文件名格式如下。
* 系统盘：前缀名_镜像ID_system_快照ID.镜像格式
* 数据盘：前缀名_镜像ID_data_快照ID.镜像格式
                     * 
                     */
                    std::vector<std::string> GetCosPaths() const;

                    /**
                     * 判断参数 CosPaths 是否已赋值
                     * @return CosPaths 是否已赋值
                     * 
                     */
                    bool CosPathsHasBeenSet() const;

                private:

                    /**
                     * 导出镜像任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 导出镜像的COS文件名列表。其中，文件名格式如下。
* 系统盘：前缀名_镜像ID_system_快照ID.镜像格式
* 数据盘：前缀名_镜像ID_data_快照ID.镜像格式
                     */
                    std::vector<std::string> m_cosPaths;
                    bool m_cosPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESRESPONSE_H_
