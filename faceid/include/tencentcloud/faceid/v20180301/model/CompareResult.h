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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 单次比对结果描述
                */
                class CompareResult : public AbstractModel
                {
                public:
                    CompareResult();
                    ~CompareResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最终比对结果
                     * @return ErrorCode 最终比对结果
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置最终比对结果
                     * @param ErrorCode 最终比对结果
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取最终比对结果描述
                     * @return ErrorMsg 最终比对结果描述
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置最终比对结果描述
                     * @param ErrorMsg 最终比对结果描述
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取本次活体SDK生成的活体算法数据包
                     * @return LiveData 本次活体SDK生成的活体算法数据包
                     */
                    FileInfo GetLiveData() const;

                    /**
                     * 设置本次活体SDK生成的活体算法数据包
                     * @param LiveData 本次活体SDK生成的活体算法数据包
                     */
                    void SetLiveData(const FileInfo& _liveData);

                    /**
                     * 判断参数 LiveData 是否已赋值
                     * @return LiveData 是否已赋值
                     */
                    bool LiveDataHasBeenSet() const;

                    /**
                     * 获取本次用户活体验证过程的视频，url链接有效期10分钟。
                     * @return LiveVideo 本次用户活体验证过程的视频，url链接有效期10分钟。
                     */
                    FileInfo GetLiveVideo() const;

                    /**
                     * 设置本次用户活体验证过程的视频，url链接有效期10分钟。
                     * @param LiveVideo 本次用户活体验证过程的视频，url链接有效期10分钟。
                     */
                    void SetLiveVideo(const FileInfo& _liveVideo);

                    /**
                     * 判断参数 LiveVideo 是否已赋值
                     * @return LiveVideo 是否已赋值
                     */
                    bool LiveVideoHasBeenSet() const;

                    /**
                     * 获取活体认证结果码
                     * @return LiveErrorCode 活体认证结果码
                     */
                    std::string GetLiveErrorCode() const;

                    /**
                     * 设置活体认证结果码
                     * @param LiveErrorCode 活体认证结果码
                     */
                    void SetLiveErrorCode(const std::string& _liveErrorCode);

                    /**
                     * 判断参数 LiveErrorCode 是否已赋值
                     * @return LiveErrorCode 是否已赋值
                     */
                    bool LiveErrorCodeHasBeenSet() const;

                    /**
                     * 获取活体认证结果描述
                     * @return LiveErrorMsg 活体认证结果描述
                     */
                    std::string GetLiveErrorMsg() const;

                    /**
                     * 设置活体认证结果描述
                     * @param LiveErrorMsg 活体认证结果描述
                     */
                    void SetLiveErrorMsg(const std::string& _liveErrorMsg);

                    /**
                     * 判断参数 LiveErrorMsg 是否已赋值
                     * @return LiveErrorMsg 是否已赋值
                     */
                    bool LiveErrorMsgHasBeenSet() const;

                    /**
                     * 获取本次活体的最佳人像截图，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrame 本次活体的最佳人像截图，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo GetBestFrame() const;

                    /**
                     * 设置本次活体的最佳人像截图，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BestFrame 本次活体的最佳人像截图，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBestFrame(const FileInfo& _bestFrame);

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取证件照头像截图，url链接有效期10分钟。
                     * @return ProfileImage 证件照头像截图，url链接有效期10分钟。
                     */
                    FileInfo GetProfileImage() const;

                    /**
                     * 设置证件照头像截图，url链接有效期10分钟。
                     * @param ProfileImage 证件照头像截图，url链接有效期10分钟。
                     */
                    void SetProfileImage(const FileInfo& _profileImage);

                    /**
                     * 判断参数 ProfileImage 是否已赋值
                     * @return ProfileImage 是否已赋值
                     */
                    bool ProfileImageHasBeenSet() const;

                    /**
                     * 获取人脸比对结果码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareErrorCode 人脸比对结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareErrorCode() const;

                    /**
                     * 设置人脸比对结果码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareErrorCode 人脸比对结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareErrorCode(const std::string& _compareErrorCode);

                    /**
                     * 判断参数 CompareErrorCode 是否已赋值
                     * @return CompareErrorCode 是否已赋值
                     */
                    bool CompareErrorCodeHasBeenSet() const;

                    /**
                     * 获取人脸比对结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareErrorMsg 人脸比对结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCompareErrorMsg() const;

                    /**
                     * 设置人脸比对结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CompareErrorMsg 人脸比对结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCompareErrorMsg(const std::string& _compareErrorMsg);

                    /**
                     * 判断参数 CompareErrorMsg 是否已赋值
                     * @return CompareErrorMsg 是否已赋值
                     */
                    bool CompareErrorMsgHasBeenSet() const;

                    /**
                     * 获取相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sim 相似度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetSim() const;

                    /**
                     * 设置相似度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sim 相似度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSim(const double& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取该字段废弃
                     * @return IsNeedCharge 该字段废弃
                     */
                    bool GetIsNeedCharge() const;

                    /**
                     * 设置该字段废弃
                     * @param IsNeedCharge 该字段废弃
                     */
                    void SetIsNeedCharge(const bool& _isNeedCharge);

                    /**
                     * 判断参数 IsNeedCharge 是否已赋值
                     * @return IsNeedCharge 是否已赋值
                     */
                    bool IsNeedChargeHasBeenSet() const;

                    /**
                     * 获取用户编辑后的证件照信息，如果DisableChangeOcrResult为true禁用编辑无该值。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string
- ID string
- Name string
- Address string
- Type string 证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardInfoInputJson 用户编辑后的证件照信息，如果DisableChangeOcrResult为true禁用编辑无该值。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string
- ID string
- Name string
- Address string
- Type string 证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo GetCardInfoInputJson() const;

                    /**
                     * 设置用户编辑后的证件照信息，如果DisableChangeOcrResult为true禁用编辑无该值。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string
- ID string
- Name string
- Address string
- Type string 证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CardInfoInputJson 用户编辑后的证件照信息，如果DisableChangeOcrResult为true禁用编辑无该值。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string
- ID string
- Name string
- Address string
- Type string 证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCardInfoInputJson(const FileInfo& _cardInfoInputJson);

                    /**
                     * 判断参数 CardInfoInputJson 是否已赋值
                     * @return CardInfoInputJson 是否已赋值
                     */
                    bool CardInfoInputJsonHasBeenSet() const;

                    /**
                     * 获取本次认证的请求标识。
                     * @return RequestId 本次认证的请求标识。
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置本次认证的请求标识。
                     * @param RequestId 本次认证的请求标识。
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * 最终比对结果
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 最终比对结果描述
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 本次活体SDK生成的活体算法数据包
                     */
                    FileInfo m_liveData;
                    bool m_liveDataHasBeenSet;

                    /**
                     * 本次用户活体验证过程的视频，url链接有效期10分钟。
                     */
                    FileInfo m_liveVideo;
                    bool m_liveVideoHasBeenSet;

                    /**
                     * 活体认证结果码
                     */
                    std::string m_liveErrorCode;
                    bool m_liveErrorCodeHasBeenSet;

                    /**
                     * 活体认证结果描述
                     */
                    std::string m_liveErrorMsg;
                    bool m_liveErrorMsgHasBeenSet;

                    /**
                     * 本次活体的最佳人像截图，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * 证件照头像截图，url链接有效期10分钟。
                     */
                    FileInfo m_profileImage;
                    bool m_profileImageHasBeenSet;

                    /**
                     * 人脸比对结果码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareErrorCode;
                    bool m_compareErrorCodeHasBeenSet;

                    /**
                     * 人脸比对结果描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareErrorMsg;
                    bool m_compareErrorMsgHasBeenSet;

                    /**
                     * 相似度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * 该字段废弃
                     */
                    bool m_isNeedCharge;
                    bool m_isNeedChargeHasBeenSet;

                    /**
                     * 用户编辑后的证件照信息，如果DisableChangeOcrResult为true禁用编辑无该值。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string
- ID string
- Name string
- Address string
- Type string 证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_cardInfoInputJson;
                    bool m_cardInfoInputJsonHasBeenSet;

                    /**
                     * 本次认证的请求标识。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPARERESULT_H_
