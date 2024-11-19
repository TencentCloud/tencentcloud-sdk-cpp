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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 表格行。
                */
                class TableRow : public AbstractModel
                {
                public:
                    TableRow();
                    ~TableRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格行UUID。
                     * @return TableRowUuid 表格行UUID。
                     * 
                     */
                    std::string GetTableRowUuid() const;

                    /**
                     * 设置表格行UUID。
                     * @param _tableRowUuid 表格行UUID。
                     * 
                     */
                    void SetTableRowUuid(const std::string& _tableRowUuid);

                    /**
                     * 判断参数 TableRowUuid 是否已赋值
                     * @return TableRowUuid 是否已赋值
                     * 
                     */
                    bool TableRowUuidHasBeenSet() const;

                    /**
                     * 获取表格行内容。
                     * @return Content 表格行内容。
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置表格行内容。
                     * @param _content 表格行内容。
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 表格行UUID。
                     */
                    std::string m_tableRowUuid;
                    bool m_tableRowUuidHasBeenSet;

                    /**
                     * 表格行内容。
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TABLEROW_H_
