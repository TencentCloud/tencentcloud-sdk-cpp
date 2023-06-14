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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_PREVIEWDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_PREVIEWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名概览明细
                */
                class PreviewDetail : public AbstractModel
                {
                public:
                    PreviewDetail();
                    ~PreviewDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Name 域名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置域名
                     * @param _name 域名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取域名套餐代码
                     * @return Grade 域名套餐代码
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置域名套餐代码
                     * @param _grade 域名套餐代码
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取域名套餐名称
                     * @return GradeTitle 域名套餐名称
                     * 
                     */
                    std::string GetGradeTitle() const;

                    /**
                     * 设置域名套餐名称
                     * @param _gradeTitle 域名套餐名称
                     * 
                     */
                    void SetGradeTitle(const std::string& _gradeTitle);

                    /**
                     * 判断参数 GradeTitle 是否已赋值
                     * @return GradeTitle 是否已赋值
                     * 
                     */
                    bool GradeTitleHasBeenSet() const;

                    /**
                     * 获取域名记录数
                     * @return Records 域名记录数
                     * 
                     */
                    uint64_t GetRecords() const;

                    /**
                     * 设置域名记录数
                     * @param _records 域名记录数
                     * 
                     */
                    void SetRecords(const uint64_t& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取域名停靠状态。0 未开启 1 已开启 2 已暂停
                     * @return DomainParkingStatus 域名停靠状态。0 未开启 1 已开启 2 已暂停
                     * 
                     */
                    uint64_t GetDomainParkingStatus() const;

                    /**
                     * 设置域名停靠状态。0 未开启 1 已开启 2 已暂停
                     * @param _domainParkingStatus 域名停靠状态。0 未开启 1 已开启 2 已暂停
                     * 
                     */
                    void SetDomainParkingStatus(const uint64_t& _domainParkingStatus);

                    /**
                     * 判断参数 DomainParkingStatus 是否已赋值
                     * @return DomainParkingStatus 是否已赋值
                     * 
                     */
                    bool DomainParkingStatusHasBeenSet() const;

                    /**
                     * 获取自定义线路数量
                     * @return LineCount 自定义线路数量
                     * 
                     */
                    uint64_t GetLineCount() const;

                    /**
                     * 设置自定义线路数量
                     * @param _lineCount 自定义线路数量
                     * 
                     */
                    void SetLineCount(const uint64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取自定义线路分组数量
                     * @return LineGroupCount 自定义线路分组数量
                     * 
                     */
                    uint64_t GetLineGroupCount() const;

                    /**
                     * 设置自定义线路分组数量
                     * @param _lineGroupCount 自定义线路分组数量
                     * 
                     */
                    void SetLineGroupCount(const uint64_t& _lineGroupCount);

                    /**
                     * 判断参数 LineGroupCount 是否已赋值
                     * @return LineGroupCount 是否已赋值
                     * 
                     */
                    bool LineGroupCountHasBeenSet() const;

                    /**
                     * 获取域名别名数量
                     * @return AliasCount 域名别名数量
                     * 
                     */
                    uint64_t GetAliasCount() const;

                    /**
                     * 设置域名别名数量
                     * @param _aliasCount 域名别名数量
                     * 
                     */
                    void SetAliasCount(const uint64_t& _aliasCount);

                    /**
                     * 判断参数 AliasCount 是否已赋值
                     * @return AliasCount 是否已赋值
                     * 
                     */
                    bool AliasCountHasBeenSet() const;

                    /**
                     * 获取允许添加的最大域名别名数量
                     * @return MaxAliasCount 允许添加的最大域名别名数量
                     * 
                     */
                    uint64_t GetMaxAliasCount() const;

                    /**
                     * 设置允许添加的最大域名别名数量
                     * @param _maxAliasCount 允许添加的最大域名别名数量
                     * 
                     */
                    void SetMaxAliasCount(const uint64_t& _maxAliasCount);

                    /**
                     * 判断参数 MaxAliasCount 是否已赋值
                     * @return MaxAliasCount 是否已赋值
                     * 
                     */
                    bool MaxAliasCountHasBeenSet() const;

                    /**
                     * 获取昨天的解析量
                     * @return ResolveCount 昨天的解析量
                     * 
                     */
                    uint64_t GetResolveCount() const;

                    /**
                     * 设置昨天的解析量
                     * @param _resolveCount 昨天的解析量
                     * 
                     */
                    void SetResolveCount(const uint64_t& _resolveCount);

                    /**
                     * 判断参数 ResolveCount 是否已赋值
                     * @return ResolveCount 是否已赋值
                     * 
                     */
                    bool ResolveCountHasBeenSet() const;

                    /**
                     * 获取增值服务数量
                     * @return VASCount 增值服务数量
                     * 
                     */
                    uint64_t GetVASCount() const;

                    /**
                     * 设置增值服务数量
                     * @param _vASCount 增值服务数量
                     * 
                     */
                    void SetVASCount(const uint64_t& _vASCount);

                    /**
                     * 判断参数 VASCount 是否已赋值
                     * @return VASCount 是否已赋值
                     * 
                     */
                    bool VASCountHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 域名套餐代码
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 域名套餐名称
                     */
                    std::string m_gradeTitle;
                    bool m_gradeTitleHasBeenSet;

                    /**
                     * 域名记录数
                     */
                    uint64_t m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 域名停靠状态。0 未开启 1 已开启 2 已暂停
                     */
                    uint64_t m_domainParkingStatus;
                    bool m_domainParkingStatusHasBeenSet;

                    /**
                     * 自定义线路数量
                     */
                    uint64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * 自定义线路分组数量
                     */
                    uint64_t m_lineGroupCount;
                    bool m_lineGroupCountHasBeenSet;

                    /**
                     * 域名别名数量
                     */
                    uint64_t m_aliasCount;
                    bool m_aliasCountHasBeenSet;

                    /**
                     * 允许添加的最大域名别名数量
                     */
                    uint64_t m_maxAliasCount;
                    bool m_maxAliasCountHasBeenSet;

                    /**
                     * 昨天的解析量
                     */
                    uint64_t m_resolveCount;
                    bool m_resolveCountHasBeenSet;

                    /**
                     * 增值服务数量
                     */
                    uint64_t m_vASCount;
                    bool m_vASCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_PREVIEWDETAIL_H_
