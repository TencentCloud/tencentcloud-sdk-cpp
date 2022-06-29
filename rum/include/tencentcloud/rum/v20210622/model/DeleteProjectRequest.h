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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETEPROJECTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteProject请求参数结构体
                */
                class DeleteProjectRequest : public AbstractModel
                {
                public:
                    DeleteProjectRequest();
                    ~DeleteProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的项目 ID
                     * @return ID 需要删除的项目 ID
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置需要删除的项目 ID
                     * @param ID 需要删除的项目 ID
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 需要删除的项目 ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETEPROJECTREQUEST_H_
