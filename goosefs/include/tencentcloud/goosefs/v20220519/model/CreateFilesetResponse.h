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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * CreateFileset返回参数结构体
                */
                class CreateFilesetResponse : public AbstractModel
                {
                public:
                    CreateFilesetResponse();
                    ~CreateFilesetResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Fileset id
                     * @return FsetId Fileset id
                     * 
                     */
                    std::string GetFsetId() const;

                    /**
                     * 判断参数 FsetId 是否已赋值
                     * @return FsetId 是否已赋值
                     * 
                     */
                    bool FsetIdHasBeenSet() const;

                private:

                    /**
                     * Fileset id
                     */
                    std::string m_fsetId;
                    bool m_fsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETRESPONSE_H_
