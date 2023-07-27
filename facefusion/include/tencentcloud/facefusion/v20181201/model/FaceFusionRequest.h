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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/FuseParam.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * FaceFusion请求参数结构体
                */
                class FaceFusionRequest : public AbstractModel
                {
                public:
                    FaceFusionRequest();
                    ~FaceFusionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动 ID，请在人脸融合控制台查看。
                     * @return ProjectId 活动 ID，请在人脸融合控制台查看。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置活动 ID，请在人脸融合控制台查看。
                     * @param _projectId 活动 ID，请在人脸融合控制台查看。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取素材 ID，请在人脸融合控制台查看。
                     * @return ModelId 素材 ID，请在人脸融合控制台查看。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置素材 ID，请在人脸融合控制台查看。
                     * @param _modelId 素材 ID，请在人脸融合控制台查看。
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
                     * 获取返回图像方式（url 或 base64) ，二选一。url有效期为7天。
                     * @return RspImgType 返回图像方式（url 或 base64) ，二选一。url有效期为7天。
                     * 
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（url 或 base64) ，二选一。url有效期为7天。
                     * @param _rspImgType 返回图像方式（url 或 base64) ，二选一。url有效期为7天。
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
                     * 获取图片 base64 数据。请确保人脸为正脸，无旋转。若某些手机拍摄后人脸被旋转，请使用图片的 EXIF 信息对图片进行旋转处理；请勿在 base64 数据中包含头部，如“data:image/jpeg;base64,”。
                     * @return Image 图片 base64 数据。请确保人脸为正脸，无旋转。若某些手机拍摄后人脸被旋转，请使用图片的 EXIF 信息对图片进行旋转处理；请勿在 base64 数据中包含头部，如“data:image/jpeg;base64,”。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。请确保人脸为正脸，无旋转。若某些手机拍摄后人脸被旋转，请使用图片的 EXIF 信息对图片进行旋转处理；请勿在 base64 数据中包含头部，如“data:image/jpeg;base64,”。
                     * @param _image 图片 base64 数据。请确保人脸为正脸，无旋转。若某些手机拍摄后人脸被旋转，请使用图片的 EXIF 信息对图片进行旋转处理；请勿在 base64 数据中包含头部，如“data:image/jpeg;base64,”。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取历史遗留字段，无需填写。因为融合只需提取人脸特征，不需要鉴黄。
                     * @return PornDetect 历史遗留字段，无需填写。因为融合只需提取人脸特征，不需要鉴黄。
                     * 
                     */
                    int64_t GetPornDetect() const;

                    /**
                     * 设置历史遗留字段，无需填写。因为融合只需提取人脸特征，不需要鉴黄。
                     * @param _pornDetect 历史遗留字段，无需填写。因为融合只需提取人脸特征，不需要鉴黄。
                     * 
                     */
                    void SetPornDetect(const int64_t& _pornDetect);

                    /**
                     * 判断参数 PornDetect 是否已赋值
                     * @return PornDetect 是否已赋值
                     * 
                     */
                    bool PornDetectHasBeenSet() const;

                    /**
                     * 获取0表示不需要不适宜内容识别，1表示需要不适宜内容识别。默认值为0。
请注意，不适宜内容识别服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * @return CelebrityIdentify 0表示不需要不适宜内容识别，1表示需要不适宜内容识别。默认值为0。
请注意，不适宜内容识别服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * 
                     */
                    int64_t GetCelebrityIdentify() const;

                    /**
                     * 设置0表示不需要不适宜内容识别，1表示需要不适宜内容识别。默认值为0。
请注意，不适宜内容识别服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * @param _celebrityIdentify 0表示不需要不适宜内容识别，1表示需要不适宜内容识别。默认值为0。
请注意，不适宜内容识别服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * 
                     */
                    void SetCelebrityIdentify(const int64_t& _celebrityIdentify);

                    /**
                     * 判断参数 CelebrityIdentify 是否已赋值
                     * @return CelebrityIdentify 是否已赋值
                     * 
                     */
                    bool CelebrityIdentifyHasBeenSet() const;

                    /**
                     * 获取图片Url地址
                     * @return Url 图片Url地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片Url地址
                     * @param _url 图片Url地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取融合参数
                     * @return FuseParam 融合参数
                     * 
                     */
                    FuseParam GetFuseParam() const;

                    /**
                     * 设置融合参数
                     * @param _fuseParam 融合参数
                     * 
                     */
                    void SetFuseParam(const FuseParam& _fuseParam);

                    /**
                     * 判断参数 FuseParam 是否已赋值
                     * @return FuseParam 是否已赋值
                     * 
                     */
                    bool FuseParamHasBeenSet() const;

                private:

                    /**
                     * 活动 ID，请在人脸融合控制台查看。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 素材 ID，请在人脸融合控制台查看。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 返回图像方式（url 或 base64) ，二选一。url有效期为7天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * 图片 base64 数据。请确保人脸为正脸，无旋转。若某些手机拍摄后人脸被旋转，请使用图片的 EXIF 信息对图片进行旋转处理；请勿在 base64 数据中包含头部，如“data:image/jpeg;base64,”。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 历史遗留字段，无需填写。因为融合只需提取人脸特征，不需要鉴黄。
                     */
                    int64_t m_pornDetect;
                    bool m_pornDetectHasBeenSet;

                    /**
                     * 0表示不需要不适宜内容识别，1表示需要不适宜内容识别。默认值为0。
请注意，不适宜内容识别服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     */
                    int64_t m_celebrityIdentify;
                    bool m_celebrityIdentifyHasBeenSet;

                    /**
                     * 图片Url地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 融合参数
                     */
                    FuseParam m_fuseParam;
                    bool m_fuseParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONREQUEST_H_
