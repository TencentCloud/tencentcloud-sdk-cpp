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

#ifndef TENCENTCLOUD_MVJ_V20190926_MODEL_DATA_H_
#define TENCENTCLOUD_MVJ_V20190926_MODEL_DATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mvj
    {
        namespace V20190926
        {
            namespace Model
            {
                /**
                * 返回结构
                */
                class Data : public AbstractModel
                {
                public:
                    Data();
                    ~Data() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作时间戳，单位秒
                     * @return PostTime 操作时间戳，单位秒
                     * 
                     */
                    uint64_t GetPostTime() const;

                    /**
                     * 设置操作时间戳，单位秒
                     * @param _postTime 操作时间戳，单位秒
                     * 
                     */
                    void SetPostTime(const uint64_t& _postTime);

                    /**
                     * 判断参数 PostTime 是否已赋值
                     * @return PostTime 是否已赋值
                     * 
                     */
                    bool PostTimeHasBeenSet() const;

                    /**
                     * 获取用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
                     * @return Uid 用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
                     * @param _uid 用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取操作来源的外网IP
                     * @return UserIp 操作来源的外网IP
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置操作来源的外网IP
                     * @param _userIp 操作来源的外网IP
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取0~100：营销价值评分，分值越高，价值越大
[0,50]低价值
[50,70]价值一般
[70,100]高价值
                     * @return ValueScore 0~100：营销价值评分，分值越高，价值越大
[0,50]低价值
[50,70]价值一般
[70,100]高价值
                     * 
                     */
                    uint64_t GetValueScore() const;

                    /**
                     * 设置0~100：营销价值评分，分值越高，价值越大
[0,50]低价值
[50,70]价值一般
[70,100]高价值
                     * @param _valueScore 0~100：营销价值评分，分值越高，价值越大
[0,50]低价值
[50,70]价值一般
[70,100]高价值
                     * 
                     */
                    void SetValueScore(const uint64_t& _valueScore);

                    /**
                     * 判断参数 ValueScore 是否已赋值
                     * @return ValueScore 是否已赋值
                     * 
                     */
                    bool ValueScoreHasBeenSet() const;

                private:

                    /**
                     * 操作时间戳，单位秒
                     */
                    uint64_t m_postTime;
                    bool m_postTimeHasBeenSet;

                    /**
                     * 用户ID 
accountType不同对应不同的用户ID。如果是QQ或微信用户则填入对应的openId
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 操作来源的外网IP
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * 0~100：营销价值评分，分值越高，价值越大
[0,50]低价值
[50,70]价值一般
[70,100]高价值
                     */
                    uint64_t m_valueScore;
                    bool m_valueScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MVJ_V20190926_MODEL_DATA_H_
