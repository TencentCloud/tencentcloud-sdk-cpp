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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRAREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/MergeInfo.h>
#include <tencentcloud/facefusion/v20220927/model/FusionUltraParam.h>
#include <tencentcloud/facefusion/v20220927/model/LogoParam.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * FuseFaceUltra请求参数结构体
                */
                class FuseFaceUltraRequest : public AbstractModel
                {
                public:
                    FuseFaceUltraRequest();
                    ~FuseFaceUltraRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回融合结果图片方式（url 或 base64) ，二选一。url有效期为1天。
                     * @return RspImgType 返回融合结果图片方式（url 或 base64) ，二选一。url有效期为1天。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回融合结果图片方式（url 或 base64) ，二选一。url有效期为1天。
                     * @param _rspImgType 返回融合结果图片方式（url 或 base64) ，二选一。url有效期为1天。
                     * 
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     * 
                     */
                    bool RspImgTypeHasBeenSet() const;

                    /**
                     * 获取用户人脸图片、素材模板图的人脸位置信息。主要用于素材模版中人脸以及用作融合的用户人脸相关信息，两种人脸都需要提供人脸图片，可选择提供人脸框位置，具体见MergeInfo说明 
目前最多支持融合模板图片中的6张人脸。
                     * @return MergeInfos 用户人脸图片、素材模板图的人脸位置信息。主要用于素材模版中人脸以及用作融合的用户人脸相关信息，两种人脸都需要提供人脸图片，可选择提供人脸框位置，具体见MergeInfo说明 
目前最多支持融合模板图片中的6张人脸。
                     * 
                     */
                    std::vector<MergeInfo> GetMergeInfos() const;

                    /**
                     * 设置用户人脸图片、素材模板图的人脸位置信息。主要用于素材模版中人脸以及用作融合的用户人脸相关信息，两种人脸都需要提供人脸图片，可选择提供人脸框位置，具体见MergeInfo说明 
目前最多支持融合模板图片中的6张人脸。
                     * @param _mergeInfos 用户人脸图片、素材模板图的人脸位置信息。主要用于素材模版中人脸以及用作融合的用户人脸相关信息，两种人脸都需要提供人脸图片，可选择提供人脸框位置，具体见MergeInfo说明 
目前最多支持融合模板图片中的6张人脸。
                     * 
                     */
                    void SetMergeInfos(const std::vector<MergeInfo>& _mergeInfos);

                    /**
                     * 判断参数 MergeInfos 是否已赋值
                     * @return MergeInfos 是否已赋值
                     * 
                     */
                    bool MergeInfosHasBeenSet() const;

                    /**
                     * 获取素材模版图片的url地址。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000 * 8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●图片格式：支持jpg或png

                     * @return ModelUrl 素材模版图片的url地址。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000 * 8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●图片格式：支持jpg或png

                     * 
                     */
                    std::string GetModelUrl() const;

                    /**
                     * 设置素材模版图片的url地址。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000 * 8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●图片格式：支持jpg或png

                     * @param _modelUrl 素材模版图片的url地址。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000 * 8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●图片格式：支持jpg或png

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
                     * 获取素材模版图片base64数据。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000*8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●支持图片格式：支持jpg或png
                     * @return ModelImage 素材模版图片base64数据。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000*8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●支持图片格式：支持jpg或png
                     * 
                     */
                    std::string GetModelImage() const;

                    /**
                     * 设置素材模版图片base64数据。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000*8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●支持图片格式：支持jpg或png
                     * @param _modelImage 素材模版图片base64数据。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000*8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●支持图片格式：支持jpg或png
                     * 
                     */
                    void SetModelImage(const std::string& _modelImage);

                    /**
                     * 判断参数 ModelImage 是否已赋值
                     * @return ModelImage 是否已赋值
                     * 
                     */
                    bool ModelImageHasBeenSet() const;

                    /**
                     * 获取图片人脸融合（专业版）效果参数。可用于设置拉脸、人脸增强、磨皮、牙齿增强、妆容迁移等融合效果参数，生成理想的融合效果。不传默认使用接口推荐值。具体见FusionUltraParam说明
                     * @return FusionUltraParam 图片人脸融合（专业版）效果参数。可用于设置拉脸、人脸增强、磨皮、牙齿增强、妆容迁移等融合效果参数，生成理想的融合效果。不传默认使用接口推荐值。具体见FusionUltraParam说明
                     * 
                     */
                    FusionUltraParam GetFusionUltraParam() const;

                    /**
                     * 设置图片人脸融合（专业版）效果参数。可用于设置拉脸、人脸增强、磨皮、牙齿增强、妆容迁移等融合效果参数，生成理想的融合效果。不传默认使用接口推荐值。具体见FusionUltraParam说明
                     * @param _fusionUltraParam 图片人脸融合（专业版）效果参数。可用于设置拉脸、人脸增强、磨皮、牙齿增强、妆容迁移等融合效果参数，生成理想的融合效果。不传默认使用接口推荐值。具体见FusionUltraParam说明
                     * 
                     */
                    void SetFusionUltraParam(const FusionUltraParam& _fusionUltraParam);

                    /**
                     * 判断参数 FusionUltraParam 是否已赋值
                     * @return FusionUltraParam 是否已赋值
                     * 
                     */
                    bool FusionUltraParamHasBeenSet() const;

                    /**
                     * 获取为融合结果图添加合成标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了人脸融合技术，是AI合成的图片。
                     * @return LogoAdd 为融合结果图添加合成标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了人脸融合技术，是AI合成的图片。
                     * 
                     */
                    int64_t GetLogoAdd() const;

                    /**
                     * 设置为融合结果图添加合成标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了人脸融合技术，是AI合成的图片。
                     * @param _logoAdd 为融合结果图添加合成标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了人脸融合技术，是AI合成的图片。
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
默认在融合结果图右下角添加“本图片为AI合成图片”字样，您可根据自身需要替换为其他的Logo图片。
                     * @return LogoParam 标识内容设置。
默认在融合结果图右下角添加“本图片为AI合成图片”字样，您可根据自身需要替换为其他的Logo图片。
                     * 
                     */
                    LogoParam GetLogoParam() const;

                    /**
                     * 设置标识内容设置。
默认在融合结果图右下角添加“本图片为AI合成图片”字样，您可根据自身需要替换为其他的Logo图片。
                     * @param _logoParam 标识内容设置。
默认在融合结果图右下角添加“本图片为AI合成图片”字样，您可根据自身需要替换为其他的Logo图片。
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
                     * 获取融合模型类型参数：默认为1。
图片人脸融合（专业版）针对不同场景，提供多种模型供选择。如您的产品是泛娱乐场景，推荐使用1；如您主要用于影像场景，推荐使用4、5。其他模型类型也可以结合您的产品使用场景进行选择，也许会有意想不到的效果
1：默认泛娱乐场景，画面偏锐。
2：影视级场景，画面偏自然。
3：影视级场景，高分辨率，画面偏自然。
4：影视级场景，高分辦率，高人脸相似度，画面偏自然，可用于证件照等场景。
5：影视级场景，高分辨率，对闭眼和遮挡更友好。
                     * @return SwapModelType 融合模型类型参数：默认为1。
图片人脸融合（专业版）针对不同场景，提供多种模型供选择。如您的产品是泛娱乐场景，推荐使用1；如您主要用于影像场景，推荐使用4、5。其他模型类型也可以结合您的产品使用场景进行选择，也许会有意想不到的效果
1：默认泛娱乐场景，画面偏锐。
2：影视级场景，画面偏自然。
3：影视级场景，高分辨率，画面偏自然。
4：影视级场景，高分辦率，高人脸相似度，画面偏自然，可用于证件照等场景。
5：影视级场景，高分辨率，对闭眼和遮挡更友好。
                     * 
                     */
                    int64_t GetSwapModelType() const;

                    /**
                     * 设置融合模型类型参数：默认为1。
图片人脸融合（专业版）针对不同场景，提供多种模型供选择。如您的产品是泛娱乐场景，推荐使用1；如您主要用于影像场景，推荐使用4、5。其他模型类型也可以结合您的产品使用场景进行选择，也许会有意想不到的效果
1：默认泛娱乐场景，画面偏锐。
2：影视级场景，画面偏自然。
3：影视级场景，高分辨率，画面偏自然。
4：影视级场景，高分辦率，高人脸相似度，画面偏自然，可用于证件照等场景。
5：影视级场景，高分辨率，对闭眼和遮挡更友好。
                     * @param _swapModelType 融合模型类型参数：默认为1。
图片人脸融合（专业版）针对不同场景，提供多种模型供选择。如您的产品是泛娱乐场景，推荐使用1；如您主要用于影像场景，推荐使用4、5。其他模型类型也可以结合您的产品使用场景进行选择，也许会有意想不到的效果
1：默认泛娱乐场景，画面偏锐。
2：影视级场景，画面偏自然。
3：影视级场景，高分辨率，画面偏自然。
4：影视级场景，高分辦率，高人脸相似度，画面偏自然，可用于证件照等场景。
5：影视级场景，高分辨率，对闭眼和遮挡更友好。
                     * 
                     */
                    void SetSwapModelType(const int64_t& _swapModelType);

                    /**
                     * 判断参数 SwapModelType 是否已赋值
                     * @return SwapModelType 是否已赋值
                     * 
                     */
                    bool SwapModelTypeHasBeenSet() const;

                private:

                    /**
                     * 返回融合结果图片方式（url 或 base64) ，二选一。url有效期为1天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * 用户人脸图片、素材模板图的人脸位置信息。主要用于素材模版中人脸以及用作融合的用户人脸相关信息，两种人脸都需要提供人脸图片，可选择提供人脸框位置，具体见MergeInfo说明 
目前最多支持融合模板图片中的6张人脸。
                     */
                    std::vector<MergeInfo> m_mergeInfos;
                    bool m_mergeInfosHasBeenSet;

                    /**
                     * 素材模版图片的url地址。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000 * 8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●图片格式：支持jpg或png

                     */
                    std::string m_modelUrl;
                    bool m_modelUrlHasBeenSet;

                    /**
                     * 素材模版图片base64数据。
●base64 和 url 必须提供一个，如果都提供以 url 为准。
●素材图片限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于8000*8000（单边限制）。
●图片大小限制：base64 编码后大小不可超过10M， url不超过20M。
●支持图片格式：支持jpg或png
                     */
                    std::string m_modelImage;
                    bool m_modelImageHasBeenSet;

                    /**
                     * 图片人脸融合（专业版）效果参数。可用于设置拉脸、人脸增强、磨皮、牙齿增强、妆容迁移等融合效果参数，生成理想的融合效果。不传默认使用接口推荐值。具体见FusionUltraParam说明
                     */
                    FusionUltraParam m_fusionUltraParam;
                    bool m_fusionUltraParamHasBeenSet;

                    /**
                     * 为融合结果图添加合成标识的开关，默认为1。
1：添加标识。
0：不添加标识。
其他数值：默认按1处理。
建议您使用显著标识来提示结果图使用了人脸融合技术，是AI合成的图片。
                     */
                    int64_t m_logoAdd;
                    bool m_logoAddHasBeenSet;

                    /**
                     * 标识内容设置。
默认在融合结果图右下角添加“本图片为AI合成图片”字样，您可根据自身需要替换为其他的Logo图片。
                     */
                    LogoParam m_logoParam;
                    bool m_logoParamHasBeenSet;

                    /**
                     * 融合模型类型参数：默认为1。
图片人脸融合（专业版）针对不同场景，提供多种模型供选择。如您的产品是泛娱乐场景，推荐使用1；如您主要用于影像场景，推荐使用4、5。其他模型类型也可以结合您的产品使用场景进行选择，也许会有意想不到的效果
1：默认泛娱乐场景，画面偏锐。
2：影视级场景，画面偏自然。
3：影视级场景，高分辨率，画面偏自然。
4：影视级场景，高分辦率，高人脸相似度，画面偏自然，可用于证件照等场景。
5：影视级场景，高分辨率，对闭眼和遮挡更友好。
                     */
                    int64_t m_swapModelType;
                    bool m_swapModelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRAREQUEST_H_
