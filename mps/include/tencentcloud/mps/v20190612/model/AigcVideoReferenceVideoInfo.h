/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 用于AIGC视频生成的参考视频素材。
                */
                class AigcVideoReferenceVideoInfo : public AbstractModel
                {
                public:
                    AigcVideoReferenceVideoInfo();
                    ~AigcVideoReferenceVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参考视频url。需要外网可访问。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧。</p>
                     * @return VideoUrl <p>参考视频url。需要外网可访问。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧。</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>参考视频url。需要外网可访问。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧。</p>
                     * @param _videoUrl <p>参考视频url。需要外网可访问。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧。</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频。</p>
                     * @return ReferType <p>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频。</p>
                     * 
                     */
                    std::string GetReferType() const;

                    /**
                     * 设置<p>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频。</p>
                     * @param _referType <p>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频。</p>
                     * 
                     */
                    void SetReferType(const std::string& _referType);

                    /**
                     * 判断参数 ReferType 是否已赋值
                     * @return ReferType 是否已赋值
                     * 
                     */
                    bool ReferTypeHasBeenSet() const;

                    /**
                     * 获取<p>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效。</p>
                     * @return KeepOriginalSound <p>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效。</p>
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置<p>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效。</p>
                     * @param _keepOriginalSound <p>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效。</p>
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                private:

                    /**
                     * <p>参考视频url。需要外网可访问。<br>可作为特征参考视频，也可作为待编辑视频，默认为待编辑视频；可选择性保留视频原声<br>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频<br>参考视频为待编辑视频时，不能定义视频首尾帧。</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>通过ReferType参数区分参考视频类型：feature为特征参考视频，base为待编辑视频。</p>
                     */
                    std::string m_referType;
                    bool m_referTypeHasBeenSet;

                    /**
                     * <p>通过KeepOriginalSound参数选择是否保留视频原声，yes为保留，no为不保留；当前参数对特征参考视频（feature）也生效。</p>
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCEVIDEOINFO_H_
