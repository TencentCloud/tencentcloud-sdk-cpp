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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHARGEDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHARGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 计费详情
                */
                class ChargeDetail : public AbstractModel
                {
                public:
                    ChargeDetail();
                    ~ChargeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一比一时间时间戳，13位。
                     * @return ReqTime 一比一时间时间戳，13位。
                     * 
                     */
                    std::string GetReqTime() const;

                    /**
                     * 设置一比一时间时间戳，13位。
                     * @param _reqTime 一比一时间时间戳，13位。
                     * 
                     */
                    void SetReqTime(const std::string& _reqTime);

                    /**
                     * 判断参数 ReqTime 是否已赋值
                     * @return ReqTime 是否已赋值
                     * 
                     */
                    bool ReqTimeHasBeenSet() const;

                    /**
                     * 获取一比一请求的唯一标记。
                     * @return Seq 一比一请求的唯一标记。
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置一比一请求的唯一标记。
                     * @param _seq 一比一请求的唯一标记。
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取一比一时使用的、脱敏后的身份证号。
                     * @return IdCard 一比一时使用的、脱敏后的身份证号。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置一比一时使用的、脱敏后的身份证号。
                     * @param _idCard 一比一时使用的、脱敏后的身份证号。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取已废弃。请使用“IdCard”字段
                     * @return Idcard 已废弃。请使用“IdCard”字段
                     * @deprecated
                     */
                    std::string GetIdcard() const;

                    /**
                     * 设置已废弃。请使用“IdCard”字段
                     * @param _idcard 已废弃。请使用“IdCard”字段
                     * @deprecated
                     */
                    void SetIdcard(const std::string& _idcard);

                    /**
                     * 判断参数 Idcard 是否已赋值
                     * @return Idcard 是否已赋值
                     * @deprecated
                     */
                    bool IdcardHasBeenSet() const;

                    /**
                     * 获取一比一时使用的、脱敏后的姓名。
                     * @return Name 一比一时使用的、脱敏后的姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置一比一时使用的、脱敏后的姓名。
                     * @param _name 一比一时使用的、脱敏后的姓名。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取一比一的相似度。0-100，保留2位小数。
                     * @return Sim 一比一的相似度。0-100，保留2位小数。
                     * 
                     */
                    std::string GetSim() const;

                    /**
                     * 设置一比一的相似度。0-100，保留2位小数。
                     * @param _sim 一比一的相似度。0-100，保留2位小数。
                     * 
                     */
                    void SetSim(const std::string& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取本次详情是否收费。
                     * @return IsNeedCharge 本次详情是否收费。
                     * 
                     */
                    bool GetIsNeedCharge() const;

                    /**
                     * 设置本次详情是否收费。
                     * @param _isNeedCharge 本次详情是否收费。
                     * 
                     */
                    void SetIsNeedCharge(const bool& _isNeedCharge);

                    /**
                     * 判断参数 IsNeedCharge 是否已赋值
                     * @return IsNeedCharge 是否已赋值
                     * 
                     */
                    bool IsNeedChargeHasBeenSet() const;

                    /**
                     * 获取收费类型，比对、核身、混合部署。
                     * @return ChargeType 收费类型，比对、核身、混合部署。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置收费类型，比对、核身、混合部署。
                     * @param _chargeType 收费类型，比对、核身、混合部署。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取本次活体一比一最终结果。
                     * @return ErrorCode 本次活体一比一最终结果。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置本次活体一比一最终结果。
                     * @param _errorCode 本次活体一比一最终结果。
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取本次活体一比一最终结果描述。
                     * @return ErrorMessage 本次活体一比一最终结果描述。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置本次活体一比一最终结果描述。
                     * @param _errorMessage 本次活体一比一最终结果描述。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 一比一时间时间戳，13位。
                     */
                    std::string m_reqTime;
                    bool m_reqTimeHasBeenSet;

                    /**
                     * 一比一请求的唯一标记。
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 一比一时使用的、脱敏后的身份证号。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 已废弃。请使用“IdCard”字段
                     */
                    std::string m_idcard;
                    bool m_idcardHasBeenSet;

                    /**
                     * 一比一时使用的、脱敏后的姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 一比一的相似度。0-100，保留2位小数。
                     */
                    std::string m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * 本次详情是否收费。
                     */
                    bool m_isNeedCharge;
                    bool m_isNeedChargeHasBeenSet;

                    /**
                     * 收费类型，比对、核身、混合部署。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 本次活体一比一最终结果。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 本次活体一比一最终结果描述。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHARGEDETAIL_H_
