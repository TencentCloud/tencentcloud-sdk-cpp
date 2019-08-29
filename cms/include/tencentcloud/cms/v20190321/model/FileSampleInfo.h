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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_FILESAMPLEINFO_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_FILESAMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 文件样本返回信息
                */
                class FileSampleInfo : public AbstractModel
                {
                public:
                    FileSampleInfo();
                    ~FileSampleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处理错误码
                     * @return Code 处理错误码
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置处理错误码
                     * @param Code 处理错误码
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取创建时间戳
                     * @return CreatedAt 创建时间戳
                     */
                    uint64_t GetCreatedAt() const;

                    /**
                     * 设置创建时间戳
                     * @param CreatedAt 创建时间戳
                     */
                    void SetCreatedAt(const uint64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     * @return EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    uint64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     * @param EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    void SetEvilType(const uint64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取文件的md5
                     * @return FileMd5 文件的md5
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件的md5
                     * @param FileMd5 文件的md5
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param FileName 文件名称
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param FileType 文件类型
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取唯一标识
                     * @return Id 唯一标识
                     */
                    std::string GetId() const;

                    /**
                     * 设置唯一标识
                     * @param Id 唯一标识
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取样本类型
1：黑库
2：白库
                     * @return Label 样本类型
1：黑库
2：白库
                     */
                    uint64_t GetLabel() const;

                    /**
                     * 设置样本类型
1：黑库
2：白库
                     * @param Label 样本类型
1：黑库
2：白库
                     */
                    void SetLabel(const uint64_t& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取任务状态
1：已完成
2：处理中
                     * @return Status 任务状态
1：已完成
2：处理中
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态
1：已完成
2：处理中
                     * @param Status 任务状态
1：已完成
2：处理中
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件的url
                     * @return FileUrl 文件的url
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件的url
                     * @param FileUrl 文件的url
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * 处理错误码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 创建时间戳
                     */
                    uint64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
21000：综合
                     */
                    uint64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 文件的md5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 唯一标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 样本类型
1：黑库
2：白库
                     */
                    uint64_t m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 任务状态
1：已完成
2：处理中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件的url
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_FILESAMPLEINFO_H_
