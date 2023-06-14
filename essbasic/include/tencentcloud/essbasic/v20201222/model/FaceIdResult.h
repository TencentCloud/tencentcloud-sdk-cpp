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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDRESULT_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (FaceIdResult) 用于描述慧眼人脸核身结果。
                */
                class FaceIdResult : public AbstractModel
                {
                public:
                    FaceIdResult();
                    ~FaceIdResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取核身结果：
0 - 通过；
1 - 未通过
                     * @return Result 核身结果：
0 - 通过；
1 - 未通过
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置核身结果：
0 - 通过；
1 - 未通过
                     * @param _result 核身结果：
0 - 通过；
1 - 未通过
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取核身失败描述
                     * @return Description 核身失败描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置核身失败描述
                     * @param _description 核身失败描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取订单号 (orderNo)
                     * @return OrderNumber 订单号 (orderNo)
                     * 
                     */
                    std::string GetOrderNumber() const;

                    /**
                     * 设置订单号 (orderNo)
                     * @param _orderNumber 订单号 (orderNo)
                     * 
                     */
                    void SetOrderNumber(const std::string& _orderNumber);

                    /**
                     * 判断参数 OrderNumber 是否已赋值
                     * @return OrderNumber 是否已赋值
                     * 
                     */
                    bool OrderNumberHasBeenSet() const;

                    /**
                     * 获取姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 姓名
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
                     * 获取身份证件类型： 
ID_CARD - 居民身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardType 身份证件类型： 
ID_CARD - 居民身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置身份证件类型： 
ID_CARD - 居民身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCardType 身份证件类型： 
ID_CARD - 居民身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardNumber 身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCardNumber 身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取活体检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveRate 活体检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLiveRate() const;

                    /**
                     * 设置活体检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveRate 活体检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveRate(const int64_t& _liveRate);

                    /**
                     * 判断参数 LiveRate 是否已赋值
                     * @return LiveRate 是否已赋值
                     * 
                     */
                    bool LiveRateHasBeenSet() const;

                    /**
                     * 获取人脸检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Similarity 人脸检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置人脸检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similarity 人脸检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取刷脸时间 (UNIX时间戳)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OccurredTime 刷脸时间 (UNIX时间戳)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOccurredTime() const;

                    /**
                     * 设置刷脸时间 (UNIX时间戳)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _occurredTime 刷脸时间 (UNIX时间戳)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOccurredTime(const int64_t& _occurredTime);

                    /**
                     * 判断参数 OccurredTime 是否已赋值
                     * @return OccurredTime 是否已赋值
                     * 
                     */
                    bool OccurredTimeHasBeenSet() const;

                    /**
                     * 获取照片数据 (base64编码, 一般为JPG或PNG)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Photo 照片数据 (base64编码, 一般为JPG或PNG)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhoto() const;

                    /**
                     * 设置照片数据 (base64编码, 一般为JPG或PNG)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _photo 照片数据 (base64编码, 一般为JPG或PNG)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoto(const std::string& _photo);

                    /**
                     * 判断参数 Photo 是否已赋值
                     * @return Photo 是否已赋值
                     * 
                     */
                    bool PhotoHasBeenSet() const;

                    /**
                     * 获取视频数据 (base64编码, 一般为MP4)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video 视频数据 (base64编码, 一般为MP4)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置视频数据 (base64编码, 一般为MP4)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _video 视频数据 (base64编码, 一般为MP4)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                private:

                    /**
                     * 核身结果：
0 - 通过；
1 - 未通过
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 核身失败描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 订单号 (orderNo)
                     */
                    std::string m_orderNumber;
                    bool m_orderNumberHasBeenSet;

                    /**
                     * 姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证件类型： 
ID_CARD - 居民身份证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 身份证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 活体检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_liveRate;
                    bool m_liveRateHasBeenSet;

                    /**
                     * 人脸检测得分 (百分制)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 刷脸时间 (UNIX时间戳)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_occurredTime;
                    bool m_occurredTimeHasBeenSet;

                    /**
                     * 照片数据 (base64编码, 一般为JPG或PNG)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * 视频数据 (base64编码, 一般为MP4)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_FACEIDRESULT_H_
