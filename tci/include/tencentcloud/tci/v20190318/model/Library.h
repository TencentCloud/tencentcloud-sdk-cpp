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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_LIBRARY_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_LIBRARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人员库描述
                */
                class Library : public AbstractModel
                {
                public:
                    Library();
                    ~Library() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员库创建时间
                     * @return CreateTime 人员库创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置人员库创建时间
                     * @param _createTime 人员库创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取人员库唯一标识符
                     * @return LibraryId 人员库唯一标识符
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置人员库唯一标识符
                     * @param _libraryId 人员库唯一标识符
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取人员库名称
                     * @return LibraryName 人员库名称
                     * 
                     */
                    std::string GetLibraryName() const;

                    /**
                     * 设置人员库名称
                     * @param _libraryName 人员库名称
                     * 
                     */
                    void SetLibraryName(const std::string& _libraryName);

                    /**
                     * 判断参数 LibraryName 是否已赋值
                     * @return LibraryName 是否已赋值
                     * 
                     */
                    bool LibraryNameHasBeenSet() const;

                    /**
                     * 获取人员库人员数量
                     * @return PersonCount 人员库人员数量
                     * 
                     */
                    int64_t GetPersonCount() const;

                    /**
                     * 设置人员库人员数量
                     * @param _personCount 人员库人员数量
                     * 
                     */
                    void SetPersonCount(const int64_t& _personCount);

                    /**
                     * 判断参数 PersonCount 是否已赋值
                     * @return PersonCount 是否已赋值
                     * 
                     */
                    bool PersonCountHasBeenSet() const;

                    /**
                     * 获取人员库修改时间
                     * @return UpdateTime 人员库修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置人员库修改时间
                     * @param _updateTime 人员库修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 人员库创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 人员库唯一标识符
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 人员库名称
                     */
                    std::string m_libraryName;
                    bool m_libraryNameHasBeenSet;

                    /**
                     * 人员库人员数量
                     */
                    int64_t m_personCount;
                    bool m_personCountHasBeenSet;

                    /**
                     * 人员库修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_LIBRARY_H_
