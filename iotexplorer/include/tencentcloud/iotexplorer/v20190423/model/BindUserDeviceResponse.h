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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDUSERDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDUSERDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BindUserDevice返回参数结构体
                */
                class BindUserDeviceResponse : public AbstractModel
                {
                public:
                    BindUserDeviceResponse();
                    ~BindUserDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户 UserID（已存在则复用）</p>
                     * @return UserID <p>用户 UserID（已存在则复用）</p>
                     * 
                     */
                    std::string GetUserID() const;

                    /**
                     * 判断参数 UserID 是否已赋值
                     * @return UserID 是否已赋值
                     * 
                     */
                    bool UserIDHasBeenSet() const;

                    /**
                     * 获取<p>家庭 ID（已存在则复用）</p>
                     * @return FamilyId <p>家庭 ID（已存在则复用）</p>
                     * 
                     */
                    std::string GetFamilyId() const;

                    /**
                     * 判断参数 FamilyId 是否已赋值
                     * @return FamilyId 是否已赋值
                     * 
                     */
                    bool FamilyIdHasBeenSet() const;

                private:

                    /**
                     * <p>用户 UserID（已存在则复用）</p>
                     */
                    std::string m_userID;
                    bool m_userIDHasBeenSet;

                    /**
                     * <p>家庭 ID（已存在则复用）</p>
                     */
                    std::string m_familyId;
                    bool m_familyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BINDUSERDEVICERESPONSE_H_
