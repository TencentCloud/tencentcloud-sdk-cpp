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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMSHAREUSERDATAREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMSHAREUSERDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteDspmShareUserData请求参数结构体
                */
                class DeleteDspmShareUserDataRequest : public AbstractModel
                {
                public:
                    DeleteDspmShareUserDataRequest();
                    ~DeleteDspmShareUserDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户appid
                     * @return DeleteDataAppId 用户appid
                     * 
                     */
                    uint64_t GetDeleteDataAppId() const;

                    /**
                     * 设置用户appid
                     * @param _deleteDataAppId 用户appid
                     * 
                     */
                    void SetDeleteDataAppId(const uint64_t& _deleteDataAppId);

                    /**
                     * 判断参数 DeleteDataAppId 是否已赋值
                     * @return DeleteDataAppId 是否已赋值
                     * 
                     */
                    bool DeleteDataAppIdHasBeenSet() const;

                private:

                    /**
                     * 用户appid
                     */
                    uint64_t m_deleteDataAppId;
                    bool m_deleteDataAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDSPMSHAREUSERDATAREQUEST_H_
