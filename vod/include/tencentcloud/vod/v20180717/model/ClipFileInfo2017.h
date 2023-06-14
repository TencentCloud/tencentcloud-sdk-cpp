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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLIPFILEINFO2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLIPFILEINFO2017_H_

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
                * 视频裁剪结果文件信息（2017 版）
                */
                class ClipFileInfo2017 : public AbstractModel
                {
                public:
                    ClipFileInfo2017();
                    ~ClipFileInfo2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误描述。
                     * @return Message 错误描述。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误描述。
                     * @param _message 错误描述。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取输出目标文件的文件 ID。
                     * @return FileId 输出目标文件的文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置输出目标文件的文件 ID。
                     * @param _fileId 输出目标文件的文件 ID。
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
                     * 获取输出目标文件的文件地址。
                     * @return FileUrl 输出目标文件的文件地址。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置输出目标文件的文件地址。
                     * @param _fileUrl 输出目标文件的文件地址。
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
                     * 获取输出目标文件的文件类型。
                     * @return FileType 输出目标文件的文件类型。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输出目标文件的文件类型。
                     * @param _fileType 输出目标文件的文件类型。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误描述。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 输出目标文件的文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 输出目标文件的文件地址。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 输出目标文件的文件类型。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLIPFILEINFO2017_H_
