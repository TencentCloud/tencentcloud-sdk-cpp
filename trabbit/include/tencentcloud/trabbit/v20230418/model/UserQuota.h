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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_USERQUOTA_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_USERQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 用户数配额
                */
                class UserQuota : public AbstractModel
                {
                public:
                    UserQuota();
                    ~UserQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大用户数
                     * @return MaxUser 最大用户数
                     * 
                     */
                    int64_t GetMaxUser() const;

                    /**
                     * 设置最大用户数
                     * @param _maxUser 最大用户数
                     * 
                     */
                    void SetMaxUser(const int64_t& _maxUser);

                    /**
                     * 判断参数 MaxUser 是否已赋值
                     * @return MaxUser 是否已赋值
                     * 
                     */
                    bool MaxUserHasBeenSet() const;

                    /**
                     * 获取已用用户数
                     * @return UsedUser 已用用户数
                     * 
                     */
                    int64_t GetUsedUser() const;

                    /**
                     * 设置已用用户数
                     * @param _usedUser 已用用户数
                     * 
                     */
                    void SetUsedUser(const int64_t& _usedUser);

                    /**
                     * 判断参数 UsedUser 是否已赋值
                     * @return UsedUser 是否已赋值
                     * 
                     */
                    bool UsedUserHasBeenSet() const;

                private:

                    /**
                     * 最大用户数
                     */
                    int64_t m_maxUser;
                    bool m_maxUserHasBeenSet;

                    /**
                     * 已用用户数
                     */
                    int64_t m_usedUser;
                    bool m_usedUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_USERQUOTA_H_
