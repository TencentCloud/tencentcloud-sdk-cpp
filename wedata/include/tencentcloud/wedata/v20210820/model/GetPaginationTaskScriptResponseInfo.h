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
                     * 获取<p>项目编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目编号</p>
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
                     * 获取<p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务编号</p>
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
                     * 获取<p>页内尺寸</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageSize <p>页内尺寸</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>页内尺寸</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageSize <p>页内尺寸</p>
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
                     * 获取<p>页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageNum <p>页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageNum <p>页码</p>
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
                     * 获取<p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageTotal <p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageTotal() const;

                    /**
                     * 设置<p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageTotal <p>总页数</p>
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
                     * 获取<p>分页内容</p><p>分页拉取全部代码内容后，先拼接，再Base64解码获取完整脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Base64ScriptContent <p>分页内容</p><p>分页拉取全部代码内容后，先拼接，再Base64解码获取完整脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBase64ScriptContent() const;

                    /**
                     * 设置<p>分页内容</p><p>分页拉取全部代码内容后，先拼接，再Base64解码获取完整脚本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _base64ScriptContent <p>分页内容</p><p>分页拉取全部代码内容后，先拼接，再Base64解码获取完整脚本内容</p>
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
                     * <p>项目编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>任务编号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>页内尺寸</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>页码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>总页数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageTotal;
                    bool m_pageTotalHasBeenSet;

                    /**
                     * <p>分页内容</p><p>分页拉取全部代码内容后，先拼接，再Base64解码获取完整脚本内容</p>
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
