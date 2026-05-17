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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosIdentifyCategoryDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos审计文件数据识别信息
                */
                class CosAssetFileIdentifyInfo : public AbstractModel
                {
                public:
                    CosAssetFileIdentifyInfo();
                    ~CosAssetFileIdentifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件路径
                     * @return DirName 文件路径
                     * 
                     */
                    std::string GetDirName() const;

                    /**
                     * 设置文件路径
                     * @param _dirName 文件路径
                     * 
                     */
                    void SetDirName(const std::string& _dirName);

                    /**
                     * 判断参数 DirName 是否已赋值
                     * @return DirName 是否已赋值
                     * 
                     */
                    bool DirNameHasBeenSet() const;

                    /**
                     * 获取分类数据项详情
                     * @return CategoryDetails 分类数据项详情
                     * 
                     */
                    std::vector<CosIdentifyCategoryDetail> GetCategoryDetails() const;

                    /**
                     * 设置分类数据项详情
                     * @param _categoryDetails 分类数据项详情
                     * 
                     */
                    void SetCategoryDetails(const std::vector<CosIdentifyCategoryDetail>& _categoryDetails);

                    /**
                     * 判断参数 CategoryDetails 是否已赋值
                     * @return CategoryDetails 是否已赋值
                     * 
                     */
                    bool CategoryDetailsHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件路径
                     */
                    std::string m_dirName;
                    bool m_dirNameHasBeenSet;

                    /**
                     * 分类数据项详情
                     */
                    std::vector<CosIdentifyCategoryDetail> m_categoryDetails;
                    bool m_categoryDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSASSETFILEIDENTIFYINFO_H_
