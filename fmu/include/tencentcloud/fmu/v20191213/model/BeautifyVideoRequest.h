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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fmu/v20191213/model/BeautyParam.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * BeautifyVideo请求参数结构体
                */
                class BeautifyVideoRequest : public AbstractModel
                {
                public:
                    BeautifyVideoRequest();
                    ~BeautifyVideoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频url地址
                     * @return Url 视频url地址
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置视频url地址
                     * @param Url 视频url地址
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取美颜参数 - 美白、平滑、大眼和瘦脸。参数值范围[0, 100]。参数值为0，则不做美颜。参数默认值为0。目前默认取数组第一个元素是对所有人脸美颜。
                     * @return BeautyParam 美颜参数 - 美白、平滑、大眼和瘦脸。参数值范围[0, 100]。参数值为0，则不做美颜。参数默认值为0。目前默认取数组第一个元素是对所有人脸美颜。
                     */
                    std::vector<BeautyParam> GetBeautyParam() const;

                    /**
                     * 设置美颜参数 - 美白、平滑、大眼和瘦脸。参数值范围[0, 100]。参数值为0，则不做美颜。参数默认值为0。目前默认取数组第一个元素是对所有人脸美颜。
                     * @param BeautyParam 美颜参数 - 美白、平滑、大眼和瘦脸。参数值范围[0, 100]。参数值为0，则不做美颜。参数默认值为0。目前默认取数组第一个元素是对所有人脸美颜。
                     */
                    void SetBeautyParam(const std::vector<BeautyParam>& _beautyParam);

                    /**
                     * 判断参数 BeautyParam 是否已赋值
                     * @return BeautyParam 是否已赋值
                     */
                    bool BeautyParamHasBeenSet() const;

                    /**
                     * 获取目前只支持mp4
                     * @return OutputVideoType 目前只支持mp4
                     */
                    std::string GetOutputVideoType() const;

                    /**
                     * 设置目前只支持mp4
                     * @param OutputVideoType 目前只支持mp4
                     */
                    void SetOutputVideoType(const std::string& _outputVideoType);

                    /**
                     * 判断参数 OutputVideoType 是否已赋值
                     * @return OutputVideoType 是否已赋值
                     */
                    bool OutputVideoTypeHasBeenSet() const;

                private:

                    /**
                     * 视频url地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 美颜参数 - 美白、平滑、大眼和瘦脸。参数值范围[0, 100]。参数值为0，则不做美颜。参数默认值为0。目前默认取数组第一个元素是对所有人脸美颜。
                     */
                    std::vector<BeautyParam> m_beautyParam;
                    bool m_beautyParamHasBeenSet;

                    /**
                     * 目前只支持mp4
                     */
                    std::string m_outputVideoType;
                    bool m_outputVideoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEOREQUEST_H_
