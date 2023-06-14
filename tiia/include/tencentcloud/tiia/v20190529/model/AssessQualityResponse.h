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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_ASSESSQUALITYRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_ASSESSQUALITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * AssessQuality返回参数结构体
                */
                class AssessQualityResponse : public AbstractModel
                {
                public:
                    AssessQualityResponse();
                    ~AssessQualityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取取值为TRUE或FALSE，TRUE为长图，FALSE为正常图，长图定义为长宽比大于等于3或小于等于1/3的图片。
                     * @return LongImage 取值为TRUE或FALSE，TRUE为长图，FALSE为正常图，长图定义为长宽比大于等于3或小于等于1/3的图片。
                     * 
                     */
                    bool GetLongImage() const;

                    /**
                     * 判断参数 LongImage 是否已赋值
                     * @return LongImage 是否已赋值
                     * 
                     */
                    bool LongImageHasBeenSet() const;

                    /**
                     * 获取取值为TRUE或FALSE，TRUE为黑白图，FALSE为否。黑白图即灰度图，指红绿蓝三个通道都是以灰度色阶显示的图片，并非视觉上的“黑白图片”。
                     * @return BlackAndWhite 取值为TRUE或FALSE，TRUE为黑白图，FALSE为否。黑白图即灰度图，指红绿蓝三个通道都是以灰度色阶显示的图片，并非视觉上的“黑白图片”。
                     * 
                     */
                    bool GetBlackAndWhite() const;

                    /**
                     * 判断参数 BlackAndWhite 是否已赋值
                     * @return BlackAndWhite 是否已赋值
                     * 
                     */
                    bool BlackAndWhiteHasBeenSet() const;

                    /**
                     * 获取取值为TRUE或FALSE，TRUE为小图，FALSE为否, 小图定义为最长边小于179像素的图片。当一张图片被判断为小图时，不建议做推荐和展示，其他字段统一输出为0或FALSE。
                     * @return SmallImage 取值为TRUE或FALSE，TRUE为小图，FALSE为否, 小图定义为最长边小于179像素的图片。当一张图片被判断为小图时，不建议做推荐和展示，其他字段统一输出为0或FALSE。
                     * 
                     */
                    bool GetSmallImage() const;

                    /**
                     * 判断参数 SmallImage 是否已赋值
                     * @return SmallImage 是否已赋值
                     * 
                     */
                    bool SmallImageHasBeenSet() const;

                    /**
                     * 获取取值为TRUE或FALSE，TRUE为大图，FALSE为否，定义为最短边大于1000像素的图片
                     * @return BigImage 取值为TRUE或FALSE，TRUE为大图，FALSE为否，定义为最短边大于1000像素的图片
                     * 
                     */
                    bool GetBigImage() const;

                    /**
                     * 判断参数 BigImage 是否已赋值
                     * @return BigImage 是否已赋值
                     * 
                     */
                    bool BigImageHasBeenSet() const;

                    /**
                     * 获取取值为TRUE或FALSE，TRUE为纯色图或纯文字图，即没有内容或只有简单内容的图片，FALSE为正常图片。
                     * @return PureImage 取值为TRUE或FALSE，TRUE为纯色图或纯文字图，即没有内容或只有简单内容的图片，FALSE为正常图片。
                     * 
                     */
                    bool GetPureImage() const;

                    /**
                     * 判断参数 PureImage 是否已赋值
                     * @return PureImage 是否已赋值
                     * 
                     */
                    bool PureImageHasBeenSet() const;

                    /**
                     * 获取综合评分。图像清晰度的得分，对图片的噪声、曝光、模糊、压缩等因素进行综合评估，取值为[0, 100]，值越大，越清晰。一般大于50为较清晰图片，标准可以自行把握。
                     * @return ClarityScore 综合评分。图像清晰度的得分，对图片的噪声、曝光、模糊、压缩等因素进行综合评估，取值为[0, 100]，值越大，越清晰。一般大于50为较清晰图片，标准可以自行把握。
                     * 
                     */
                    int64_t GetClarityScore() const;

                    /**
                     * 判断参数 ClarityScore 是否已赋值
                     * @return ClarityScore 是否已赋值
                     * 
                     */
                    bool ClarityScoreHasBeenSet() const;

                    /**
                     * 获取综合评分。图像美观度得分， 从构图、色彩等多个艺术性维度评价图片，取值为[0, 100]，值越大，越美观。一般大于50为较美观图片，标准可以自行把握。
                     * @return AestheticScore 综合评分。图像美观度得分， 从构图、色彩等多个艺术性维度评价图片，取值为[0, 100]，值越大，越美观。一般大于50为较美观图片，标准可以自行把握。
                     * 
                     */
                    int64_t GetAestheticScore() const;

                    /**
                     * 判断参数 AestheticScore 是否已赋值
                     * @return AestheticScore 是否已赋值
                     * 
                     */
                    bool AestheticScoreHasBeenSet() const;

                private:

                    /**
                     * 取值为TRUE或FALSE，TRUE为长图，FALSE为正常图，长图定义为长宽比大于等于3或小于等于1/3的图片。
                     */
                    bool m_longImage;
                    bool m_longImageHasBeenSet;

                    /**
                     * 取值为TRUE或FALSE，TRUE为黑白图，FALSE为否。黑白图即灰度图，指红绿蓝三个通道都是以灰度色阶显示的图片，并非视觉上的“黑白图片”。
                     */
                    bool m_blackAndWhite;
                    bool m_blackAndWhiteHasBeenSet;

                    /**
                     * 取值为TRUE或FALSE，TRUE为小图，FALSE为否, 小图定义为最长边小于179像素的图片。当一张图片被判断为小图时，不建议做推荐和展示，其他字段统一输出为0或FALSE。
                     */
                    bool m_smallImage;
                    bool m_smallImageHasBeenSet;

                    /**
                     * 取值为TRUE或FALSE，TRUE为大图，FALSE为否，定义为最短边大于1000像素的图片
                     */
                    bool m_bigImage;
                    bool m_bigImageHasBeenSet;

                    /**
                     * 取值为TRUE或FALSE，TRUE为纯色图或纯文字图，即没有内容或只有简单内容的图片，FALSE为正常图片。
                     */
                    bool m_pureImage;
                    bool m_pureImageHasBeenSet;

                    /**
                     * 综合评分。图像清晰度的得分，对图片的噪声、曝光、模糊、压缩等因素进行综合评估，取值为[0, 100]，值越大，越清晰。一般大于50为较清晰图片，标准可以自行把握。
                     */
                    int64_t m_clarityScore;
                    bool m_clarityScoreHasBeenSet;

                    /**
                     * 综合评分。图像美观度得分， 从构图、色彩等多个艺术性维度评价图片，取值为[0, 100]，值越大，越美观。一般大于50为较美观图片，标准可以自行把握。
                     */
                    int64_t m_aestheticScore;
                    bool m_aestheticScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_ASSESSQUALITYRESPONSE_H_
