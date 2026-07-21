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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图片处理结果信息
                */
                class ImageProcessTaskOutput : public AbstractModel
                {
                public:
                    ImageProcessTaskOutput();
                    ~ImageProcessTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输出文件的路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>输出文件的路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>输出文件的路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>输出文件的路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的存储位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage <p>输出文件的存储位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>输出文件的存储位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage <p>输出文件的存储位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>输出文件的URL。</p>
                     * @return SignedUrl <p>输出文件的URL。</p>
                     * 
                     */
                    std::string GetSignedUrl() const;

                    /**
                     * 设置<p>输出文件的URL。</p>
                     * @param _signedUrl <p>输出文件的URL。</p>
                     * 
                     */
                    void SetSignedUrl(const std::string& _signedUrl);

                    /**
                     * 判断参数 SignedUrl 是否已赋值
                     * @return SignedUrl 是否已赋值
                     * 
                     */
                    bool SignedUrlHasBeenSet() const;

                    /**
                     * 获取<p>图生文任务的处理结果。</p>
                     * @return Content <p>图生文任务的处理结果。</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>图生文任务的处理结果。</p>
                     * @param _content <p>图生文任务的处理结果。</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>VOD标准版FileId</p>
                     * @return FileId <p>VOD标准版FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>VOD标准版FileId</p>
                     * @param _fileId <p>VOD标准版FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>输出文件的路径。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>输出文件的存储位置。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>输出文件的URL。</p>
                     */
                    std::string m_signedUrl;
                    bool m_signedUrlHasBeenSet;

                    /**
                     * <p>图生文任务的处理结果。</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>VOD标准版FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEPROCESSTASKOUTPUT_H_
