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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_FAILEDUSERS_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_FAILEDUSERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 失败的用户
                */
                class FailedUsers : public AbstractModel
                {
                public:
                    FailedUsers();
                    ~FailedUsers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败用户标识
                     * @return FailedUserIdentification 失败用户标识
                     * 
                     */
                    std::string GetFailedUserIdentification() const;

                    /**
                     * 设置失败用户标识
                     * @param _failedUserIdentification 失败用户标识
                     * 
                     */
                    void SetFailedUserIdentification(const std::string& _failedUserIdentification);

                    /**
                     * 判断参数 FailedUserIdentification 是否已赋值
                     * @return FailedUserIdentification 是否已赋值
                     * 
                     */
                    bool FailedUserIdentificationHasBeenSet() const;

                    /**
                     * 获取导入的用户失败原因
                     * @return FailedReason 导入的用户失败原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置导入的用户失败原因
                     * @param _failedReason 导入的用户失败原因
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                private:

                    /**
                     * 失败用户标识
                     */
                    std::string m_failedUserIdentification;
                    bool m_failedUserIdentificationHasBeenSet;

                    /**
                     * 导入的用户失败原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_FAILEDUSERS_H_
