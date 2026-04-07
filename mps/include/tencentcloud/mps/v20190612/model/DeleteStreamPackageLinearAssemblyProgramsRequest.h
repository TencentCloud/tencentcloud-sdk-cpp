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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DeleteStreamPackageLinearAssemblyPrograms请求参数结构体
                */
                class DeleteStreamPackageLinearAssemblyProgramsRequest : public AbstractModel
                {
                public:
                    DeleteStreamPackageLinearAssemblyProgramsRequest();
                    ~DeleteStreamPackageLinearAssemblyProgramsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Program id列表。
                     * @return Ids Program id列表。
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置Program id列表。
                     * @param _ids Program id列表。
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Program id列表。
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETESTREAMPACKAGELINEARASSEMBLYPROGRAMSREQUEST_H_
