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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaPreprocessOperation.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体替换信息。
                */
                class MediaReplacementInfo : public AbstractModel
                {
                public:
                    MediaReplacementInfo();
                    ~MediaReplacementInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取替换的媒体类型，取值有：
<li>CMEMaterialId：替换的媒体类型为媒体 ID；</li>
<li>ImageUrl：替换的媒体类型为图片 URL；</li>

注：默认为 CMEMaterialId 。
                     * @return MediaType 替换的媒体类型，取值有：
<li>CMEMaterialId：替换的媒体类型为媒体 ID；</li>
<li>ImageUrl：替换的媒体类型为图片 URL；</li>

注：默认为 CMEMaterialId 。
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置替换的媒体类型，取值有：
<li>CMEMaterialId：替换的媒体类型为媒体 ID；</li>
<li>ImageUrl：替换的媒体类型为图片 URL；</li>

注：默认为 CMEMaterialId 。
                     * @param _mediaType 替换的媒体类型，取值有：
<li>CMEMaterialId：替换的媒体类型为媒体 ID；</li>
<li>ImageUrl：替换的媒体类型为图片 URL；</li>

注：默认为 CMEMaterialId 。
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取媒体 ID。
当媒体类型取值为 CMEMaterialId 时有效。
                     * @return MaterialId 媒体 ID。
当媒体类型取值为 CMEMaterialId 时有效。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置媒体 ID。
当媒体类型取值为 CMEMaterialId 时有效。
                     * @param _materialId 媒体 ID。
当媒体类型取值为 CMEMaterialId 时有效。
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取媒体 URL。
当媒体类型取值为 ImageUrl 时有效，
图片仅支持 jpg、png 格式，且大小不超过 2M 。
                     * @return MediaUrl 媒体 URL。
当媒体类型取值为 ImageUrl 时有效，
图片仅支持 jpg、png 格式，且大小不超过 2M 。
                     * 
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置媒体 URL。
当媒体类型取值为 ImageUrl 时有效，
图片仅支持 jpg、png 格式，且大小不超过 2M 。
                     * @param _mediaUrl 媒体 URL。
当媒体类型取值为 ImageUrl 时有效，
图片仅支持 jpg、png 格式，且大小不超过 2M 。
                     * 
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     * 
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取替换媒体选取的开始时间，单位为秒，默认为 0。
                     * @return StartTimeOffset 替换媒体选取的开始时间，单位为秒，默认为 0。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置替换媒体选取的开始时间，单位为秒，默认为 0。
                     * @param _startTimeOffset 替换媒体选取的开始时间，单位为秒，默认为 0。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取预处理操作。
注：目前该功能暂不支持，请勿使用。
                     * @return PreprocessOperation 预处理操作。
注：目前该功能暂不支持，请勿使用。
                     * 
                     */
                    MediaPreprocessOperation GetPreprocessOperation() const;

                    /**
                     * 设置预处理操作。
注：目前该功能暂不支持，请勿使用。
                     * @param _preprocessOperation 预处理操作。
注：目前该功能暂不支持，请勿使用。
                     * 
                     */
                    void SetPreprocessOperation(const MediaPreprocessOperation& _preprocessOperation);

                    /**
                     * 判断参数 PreprocessOperation 是否已赋值
                     * @return PreprocessOperation 是否已赋值
                     * 
                     */
                    bool PreprocessOperationHasBeenSet() const;

                private:

                    /**
                     * 替换的媒体类型，取值有：
<li>CMEMaterialId：替换的媒体类型为媒体 ID；</li>
<li>ImageUrl：替换的媒体类型为图片 URL；</li>

注：默认为 CMEMaterialId 。
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * 媒体 ID。
当媒体类型取值为 CMEMaterialId 时有效。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 媒体 URL。
当媒体类型取值为 ImageUrl 时有效，
图片仅支持 jpg、png 格式，且大小不超过 2M 。
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * 替换媒体选取的开始时间，单位为秒，默认为 0。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 预处理操作。
注：目前该功能暂不支持，请勿使用。
                     */
                    MediaPreprocessOperation m_preprocessOperation;
                    bool m_preprocessOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_
