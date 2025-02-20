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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITGLAMPICJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITGLAMPICJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aiart/v20221229/model/FaceInfo.h>
#include <tencentcloud/aiart/v20221229/model/LogoParam.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * SubmitGlamPicJob请求参数结构体
                */
                class SubmitGlamPicJobRequest : public AbstractModel
                {
                public:
                    SubmitGlamPicJobRequest();
                    ~SubmitGlamPicJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取美照模板图 URL。
图片限制：模板图中最多出现5张人脸，单边分辨率大于300，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @return TemplateUrl 美照模板图 URL。
图片限制：模板图中最多出现5张人脸，单边分辨率大于300，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    std::string GetTemplateUrl() const;

                    /**
                     * 设置美照模板图 URL。
图片限制：模板图中最多出现5张人脸，单边分辨率大于300，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * @param _templateUrl 美照模板图 URL。
图片限制：模板图中最多出现5张人脸，单边分辨率大于300，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     * 
                     */
                    void SetTemplateUrl(const std::string& _templateUrl);

                    /**
                     * 判断参数 TemplateUrl 是否已赋值
                     * @return TemplateUrl 是否已赋值
                     * 
                     */
                    bool TemplateUrlHasBeenSet() const;

                    /**
                     * 获取用户图 URL 列表，以及模板图中需要替换成用户的人脸框信息。
一张美照中可包含1 ~ 5个用户形象。每个用户需上传1 ~ 6张照片，如果图中存在多个人脸将取最大人脸。
模板图中的人脸数量需要大于等于用户个数。如果不传每个用户在模板图中的人脸框位置，默认按照模板图人脸框从大到小的顺序进行替换。如需自定义顺序，需要依次上传每个用户在模板图中的人脸框位置。
图片限制：每张图片转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的用户图。
                     * @return FaceInfos 用户图 URL 列表，以及模板图中需要替换成用户的人脸框信息。
一张美照中可包含1 ~ 5个用户形象。每个用户需上传1 ~ 6张照片，如果图中存在多个人脸将取最大人脸。
模板图中的人脸数量需要大于等于用户个数。如果不传每个用户在模板图中的人脸框位置，默认按照模板图人脸框从大到小的顺序进行替换。如需自定义顺序，需要依次上传每个用户在模板图中的人脸框位置。
图片限制：每张图片转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的用户图。
                     * 
                     */
                    std::vector<FaceInfo> GetFaceInfos() const;

                    /**
                     * 设置用户图 URL 列表，以及模板图中需要替换成用户的人脸框信息。
一张美照中可包含1 ~ 5个用户形象。每个用户需上传1 ~ 6张照片，如果图中存在多个人脸将取最大人脸。
模板图中的人脸数量需要大于等于用户个数。如果不传每个用户在模板图中的人脸框位置，默认按照模板图人脸框从大到小的顺序进行替换。如需自定义顺序，需要依次上传每个用户在模板图中的人脸框位置。
图片限制：每张图片转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的用户图。
                     * @param _faceInfos 用户图 URL 列表，以及模板图中需要替换成用户的人脸框信息。
一张美照中可包含1 ~ 5个用户形象。每个用户需上传1 ~ 6张照片，如果图中存在多个人脸将取最大人脸。
模板图中的人脸数量需要大于等于用户个数。如果不传每个用户在模板图中的人脸框位置，默认按照模板图人脸框从大到小的顺序进行替换。如需自定义顺序，需要依次上传每个用户在模板图中的人脸框位置。
图片限制：每张图片转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的用户图。
                     * 
                     */
                    void SetFaceInfos(const std::vector<FaceInfo>& _faceInfos);

                    /**
                     * 判断参数 FaceInfos 是否已赋值
                     * @return FaceInfos 是否已赋值
                     * 
                     */
                    bool FaceInfosHasBeenSet() const;

                    /**
                     * 获取美照生成数量。
支持1 ~ 4张，默认生成4张。
                     * @return Num 美照生成数量。
支持1 ~ 4张，默认生成4张。
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置美照生成数量。
支持1 ~ 4张，默认生成4张。
                     * @param _num 美照生成数量。
支持1 ~ 4张，默认生成4张。
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取美照生成风格。
仅对单人美照生效，单人可支持选择不同风格。需按照美照生成数量，在数组中逐一填入每张美照的风格名称。如果不传，默认取不重复的随机风格顺序。
多人美照只支持 balanced 一种风格，该参数不生效。
可选风格：<ul><li>real：面部相似度更高。</li><li>balanced：平衡面部真实感和美观度。</li><li>textured：脸部皮肤更具真实感。</li><li>beautiful：脸部美观度更高。</li></ul>
                     * @return Style 美照生成风格。
仅对单人美照生效，单人可支持选择不同风格。需按照美照生成数量，在数组中逐一填入每张美照的风格名称。如果不传，默认取不重复的随机风格顺序。
多人美照只支持 balanced 一种风格，该参数不生效。
可选风格：<ul><li>real：面部相似度更高。</li><li>balanced：平衡面部真实感和美观度。</li><li>textured：脸部皮肤更具真实感。</li><li>beautiful：脸部美观度更高。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetStyle() const;

                    /**
                     * 设置美照生成风格。
仅对单人美照生效，单人可支持选择不同风格。需按照美照生成数量，在数组中逐一填入每张美照的风格名称。如果不传，默认取不重复的随机风格顺序。
多人美照只支持 balanced 一种风格，该参数不生效。
可选风格：<ul><li>real：面部相似度更高。</li><li>balanced：平衡面部真实感和美观度。</li><li>textured：脸部皮肤更具真实感。</li><li>beautiful：脸部美观度更高。</li></ul>
                     * @param _style 美照生成风格。
仅对单人美照生效，单人可支持选择不同风格。需按照美照生成数量，在数组中逐一填入每张美照的风格名称。如果不传，默认取不重复的随机风格顺序。
多人美照只支持 balanced 一种风格，该参数不生效。
可选风格：<ul><li>real：面部相似度更高。</li><li>balanced：平衡面部真实感和美观度。</li><li>textured：脸部皮肤更具真实感。</li><li>beautiful：脸部美观度更高。</li></ul>
                     * 
                     */
                    void SetStyle(const std::vector<std::string>& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取相似度系数，越高越像用户图。
取值范围[0, 1]，默认为0.6。
                     * @return Similarity 相似度系数，越高越像用户图。
取值范围[0, 1]，默认为0.6。
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置相似度系数，越高越像用户图。
取值范围[0, 1]，默认为0.6。
                     * @param _similarity 相似度系数，越高越像用户图。
取值范围[0, 1]，默认为0.6。
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
                     * 获取超分选项，默认不做超分，可选开启。
x2：2倍超分
x4：4倍超分
                     * @return Clarity 超分选项，默认不做超分，可选开启。
x2：2倍超分
x4：4倍超分
                     * 
                     */
                    std::string GetClarity() const;

                    /**
                     * 设置超分选项，默认不做超分，可选开启。
x2：2倍超分
x4：4倍超分
                     * @param _clarity 超分选项，默认不做超分，可选开启。
x2：2倍超分
x4：4倍超分
                     * 
                     */
                    void SetClarity(const std::string& _clarity);

                    /**
                     * 判断参数 Clarity 是否已赋值
                     * @return Clarity 是否已赋值
                     * 
                     */
                    bool ClarityHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     * 
                     */
                    void SetLogoAdd(const int64_t& _logoAdd);

                    /**
                     * 判断参数 LogoAdd 是否已赋值
                     * @return LogoAdd 是否已赋值
                     * 
                     */
                    bool LogoAddHasBeenSet() const;

                    /**
                     * 获取标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @return LogoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * @param _logoParam 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     * 
                     */
                    void SetLogoParam(const LogoParam& _logoParam);

                    /**
                     * 判断参数 LogoParam 是否已赋值
                     * @return LogoParam 是否已赋值
                     * 
                     */
                    bool LogoParamHasBeenSet() const;

                private:

                    /**
                     * 美照模板图 URL。
图片限制：模板图中最多出现5张人脸，单边分辨率大于300，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。
                     */
                    std::string m_templateUrl;
                    bool m_templateUrlHasBeenSet;

                    /**
                     * 用户图 URL 列表，以及模板图中需要替换成用户的人脸框信息。
一张美照中可包含1 ~ 5个用户形象。每个用户需上传1 ~ 6张照片，如果图中存在多个人脸将取最大人脸。
模板图中的人脸数量需要大于等于用户个数。如果不传每个用户在模板图中的人脸框位置，默认按照模板图人脸框从大到小的顺序进行替换。如需自定义顺序，需要依次上传每个用户在模板图中的人脸框位置。
图片限制：每张图片转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png、bmp、tiff、webp。建议使用单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的用户图。
                     */
                    std::vector<FaceInfo> m_faceInfos;
                    bool m_faceInfosHasBeenSet;

                    /**
                     * 美照生成数量。
支持1 ~ 4张，默认生成4张。
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 美照生成风格。
仅对单人美照生效，单人可支持选择不同风格。需按照美照生成数量，在数组中逐一填入每张美照的风格名称。如果不传，默认取不重复的随机风格顺序。
多人美照只支持 balanced 一种风格，该参数不生效。
可选风格：<ul><li>real：面部相似度更高。</li><li>balanced：平衡面部真实感和美观度。</li><li>textured：脸部皮肤更具真实感。</li><li>beautiful：脸部美观度更高。</li></ul>
                     */
                    std::vector<std::string> m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 相似度系数，越高越像用户图。
取值范围[0, 1]，默认为0.6。
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 超分选项，默认不做超分，可选开启。
x2：2倍超分
x4：4倍超分
                     */
                    std::string m_clarity;
                    bool m_clarityHasBeenSet;

                    /**
                     * 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITGLAMPICJOBREQUEST_H_
