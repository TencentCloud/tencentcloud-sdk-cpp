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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ImportMaterial返回参数结构体
                */
                class ImportMaterialResponse : public AbstractModel
                {
                public:
                    ImportMaterialResponse();
                    ~ImportMaterialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体 Id。
                     * @return MaterialId 媒体 Id。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取媒体文件预处理任务 ID，如果未指定发起预处理任务则为空。
                     * @return PreProcessTaskId 媒体文件预处理任务 ID，如果未指定发起预处理任务则为空。
                     * 
                     */
                    std::string GetPreProcessTaskId() const;

                    /**
                     * 判断参数 PreProcessTaskId 是否已赋值
                     * @return PreProcessTaskId 是否已赋值
                     * 
                     */
                    bool PreProcessTaskIdHasBeenSet() const;

                private:

                    /**
                     * 媒体 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 媒体文件预处理任务 ID，如果未指定发起预处理任务则为空。
                     */
                    std::string m_preProcessTaskId;
                    bool m_preProcessTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_IMPORTMATERIALRESPONSE_H_
