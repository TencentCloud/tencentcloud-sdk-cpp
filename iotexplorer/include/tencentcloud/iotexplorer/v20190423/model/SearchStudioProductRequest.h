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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEARCHSTUDIOPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEARCHSTUDIOPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * SearchStudioProduct请求参数结构体
                */
                class SearchStudioProductRequest : public AbstractModel
                {
                public:
                    SearchStudioProductRequest();
                    ~SearchStudioProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param ProductName 产品名称
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取列表Limit
                     * @return Limit 列表Limit
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置列表Limit
                     * @param Limit 列表Limit
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取列表Offset
                     * @return Offset 列表Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置列表Offset
                     * @param Offset 列表Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 列表Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 列表Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEARCHSTUDIOPRODUCTREQUEST_H_
