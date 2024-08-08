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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ChangeClothes请求参数结构体
                */
                class ChangeClothesRequest : public AbstractModel
                {
                public:
                    ChangeClothesRequest();
                    ~ChangeClothesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模特图片 Url。
图片限制：单边分辨率小于3000，且大于512，转成 Base64 字符串后小于 8MB。
输入要求：
1、建议上传正面模特图片，至少完整露出应穿着输入指定服装的身体部位（全身、上半身或下半身），无大角度身体偏转或异常姿势。
2、建议上传3:4比例的图片，生成效果更佳。
3、建议模特图片中的原始服装和更换后的服装类别一致，或原始服装在身体上的覆盖范围小于等于更换后的服装（例如需要给模特换上短裤，则原始模特图片中也建议穿短裤，不建议穿长裤），否则会影响人像生成效果。

                     * @return ModelUrl 模特图片 Url。
图片限制：单边分辨率小于3000，且大于512，转成 Base64 字符串后小于 8MB。
输入要求：
1、建议上传正面模特图片，至少完整露出应穿着输入指定服装的身体部位（全身、上半身或下半身），无大角度身体偏转或异常姿势。
2、建议上传3:4比例的图片，生成效果更佳。
3、建议模特图片中的原始服装和更换后的服装类别一致，或原始服装在身体上的覆盖范围小于等于更换后的服装（例如需要给模特换上短裤，则原始模特图片中也建议穿短裤，不建议穿长裤），否则会影响人像生成效果。

                     * 
                     */
                    std::string GetModelUrl() const;

                    /**
                     * 设置模特图片 Url。
图片限制：单边分辨率小于3000，且大于512，转成 Base64 字符串后小于 8MB。
输入要求：
1、建议上传正面模特图片，至少完整露出应穿着输入指定服装的身体部位（全身、上半身或下半身），无大角度身体偏转或异常姿势。
2、建议上传3:4比例的图片，生成效果更佳。
3、建议模特图片中的原始服装和更换后的服装类别一致，或原始服装在身体上的覆盖范围小于等于更换后的服装（例如需要给模特换上短裤，则原始模特图片中也建议穿短裤，不建议穿长裤），否则会影响人像生成效果。

                     * @param _modelUrl 模特图片 Url。
图片限制：单边分辨率小于3000，且大于512，转成 Base64 字符串后小于 8MB。
输入要求：
1、建议上传正面模特图片，至少完整露出应穿着输入指定服装的身体部位（全身、上半身或下半身），无大角度身体偏转或异常姿势。
2、建议上传3:4比例的图片，生成效果更佳。
3、建议模特图片中的原始服装和更换后的服装类别一致，或原始服装在身体上的覆盖范围小于等于更换后的服装（例如需要给模特换上短裤，则原始模特图片中也建议穿短裤，不建议穿长裤），否则会影响人像生成效果。

                     * 
                     */
                    void SetModelUrl(const std::string& _modelUrl);

                    /**
                     * 判断参数 ModelUrl 是否已赋值
                     * @return ModelUrl 是否已赋值
                     * 
                     */
                    bool ModelUrlHasBeenSet() const;

                    /**
                     * 获取服装图片 Url。
图片限制：单边分辨率小于3000，大于512，转成 Base64 字符串后小于 8MB。
输入要求：
建议上传服装完整的正面平铺图片，仅包含1个服装主体，服装类型支持上衣、下装、连衣裙，三选一。算法将根据输入的图片，结合服装图片给模特换装。
                     * @return ClothesUrl 服装图片 Url。
图片限制：单边分辨率小于3000，大于512，转成 Base64 字符串后小于 8MB。
输入要求：
建议上传服装完整的正面平铺图片，仅包含1个服装主体，服装类型支持上衣、下装、连衣裙，三选一。算法将根据输入的图片，结合服装图片给模特换装。
                     * 
                     */
                    std::string GetClothesUrl() const;

                    /**
                     * 设置服装图片 Url。
图片限制：单边分辨率小于3000，大于512，转成 Base64 字符串后小于 8MB。
输入要求：
建议上传服装完整的正面平铺图片，仅包含1个服装主体，服装类型支持上衣、下装、连衣裙，三选一。算法将根据输入的图片，结合服装图片给模特换装。
                     * @param _clothesUrl 服装图片 Url。
图片限制：单边分辨率小于3000，大于512，转成 Base64 字符串后小于 8MB。
输入要求：
建议上传服装完整的正面平铺图片，仅包含1个服装主体，服装类型支持上衣、下装、连衣裙，三选一。算法将根据输入的图片，结合服装图片给模特换装。
                     * 
                     */
                    void SetClothesUrl(const std::string& _clothesUrl);

                    /**
                     * 判断参数 ClothesUrl 是否已赋值
                     * @return ClothesUrl 是否已赋值
                     * 
                     */
                    bool ClothesUrlHasBeenSet() const;

                    /**
                     * 获取服装类型，需要和服装图片保持一致。
取值：
Upper-body：上衣
Lower-body：下装
Dress：连衣裙
                     * @return ClothesType 服装类型，需要和服装图片保持一致。
取值：
Upper-body：上衣
Lower-body：下装
Dress：连衣裙
                     * 
                     */
                    std::string GetClothesType() const;

                    /**
                     * 设置服装类型，需要和服装图片保持一致。
取值：
Upper-body：上衣
Lower-body：下装
Dress：连衣裙
                     * @param _clothesType 服装类型，需要和服装图片保持一致。
取值：
Upper-body：上衣
Lower-body：下装
Dress：连衣裙
                     * 
                     */
                    void SetClothesType(const std::string& _clothesType);

                    /**
                     * 判断参数 ClothesType 是否已赋值
                     * @return ClothesType 是否已赋值
                     * 
                     */
                    bool ClothesTypeHasBeenSet() const;

                    /**
                     * 获取为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @return LogoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     * @param _logoAdd 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
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

                    /**
                     * 获取返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。
                     * @return RspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。
                     * @param _rspImgType 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                private:

                    /**
                     * 模特图片 Url。
图片限制：单边分辨率小于3000，且大于512，转成 Base64 字符串后小于 8MB。
输入要求：
1、建议上传正面模特图片，至少完整露出应穿着输入指定服装的身体部位（全身、上半身或下半身），无大角度身体偏转或异常姿势。
2、建议上传3:4比例的图片，生成效果更佳。
3、建议模特图片中的原始服装和更换后的服装类别一致，或原始服装在身体上的覆盖范围小于等于更换后的服装（例如需要给模特换上短裤，则原始模特图片中也建议穿短裤，不建议穿长裤），否则会影响人像生成效果。

                     */
                    std::string m_modelUrl;
                    bool m_modelUrlHasBeenSet;

                    /**
                     * 服装图片 Url。
图片限制：单边分辨率小于3000，大于512，转成 Base64 字符串后小于 8MB。
输入要求：
建议上传服装完整的正面平铺图片，仅包含1个服装主体，服装类型支持上衣、下装、连衣裙，三选一。算法将根据输入的图片，结合服装图片给模特换装。
                     */
                    std::string m_clothesUrl;
                    bool m_clothesUrlHasBeenSet;

                    /**
                     * 服装类型，需要和服装图片保持一致。
取值：
Upper-body：上衣
Lower-body：下装
Dress：连衣裙
                     */
                    std::string m_clothesType;
                    bool m_clothesTypeHasBeenSet;

                    /**
                     * 为生成结果图添加标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了 AI 绘画技术，是 AI 生成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在生成结果图右下角添加“图片由 AI 生成”字样，您可根据自身需要替换为其他的标识图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * 返回图像方式（base64 或 url) ，二选一，默认为 base64。url 有效期为1小时。
生成图分辨率较大时建议选择 url，使用 base64 可能因图片过大导致返回失败。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_CHANGECLOTHESREQUEST_H_
