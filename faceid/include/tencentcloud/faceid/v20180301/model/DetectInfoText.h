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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOTEXT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/DetectDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核身文本信息
                */
                class DetectInfoText : public AbstractModel
                {
                public:
                    DetectInfoText();
                    ~DetectInfoText() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次流程最终验证结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 本次流程最终验证结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置本次流程最终验证结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrCode 本次流程最终验证结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取本次流程最终验证结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 本次流程最终验证结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置本次流程最终验证结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrMsg 本次流程最终验证结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取本次验证使用的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCard 本次验证使用的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置本次验证使用的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IdCard 本次验证使用的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取本次验证使用的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 本次验证使用的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置本次验证使用的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 本次验证使用的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。民族。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrNation Ocr识别结果。民族。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrNation() const;

                    /**
                     * 设置Ocr识别结果。民族。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrNation Ocr识别结果。民族。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrNation(const std::string& _ocrNation);

                    /**
                     * 判断参数 OcrNation 是否已赋值
                     * @return OcrNation 是否已赋值
                     */
                    bool OcrNationHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。家庭住址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrAddress Ocr识别结果。家庭住址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrAddress() const;

                    /**
                     * 设置Ocr识别结果。家庭住址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrAddress Ocr识别结果。家庭住址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrAddress(const std::string& _ocrAddress);

                    /**
                     * 判断参数 OcrAddress 是否已赋值
                     * @return OcrAddress 是否已赋值
                     */
                    bool OcrAddressHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。生日。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrBirth Ocr识别结果。生日。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrBirth() const;

                    /**
                     * 设置Ocr识别结果。生日。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrBirth Ocr识别结果。生日。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrBirth(const std::string& _ocrBirth);

                    /**
                     * 判断参数 OcrBirth 是否已赋值
                     * @return OcrBirth 是否已赋值
                     */
                    bool OcrBirthHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。签发机关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrAuthority Ocr识别结果。签发机关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrAuthority() const;

                    /**
                     * 设置Ocr识别结果。签发机关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrAuthority Ocr识别结果。签发机关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrAuthority(const std::string& _ocrAuthority);

                    /**
                     * 判断参数 OcrAuthority 是否已赋值
                     * @return OcrAuthority 是否已赋值
                     */
                    bool OcrAuthorityHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。有效日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrValidDate Ocr识别结果。有效日期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrValidDate() const;

                    /**
                     * 设置Ocr识别结果。有效日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrValidDate Ocr识别结果。有效日期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrValidDate(const std::string& _ocrValidDate);

                    /**
                     * 判断参数 OcrValidDate 是否已赋值
                     * @return OcrValidDate 是否已赋值
                     */
                    bool OcrValidDateHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrName Ocr识别结果。姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrName() const;

                    /**
                     * 设置Ocr识别结果。姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrName Ocr识别结果。姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrName(const std::string& _ocrName);

                    /**
                     * 判断参数 OcrName 是否已赋值
                     * @return OcrName 是否已赋值
                     */
                    bool OcrNameHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrIdCard Ocr识别结果。身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrIdCard() const;

                    /**
                     * 设置Ocr识别结果。身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrIdCard Ocr识别结果。身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrIdCard(const std::string& _ocrIdCard);

                    /**
                     * 判断参数 OcrIdCard 是否已赋值
                     * @return OcrIdCard 是否已赋值
                     */
                    bool OcrIdCardHasBeenSet() const;

                    /**
                     * 获取Ocr识别结果。性别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrGender Ocr识别结果。性别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrGender() const;

                    /**
                     * 设置Ocr识别结果。性别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrGender Ocr识别结果。性别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrGender(const std::string& _ocrGender);

                    /**
                     * 判断参数 OcrGender 是否已赋值
                     * @return OcrGender 是否已赋值
                     */
                    bool OcrGenderHasBeenSet() const;

                    /**
                     * 获取本次流程最终活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveStatus 本次流程最终活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLiveStatus() const;

                    /**
                     * 设置本次流程最终活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LiveStatus 本次流程最终活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLiveStatus(const int64_t& _liveStatus);

                    /**
                     * 判断参数 LiveStatus 是否已赋值
                     * @return LiveStatus 是否已赋值
                     */
                    bool LiveStatusHasBeenSet() const;

                    /**
                     * 获取本次流程最终活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveMsg 本次流程最终活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLiveMsg() const;

                    /**
                     * 设置本次流程最终活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LiveMsg 本次流程最终活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLiveMsg(const std::string& _liveMsg);

                    /**
                     * 判断参数 LiveMsg 是否已赋值
                     * @return LiveMsg 是否已赋值
                     */
                    bool LiveMsgHasBeenSet() const;

                    /**
                     * 获取本次流程最终一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comparestatus 本次流程最终一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetComparestatus() const;

                    /**
                     * 设置本次流程最终一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Comparestatus 本次流程最终一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComparestatus(const int64_t& _comparestatus);

                    /**
                     * 判断参数 Comparestatus 是否已赋值
                     * @return Comparestatus 是否已赋值
                     */
                    bool ComparestatusHasBeenSet() const;

                    /**
                     * 获取本次流程最终一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comparemsg 本次流程最终一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComparemsg() const;

                    /**
                     * 设置本次流程最终一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Comparemsg 本次流程最终一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComparemsg(const std::string& _comparemsg);

                    /**
                     * 判断参数 Comparemsg 是否已赋值
                     * @return Comparemsg 是否已赋值
                     */
                    bool ComparemsgHasBeenSet() const;

                    /**
                     * 获取本次流程活体一比一的分数，取值范围 [0.00, 100.00]。相似度大于等于70时才判断为同一人，也可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sim 本次流程活体一比一的分数，取值范围 [0.00, 100.00]。相似度大于等于70时才判断为同一人，也可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSim() const;

                    /**
                     * 设置本次流程活体一比一的分数，取值范围 [0.00, 100.00]。相似度大于等于70时才判断为同一人，也可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sim 本次流程活体一比一的分数，取值范围 [0.00, 100.00]。相似度大于等于70时才判断为同一人，也可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSim(const std::string& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取地理位置经纬度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 地理位置经纬度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置地理位置经纬度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Location 地理位置经纬度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Auth接口带入额外信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra Auth接口带入额外信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置Auth接口带入额外信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Extra Auth接口带入额外信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取本次流程进行的活体一比一流水。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessDetail 本次流程进行的活体一比一流水。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectDetail> GetLivenessDetail() const;

                    /**
                     * 设置本次流程进行的活体一比一流水。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LivenessDetail 本次流程进行的活体一比一流水。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLivenessDetail(const std::vector<DetectDetail>& _livenessDetail);

                    /**
                     * 判断参数 LivenessDetail 是否已赋值
                     * @return LivenessDetail 是否已赋值
                     */
                    bool LivenessDetailHasBeenSet() const;

                    /**
                     * 获取手机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mobile 手机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mobile 手机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取本次流程最终比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareLibType 本次流程最终比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareLibType() const;

                    /**
                     * 设置本次流程最终比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareLibType 本次流程最终比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareLibType(const std::string& _compareLibType);

                    /**
                     * 判断参数 CompareLibType 是否已赋值
                     * @return CompareLibType 是否已赋值
                     */
                    bool CompareLibTypeHasBeenSet() const;

                private:

                    /**
                     * 本次流程最终验证结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 本次流程最终验证结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 本次验证使用的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 本次验证使用的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Ocr识别结果。民族。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrNation;
                    bool m_ocrNationHasBeenSet;

                    /**
                     * Ocr识别结果。家庭住址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrAddress;
                    bool m_ocrAddressHasBeenSet;

                    /**
                     * Ocr识别结果。生日。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrBirth;
                    bool m_ocrBirthHasBeenSet;

                    /**
                     * Ocr识别结果。签发机关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrAuthority;
                    bool m_ocrAuthorityHasBeenSet;

                    /**
                     * Ocr识别结果。有效日期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrValidDate;
                    bool m_ocrValidDateHasBeenSet;

                    /**
                     * Ocr识别结果。姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrName;
                    bool m_ocrNameHasBeenSet;

                    /**
                     * Ocr识别结果。身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrIdCard;
                    bool m_ocrIdCardHasBeenSet;

                    /**
                     * Ocr识别结果。性别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrGender;
                    bool m_ocrGenderHasBeenSet;

                    /**
                     * 本次流程最终活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_liveStatus;
                    bool m_liveStatusHasBeenSet;

                    /**
                     * 本次流程最终活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_liveMsg;
                    bool m_liveMsgHasBeenSet;

                    /**
                     * 本次流程最终一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_comparestatus;
                    bool m_comparestatusHasBeenSet;

                    /**
                     * 本次流程最终一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comparemsg;
                    bool m_comparemsgHasBeenSet;

                    /**
                     * 本次流程活体一比一的分数，取值范围 [0.00, 100.00]。相似度大于等于70时才判断为同一人，也可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * 地理位置经纬度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Auth接口带入额外信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 本次流程进行的活体一比一流水。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetectDetail> m_livenessDetail;
                    bool m_livenessDetailHasBeenSet;

                    /**
                     * 手机号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 本次流程最终比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareLibType;
                    bool m_compareLibTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOTEXT_H_
