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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DRUGLIST_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DRUGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 药品列表
                */
                class DrugList : public AbstractModel
                {
                public:
                    DrugList();
                    ~DrugList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

                    /**
                     * 获取文档地址
                     * @return DocUrl 文档地址
                     * 
                     */
                    std::string GetDocUrl() const;

                    /**
                     * 设置文档地址
                     * @param _docUrl 文档地址
                     * 
                     */
                    void SetDocUrl(const std::string& _docUrl);

                    /**
                     * 判断参数 DocUrl 是否已赋值
                     * @return DocUrl 是否已赋值
                     * 
                     */
                    bool DocUrlHasBeenSet() const;

                    /**
                     * 获取是否找到
                     * @return NotFound 是否找到
                     * 
                     */
                    bool GetNotFound() const;

                    /**
                     * 设置是否找到
                     * @param _notFound 是否找到
                     * 
                     */
                    void SetNotFound(const bool& _notFound);

                    /**
                     * 判断参数 NotFound 是否已赋值
                     * @return NotFound 是否已赋值
                     * 
                     */
                    bool NotFoundHasBeenSet() const;

                private:

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 文档地址
                     */
                    std::string m_docUrl;
                    bool m_docUrlHasBeenSet;

                    /**
                     * 是否找到
                     */
                    bool m_notFound;
                    bool m_notFoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DRUGLIST_H_
