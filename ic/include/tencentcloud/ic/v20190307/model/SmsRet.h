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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_SMSRET_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_SMSRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 短信流水信息
                */
                class SmsRet : public AbstractModel
                {
                public:
                    SmsRet();
                    ~SmsRet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该iccid请求状态
                     * @return Code 该iccid请求状态
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置该iccid请求状态
                     * @param _code 该iccid请求状态
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取短信发送返回信息
                     * @return Msg 短信发送返回信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置短信发送返回信息
                     * @param _msg 短信发送返回信息
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取卡片ID
                     * @return Iccid 卡片ID
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ID
                     * @param _iccid 卡片ID
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取流水ID
                     * @return Sid 流水ID
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置流水ID
                     * @param _sid 流水ID
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                private:

                    /**
                     * 该iccid请求状态
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 短信发送返回信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 卡片ID
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 流水ID
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_SMSRET_H_
