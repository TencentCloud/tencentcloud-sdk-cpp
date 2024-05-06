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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_

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
                * SubmitDrawPortraitJob请求参数结构体
                */
                class SubmitDrawPortraitJobRequest : public AbstractModel
                {
                public:
                    SubmitDrawPortraitJobRequest();
                    ~SubmitDrawPortraitJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取写真模型 ID。

                     * @return ModelId 写真模型 ID。

                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置写真模型 ID。

                     * @param _modelId 写真模型 ID。

                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取写真风格模板。
请在[ AI 写真风格列表](https://cloud.tencent.com/document/product/1668/105740) 中选择期望的风格，传入风格编号。
                     * @return StyleId 写真风格模板。
请在[ AI 写真风格列表](https://cloud.tencent.com/document/product/1668/105740) 中选择期望的风格，传入风格编号。
                     * 
                     */
                    std::string GetStyleId() const;

                    /**
                     * 设置写真风格模板。
请在[ AI 写真风格列表](https://cloud.tencent.com/document/product/1668/105740) 中选择期望的风格，传入风格编号。
                     * @param _styleId 写真风格模板。
请在[ AI 写真风格列表](https://cloud.tencent.com/document/product/1668/105740) 中选择期望的风格，传入风格编号。
                     * 
                     */
                    void SetStyleId(const std::string& _styleId);

                    /**
                     * 判断参数 StyleId 是否已赋值
                     * @return StyleId 是否已赋值
                     * 
                     */
                    bool StyleIdHasBeenSet() const;

                    /**
                     * 获取本次生成的图片数量，取值范围[1,4]
                     * @return ImageNum 本次生成的图片数量，取值范围[1,4]
                     * 
                     */
                    int64_t GetImageNum() const;

                    /**
                     * 设置本次生成的图片数量，取值范围[1,4]
                     * @param _imageNum 本次生成的图片数量，取值范围[1,4]
                     * 
                     */
                    void SetImageNum(const int64_t& _imageNum);

                    /**
                     * 判断参数 ImageNum 是否已赋值
                     * @return ImageNum 是否已赋值
                     * 
                     */
                    bool ImageNumHasBeenSet() const;

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

                    /**
                     * 获取清晰度，支持以下选项：
sd：基础版，分辨率512:640
hd：高清畅享版，分辨率1024:1280
hdpro：高清优享版，分辨率1024:1280（推荐）
uhd：超清版，分辨率2048:2560
不填默认为sd。

                     * @return Definition 清晰度，支持以下选项：
sd：基础版，分辨率512:640
hd：高清畅享版，分辨率1024:1280
hdpro：高清优享版，分辨率1024:1280（推荐）
uhd：超清版，分辨率2048:2560
不填默认为sd。

                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置清晰度，支持以下选项：
sd：基础版，分辨率512:640
hd：高清畅享版，分辨率1024:1280
hdpro：高清优享版，分辨率1024:1280（推荐）
uhd：超清版，分辨率2048:2560
不填默认为sd。

                     * @param _definition 清晰度，支持以下选项：
sd：基础版，分辨率512:640
hd：高清畅享版，分辨率1024:1280
hdpro：高清优享版，分辨率1024:1280（推荐）
uhd：超清版，分辨率2048:2560
不填默认为sd。

                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 写真模型 ID。

                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 写真风格模板。
请在[ AI 写真风格列表](https://cloud.tencent.com/document/product/1668/105740) 中选择期望的风格，传入风格编号。
                     */
                    std::string m_styleId;
                    bool m_styleIdHasBeenSet;

                    /**
                     * 本次生成的图片数量，取值范围[1,4]
                     */
                    int64_t m_imageNum;
                    bool m_imageNumHasBeenSet;

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

                    /**
                     * 清晰度，支持以下选项：
sd：基础版，分辨率512:640
hd：高清畅享版，分辨率1024:1280
hdpro：高清优享版，分辨率1024:1280（推荐）
uhd：超清版，分辨率2048:2560
不填默认为sd。

                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_SUBMITDRAWPORTRAITJOBREQUEST_H_
