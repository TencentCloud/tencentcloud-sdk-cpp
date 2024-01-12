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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETTDIDBYOBJECTIDREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETTDIDBYOBJECTIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetTDidByObjectId请求参数结构体
                */
                class GetTDidByObjectIdRequest : public AbstractModel
                {
                public:
                    GetTDidByObjectIdRequest();
                    ~GetTDidByObjectIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务层为DID设置的唯一标识
                     * @return ObjectId 业务层为DID设置的唯一标识
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置业务层为DID设置的唯一标识
                     * @param _objectId 业务层为DID设置的唯一标识
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取DID应用Id
                     * @return DAPId DID应用Id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用Id
                     * @param _dAPId DID应用Id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                private:

                    /**
                     * 业务层为DID设置的唯一标识
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * DID应用Id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETTDIDBYOBJECTIDREQUEST_H_
