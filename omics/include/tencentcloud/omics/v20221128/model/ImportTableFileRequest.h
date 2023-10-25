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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * ImportTableFile请求参数结构体
                */
                class ImportTableFileRequest : public AbstractModel
                {
                public:
                    ImportTableFileRequest();
                    ~ImportTableFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表格关联的项目ID。
                     * @return ProjectId 表格关联的项目ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置表格关联的项目ID。
                     * @param _projectId 表格关联的项目ID。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取表格名称。最多支持200个字符。
                     * @return Name 表格名称。最多支持200个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置表格名称。最多支持200个字符。
                     * @param _name 表格名称。最多支持200个字符。
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
                     * 获取表格文件Cos对象路径。
                     * @return CosUri 表格文件Cos对象路径。
                     * 
                     */
                    std::string GetCosUri() const;

                    /**
                     * 设置表格文件Cos对象路径。
                     * @param _cosUri 表格文件Cos对象路径。
                     * 
                     */
                    void SetCosUri(const std::string& _cosUri);

                    /**
                     * 判断参数 CosUri 是否已赋值
                     * @return CosUri 是否已赋值
                     * 
                     */
                    bool CosUriHasBeenSet() const;

                    /**
                     * 获取表格文件中每列的数据类型，支持的类型包括：Int、Float、String、File、Boolean、Array[Int]、Array[Float]、Array[String]、Array[File]、Array[Boolean]
                     * @return DataType 表格文件中每列的数据类型，支持的类型包括：Int、Float、String、File、Boolean、Array[Int]、Array[Float]、Array[String]、Array[File]、Array[Boolean]
                     * 
                     */
                    std::vector<std::string> GetDataType() const;

                    /**
                     * 设置表格文件中每列的数据类型，支持的类型包括：Int、Float、String、File、Boolean、Array[Int]、Array[Float]、Array[String]、Array[File]、Array[Boolean]
                     * @param _dataType 表格文件中每列的数据类型，支持的类型包括：Int、Float、String、File、Boolean、Array[Int]、Array[Float]、Array[String]、Array[File]、Array[Boolean]
                     * 
                     */
                    void SetDataType(const std::vector<std::string>& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取表格描述。最多支持500个字符。
                     * @return Description 表格描述。最多支持500个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置表格描述。最多支持500个字符。
                     * @param _description 表格描述。最多支持500个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 表格关联的项目ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 表格名称。最多支持200个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 表格文件Cos对象路径。
                     */
                    std::string m_cosUri;
                    bool m_cosUriHasBeenSet;

                    /**
                     * 表格文件中每列的数据类型，支持的类型包括：Int、Float、String、File、Boolean、Array[Int]、Array[Float]、Array[String]、Array[File]、Array[Boolean]
                     */
                    std::vector<std::string> m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 表格描述。最多支持500个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_IMPORTTABLEFILEREQUEST_H_
