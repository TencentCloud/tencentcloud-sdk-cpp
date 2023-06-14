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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETERELEASEFILEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETERELEASEFILEREQUEST_H_

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
                * DeleteReleaseFile请求参数结构体
                */
                class DeleteReleaseFileRequest : public AbstractModel
                {
                public:
                    DeleteReleaseFileRequest();
                    ~DeleteReleaseFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件 id
                     * @return ID 文件 id
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置文件 id
                     * @param _iD 文件 id
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 文件 id
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETERELEASEFILEREQUEST_H_
