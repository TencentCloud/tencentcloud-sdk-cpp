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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_

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
                * 用户注册请求信息
                */
                class BatchUserRequest : public AbstractModel
                {
                public:
                    BatchUserRequest();
                    ~BatchUserRequest() = default;
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
                     * 获取用户名称。

                     * @return Name 用户名称。

                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名称。

                     * @param _name 用户名称。

                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户在客户系统的Id，需要在同一应用下唯一。入参为空时默认赋值为UserId
。
                     * @return OriginId 用户在客户系统的Id，需要在同一应用下唯一。入参为空时默认赋值为UserId
。
                     * 
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置用户在客户系统的Id，需要在同一应用下唯一。入参为空时默认赋值为UserId
。
                     * @param _originId 用户在客户系统的Id，需要在同一应用下唯一。入参为空时默认赋值为UserId
。
                     * 
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     * 
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取用户头像。

                     * @return Avatar 用户头像。

                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置用户头像。

                     * @param _avatar 用户头像。

                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * 低代码互动课堂的SdkAppId。

                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户名称。

                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户在客户系统的Id，需要在同一应用下唯一。入参为空时默认赋值为UserId
。
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 用户头像。

                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHUSERREQUEST_H_
