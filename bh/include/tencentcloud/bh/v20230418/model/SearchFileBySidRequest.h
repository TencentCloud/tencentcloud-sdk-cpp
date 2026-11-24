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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/SearchFileTypeFilter.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchFileBySid请求参数结构体
                */
                class SearchFileBySidRequest : public AbstractModel
                {
                public:
                    SearchFileBySidRequest();
                    ~SearchFileBySidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话</p>
                     * @return Sid <p>若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话</p>
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置<p>若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话</p>
                     * @param _sid <p>若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话</p>
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取<p>是否创建审计日志,通过查看按钮调用时为true,其他为false</p>
                     * @return AuditLog <p>是否创建审计日志,通过查看按钮调用时为true,其他为false</p>
                     * 
                     */
                    bool GetAuditLog() const;

                    /**
                     * 设置<p>是否创建审计日志,通过查看按钮调用时为true,其他为false</p>
                     * @param _auditLog <p>是否创建审计日志,通过查看按钮调用时为true,其他为false</p>
                     * 
                     */
                    void SetAuditLog(const bool& _auditLog);

                    /**
                     * 判断参数 AuditLog 是否已赋值
                     * @return AuditLog 是否已赋值
                     * 
                     */
                    bool AuditLogHasBeenSet() const;

                    /**
                     * 获取<p>分页的页内记录数，默认为20，最大200</p>
                     * @return Limit <p>分页的页内记录数，默认为20，最大200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页的页内记录数，默认为20，最大200</p>
                     * @param _limit <p>分页的页内记录数，默认为20，最大200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>可填写路径名或文件名</p>
                     * @return FileName <p>可填写路径名或文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>可填写路径名或文件名</p>
                     * @param _fileName <p>可填写路径名或文件名</p>
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
                     * 获取<p>分页用偏移量</p>
                     * @return Offset <p>分页用偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页用偏移量</p>
                     * @param _offset <p>分页用偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>1-已放行，  2-已阻断</p>
                     * @return AuditAction <p>1-已放行，  2-已阻断</p>
                     * 
                     */
                    int64_t GetAuditAction() const;

                    /**
                     * 设置<p>1-已放行，  2-已阻断</p>
                     * @param _auditAction <p>1-已放行，  2-已阻断</p>
                     * 
                     */
                    void SetAuditAction(const int64_t& _auditAction);

                    /**
                     * 判断参数 AuditAction 是否已赋值
                     * @return AuditAction 是否已赋值
                     * 
                     */
                    bool AuditActionHasBeenSet() const;

                    /**
                     * 获取<p>1-已放行，  2-已阻断</p>
                     * @return AuditActionSet <p>1-已放行，  2-已阻断</p>
                     * 
                     */
                    std::vector<int64_t> GetAuditActionSet() const;

                    /**
                     * 设置<p>1-已放行，  2-已阻断</p>
                     * @param _auditActionSet <p>1-已放行，  2-已阻断</p>
                     * 
                     */
                    void SetAuditActionSet(const std::vector<int64_t>& _auditActionSet);

                    /**
                     * 判断参数 AuditActionSet 是否已赋值
                     * @return AuditActionSet 是否已赋值
                     * 
                     */
                    bool AuditActionSetHasBeenSet() const;

                    /**
                     * 获取<p>以Protocol和Method为条件查询</p>
                     * @return TypeFilters <p>以Protocol和Method为条件查询</p>
                     * 
                     */
                    std::vector<SearchFileTypeFilter> GetTypeFilters() const;

                    /**
                     * 设置<p>以Protocol和Method为条件查询</p>
                     * @param _typeFilters <p>以Protocol和Method为条件查询</p>
                     * 
                     */
                    void SetTypeFilters(const std::vector<SearchFileTypeFilter>& _typeFilters);

                    /**
                     * 判断参数 TypeFilters 是否已赋值
                     * @return TypeFilters 是否已赋值
                     * 
                     */
                    bool TypeFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话</p>
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * <p>是否创建审计日志,通过查看按钮调用时为true,其他为false</p>
                     */
                    bool m_auditLog;
                    bool m_auditLogHasBeenSet;

                    /**
                     * <p>分页的页内记录数，默认为20，最大200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>可填写路径名或文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>分页用偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>1-已放行，  2-已阻断</p>
                     */
                    int64_t m_auditAction;
                    bool m_auditActionHasBeenSet;

                    /**
                     * <p>1-已放行，  2-已阻断</p>
                     */
                    std::vector<int64_t> m_auditActionSet;
                    bool m_auditActionSetHasBeenSet;

                    /**
                     * <p>以Protocol和Method为条件查询</p>
                     */
                    std::vector<SearchFileTypeFilter> m_typeFilters;
                    bool m_typeFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDREQUEST_H_
