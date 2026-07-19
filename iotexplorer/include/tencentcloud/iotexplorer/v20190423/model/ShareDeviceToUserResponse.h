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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERRESPONSE_H_

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
                * ShareDeviceToUser返回参数结构体
                */
                class ShareDeviceToUserResponse : public AbstractModel
                {
                public:
                    ShareDeviceToUserResponse();
                    ~ShareDeviceToUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Owner 的 UserID</p>
                     * @return OwnerUserID <p>Owner 的 UserID</p>
                     * 
                     */
                    std::string GetOwnerUserID() const;

                    /**
                     * 判断参数 OwnerUserID 是否已赋值
                     * @return OwnerUserID 是否已赋值
                     * 
                     */
                    bool OwnerUserIDHasBeenSet() const;

                    /**
                     * 获取<p>被分享用户的 UserID</p>
                     * @return ToUserID <p>被分享用户的 UserID</p>
                     * 
                     */
                    std::string GetToUserID() const;

                    /**
                     * 判断参数 ToUserID 是否已赋值
                     * @return ToUserID 是否已赋值
                     * 
                     */
                    bool ToUserIDHasBeenSet() const;

                private:

                    /**
                     * <p>Owner 的 UserID</p>
                     */
                    std::string m_ownerUserID;
                    bool m_ownerUserIDHasBeenSet;

                    /**
                     * <p>被分享用户的 UserID</p>
                     */
                    std::string m_toUserID;
                    bool m_toUserIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SHAREDEVICETOUSERRESPONSE_H_
