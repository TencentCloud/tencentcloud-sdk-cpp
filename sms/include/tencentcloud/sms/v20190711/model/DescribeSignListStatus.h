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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 获取短信签名信息响应
                */
                class DescribeSignListStatus : public AbstractModel
                {
                public:
                    DescribeSignListStatus();
                    ~DescribeSignListStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签名Id
                     * @return SignId 签名Id
                     * 
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置签名Id
                     * @param _signId 签名Id
                     * 
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取申请签名状态。其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。
                     * @return StatusCode 申请签名状态。其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置申请签名状态。其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。
                     * @param _statusCode 申请签名状态。其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * @return ReviewReply 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * 
                     */
                    std::string GetReviewReply() const;

                    /**
                     * 设置审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * @param _reviewReply 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     * 
                     */
                    void SetReviewReply(const std::string& _reviewReply);

                    /**
                     * 判断参数 ReviewReply 是否已赋值
                     * @return ReviewReply 是否已赋值
                     * 
                     */
                    bool ReviewReplyHasBeenSet() const;

                    /**
                     * 获取签名名称。
                     * @return SignName 签名名称。
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置签名名称。
                     * @param _signName 签名名称。
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取提交审核时间，UNIX 时间戳（单位：秒）。
                     * @return CreateTime 提交审核时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置提交审核时间，UNIX 时间戳（单位：秒）。
                     * @param _createTime 提交审核时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取国内短信的资质 ID。资质 ID 信息可前往国内短信的 [实名资质管理](https://console.cloud.tencent.com/smsv2/enterprise) 页查看。
注：国际短信不涉及，默认为0。
                     * @return QualificationId 国内短信的资质 ID。资质 ID 信息可前往国内短信的 [实名资质管理](https://console.cloud.tencent.com/smsv2/enterprise) 页查看。
注：国际短信不涉及，默认为0。
                     * 
                     */
                    uint64_t GetQualificationId() const;

                    /**
                     * 设置国内短信的资质 ID。资质 ID 信息可前往国内短信的 [实名资质管理](https://console.cloud.tencent.com/smsv2/enterprise) 页查看。
注：国际短信不涉及，默认为0。
                     * @param _qualificationId 国内短信的资质 ID。资质 ID 信息可前往国内短信的 [实名资质管理](https://console.cloud.tencent.com/smsv2/enterprise) 页查看。
注：国际短信不涉及，默认为0。
                     * 
                     */
                    void SetQualificationId(const uint64_t& _qualificationId);

                    /**
                     * 判断参数 QualificationId 是否已赋值
                     * @return QualificationId 是否已赋值
                     * 
                     */
                    bool QualificationIdHasBeenSet() const;

                    /**
                     * 获取国内短信的资质名称。
注：国际短信不涉及，默认为空。
                     * @return QualificationName 国内短信的资质名称。
注：国际短信不涉及，默认为空。
                     * 
                     */
                    std::string GetQualificationName() const;

                    /**
                     * 设置国内短信的资质名称。
注：国际短信不涉及，默认为空。
                     * @param _qualificationName 国内短信的资质名称。
注：国际短信不涉及，默认为空。
                     * 
                     */
                    void SetQualificationName(const std::string& _qualificationName);

                    /**
                     * 判断参数 QualificationName 是否已赋值
                     * @return QualificationName 是否已赋值
                     * 
                     */
                    bool QualificationNameHasBeenSet() const;

                    /**
                     * 获取国内短信的资质状态。其中0表示待审核，1表示已通过，2表示已拒绝，3表示待补充后提交，4表示变更后待审核，5表示变更后被驳回。可参考 [实名资质审核状态说明](https://cloud.tencent.com/document/product/382/13444#.E5.AE.A1.E6.A0.B8.E7.8A.B6.E6.80.81.E8.AF.B4.E6.98.8E) 。
注：国际短信不涉及，默认为0。
                     * @return QualificationStatusCode 国内短信的资质状态。其中0表示待审核，1表示已通过，2表示已拒绝，3表示待补充后提交，4表示变更后待审核，5表示变更后被驳回。可参考 [实名资质审核状态说明](https://cloud.tencent.com/document/product/382/13444#.E5.AE.A1.E6.A0.B8.E7.8A.B6.E6.80.81.E8.AF.B4.E6.98.8E) 。
注：国际短信不涉及，默认为0。
                     * 
                     */
                    int64_t GetQualificationStatusCode() const;

                    /**
                     * 设置国内短信的资质状态。其中0表示待审核，1表示已通过，2表示已拒绝，3表示待补充后提交，4表示变更后待审核，5表示变更后被驳回。可参考 [实名资质审核状态说明](https://cloud.tencent.com/document/product/382/13444#.E5.AE.A1.E6.A0.B8.E7.8A.B6.E6.80.81.E8.AF.B4.E6.98.8E) 。
注：国际短信不涉及，默认为0。
                     * @param _qualificationStatusCode 国内短信的资质状态。其中0表示待审核，1表示已通过，2表示已拒绝，3表示待补充后提交，4表示变更后待审核，5表示变更后被驳回。可参考 [实名资质审核状态说明](https://cloud.tencent.com/document/product/382/13444#.E5.AE.A1.E6.A0.B8.E7.8A.B6.E6.80.81.E8.AF.B4.E6.98.8E) 。
注：国际短信不涉及，默认为0。
                     * 
                     */
                    void SetQualificationStatusCode(const int64_t& _qualificationStatusCode);

                    /**
                     * 判断参数 QualificationStatusCode 是否已赋值
                     * @return QualificationStatusCode 是否已赋值
                     * 
                     */
                    bool QualificationStatusCodeHasBeenSet() const;

                private:

                    /**
                     * 签名Id
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 申请签名状态。其中0表示审核通过且已生效，1表示审核中，2表示审核通过待生效，-1表示审核未通过或审核失败。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 审核回复，审核人员审核后给出的回复，通常是审核未通过的原因。
                     */
                    std::string m_reviewReply;
                    bool m_reviewReplyHasBeenSet;

                    /**
                     * 签名名称。
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * 提交审核时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 国内短信的资质 ID。资质 ID 信息可前往国内短信的 [实名资质管理](https://console.cloud.tencent.com/smsv2/enterprise) 页查看。
注：国际短信不涉及，默认为0。
                     */
                    uint64_t m_qualificationId;
                    bool m_qualificationIdHasBeenSet;

                    /**
                     * 国内短信的资质名称。
注：国际短信不涉及，默认为空。
                     */
                    std::string m_qualificationName;
                    bool m_qualificationNameHasBeenSet;

                    /**
                     * 国内短信的资质状态。其中0表示待审核，1表示已通过，2表示已拒绝，3表示待补充后提交，4表示变更后待审核，5表示变更后被驳回。可参考 [实名资质审核状态说明](https://cloud.tencent.com/document/product/382/13444#.E5.AE.A1.E6.A0.B8.E7.8A.B6.E6.80.81.E8.AF.B4.E6.98.8E) 。
注：国际短信不涉及，默认为0。
                     */
                    int64_t m_qualificationStatusCode;
                    bool m_qualificationStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_DESCRIBESIGNLISTSTATUS_H_
