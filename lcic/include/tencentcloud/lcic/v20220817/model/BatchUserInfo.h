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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 批量注册用户信息
                */
                class BatchUserInfo : public AbstractModel
                {
                public:
                    BatchUserInfo();
                    ~BatchUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取低代码互动课堂的SdkAppId。

                     * @return SdkAppId 低代码互动课堂的SdkAppId。

                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。

                     * @param _sdkAppId 低代码互动课堂的SdkAppId。

                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取用户ID。
                     * @return UserId 用户ID。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID。
                     * @param _userId 用户ID。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户在客户系统的Id。 若用户注册时该字段为空，则默认为 UserId 值一致。
                     * @return OriginId 用户在客户系统的Id。 若用户注册时该字段为空，则默认为 UserId 值一致。
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置用户在客户系统的Id。 若用户注册时该字段为空，则默认为 UserId 值一致。
                     * @param _originId 用户在客户系统的Id。 若用户注册时该字段为空，则默认为 UserId 值一致。
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户ID。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户在客户系统的Id。 若用户注册时该字段为空，则默认为 UserId 值一致。
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERINFO_H_
