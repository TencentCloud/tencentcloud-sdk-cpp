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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 号码购买信息
                */
                class PhoneNumBuyInfo : public AbstractModel
                {
                public:
                    PhoneNumBuyInfo();
                    ~PhoneNumBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电话号码
                     * @return PhoneNum 电话号码
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置电话号码
                     * @param _phoneNum 电话号码
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取号码类型，0-固话|1-虚商号码|2-运营商号码|3-400号码
                     * @return Type 号码类型，0-固话|1-虚商号码|2-运营商号码|3-400号码
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置号码类型，0-固话|1-虚商号码|2-运营商号码|3-400号码
                     * @param _type 号码类型，0-固话|1-虚商号码|2-运营商号码|3-400号码
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取号码呼叫类型，1-呼入|2-呼出|3-呼入呼出
                     * @return CallType 号码呼叫类型，1-呼入|2-呼出|3-呼入呼出
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置号码呼叫类型，1-呼入|2-呼出|3-呼入呼出
                     * @param _callType 号码呼叫类型，1-呼入|2-呼出|3-呼入呼出
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取购买时间戳
                     * @return BuyTime 购买时间戳
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置购买时间戳
                     * @param _buyTime 购买时间戳
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取截止时间戳
                     * @return EndTime 截止时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间戳
                     * @param _endTime 截止时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取号码状态，1正常|2欠费停用|4管理员停用|5违规停用
                     * @return State 号码状态，1正常|2欠费停用|4管理员停用|5违规停用
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置号码状态，1正常|2欠费停用|4管理员停用|5违规停用
                     * @param _state 号码状态，1正常|2欠费停用|4管理员停用|5违规停用
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 电话号码
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * 号码类型，0-固话|1-虚商号码|2-运营商号码|3-400号码
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 号码呼叫类型，1-呼入|2-呼出|3-呼入呼出
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 购买时间戳
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 截止时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 号码状态，1正常|2欠费停用|4管理员停用|5违规停用
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_
