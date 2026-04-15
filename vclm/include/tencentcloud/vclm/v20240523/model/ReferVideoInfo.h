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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_REFERVIDEOINFO_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_REFERVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 参考视频信息
                */
                class ReferVideoInfo : public AbstractModel
                {
                public:
                    ReferVideoInfo();
                    ~ReferVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频地址
                     * @return VideoUrl 视频地址
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置视频地址
                     * @param _videoUrl 视频地址
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
                     * 获取视频类型
feature为特征参考视频
base为待编辑视频
                     * @return ReferType 视频类型
feature为特征参考视频
base为待编辑视频
                     * 
                     */
                    std::string GetReferType() const;

                    /**
                     * 设置视频类型
feature为特征参考视频
base为待编辑视频
                     * @param _referType 视频类型
feature为特征参考视频
base为待编辑视频
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
                     * 获取否保留视频原声，yes为保留，no为不保留；
当前参数对特征参考视频（feature）也生效。
                     * @return KeepOriginalSound 否保留视频原声，yes为保留，no为不保留；
当前参数对特征参考视频（feature）也生效。
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置否保留视频原声，yes为保留，no为不保留；
当前参数对特征参考视频（feature）也生效。
                     * @param _keepOriginalSound 否保留视频原声，yes为保留，no为不保留；
当前参数对特征参考视频（feature）也生效。
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
                     * 视频地址
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 视频类型
feature为特征参考视频
base为待编辑视频
                     */
                    std::string m_referType;
                    bool m_referTypeHasBeenSet;

                    /**
                     * 否保留视频原声，yes为保留，no为不保留；
当前参数对特征参考视频（feature）也生效。
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_REFERVIDEOINFO_H_
