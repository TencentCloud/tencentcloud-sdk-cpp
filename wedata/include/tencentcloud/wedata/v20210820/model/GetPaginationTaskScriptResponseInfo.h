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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTRESPONSEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 获取任务脚本内容返回体
                */
                class GetPaginationTaskScriptResponseInfo : public AbstractModel
                {
                public:
                    GetPaginationTaskScriptResponseInfo();
                    ~GetPaginationTaskScriptResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目编号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取页内尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize 页内尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页内尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize 页内尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNum 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置页码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNum 页码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageTotal 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageTotal() const;

                    /**
                     * 设置总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageTotal 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageTotal(const int64_t& _pageTotal);

                    /**
                     * 判断参数 PageTotal 是否已赋值
                     * @return PageTotal 是否已赋值
                     * 
                     */
                    bool PageTotalHasBeenSet() const;

                    /**
                     * 获取分页内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Base64ScriptContent 分页内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBase64ScriptContent() const;

                    /**
                     * 设置分页内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _base64ScriptContent 分页内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBase64ScriptContent(const std::string& _base64ScriptContent);

                    /**
                     * 判断参数 Base64ScriptContent 是否已赋值
                     * @return Base64ScriptContent 是否已赋值
                     * 
                     */
                    bool Base64ScriptContentHasBeenSet() const;

                private:

                    /**
                     * 项目编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 页内尺寸
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 总页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageTotal;
                    bool m_pageTotalHasBeenSet;

                    /**
                     * 分页内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_base64ScriptContent;
                    bool m_base64ScriptContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPAGINATIONTASKSCRIPTRESPONSEINFO_H_
