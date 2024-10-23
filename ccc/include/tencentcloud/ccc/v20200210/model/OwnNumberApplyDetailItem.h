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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_

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
                * 用户自带号码审批明细数据类型
                */
                class OwnNumberApplyDetailItem : public AbstractModel
                {
                public:
                    OwnNumberApplyDetailItem();
                    ~OwnNumberApplyDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取号码类型：0-呼入|1-呼出|2-呼入呼出
                     * @return CallType 号码类型：0-呼入|1-呼出|2-呼入呼出
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置号码类型：0-呼入|1-呼出|2-呼入呼出
                     * @param _callType 号码类型：0-呼入|1-呼出|2-呼入呼出
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
                     * 获取线路号码
                     * @return PhoneNumber 线路号码
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置线路号码
                     * @param _phoneNumber 线路号码
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取最大并发呼叫数
                     * @return MaxCallCount 最大并发呼叫数
                     * 
                     */
                    int64_t GetMaxCallCount() const;

                    /**
                     * 设置最大并发呼叫数
                     * @param _maxCallCount 最大并发呼叫数
                     * 
                     */
                    void SetMaxCallCount(const int64_t& _maxCallCount);

                    /**
                     * 判断参数 MaxCallCount 是否已赋值
                     * @return MaxCallCount 是否已赋值
                     * 
                     */
                    bool MaxCallCountHasBeenSet() const;

                    /**
                     * 获取每秒最大并发数
                     * @return MaxCallPSec 每秒最大并发数
                     * 
                     */
                    int64_t GetMaxCallPSec() const;

                    /**
                     * 设置每秒最大并发数
                     * @param _maxCallPSec 每秒最大并发数
                     * 
                     */
                    void SetMaxCallPSec(const int64_t& _maxCallPSec);

                    /**
                     * 判断参数 MaxCallPSec 是否已赋值
                     * @return MaxCallPSec 是否已赋值
                     * 
                     */
                    bool MaxCallPSecHasBeenSet() const;

                    /**
                     * 获取呼出被叫格式，使用 {+E.164} 或 {E.164}, 
                     * @return OutboundCalleeFormat 呼出被叫格式，使用 {+E.164} 或 {E.164}, 
                     * 
                     */
                    std::string GetOutboundCalleeFormat() const;

                    /**
                     * 设置呼出被叫格式，使用 {+E.164} 或 {E.164}, 
                     * @param _outboundCalleeFormat 呼出被叫格式，使用 {+E.164} 或 {E.164}, 
                     * 
                     */
                    void SetOutboundCalleeFormat(const std::string& _outboundCalleeFormat);

                    /**
                     * 判断参数 OutboundCalleeFormat 是否已赋值
                     * @return OutboundCalleeFormat 是否已赋值
                     * 
                     */
                    bool OutboundCalleeFormatHasBeenSet() const;

                private:

                    /**
                     * 号码类型：0-呼入|1-呼出|2-呼入呼出
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 线路号码
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 最大并发呼叫数
                     */
                    int64_t m_maxCallCount;
                    bool m_maxCallCountHasBeenSet;

                    /**
                     * 每秒最大并发数
                     */
                    int64_t m_maxCallPSec;
                    bool m_maxCallPSecHasBeenSet;

                    /**
                     * 呼出被叫格式，使用 {+E.164} 或 {E.164}, 
                     */
                    std::string m_outboundCalleeFormat;
                    bool m_outboundCalleeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_
