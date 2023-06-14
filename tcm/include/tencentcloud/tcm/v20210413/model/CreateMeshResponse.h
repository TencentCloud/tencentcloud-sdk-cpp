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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHRESPONSE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * CreateMesh返回参数结构体
                */
                class CreateMeshResponse : public AbstractModel
                {
                public:
                    CreateMeshResponse();
                    ~CreateMeshResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的Mesh的Id
                     * @return MeshId 创建的Mesh的Id
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 判断参数 MeshId 是否已赋值
                     * @return MeshId 是否已赋值
                     * 
                     */
                    bool MeshIdHasBeenSet() const;

                private:

                    /**
                     * 创建的Mesh的Id
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CREATEMESHRESPONSE_H_
