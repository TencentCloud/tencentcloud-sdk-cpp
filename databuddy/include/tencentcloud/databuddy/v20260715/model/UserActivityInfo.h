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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERACTIVITYINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERACTIVITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 用户对资产的操作信息
                */
                class UserActivityInfo : public AbstractModel
                {
                public:
                    UserActivityInfo();
                    ~UserActivityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否收藏
- true  是
- false 否
                     * @return IsFavorite 是否收藏
- true  是
- false 否
                     * 
                     */
                    bool GetIsFavorite() const;

                    /**
                     * 设置是否收藏
- true  是
- false 否
                     * @param _isFavorite 是否收藏
- true  是
- false 否
                     * 
                     */
                    void SetIsFavorite(const bool& _isFavorite);

                    /**
                     * 判断参数 IsFavorite 是否已赋值
                     * @return IsFavorite 是否已赋值
                     * 
                     */
                    bool IsFavoriteHasBeenSet() const;

                    /**
                     * 获取上次查看时间
                     * @return LastViewTime 上次查看时间
                     * 
                     */
                    std::string GetLastViewTime() const;

                    /**
                     * 设置上次查看时间
                     * @param _lastViewTime 上次查看时间
                     * 
                     */
                    void SetLastViewTime(const std::string& _lastViewTime);

                    /**
                     * 判断参数 LastViewTime 是否已赋值
                     * @return LastViewTime 是否已赋值
                     * 
                     */
                    bool LastViewTimeHasBeenSet() const;

                private:

                    /**
                     * 是否收藏
- true  是
- false 否
                     */
                    bool m_isFavorite;
                    bool m_isFavoriteHasBeenSet;

                    /**
                     * 上次查看时间
                     */
                    std::string m_lastViewTime;
                    bool m_lastViewTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERACTIVITYINFO_H_
