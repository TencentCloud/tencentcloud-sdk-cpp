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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTSIMPLEINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 列部联系人简短信息
                */
                class ExternalContactSimpleInfo : public AbstractModel
                {
                public:
                    ExternalContactSimpleInfo();
                    ~ExternalContactSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部联系人的userId
                     * @return ExternalUserId 外部联系人的userId
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置外部联系人的userId
                     * @param ExternalUserId 外部联系人的userId
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     */
                    bool ExternalUserIdHasBeenSet() const;

                    /**
                     * 获取添加了此外部联系人的企业成员userId
                     * @return UserId 添加了此外部联系人的企业成员userId
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置添加了此外部联系人的企业成员userId
                     * @param UserId 添加了此外部联系人的企业成员userId
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 外部联系人的userId
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                    /**
                     * 添加了此外部联系人的企业成员userId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_EXTERNALCONTACTSIMPLEINFO_H_
