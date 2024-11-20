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
                     * 获取若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * @return Sid 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     * @param _sid 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
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
                     * 获取是否创建审计日志,通过查看按钮调用时为true,其他为false
                     * @return AuditLog 是否创建审计日志,通过查看按钮调用时为true,其他为false
                     * 
                     */
                    bool GetAuditLog() const;

                    /**
                     * 设置是否创建审计日志,通过查看按钮调用时为true,其他为false
                     * @param _auditLog 是否创建审计日志,通过查看按钮调用时为true,其他为false
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
                     * 获取分页的页内记录数，默认为20，最大200
                     * @return Limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的页内记录数，默认为20，最大200
                     * @param _limit 分页的页内记录数，默认为20，最大200
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
                     * 获取可填写路径名或文件名
                     * @return FileName 可填写路径名或文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置可填写路径名或文件名
                     * @param _fileName 可填写路径名或文件名
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
                     * 获取分页用偏移量
                     * @return Offset 分页用偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页用偏移量
                     * @param _offset 分页用偏移量
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
                     * 获取1-已执行，  2-被阻断
                     * @return AuditAction 1-已执行，  2-被阻断
                     * 
                     */
                    int64_t GetAuditAction() const;

                    /**
                     * 设置1-已执行，  2-被阻断
                     * @param _auditAction 1-已执行，  2-被阻断
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
                     * 获取以Protocol和Method为条件查询
                     * @return TypeFilters 以Protocol和Method为条件查询
                     * 
                     */
                    std::vector<SearchFileTypeFilter> GetTypeFilters() const;

                    /**
                     * 设置以Protocol和Method为条件查询
                     * @param _typeFilters 以Protocol和Method为条件查询
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
                     * 若入参为Id，则其他入参字段不作为搜索依据，仅按照Id来搜索会话
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 是否创建审计日志,通过查看按钮调用时为true,其他为false
                     */
                    bool m_auditLog;
                    bool m_auditLogHasBeenSet;

                    /**
                     * 分页的页内记录数，默认为20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 可填写路径名或文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 分页用偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 1-已执行，  2-被阻断
                     */
                    int64_t m_auditAction;
                    bool m_auditActionHasBeenSet;

                    /**
                     * 以Protocol和Method为条件查询
                     */
                    std::vector<SearchFileTypeFilter> m_typeFilters;
                    bool m_typeFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDREQUEST_H_
