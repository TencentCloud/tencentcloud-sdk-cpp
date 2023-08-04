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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 生命周期，云文件生命周期设置，管理文件冷、热存储的时间
                */
                class LifeCycleData : public AbstractModel
                {
                public:
                    LifeCycleData();
                    ~LifeCycleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云文件热存储时长，单位天，最小1天，最大3650天
                     * @return Transition 云文件热存储时长，单位天，最小1天，最大3650天
                     * 
                     */
                    int64_t GetTransition() const;

                    /**
                     * 设置云文件热存储时长，单位天，最小1天，最大3650天
                     * @param _transition 云文件热存储时长，单位天，最小1天，最大3650天
                     * 
                     */
                    void SetTransition(const int64_t& _transition);

                    /**
                     * 判断参数 Transition 是否已赋值
                     * @return Transition 是否已赋值
                     * 
                     */
                    bool TransitionHasBeenSet() const;

                    /**
                     * 获取云文件冷存储时长， 单位天，0表示不设置，设置时最小60天，Expiration字段加Transition字段不超过3650天
                     * @return Expiration 云文件冷存储时长， 单位天，0表示不设置，设置时最小60天，Expiration字段加Transition字段不超过3650天
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置云文件冷存储时长， 单位天，0表示不设置，设置时最小60天，Expiration字段加Transition字段不超过3650天
                     * @param _expiration 云文件冷存储时长， 单位天，0表示不设置，设置时最小60天，Expiration字段加Transition字段不超过3650天
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 云文件热存储时长，单位天，最小1天，最大3650天
                     */
                    int64_t m_transition;
                    bool m_transitionHasBeenSet;

                    /**
                     * 云文件冷存储时长， 单位天，0表示不设置，设置时最小60天，Expiration字段加Transition字段不超过3650天
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LIFECYCLEDATA_H_
