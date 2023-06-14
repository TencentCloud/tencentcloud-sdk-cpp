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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 抢锁状态：是否可以抢锁和当前持锁人
                */
                class RobLockState : public AbstractModel
                {
                public:
                    RobLockState();
                    ~RobLockState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否可以抢锁
                     * @return IsRob 是否可以抢锁
                     * 
                     */
                    bool GetIsRob() const;

                    /**
                     * 设置是否可以抢锁
                     * @param _isRob 是否可以抢锁
                     * 
                     */
                    void SetIsRob(const bool& _isRob);

                    /**
                     * 判断参数 IsRob 是否已赋值
                     * @return IsRob 是否已赋值
                     * 
                     */
                    bool IsRobHasBeenSet() const;

                    /**
                     * 获取当前持锁人
                     * @return Locker 当前持锁人
                     * 
                     */
                    std::string GetLocker() const;

                    /**
                     * 设置当前持锁人
                     * @param _locker 当前持锁人
                     * 
                     */
                    void SetLocker(const std::string& _locker);

                    /**
                     * 判断参数 Locker 是否已赋值
                     * @return Locker 是否已赋值
                     * 
                     */
                    bool LockerHasBeenSet() const;

                private:

                    /**
                     * 是否可以抢锁
                     */
                    bool m_isRob;
                    bool m_isRobHasBeenSet;

                    /**
                     * 当前持锁人
                     */
                    std::string m_locker;
                    bool m_lockerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROBLOCKSTATE_H_
