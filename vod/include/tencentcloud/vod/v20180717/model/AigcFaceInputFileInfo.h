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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINPUTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 人脸输入文件信息
                */
                class AigcFaceInputFileInfo : public AbstractModel
                {
                public:
                    AigcFaceInputFileInfo();
                    ~AigcFaceInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> 
                     * @return Type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> 
                     * @param _type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> 
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
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
                     * @return Url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
                     * @param _url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEINPUTFILEINFO_H_
