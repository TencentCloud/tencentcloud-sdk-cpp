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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OBJECT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 对象
                */
                class Object : public AbstractModel
                {
                public:
                    Object();
                    ~Object() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象id
                     * @return ObjectId 对象id
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置对象id
                     * @param _objectId 对象id
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
                     * 获取成员appid
                     * @return MemberAppId 成员appid
                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置成员appid
                     * @param _memberAppId 成员appid
                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取成员uin
                     * @return MemberUin 成员uin
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置成员uin
                     * @param _memberUin 成员uin
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取成员昵称
                     * @return MemberNickName 成员昵称
                     * 
                     */
                    std::string GetMemberNickName() const;

                    /**
                     * 设置成员昵称
                     * @param _memberNickName 成员昵称
                     * 
                     */
                    void SetMemberNickName(const std::string& _memberNickName);

                    /**
                     * 判断参数 MemberNickName 是否已赋值
                     * @return MemberNickName 是否已赋值
                     * 
                     */
                    bool MemberNickNameHasBeenSet() const;

                private:

                    /**
                     * 对象id
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 成员appid
                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * 成员uin
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 成员昵称
                     */
                    std::string m_memberNickName;
                    bool m_memberNickNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OBJECT_H_
