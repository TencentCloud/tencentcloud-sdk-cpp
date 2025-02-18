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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREQUEST_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/MergeInfo.h>
#include <tencentcloud/facefusion/v20220927/model/LogoParam.h>
#include <tencentcloud/facefusion/v20220927/model/FuseParam.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * FuseFace请求参数结构体
                */
                class FuseFaceRequest : public AbstractModel
                {
                public:
                    FuseFaceRequest();
                    ~FuseFaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * @return ProjectId 活动 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置活动 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * @param _projectId 活动 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
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
                     * 获取素材 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * @return ModelId 素材 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置素材 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     * @param _modelId 素材 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
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
                     * 获取用户人脸图片、素材模板图的人脸位置信息。不能超过6个。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于4096*4096（单边限制）。
●图片大小限制：base64 编码后大小不可超过5M， url不超过10M。
●支持图片格式：支持jpg或png
                     * @return MergeInfos 用户人脸图片、素材模板图的人脸位置信息。不能超过6个。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于4096*4096（单边限制）。
●图片大小限制：base64 编码后大小不可超过5M， url不超过10M。
●支持图片格式：支持jpg或png
                     * 
                     */
                    std::vector<MergeInfo> GetMergeInfos() const;

                    /**
                     * 设置用户人脸图片、素材模板图的人脸位置信息。不能超过6个。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于4096*4096（单边限制）。
●图片大小限制：base64 编码后大小不可超过5M， url不超过10M。
●支持图片格式：支持jpg或png
                     * @param _mergeInfos 用户人脸图片、素材模板图的人脸位置信息。不能超过6个。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于4096*4096（单边限制）。
●图片大小限制：base64 编码后大小不可超过5M， url不超过10M。
●支持图片格式：支持jpg或png
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
                     * 获取脸型融合比例，数值越高，融合后的脸型越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中脸型参数数值。（换脸版算法暂不支持此参数调整）
                     * @return FuseProfileDegree 脸型融合比例，数值越高，融合后的脸型越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中脸型参数数值。（换脸版算法暂不支持此参数调整）
                     * 
                     */
                    int64_t GetFuseProfileDegree() const;

                    /**
                     * 设置脸型融合比例，数值越高，融合后的脸型越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中脸型参数数值。（换脸版算法暂不支持此参数调整）
                     * @param _fuseProfileDegree 脸型融合比例，数值越高，融合后的脸型越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中脸型参数数值。（换脸版算法暂不支持此参数调整）
                     * 
                     */
                    void SetFuseProfileDegree(const int64_t& _fuseProfileDegree);

                    /**
                     * 判断参数 FuseProfileDegree 是否已赋值
                     * @return FuseProfileDegree 是否已赋值
                     * 
                     */
                    bool FuseProfileDegreeHasBeenSet() const;

                    /**
                     * 获取五官融合比例，数值越高，融合后的五官越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中五官参数数值。（换脸版算法暂不支持此参数调整）
                     * @return FuseFaceDegree 五官融合比例，数值越高，融合后的五官越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中五官参数数值。（换脸版算法暂不支持此参数调整）
                     * 
                     */
                    int64_t GetFuseFaceDegree() const;

                    /**
                     * 设置五官融合比例，数值越高，融合后的五官越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中五官参数数值。（换脸版算法暂不支持此参数调整）
                     * @param _fuseFaceDegree 五官融合比例，数值越高，融合后的五官越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中五官参数数值。（换脸版算法暂不支持此参数调整）
                     * 
                     */
                    void SetFuseFaceDegree(const int64_t& _fuseFaceDegree);

                    /**
                     * 判断参数 FuseFaceDegree 是否已赋值
                     * @return FuseFaceDegree 是否已赋值
                     * 
                     */
                    bool FuseFaceDegreeHasBeenSet() const;

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
                     * 获取融合参数。
                     * @return FuseParam 融合参数。
                     * 
                     */
                    FuseParam GetFuseParam() const;

                    /**
                     * 设置融合参数。
                     * @param _fuseParam 融合参数。
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
                     * 活动 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 素材 ID，请在<a href="https://console.cloud.tencent.com/facefusion" target="_blank">人脸融合控制台</a>查看。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 返回图像方式（url 或 base64) ，二选一。url有效期为7天。
                     */
                    std::string m_rspImgType;
                    bool m_rspImgTypeHasBeenSet;

                    /**
                     * 用户人脸图片、素材模板图的人脸位置信息。不能超过6个。
●图片分辨率限制：图片中面部尺寸大于34 * 34；图片尺寸大于64 * 64，小于4096*4096（单边限制）。
●图片大小限制：base64 编码后大小不可超过5M， url不超过10M。
●支持图片格式：支持jpg或png
                     */
                    std::vector<MergeInfo> m_mergeInfos;
                    bool m_mergeInfosHasBeenSet;

                    /**
                     * 脸型融合比例，数值越高，融合后的脸型越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中脸型参数数值。（换脸版算法暂不支持此参数调整）
                     */
                    int64_t m_fuseProfileDegree;
                    bool m_fuseProfileDegreeHasBeenSet;

                    /**
                     * 五官融合比例，数值越高，融合后的五官越像素材人物。取值范围[0,100] 
若此参数不填写，则使用人脸融合控制台中五官参数数值。（换脸版算法暂不支持此参数调整）
                     */
                    int64_t m_fuseFaceDegree;
                    bool m_fuseFaceDegreeHasBeenSet;

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
                     * 融合参数。
                     */
                    FuseParam m_fuseParam;
                    bool m_fuseParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEREQUEST_H_
