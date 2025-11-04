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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTranscodeTemplates请求参数结构体
                */
                class DescribeTranscodeTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeTranscodeTemplatesRequest();
                    ~DescribeTranscodeTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转码模板唯一标识过滤条件，数组长度限制：100。
                     * @return Definitions 转码模板唯一标识过滤条件，数组长度限制：100。
                     * 
                     */
                    std::vector<int64_t> GetDefinitions() const;

                    /**
                     * 设置转码模板唯一标识过滤条件，数组长度限制：100。
                     * @param _definitions 转码模板唯一标识过滤条件，数组长度限制：100。
                     * 
                     */
                    void SetDefinitions(const std::vector<int64_t>& _definitions);

                    /**
                     * 判断参数 Definitions 是否已赋值
                     * @return Definitions 是否已赋值
                     * 
                     */
                    bool DefinitionsHasBeenSet() const;

                    /**
                     * 获取模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @return Type 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * @param _type 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式板；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式。</li>
                     * @return ContainerType 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式板；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式。</li>
                     * 
                     */
                    std::string GetContainerType() const;

                    /**
                     * 设置封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式板；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式。</li>
                     * @param _containerType 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式板；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式。</li>
                     * 
                     */
                    void SetContainerType(const std::string& _containerType);

                    /**
                     * 判断参数 ContainerType 是否已赋值
                     * @return ContainerType 是否已赋值
                     * 
                     */
                    bool ContainerTypeHasBeenSet() const;

                    /**
                     * 获取（建议使用TranscodeType代替）极速高清过滤条件，用于过滤普通转码或极速高清转码模板，可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：极速高清模板。</li>
                     * @return TEHDType （建议使用TranscodeType代替）极速高清过滤条件，用于过滤普通转码或极速高清转码模板，可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：极速高清模板。</li>
                     * 
                     */
                    std::string GetTEHDType() const;

                    /**
                     * 设置（建议使用TranscodeType代替）极速高清过滤条件，用于过滤普通转码或极速高清转码模板，可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：极速高清模板。</li>
                     * @param _tEHDType （建议使用TranscodeType代替）极速高清过滤条件，用于过滤普通转码或极速高清转码模板，可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：极速高清模板。</li>
                     * 
                     */
                    void SetTEHDType(const std::string& _tEHDType);

                    /**
                     * 判断参数 TEHDType 是否已赋值
                     * @return TEHDType 是否已赋值
                     * 
                     */
                    bool TEHDTypeHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认值：0。
                     * @return Offset 分页偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值：0。
                     * @param _offset 分页偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取模板类型（替换旧版本 TEHDType），可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：视频极速高清，老的类型（建议使用 TEHD-100） 。</li>
<li>TEHD-100：视频极速高清</li>
<li>TEHD-200：音频极速高清</li>
<li>Enhance：音视频增强模板。</li>
默认空，不限制类型。

                     * @return TranscodeType 模板类型（替换旧版本 TEHDType），可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：视频极速高清，老的类型（建议使用 TEHD-100） 。</li>
