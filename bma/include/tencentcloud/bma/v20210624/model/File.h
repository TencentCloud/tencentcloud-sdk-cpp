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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_FILE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_FILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 权属文件列表
                */
                class File : public AbstractModel
                {
                public:
                    File();
                    ~File() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件下载地址
                     * @return FileUrl 文件下载地址
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件下载地址
                     * @param _fileUrl 文件下载地址
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
                     * 获取文件类型 1-委托书 2-授权书 5-存证证书 11-营业执照
                     * @return FileType 文件类型 1-委托书 2-授权书 5-存证证书 11-营业执照
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置文件类型 1-委托书 2-授权书 5-存证证书 11-营业执照
                     * @param _fileType 文件类型 1-委托书 2-授权书 5-存证证书 11-营业执照
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取文件有效开始日期
                     * @return ValidStartDate 文件有效开始日期
                     * 
                     */
                    std::string GetValidStartDate() const;

                    /**
                     * 设置文件有效开始日期
                     * @param _validStartDate 文件有效开始日期
                     * 
                     */
                    void SetValidStartDate(const std::string& _validStartDate);

                    /**
                     * 判断参数 ValidStartDate 是否已赋值
                     * @return ValidStartDate 是否已赋值
                     * 
                     */
                    bool ValidStartDateHasBeenSet() const;

                    /**
                     * 获取文件有效截止日期
                     * @return ValidEndDate 文件有效截止日期
                     * 
                     */
                    std::string GetValidEndDate() const;

                    /**
                     * 设置文件有效截止日期
                     * @param _validEndDate 文件有效截止日期
                     * 
                     */
                    void SetValidEndDate(const std::string& _validEndDate);

                    /**
                     * 判断参数 ValidEndDate 是否已赋值
                     * @return ValidEndDate 是否已赋值
                     * 
                     */
                    bool ValidEndDateHasBeenSet() const;

                private:

                    /**
                     * 文件下载地址
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件类型 1-委托书 2-授权书 5-存证证书 11-营业执照
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件有效开始日期
                     */
                    std::string m_validStartDate;
                    bool m_validStartDateHasBeenSet;

                    /**
                     * 文件有效截止日期
                     */
                    std::string m_validEndDate;
                    bool m_validEndDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_FILE_H_
