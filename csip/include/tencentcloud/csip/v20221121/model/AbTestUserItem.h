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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ABTESTUSERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ABTESTUSERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 灰度用户配置
                */
                class AbTestUserItem : public AbstractModel
                {
                public:
                    AbTestUserItem();
                    ~AbTestUserItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appId
                     * @return AppId appId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appId
                     * @param _appId appId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取是否灰度用户
                     * @return IsAbTestUser 是否灰度用户
                     * 
                     */
                    bool GetIsAbTestUser() const;

                    /**
                     * 设置是否灰度用户
                     * @param _isAbTestUser 是否灰度用户
                     * 
                     */
                    void SetIsAbTestUser(const bool& _isAbTestUser);

                    /**
                     * 判断参数 IsAbTestUser 是否已赋值
                     * @return IsAbTestUser 是否已赋值
                     * 
                     */
                    bool IsAbTestUserHasBeenSet() const;

                private:

                    /**
                     * appId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 是否灰度用户
                     */
                    bool m_isAbTestUser;
                    bool m_isAbTestUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ABTESTUSERITEM_H_