<li>TEHD-100：视频极速高清</li>
<li>TEHD-200：音频极速高清</li>
<li>Enhance：音视频增强模板。</li>
默认空，不限制类型。

                     * 
                     */
                    std::string GetTranscodeType() const;

                    /**
                     * 设置模板类型（替换旧版本 TEHDType），可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：视频极速高清，老的类型（建议使用 TEHD-100） 。</li>
<li>TEHD-100：视频极速高清</li>
<li>TEHD-200：音频极速高清</li>
<li>Enhance：音视频增强模板。</li>
默认空，不限制类型。

                     * @param _transcodeType 模板类型（替换旧版本 TEHDType），可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：视频极速高清，老的类型（建议使用 TEHD-100） 。</li>
<li>TEHD-100：视频极速高清</li>
<li>TEHD-200：音频极速高清</li>
<li>Enhance：音视频增强模板。</li>
默认空，不限制类型。

                     * 
                     */
                    void SetTranscodeType(const std::string& _transcodeType);

                    /**
                     * 判断参数 TranscodeType 是否已赋值
                     * @return TranscodeType 是否已赋值
                     * 
                     */
                    bool TranscodeTypeHasBeenSet() const;

                    /**
                     * 获取转码模板标识过滤条件，长度限制：64 个字符。	
                     * @return Name 转码模板标识过滤条件，长度限制：64 个字符。	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置转码模板标识过滤条件，长度限制：64 个字符。	
                     * @param _name 转码模板标识过滤条件，长度限制：64 个字符。	
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取视频场景化，可选值： 
normal：通用转码场景：通用转码压缩场景。 
pgc：PGC高清影视：压缩时会注重影视剧的观看体验，根据影视剧特性进行ROI编码，同时保留高质量的视频内容和音频。 
materials_video：高清素材：素材资源类场景，对画质要求极高，较多透明画面内容，在压缩的同时接近视觉无损。 
ugc：UGC内容：适用于广泛的UGC/短视频场景，针对短视频的特性优化编码码率， 画质提升，提升业务QOS/QOE指标。 
e-commerce_video：秀场/电商类：压缩时会强调细节清晰度和ROI区域提升，尤其注重保持人脸区域的画质。 
educational_video：教育类：压缩时会强调文字和图像的清晰度和可读性，以便学生更好地理解内容，确保讲解内容清晰传达。 
no_config：未配置。
                     * @return SceneType 视频场景化，可选值： 
normal：通用转码场景：通用转码压缩场景。 
pgc：PGC高清影视：压缩时会注重影视剧的观看体验，根据影视剧特性进行ROI编码，同时保留高质量的视频内容和音频。 
materials_video：高清素材：素材资源类场景，对画质要求极高，较多透明画面内容，在压缩的同时接近视觉无损。 
ugc：UGC内容：适用于广泛的UGC/短视频场景，针对短视频的特性优化编码码率， 画质提升，提升业务QOS/QOE指标。 
e-commerce_video：秀场/电商类：压缩时会强调细节清晰度和ROI区域提升，尤其注重保持人脸区域的画质。 
educational_video：教育类：压缩时会强调文字和图像的清晰度和可读性，以便学生更好地理解内容，确保讲解内容清晰传达。 
no_config：未配置。
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置视频场景化，可选值： 
normal：通用转码场景：通用转码压缩场景。 
pgc：PGC高清影视：压缩时会注重影视剧的观看体验，根据影视剧特性进行ROI编码，同时保留高质量的视频内容和音频。 
materials_video：高清素材：素材资源类场景，对画质要求极高，较多透明画面内容，在压缩的同时接近视觉无损。 
ugc：UGC内容：适用于广泛的UGC/短视频场景，针对短视频的特性优化编码码率， 画质提升，提升业务QOS/QOE指标。 
e-commerce_video：秀场/电商类：压缩时会强调细节清晰度和ROI区域提升，尤其注重保持人脸区域的画质。 
educational_video：教育类：压缩时会强调文字和图像的清晰度和可读性，以便学生更好地理解内容，确保讲解内容清晰传达。 
no_config：未配置。
                     * @param _sceneType 视频场景化，可选值： 
normal：通用转码场景：通用转码压缩场景。 
pgc：PGC高清影视：压缩时会注重影视剧的观看体验，根据影视剧特性进行ROI编码，同时保留高质量的视频内容和音频。 
materials_video：高清素材：素材资源类场景，对画质要求极高，较多透明画面内容，在压缩的同时接近视觉无损。 
ugc：UGC内容：适用于广泛的UGC/短视频场景，针对短视频的特性优化编码码率， 画质提升，提升业务QOS/QOE指标。 
e-commerce_video：秀场/电商类：压缩时会强调细节清晰度和ROI区域提升，尤其注重保持人脸区域的画质。 
educational_video：教育类：压缩时会强调文字和图像的清晰度和可读性，以便学生更好地理解内容，确保讲解内容清晰传达。 
no_config：未配置。
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取转码策略，可选值： 
ultra_compress：极致压缩：相比标准压缩，该策略能在保证一定画质的基础上最大限度压缩码率，极大节约带宽和存储成本。 
standard_compress：综合最优：平衡压缩率与画质，在保证主观画质没有明显降低的情况下尽可能压缩文件。该策略仅收取音视频极速高清转码费用。 
high_compress：码率优先：优先保证降低文件体积大小，可能有一定画质损失。该策略仅收取音视频极速高清转码费用。 
low_compress：画质优先：优先保证画质，压缩出来的文件体积可能相对较大。该策略仅收取音视频极速高清转码费用。 
no_config：未配置。
                     * @return CompressType 转码策略，可选值： 
ultra_compress：极致压缩：相比标准压缩，该策略能在保证一定画质的基础上最大限度压缩码率，极大节约带宽和存储成本。 
standard_compress：综合最优：平衡压缩率与画质，在保证主观画质没有明显降低的情况下尽可能压缩文件。该策略仅收取音视频极速高清转码费用。 
high_compress：码率优先：优先保证降低文件体积大小，可能有一定画质损失。该策略仅收取音视频极速高清转码费用。 
low_compress：画质优先：优先保证画质，压缩出来的文件体积可能相对较大。该策略仅收取音视频极速高清转码费用。 
no_config：未配置。
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置转码策略，可选值： 
ultra_compress：极致压缩：相比标准压缩，该策略能在保证一定画质的基础上最大限度压缩码率，极大节约带宽和存储成本。 
standard_compress：综合最优：平衡压缩率与画质，在保证主观画质没有明显降低的情况下尽可能压缩文件。该策略仅收取音视频极速高清转码费用。 
high_compress：码率优先：优先保证降低文件体积大小，可能有一定画质损失。该策略仅收取音视频极速高清转码费用。 
low_compress：画质优先：优先保证画质，压缩出来的文件体积可能相对较大。该策略仅收取音视频极速高清转码费用。 
no_config：未配置。
                     * @param _compressType 转码策略，可选值： 
ultra_compress：极致压缩：相比标准压缩，该策略能在保证一定画质的基础上最大限度压缩码率，极大节约带宽和存储成本。 
standard_compress：综合最优：平衡压缩率与画质，在保证主观画质没有明显降低的情况下尽可能压缩文件。该策略仅收取音视频极速高清转码费用。 
high_compress：码率优先：优先保证降低文件体积大小，可能有一定画质损失。该策略仅收取音视频极速高清转码费用。 
low_compress：画质优先：优先保证画质，压缩出来的文件体积可能相对较大。该策略仅收取音视频极速高清转码费用。 
no_config：未配置。
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                    /**
                     * 获取增强场景配置，可选值：
<li>common（通用），通用增强参数，适用于各种视频类型的基础优化参数，提升整体画质。</li>
<li>AIGC，整体分辨率提升，利用AI技术提升视频整体分辨率，增强画面清晰度。</li>
<li>short_play（短剧），增强面部与字幕细节，突出人物面部表情细节和字幕清晰度，提升观剧体验。</li>
<li>short_video（短视频），优化复杂多样的画质问题，针对短视频的复杂场景，优化画质，解决多种视觉问题。</li>
<li>game（游戏视频），修复运动模糊，提升细节，重点提升游戏细节清晰度，恢复运动模糊区域，使游戏画面内容更清晰，更丰富。</li>
<li>HD_movie_series（超高清影视剧），获得超高清流畅效果，针对广电/OTT超高清视频的诉求，生成4K 60fps HDR的超高清标准视频。支持广电场景格式标准要求。</li>
<li>LQ_material（低清素材/老片修复），整体分辨率提升，针对老旧视频由于拍摄年代较久存在的分辨率不足、模糊失真、划痕损伤和色温等问题进行专门优化。</li>
<li>lecture（秀场/电商/大会/讲座），美化提升面部效果，针对秀场/电商/大会/讲座等存在人物进行讲解的场景，进行人脸区域、噪声消除、毛刺处理的专门优化。</li>
                     * @return EnhanceSceneType 增强场景配置，可选值：
<li>common（通用），通用增强参数，适用于各种视频类型的基础优化参数，提升整体画质。</li>
<li>AIGC，整体分辨率提升，利用AI技术提升视频整体分辨率，增强画面清晰度。</li>
<li>short_play（短剧），增强面部与字幕细节，突出人物面部表情细节和字幕清晰度，提升观剧体验。</li>
<li>short_video（短视频），优化复杂多样的画质问题，针对短视频的复杂场景，优化画质，解决多种视觉问题。</li>
<li>game（游戏视频），修复运动模糊，提升细节，重点提升游戏细节清晰度，恢复运动模糊区域，使游戏画面内容更清晰，更丰富。</li>
<li>HD_movie_series（超高清影视剧），获得超高清流畅效果，针对广电/OTT超高清视频的诉求，生成4K 60fps HDR的超高清标准视频。支持广电场景格式标准要求。</li>
<li>LQ_material（低清素材/老片修复），整体分辨率提升，针对老旧视频由于拍摄年代较久存在的分辨率不足、模糊失真、划痕损伤和色温等问题进行专门优化。</li>
<li>lecture（秀场/电商/大会/讲座），美化提升面部效果，针对秀场/电商/大会/讲座等存在人物进行讲解的场景，进行人脸区域、噪声消除、毛刺处理的专门优化。</li>
                     * 
                     */
                    std::string GetEnhanceSceneType() const;

                    /**
                     * 设置增强场景配置，可选值：
<li>common（通用），通用增强参数，适用于各种视频类型的基础优化参数，提升整体画质。</li>
<li>AIGC，整体分辨率提升，利用AI技术提升视频整体分辨率，增强画面清晰度。</li>
<li>short_play（短剧），增强面部与字幕细节，突出人物面部表情细节和字幕清晰度，提升观剧体验。</li>
<li>short_video（短视频），优化复杂多样的画质问题，针对短视频的复杂场景，优化画质，解决多种视觉问题。</li>
<li>game（游戏视频），修复运动模糊，提升细节，重点提升游戏细节清晰度，恢复运动模糊区域，使游戏画面内容更清晰，更丰富。</li>
<li>HD_movie_series（超高清影视剧），获得超高清流畅效果，针对广电/OTT超高清视频的诉求，生成4K 60fps HDR的超高清标准视频。支持广电场景格式标准要求。</li>
<li>LQ_material（低清素材/老片修复），整体分辨率提升，针对老旧视频由于拍摄年代较久存在的分辨率不足、模糊失真、划痕损伤和色温等问题进行专门优化。</li>
<li>lecture（秀场/电商/大会/讲座），美化提升面部效果，针对秀场/电商/大会/讲座等存在人物进行讲解的场景，进行人脸区域、噪声消除、毛刺处理的专门优化。</li>
                     * @param _enhanceSceneType 增强场景配置，可选值：
<li>common（通用），通用增强参数，适用于各种视频类型的基础优化参数，提升整体画质。</li>
<li>AIGC，整体分辨率提升，利用AI技术提升视频整体分辨率，增强画面清晰度。</li>
<li>short_play（短剧），增强面部与字幕细节，突出人物面部表情细节和字幕清晰度，提升观剧体验。</li>
<li>short_video（短视频），优化复杂多样的画质问题，针对短视频的复杂场景，优化画质，解决多种视觉问题。</li>
<li>game（游戏视频），修复运动模糊，提升细节，重点提升游戏细节清晰度，恢复运动模糊区域，使游戏画面内容更清晰，更丰富。</li>
<li>HD_movie_series（超高清影视剧），获得超高清流畅效果，针对广电/OTT超高清视频的诉求，生成4K 60fps HDR的超高清标准视频。支持广电场景格式标准要求。</li>
<li>LQ_material（低清素材/老片修复），整体分辨率提升，针对老旧视频由于拍摄年代较久存在的分辨率不足、模糊失真、划痕损伤和色温等问题进行专门优化。</li>
<li>lecture（秀场/电商/大会/讲座），美化提升面部效果，针对秀场/电商/大会/讲座等存在人物进行讲解的场景，进行人脸区域、噪声消除、毛刺处理的专门优化。</li>
                     * 
                     */
                    void SetEnhanceSceneType(const std::string& _enhanceSceneType);

                    /**
                     * 判断参数 EnhanceSceneType 是否已赋值
                     * @return EnhanceSceneType 是否已赋值
                     * 
                     */
                    bool EnhanceSceneTypeHasBeenSet() const;

                    /**
                     * 获取增强转码类型，可选值：
<li>Common（普通转码）</li>
<li>TEHD-100（极速高清视频转码）</li>
<li>TEHD-200（极速高清音频转码）</li>
                     * @return EnhanceTranscodeType 增强转码类型，可选值：
<li>Common（普通转码）</li>
<li>TEHD-100（极速高清视频转码）</li>
<li>TEHD-200（极速高清音频转码）</li>
                     * 
                     */
                    std::string GetEnhanceTranscodeType() const;

                    /**
                     * 设置增强转码类型，可选值：
<li>Common（普通转码）</li>
<li>TEHD-100（极速高清视频转码）</li>
<li>TEHD-200（极速高清音频转码）</li>
                     * @param _enhanceTranscodeType 增强转码类型，可选值：
<li>Common（普通转码）</li>
<li>TEHD-100（极速高清视频转码）</li>
<li>TEHD-200（极速高清音频转码）</li>
                     * 
                     */
                    void SetEnhanceTranscodeType(const std::string& _enhanceTranscodeType);

                    /**
                     * 判断参数 EnhanceTranscodeType 是否已赋值
                     * @return EnhanceTranscodeType 是否已赋值
                     * 
                     */
                    bool EnhanceTranscodeTypeHasBeenSet() const;

                    /**
                     * 获取增强类型，可选值：
<li>VideoEnhance（仅视频增强）</li>
<li>AudioEnhance（仅音频增强）</li>
<li>VideoAudioEnhance（视频音频增强都含）</li>
                     * @return EnhanceType 增强类型，可选值：
<li>VideoEnhance（仅视频增强）</li>
<li>AudioEnhance（仅音频增强）</li>
<li>VideoAudioEnhance（视频音频增强都含）</li>
                     * 
                     */
                    std::string GetEnhanceType() const;

                    /**
                     * 设置增强类型，可选值：
<li>VideoEnhance（仅视频增强）</li>
<li>AudioEnhance（仅音频增强）</li>
<li>VideoAudioEnhance（视频音频增强都含）</li>
                     * @param _enhanceType 增强类型，可选值：
<li>VideoEnhance（仅视频增强）</li>
<li>AudioEnhance（仅音频增强）</li>
<li>VideoAudioEnhance（视频音频增强都含）</li>
                     * 
                     */
                    void SetEnhanceType(const std::string& _enhanceType);

                    /**
                     * 判断参数 EnhanceType 是否已赋值
                     * @return EnhanceType 是否已赋值
                     * 
                     */
                    bool EnhanceTypeHasBeenSet() const;

                private:

                    /**
                     * 转码模板唯一标识过滤条件，数组长度限制：100。
                     */
                    std::vector<int64_t> m_definitions;
                    bool m_definitionsHasBeenSet;

                    /**
                     * 模板类型过滤条件，可选值：
<li>Preset：系统预置模板；</li>
<li>Custom：用户自定义模板。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 封装格式过滤条件，可选值：
<li>Video：视频格式，可以同时包含视频流和音频流的封装格式板；</li>
<li>PureAudio：纯音频格式，只能包含音频流的封装格式。</li>
                     */
                    std::string m_containerType;
                    bool m_containerTypeHasBeenSet;

                    /**
                     * （建议使用TranscodeType代替）极速高清过滤条件，用于过滤普通转码或极速高清转码模板，可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：极速高清模板。</li>
                     */
                    std::string m_tEHDType;
                    bool m_tEHDTypeHasBeenSet;

                    /**
                     * 分页偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 模板类型（替换旧版本 TEHDType），可选值：
<li>Common：普通转码模板；</li>
<li>TEHD：视频极速高清，老的类型（建议使用 TEHD-100） 。</li>
<li>TEHD-100：视频极速高清</li>
<li>TEHD-200：音频极速高清</li>
<li>Enhance：音视频增强模板。</li>
默认空，不限制类型。

                     */
                    std::string m_transcodeType;
                    bool m_transcodeTypeHasBeenSet;

                    /**
                     * 转码模板标识过滤条件，长度限制：64 个字符。	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频场景化，可选值： 
normal：通用转码场景：通用转码压缩场景。 
pgc：PGC高清影视：压缩时会注重影视剧的观看体验，根据影视剧特性进行ROI编码，同时保留高质量的视频内容和音频。 
materials_video：高清素材：素材资源类场景，对画质要求极高，较多透明画面内容，在压缩的同时接近视觉无损。 
ugc：UGC内容：适用于广泛的UGC/短视频场景，针对短视频的特性优化编码码率， 画质提升，提升业务QOS/QOE指标。 
e-commerce_video：秀场/电商类：压缩时会强调细节清晰度和ROI区域提升，尤其注重保持人脸区域的画质。 
educational_video：教育类：压缩时会强调文字和图像的清晰度和可读性，以便学生更好地理解内容，确保讲解内容清晰传达。 
no_config：未配置。
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * 转码策略，可选值： 
ultra_compress：极致压缩：相比标准压缩，该策略能在保证一定画质的基础上最大限度压缩码率，极大节约带宽和存储成本。 
standard_compress：综合最优：平衡压缩率与画质，在保证主观画质没有明显降低的情况下尽可能压缩文件。该策略仅收取音视频极速高清转码费用。 
high_compress：码率优先：优先保证降低文件体积大小，可能有一定画质损失。该策略仅收取音视频极速高清转码费用。 
low_compress：画质优先：优先保证画质，压缩出来的文件体积可能相对较大。该策略仅收取音视频极速高清转码费用。 
no_config：未配置。
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                    /**
                     * 增强场景配置，可选值：
<li>common（通用），通用增强参数，适用于各种视频类型的基础优化参数，提升整体画质。</li>
<li>AIGC，整体分辨率提升，利用AI技术提升视频整体分辨率，增强画面清晰度。</li>
<li>short_play（短剧），增强面部与字幕细节，突出人物面部表情细节和字幕清晰度，提升观剧体验。</li>
<li>short_video（短视频），优化复杂多样的画质问题，针对短视频的复杂场景，优化画质，解决多种视觉问题。</li>
<li>game（游戏视频），修复运动模糊，提升细节，重点提升游戏细节清晰度，恢复运动模糊区域，使游戏画面内容更清晰，更丰富。</li>
<li>HD_movie_series（超高清影视剧），获得超高清流畅效果，针对广电/OTT超高清视频的诉求，生成4K 60fps HDR的超高清标准视频。支持广电场景格式标准要求。</li>
<li>LQ_material（低清素材/老片修复），整体分辨率提升，针对老旧视频由于拍摄年代较久存在的分辨率不足、模糊失真、划痕损伤和色温等问题进行专门优化。</li>
<li>lecture（秀场/电商/大会/讲座），美化提升面部效果，针对秀场/电商/大会/讲座等存在人物进行讲解的场景，进行人脸区域、噪声消除、毛刺处理的专门优化。</li>
                     */
                    std::string m_enhanceSceneType;
                    bool m_enhanceSceneTypeHasBeenSet;

                    /**
                     * 增强转码类型，可选值：
<li>Common（普通转码）</li>
<li>TEHD-100（极速高清视频转码）</li>
<li>TEHD-200（极速高清音频转码）</li>
                     */
                    std::string m_enhanceTranscodeType;
                    bool m_enhanceTranscodeTypeHasBeenSet;

                    /**
                     * 增强类型，可选值：
<li>VideoEnhance（仅视频增强）</li>
<li>AudioEnhance（仅音频增强）</li>
<li>VideoAudioEnhance（视频音频增强都含）</li>
                     */
                    std::string m_enhanceType;
                    bool m_enhanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETRANSCODETEMPLATESREQUEST_H_
