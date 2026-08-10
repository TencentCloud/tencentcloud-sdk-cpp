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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulFixTaskList请求参数结构体
                */
                class DescribeVulFixTaskListRequest : public AbstractModel
                {
                public:
                    DescribeVulFixTaskListRequest();
                    ~DescribeVulFixTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @return Offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @param _offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @return Limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @param _limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件<br>支持的Filter.Name：<br>TaskId - 精确匹配，按任务ID筛选<br>JobId - 精确匹配，按任务JobId筛选，对应后台任务系统的任务ID<br>FixStatus - 精确匹配，按修复状态筛选：0-初始化 1-修复中 2-修复成功 3-部分修复失败 4-全部修复失败 5-停止修复<br>StartTime - 范围匹配，修复启动时间范围，传入两个值表示起止时间<br>AppId - 精确匹配，按创建者AppId筛选<br>VulCategory - 精确匹配，按漏洞类型筛选：LINUX-Linux软件漏洞 WINDOWS-Windows系统补丁漏洞 WEB_CMS-Web-CMS漏洞 APPLICATION-应用漏洞 EMERGENCY-应急漏洞<br>TaskName - 模糊匹配，按漏洞名称/CVE编号/KB补丁名称筛选，匹配任务关联的漏洞或KB补丁</p>
                     * @return Filters <p>过滤条件<br>支持的Filter.Name：<br>TaskId - 精确匹配，按任务ID筛选<br>JobId - 精确匹配，按任务JobId筛选，对应后台任务系统的任务ID<br>FixStatus - 精确匹配，按修复状态筛选：0-初始化 1-修复中 2-修复成功 3-部分修复失败 4-全部修复失败 5-停止修复<br>StartTime - 范围匹配，修复启动时间范围，传入两个值表示起止时间<br>AppId - 精确匹配，按创建者AppId筛选<br>VulCategory - 精确匹配，按漏洞类型筛选：LINUX-Linux软件漏洞 WINDOWS-Windows系统补丁漏洞 WEB_CMS-Web-CMS漏洞 APPLICATION-应用漏洞 EMERGENCY-应急漏洞<br>TaskName - 模糊匹配，按漏洞名称/CVE编号/KB补丁名称筛选，匹配任务关联的漏洞或KB补丁</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>支持的Filter.Name：<br>TaskId - 精确匹配，按任务ID筛选<br>JobId - 精确匹配，按任务JobId筛选，对应后台任务系统的任务ID<br>FixStatus - 精确匹配，按修复状态筛选：0-初始化 1-修复中 2-修复成功 3-部分修复失败 4-全部修复失败 5-停止修复<br>StartTime - 范围匹配，修复启动时间范围，传入两个值表示起止时间<br>AppId - 精确匹配，按创建者AppId筛选<br>VulCategory - 精确匹配，按漏洞类型筛选：LINUX-Linux软件漏洞 WINDOWS-Windows系统补丁漏洞 WEB_CMS-Web-CMS漏洞 APPLICATION-应用漏洞 EMERGENCY-应急漏洞<br>TaskName - 模糊匹配，按漏洞名称/CVE编号/KB补丁名称筛选，匹配任务关联的漏洞或KB补丁</p>
                     * @param _filters <p>过滤条件<br>支持的Filter.Name：<br>TaskId - 精确匹配，按任务ID筛选<br>JobId - 精确匹配，按任务JobId筛选，对应后台任务系统的任务ID<br>FixStatus - 精确匹配，按修复状态筛选：0-初始化 1-修复中 2-修复成功 3-部分修复失败 4-全部修复失败 5-停止修复<br>StartTime - 范围匹配，修复启动时间范围，传入两个值表示起止时间<br>AppId - 精确匹配，按创建者AppId筛选<br>VulCategory - 精确匹配，按漏洞类型筛选：LINUX-Linux软件漏洞 WINDOWS-Windows系统补丁漏洞 WEB_CMS-Web-CMS漏洞 APPLICATION-应用漏洞 EMERGENCY-应急漏洞<br>TaskName - 模糊匹配，按漏洞名称/CVE编号/KB补丁名称筛选，匹配任务关联的漏洞或KB补丁</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序字段<br>枚举值：<br>StartTime：按修复启动时间排序<br>EndTime：按修复结束时间排序<br>CreateTime：按创建时间排序</p>
                     * @return Order <p>排序字段<br>枚举值：<br>StartTime：按修复启动时间排序<br>EndTime：按修复结束时间排序<br>CreateTime：按创建时间排序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序字段<br>枚举值：<br>StartTime：按修复启动时间排序<br>EndTime：按修复结束时间排序<br>CreateTime：按创建时间排序</p>
                     * @param _order <p>排序字段<br>枚举值：<br>StartTime：按修复启动时间排序<br>EndTime：按修复结束时间排序<br>CreateTime：按创建时间排序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * @return By <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * @param _by <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件<br>支持的Filter.Name：<br>TaskId - 精确匹配，按任务ID筛选<br>JobId - 精确匹配，按任务JobId筛选，对应后台任务系统的任务ID<br>FixStatus - 精确匹配，按修复状态筛选：0-初始化 1-修复中 2-修复成功 3-部分修复失败 4-全部修复失败 5-停止修复<br>StartTime - 范围匹配，修复启动时间范围，传入两个值表示起止时间<br>AppId - 精确匹配，按创建者AppId筛选<br>VulCategory - 精确匹配，按漏洞类型筛选：LINUX-Linux软件漏洞 WINDOWS-Windows系统补丁漏洞 WEB_CMS-Web-CMS漏洞 APPLICATION-应用漏洞 EMERGENCY-应急漏洞<br>TaskName - 模糊匹配，按漏洞名称/CVE编号/KB补丁名称筛选，匹配任务关联的漏洞或KB补丁</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序字段<br>枚举值：<br>StartTime：按修复启动时间排序<br>EndTime：按修复结束时间排序<br>CreateTime：按创建时间排序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序方式<br>枚举值：<br>asc：升序<br>desc：降序<br>默认值：desc</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXTASKLISTREQUEST_H_
