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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONLITEREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONLITEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20181201/model/MergeInfo.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * FaceFusionLite请求参数结构体
                */
                class FaceFusionLiteRequest : public AbstractModel
                {
                public:
                    FaceFusionLiteRequest();
                    ~FaceFusionLiteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动 ID，请在人脸融合控制台查看。
                     * @return ProjectId 活动 ID，请在人脸融合控制台查看。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置活动 ID，请在人脸融合控制台查看。
                     * @param ProjectId 活动 ID，请在人脸融合控制台查看。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取素材 ID，请在人脸融合控制台查看。
                     * @return ModelId 素材 ID，请在人脸融合控制台查看。
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置素材 ID，请在人脸融合控制台查看。
                     * @param ModelId 素材 ID，请在人脸融合控制台查看。
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取用户人脸图片、素材模板图的人脸位置信息。
                     * @return MergeInfos 用户人脸图片、素材模板图的人脸位置信息。
                     */
                    std::vector<MergeInfo> GetMergeInfos() const;

                    /**
                     * 设置用户人脸图片、素材模板图的人脸位置信息。
                     * @param MergeInfos 用户人脸图片、素材模板图的人脸位置信息。
                     */
                    void SetMergeInfos(const std::vector<MergeInfo>& _mergeInfos);

                    /**
                     * 判断参数 MergeInfos 是否已赋值
                     * @return MergeInfos 是否已赋值
                     */
                    bool MergeInfosHasBeenSet() const;

                    /**
                     * 获取返回图像方式（url 或 base64) ，二选一。默认url, url有效期为30天。
                     * @return RspImgType 返回图像方式（url 或 base64) ，二选一。默认url, url有效期为30天。
                     */
                    std::string GetRspImgType() const;

                    /**
                     * 设置返回图像方式（url 或 base64) ，二选一。默认url, url有效期为30天。
                     * @param RspImgType 返回图像方式（url 或 base64) ，二选一。默认url, url有效期为30天。
                     */
                    void SetRspImgType(const std::string& _rspImgType);

                    /**
                     * 判断参数 RspImgType 是否已赋值
                     * @return RspImgType 是否已赋值
                     */
                    bool RspImgTypeHasBeenSet() const;

                    /**
                     * 获取请注意，鉴政服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * @return CelebrityIdentify 请注意，鉴政服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     */
                    int64_t GetCelebrityIdentify() const;

                    /**
                     * 设置请注意，鉴政服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     * @param CelebrityIdentify 请注意，鉴政服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     */
                    void SetCelebrityIdentify(const int64_t& _celebrityIdentify);

                    /**
                     * 判断参数 CelebrityIdentify 是否已赋值
                     * @return CelebrityIdentify 是否已赋值
                     */
                    bool CelebrityIdentifyHasBeenSet() const;

                    /**
                     * 获取算法引擎参数:  1）选脸版 - youturecreat; 2）优享版 - youtu1vN； 3）畅享版 - ptu； 4）随机 - ALL;  默认为活动选择的算法
                     * @return Engine 算法引擎参数:  1）选脸版 - youturecreat; 2）优享版 - youtu1vN； 3）畅享版 - ptu； 4）随机 - ALL;  默认为活动选择的算法
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置算法引擎参数:  1）选脸版 - youturecreat; 2）优享版 - youtu1vN； 3）畅享版 - ptu； 4）随机 - ALL;  默认为活动选择的算法
                     * @param Engine 算法引擎参数:  1）选脸版 - youturecreat; 2）优享版 - youtu1vN； 3）畅享版 - ptu； 4）随机 - ALL;  默认为活动选择的算法
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     */
                    bool EngineHasBeenSet() const;

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
                     * 用户人脸图片、素材模板图的人脸位置信息。
                     */
                    std::vector<MergeInfo> m_mergeInfos;
                    bool m_mergeInfosHasBeenSet;

                    /**
                     * 返回图像方式（url 或 base64) ，二选一。默认url, url有效期为30天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * 请注意，鉴政服务开启后，您需要根据返回结果自行判断是否调整您的业务逻辑。例如提示您的用户图片非法，请更换图片。
                     */
                    int64_t m_celebrityIdentify;
                    bool m_celebrityIdentifyHasBeenSet;

                    /**
                     * 算法引擎参数:  1）选脸版 - youturecreat; 2）优享版 - youtu1vN； 3）畅享版 - ptu； 4）随机 - ALL;  默认为活动选择的算法
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_FACEFUSIONLITEREQUEST_H_
