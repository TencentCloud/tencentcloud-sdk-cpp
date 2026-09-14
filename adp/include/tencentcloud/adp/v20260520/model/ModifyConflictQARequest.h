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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyConflictQA请求参数结构体
                */
                class ModifyConflictQARequest : public AbstractModel
                {
                public:
                    ModifyConflictQARequest();
                    ~ModifyConflictQARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>冲突组 ID（全局忽略时可不传）</p>
                     * @return ConflictGroupId <p>冲突组 ID（全局忽略时可不传）</p>
                     * 
                     */
                    std::string GetConflictGroupId() const;

                    /**
                     * 设置<p>冲突组 ID（全局忽略时可不传）</p>
                     * @param _conflictGroupId <p>冲突组 ID（全局忽略时可不传）</p>
                     * 
                     */
                    void SetConflictGroupId(const std::string& _conflictGroupId);

                    /**
                     * 判断参数 ConflictGroupId 是否已赋值
                     * @return ConflictGroupId 是否已赋值
                     * 
                     */
                    bool ConflictGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否全局忽略（忽略当前KB下所有待处理冲突问）</p>
                     * @return IsIgnoreAll <p>是否全局忽略（忽略当前KB下所有待处理冲突问）</p>
                     * 
                     */
                    bool GetIsIgnoreAll() const;

                    /**
                     * 设置<p>是否全局忽略（忽略当前KB下所有待处理冲突问）</p>
                     * @param _isIgnoreAll <p>是否全局忽略（忽略当前KB下所有待处理冲突问）</p>
                     * 
                     */
                    void SetIsIgnoreAll(const bool& _isIgnoreAll);

                    /**
                     * 判断参数 IsIgnoreAll 是否已赋值
                     * @return IsIgnoreAll 是否已赋值
                     * 
                     */
                    bool IsIgnoreAllHasBeenSet() const;

                    /**
                     * 获取<p>决策涉及的 QA ID 列表（KEEP 与 DELETE 必填）</p>
                     * @return QaIdList <p>决策涉及的 QA ID 列表（KEEP 与 DELETE 必填）</p>
                     * 
                     */
                    std::vector<std::string> GetQaIdList() const;

                    /**
                     * 设置<p>决策涉及的 QA ID 列表（KEEP 与 DELETE 必填）</p>
                     * @param _qaIdList <p>决策涉及的 QA ID 列表（KEEP 与 DELETE 必填）</p>
                     * 
                     */
                    void SetQaIdList(const std::vector<std::string>& _qaIdList);

                    /**
                     * 判断参数 QaIdList 是否已赋值
                     * @return QaIdList 是否已赋值
                     * 
                     */
                    bool QaIdListHasBeenSet() const;

                    /**
                     * 获取<p>冲突解决策略：1=保留，2=忽略，3=删除（全局忽略时可不传）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>保留</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>忽略</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>删除</td></tr><tr><td>CONFLICT_RESOLUTION_MERGE</td><td>4</td><td>合并</td></tr><tr><td>CONFLICT_RESOLUTION_REPLACE</td><td>5</td><td>替换</td></tr><tr><td>CONFLICT_RESOLUTION_RENAME</td><td>6</td><td>重命名</td></tr></tbody></table></p>
                     * @return Resolution <p>冲突解决策略：1=保留，2=忽略，3=删除（全局忽略时可不传）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>保留</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>忽略</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>删除</td></tr><tr><td>CONFLICT_RESOLUTION_MERGE</td><td>4</td><td>合并</td></tr><tr><td>CONFLICT_RESOLUTION_REPLACE</td><td>5</td><td>替换</td></tr><tr><td>CONFLICT_RESOLUTION_RENAME</td><td>6</td><td>重命名</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetResolution() const;

                    /**
                     * 设置<p>冲突解决策略：1=保留，2=忽略，3=删除（全局忽略时可不传）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>保留</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>忽略</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>删除</td></tr><tr><td>CONFLICT_RESOLUTION_MERGE</td><td>4</td><td>合并</td></tr><tr><td>CONFLICT_RESOLUTION_REPLACE</td><td>5</td><td>替换</td></tr><tr><td>CONFLICT_RESOLUTION_RENAME</td><td>6</td><td>重命名</td></tr></tbody></table></p>
                     * @param _resolution <p>冲突解决策略：1=保留，2=忽略，3=删除（全局忽略时可不传）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>保留</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>忽略</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>删除</td></tr><tr><td>CONFLICT_RESOLUTION_MERGE</td><td>4</td><td>合并</td></tr><tr><td>CONFLICT_RESOLUTION_REPLACE</td><td>5</td><td>替换</td></tr><tr><td>CONFLICT_RESOLUTION_RENAME</td><td>6</td><td>重命名</td></tr></tbody></table></p>
                     * 
                     */
                    void SetResolution(const int64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>冲突组 ID（全局忽略时可不传）</p>
                     */
                    std::string m_conflictGroupId;
                    bool m_conflictGroupIdHasBeenSet;

                    /**
                     * <p>是否全局忽略（忽略当前KB下所有待处理冲突问）</p>
                     */
                    bool m_isIgnoreAll;
                    bool m_isIgnoreAllHasBeenSet;

                    /**
                     * <p>决策涉及的 QA ID 列表（KEEP 与 DELETE 必填）</p>
                     */
                    std::vector<std::string> m_qaIdList;
                    bool m_qaIdListHasBeenSet;

                    /**
                     * <p>冲突解决策略：1=保留，2=忽略，3=删除（全局忽略时可不传）<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>CONFLICT_RESOLUTION_UNKNOWN</td><td>0</td><td></td></tr><tr><td>CONFLICT_RESOLUTION_KEEP</td><td>1</td><td>保留</td></tr><tr><td>CONFLICT_RESOLUTION_IGNORE</td><td>2</td><td>忽略</td></tr><tr><td>CONFLICT_RESOLUTION_DELETE</td><td>3</td><td>删除</td></tr><tr><td>CONFLICT_RESOLUTION_MERGE</td><td>4</td><td>合并</td></tr><tr><td>CONFLICT_RESOLUTION_REPLACE</td><td>5</td><td>替换</td></tr><tr><td>CONFLICT_RESOLUTION_RENAME</td><td>6</td><td>重命名</td></tr></tbody></table></p>
                     */
                    int64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYCONFLICTQAREQUEST_H_
