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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDINFORESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 身份证ocr信息结果
                */
                class IDCardInfoResult : public AbstractModel
                {
                public:
                    IDCardInfoResult();
                    ~IDCardInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取警告代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarnCodes 警告代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWarnCodes() const;

                    /**
                     * 设置警告代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warnCodes 警告代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarnCodes(const std::vector<int64_t>& _warnCodes);

                    /**
                     * 判断参数 WarnCodes 是否已赋值
                     * @return WarnCodes 是否已赋值
                     * 
                     */
                    bool WarnCodesHasBeenSet() const;

                    /**
                     * 获取地址（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 地址（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 地址（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取发证机关（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Authority 发证机关（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 设置发证机关（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authority 发证机关（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthority(const std::string& _authority);

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取出生日期（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birth 出生日期（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 设置出生日期（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birth 出生日期（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirth(const std::string& _birth);

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取身份证号（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdNum 身份证号（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 设置身份证号（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idNum 身份证号（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdNum(const std::string& _idNum);

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取名字（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名字（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名字（人像面）
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取民族（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nation 民族（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 设置民族（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nation 民族（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNation(const std::string& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取性别（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 性别（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置性别（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sex 性别（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取证件有效期（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidDate 证件有效期（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 设置证件有效期（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validDate 证件有效期（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidDate(const std::string& _validDate);

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取请求的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId 请求的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId 请求的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode 错误码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取原图地址
                     * @return ImageUrl 原图地址
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置原图地址
                     * @param _imageUrl 原图地址
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取身份证头像照片的地址（人像面）
                     * @return PortraitUrl 身份证头像照片的地址（人像面）
                     * 
                     */
                    std::string GetPortraitUrl() const;

                    /**
                     * 设置身份证头像照片的地址（人像面）
                     * @param _portraitUrl 身份证头像照片的地址（人像面）
                     * 
                     */
                    void SetPortraitUrl(const std::string& _portraitUrl);

                    /**
                     * 判断参数 PortraitUrl 是否已赋值
                     * @return PortraitUrl 是否已赋值
                     * 
                     */
                    bool PortraitUrlHasBeenSet() const;

                    /**
                     * 获取整型错误码
                     * @return IntErrorCode 整型错误码
                     * 
                     */
                    int64_t GetIntErrorCode() const;

                    /**
                     * 设置整型错误码
                     * @param _intErrorCode 整型错误码
                     * 
                     */
                    void SetIntErrorCode(const int64_t& _intErrorCode);

                    /**
                     * 判断参数 IntErrorCode 是否已赋值
                     * @return IntErrorCode 是否已赋值
                     * 
                     */
                    bool IntErrorCodeHasBeenSet() const;

                private:

                    /**
                     * 警告代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_warnCodes;
                    bool m_warnCodesHasBeenSet;

                    /**
                     * 地址（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 发证机关（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * 出生日期（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * 身份证号（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 名字（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 民族（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 性别（人像面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 证件有效期（国徽面）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 请求的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 原图地址
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 身份证头像照片的地址（人像面）
                     */
                    std::string m_portraitUrl;
                    bool m_portraitUrlHasBeenSet;

                    /**
                     * 整型错误码
                     */
                    int64_t m_intErrorCode;
                    bool m_intErrorCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDINFORESULT_H_
