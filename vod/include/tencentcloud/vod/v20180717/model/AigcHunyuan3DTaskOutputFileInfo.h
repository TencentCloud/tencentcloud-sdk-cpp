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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_

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
                * AIGC 混元 3D 任务的输出文件信息。
                */
                class AigcHunyuan3DTaskOutputFileInfo : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskOutputFileInfo();
                    ~AigcHunyuan3DTaskOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储模式。取值有： <li>Permanent：永久存储；</li> <li>Temporary：临时存储；</li> 默认值：Temporary</p>
                     * @return StorageMode <p>存储模式。取值有： <li>Permanent：永久存储；</li> <li>Temporary：临时存储；</li> 默认值：Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式。取值有： <li>Permanent：永久存储；</li> <li>Temporary：临时存储；</li> 默认值：Temporary</p>
                     * @param _storageMode <p>存储模式。取值有： <li>Permanent：永久存储；</li> <li>Temporary：临时存储；</li> 默认值：Temporary</p>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @return ExpireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * @param _expireTime <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件类型，例如 OBJ、GLB、FBX 等。</p>
                     * @return FileType <p>文件类型，例如 OBJ、GLB、FBX 等。</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型，例如 OBJ、GLB、FBX 等。</p>
                     * @param _fileType <p>文件类型，例如 OBJ、GLB、FBX 等。</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>输出文件地址。</p>
                     * @return FileUrl <p>输出文件地址。</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>输出文件地址。</p>
                     * @param _fileUrl <p>输出文件地址。</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>输出文件预览地址。</p><p>无文件预览地址时为空。</p>
                     * @return PreviewFileUrl <p>输出文件预览地址。</p><p>无文件预览地址时为空。</p>
                     * 
                     */
                    std::string GetPreviewFileUrl() const;

                    /**
                     * 设置<p>输出文件预览地址。</p><p>无文件预览地址时为空。</p>
                     * @param _previewFileUrl <p>输出文件预览地址。</p><p>无文件预览地址时为空。</p>
                     * 
                     */
                    void SetPreviewFileUrl(const std::string& _previewFileUrl);

                    /**
                     * 判断参数 PreviewFileUrl 是否已赋值
                     * @return PreviewFileUrl 是否已赋值
                     * 
                     */
                    bool PreviewFileUrlHasBeenSet() const;

                private:

                    /**
                     * <p>存储模式。取值有： <li>Permanent：永久存储；</li> <li>Temporary：临时存储；</li> 默认值：Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * <p>输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>文件类型，例如 OBJ、GLB、FBX 等。</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>输出文件地址。</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>输出文件预览地址。</p><p>无文件预览地址时为空。</p>
                     */
                    std::string m_previewFileUrl;
                    bool m_previewFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUTFILEINFO_H_
