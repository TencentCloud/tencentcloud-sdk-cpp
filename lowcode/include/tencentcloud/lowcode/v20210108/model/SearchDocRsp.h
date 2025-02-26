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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/SearchDocInfo.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 知识库文档搜索结果
                */
                class SearchDocRsp : public AbstractModel
                {
                public:
                    SearchDocRsp();
                    ~SearchDocRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档基本信息
                     * @return DocInfos 文档基本信息
                     * 
                     */
                    std::vector<SearchDocInfo> GetDocInfos() const;

                    /**
                     * 设置文档基本信息
                     * @param _docInfos 文档基本信息
                     * 
                     */
                    void SetDocInfos(const std::vector<SearchDocInfo>& _docInfos);

                    /**
                     * 判断参数 DocInfos 是否已赋值
                     * @return DocInfos 是否已赋值
                     * 
                     */
                    bool DocInfosHasBeenSet() const;

                    /**
                     * 获取文档总数
                     * @return Total 文档总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置文档总数
                     * @param _total 文档总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 文档基本信息
                     */
                    std::vector<SearchDocInfo> m_docInfos;
                    bool m_docInfosHasBeenSet;

                    /**
                     * 文档总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_SEARCHDOCRSP_H_
