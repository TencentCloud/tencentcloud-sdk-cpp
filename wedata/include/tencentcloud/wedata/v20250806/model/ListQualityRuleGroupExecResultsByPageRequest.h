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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPEXECRESULTSBYPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPEXECRESULTSBYPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/Filter.h>
#include <tencentcloud/wedata/v20250806/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListQualityRuleGroupExecResultsByPage请求参数结构体
                */
                class ListQualityRuleGroupExecResultsByPageRequest : public AbstractModel
                {
                public:
                    ListQualityRuleGroupExecResultsByPageRequest();
                    ~ListQualityRuleGroupExecResultsByPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取分页序号，默认1
                     * @return PageNumber 分页序号，默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页序号，默认1
                     * @param _pageNumber 分页序号，默认1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小，默认10
                     * @return PageSize 分页大小，默认10
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认10
                     * @param _pageSize 分页大小，默认10
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持的过滤条件如下：
1. GroupType
描述：规则组类型，标识规则组所属的分类。
取值：DEFAULT - 默认类型；WORKFLOW_NODE - 编排空间工作流节点类型

2. InstanceId
描述：规则组执行实例ID。
取值：字符串

3. ParentInstanceId
描述：父实例ID。
取值：字符串

4. LifeCycleRunNum
描述：生命周期运行号。
取值：字符串

5. InstanceStatus
描述：实例状态。质量侧的实例状态，一个状态对应调度侧多个状态，具体参考取值说明
取值：
等待运行 - 
["INITIAL", "EVENT_LISTENING", "DEPENDENCE", "ALLOCATED", "LAUNCHED", "BEFORE_ASPECT", "ISSUED"]；
运行中 - ["RUNNING", "AFTER_ASPECT", "WAITING_AFTER_ASPECT"]
失败 - ["FAILED", "EXPIRED", "KILL", "KILLING", "PENDING"]
成功 - ["COMPLETED"]


6. DatasourceId
描述：数据源ID。
取值：字符串

7. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

8. DatabaseName
描述：数据库名称。
取值：字符串

9. DatabaseId
描述：数据库ID。
取值：字符串

10. SchemaName
描述：Schema名称。
取值：字符串

11. ReceiverFlag
描述：是否为当前登录用户的订阅。
取值：true - 是；false - 否

12. TableName
描述：数据表名称，支持模糊匹配。
取值：字符串

13. RuleGroupName
描述：规则组名称。
取值：字符串

14. RuleGroupExecId
描述：规则组执行ID。
取值：整数

15. RuleGroupTableId
描述：规则组表ID。
取值：整数

16. Keyword
描述：关键字搜索，支持规则组执行Id、表名称、表负责人模糊搜索。如果keyword是纯数字，默认只匹配规则组执行Id。
取值：字符串

17. StartTime
描述：实际运行时间，开始时间。
取值：Unix时间戳（秒）

18. EndTime
描述：实际运行时间，结束时间。
取值：Unix时间戳（秒）

19. ScheduledStartTime
描述：计划调度时间，开始时间。
取值：Unix时间戳（秒）

20. ScheduledEndTime
描述：计划调度时间，结束时间。
取值：Unix时间戳（秒）

21. DsJobId
描述：数据源任务ID。
取值：字符串

22. TriggerType
描述：触发类型。
取值：1 - 手动触发；2 - 调度事中触发；3 - 周期调度触发；

23. Status
描述：规则组执行状态。
取值：0 - 初始状态，未提交；1 - 已提交；2 - 检测中；3 - 正常；4 - 异常；5 - 下发中；6 - 执行链路异常；7 - 未检测，没有执行结果；

24. TableIds
描述：数据表ID集合。
取值：字符串，支持多个值（OR关系）

25. RuleGroupId
描述：规则组ID。
取值：整数

26. BizCatalogIds
描述：业务目录ID。
取值：整数，支持多个值（OR关系）

27. CatalogName
描述：数据目录名称。
取值：字符串
                     * @return Filters 过滤条件，支持的过滤条件如下：
1. GroupType
描述：规则组类型，标识规则组所属的分类。
取值：DEFAULT - 默认类型；WORKFLOW_NODE - 编排空间工作流节点类型

2. InstanceId
描述：规则组执行实例ID。
取值：字符串

3. ParentInstanceId
描述：父实例ID。
取值：字符串

4. LifeCycleRunNum
描述：生命周期运行号。
取值：字符串

5. InstanceStatus
描述：实例状态。质量侧的实例状态，一个状态对应调度侧多个状态，具体参考取值说明
取值：
等待运行 - 
["INITIAL", "EVENT_LISTENING", "DEPENDENCE", "ALLOCATED", "LAUNCHED", "BEFORE_ASPECT", "ISSUED"]；
运行中 - ["RUNNING", "AFTER_ASPECT", "WAITING_AFTER_ASPECT"]
失败 - ["FAILED", "EXPIRED", "KILL", "KILLING", "PENDING"]
成功 - ["COMPLETED"]


6. DatasourceId
描述：数据源ID。
取值：字符串

7. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

8. DatabaseName
描述：数据库名称。
取值：字符串

9. DatabaseId
描述：数据库ID。
取值：字符串

10. SchemaName
描述：Schema名称。
取值：字符串

11. ReceiverFlag
描述：是否为当前登录用户的订阅。
取值：true - 是；false - 否

12. TableName
描述：数据表名称，支持模糊匹配。
取值：字符串

13. RuleGroupName
描述：规则组名称。
取值：字符串

14. RuleGroupExecId
描述：规则组执行ID。
取值：整数

15. RuleGroupTableId
描述：规则组表ID。
取值：整数

16. Keyword
描述：关键字搜索，支持规则组执行Id、表名称、表负责人模糊搜索。如果keyword是纯数字，默认只匹配规则组执行Id。
取值：字符串

17. StartTime
描述：实际运行时间，开始时间。
取值：Unix时间戳（秒）

18. EndTime
描述：实际运行时间，结束时间。
取值：Unix时间戳（秒）

19. ScheduledStartTime
描述：计划调度时间，开始时间。
取值：Unix时间戳（秒）

20. ScheduledEndTime
描述：计划调度时间，结束时间。
取值：Unix时间戳（秒）

21. DsJobId
描述：数据源任务ID。
取值：字符串

22. TriggerType
描述：触发类型。
取值：1 - 手动触发；2 - 调度事中触发；3 - 周期调度触发；

23. Status
描述：规则组执行状态。
取值：0 - 初始状态，未提交；1 - 已提交；2 - 检测中；3 - 正常；4 - 异常；5 - 下发中；6 - 执行链路异常；7 - 未检测，没有执行结果；

24. TableIds
描述：数据表ID集合。
取值：字符串，支持多个值（OR关系）

25. RuleGroupId
描述：规则组ID。
取值：整数

26. BizCatalogIds
描述：业务目录ID。
取值：整数，支持多个值（OR关系）

27. CatalogName
描述：数据目录名称。
取值：字符串
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，支持的过滤条件如下：
1. GroupType
描述：规则组类型，标识规则组所属的分类。
取值：DEFAULT - 默认类型；WORKFLOW_NODE - 编排空间工作流节点类型

2. InstanceId
描述：规则组执行实例ID。
取值：字符串

3. ParentInstanceId
描述：父实例ID。
取值：字符串

4. LifeCycleRunNum
描述：生命周期运行号。
取值：字符串

5. InstanceStatus
描述：实例状态。质量侧的实例状态，一个状态对应调度侧多个状态，具体参考取值说明
取值：
等待运行 - 
["INITIAL", "EVENT_LISTENING", "DEPENDENCE", "ALLOCATED", "LAUNCHED", "BEFORE_ASPECT", "ISSUED"]；
运行中 - ["RUNNING", "AFTER_ASPECT", "WAITING_AFTER_ASPECT"]
失败 - ["FAILED", "EXPIRED", "KILL", "KILLING", "PENDING"]
成功 - ["COMPLETED"]


6. DatasourceId
描述：数据源ID。
取值：字符串

7. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

8. DatabaseName
描述：数据库名称。
取值：字符串

9. DatabaseId
描述：数据库ID。
取值：字符串

10. SchemaName
描述：Schema名称。
取值：字符串

11. ReceiverFlag
描述：是否为当前登录用户的订阅。
取值：true - 是；false - 否

12. TableName
描述：数据表名称，支持模糊匹配。
取值：字符串

13. RuleGroupName
描述：规则组名称。
取值：字符串

14. RuleGroupExecId
描述：规则组执行ID。
取值：整数

15. RuleGroupTableId
描述：规则组表ID。
取值：整数

16. Keyword
描述：关键字搜索，支持规则组执行Id、表名称、表负责人模糊搜索。如果keyword是纯数字，默认只匹配规则组执行Id。
取值：字符串

17. StartTime
描述：实际运行时间，开始时间。
取值：Unix时间戳（秒）

18. EndTime
描述：实际运行时间，结束时间。
取值：Unix时间戳（秒）

19. ScheduledStartTime
描述：计划调度时间，开始时间。
取值：Unix时间戳（秒）

20. ScheduledEndTime
描述：计划调度时间，结束时间。
取值：Unix时间戳（秒）

21. DsJobId
描述：数据源任务ID。
取值：字符串

22. TriggerType
描述：触发类型。
取值：1 - 手动触发；2 - 调度事中触发；3 - 周期调度触发；

23. Status
描述：规则组执行状态。
取值：0 - 初始状态，未提交；1 - 已提交；2 - 检测中；3 - 正常；4 - 异常；5 - 下发中；6 - 执行链路异常；7 - 未检测，没有执行结果；

24. TableIds
描述：数据表ID集合。
取值：字符串，支持多个值（OR关系）

25. RuleGroupId
描述：规则组ID。
取值：整数

26. BizCatalogIds
描述：业务目录ID。
取值：整数，支持多个值（OR关系）

27. CatalogName
描述：数据目录名称。
取值：字符串
                     * @param _filters 过滤条件，支持的过滤条件如下：
1. GroupType
描述：规则组类型，标识规则组所属的分类。
取值：DEFAULT - 默认类型；WORKFLOW_NODE - 编排空间工作流节点类型

2. InstanceId
描述：规则组执行实例ID。
取值：字符串

3. ParentInstanceId
描述：父实例ID。
取值：字符串

4. LifeCycleRunNum
描述：生命周期运行号。
取值：字符串

5. InstanceStatus
描述：实例状态。质量侧的实例状态，一个状态对应调度侧多个状态，具体参考取值说明
取值：
等待运行 - 
["INITIAL", "EVENT_LISTENING", "DEPENDENCE", "ALLOCATED", "LAUNCHED", "BEFORE_ASPECT", "ISSUED"]；
运行中 - ["RUNNING", "AFTER_ASPECT", "WAITING_AFTER_ASPECT"]
失败 - ["FAILED", "EXPIRED", "KILL", "KILLING", "PENDING"]
成功 - ["COMPLETED"]


6. DatasourceId
描述：数据源ID。
取值：字符串

7. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

8. DatabaseName
描述：数据库名称。
取值：字符串

9. DatabaseId
描述：数据库ID。
取值：字符串

10. SchemaName
描述：Schema名称。
取值：字符串

11. ReceiverFlag
描述：是否为当前登录用户的订阅。
取值：true - 是；false - 否

12. TableName
描述：数据表名称，支持模糊匹配。
取值：字符串

13. RuleGroupName
描述：规则组名称。
取值：字符串

14. RuleGroupExecId
描述：规则组执行ID。
取值：整数

15. RuleGroupTableId
描述：规则组表ID。
取值：整数

16. Keyword
描述：关键字搜索，支持规则组执行Id、表名称、表负责人模糊搜索。如果keyword是纯数字，默认只匹配规则组执行Id。
取值：字符串

17. StartTime
描述：实际运行时间，开始时间。
取值：Unix时间戳（秒）

18. EndTime
描述：实际运行时间，结束时间。
取值：Unix时间戳（秒）

19. ScheduledStartTime
描述：计划调度时间，开始时间。
取值：Unix时间戳（秒）

20. ScheduledEndTime
描述：计划调度时间，结束时间。
取值：Unix时间戳（秒）

21. DsJobId
描述：数据源任务ID。
取值：字符串

22. TriggerType
描述：触发类型。
取值：1 - 手动触发；2 - 调度事中触发；3 - 周期调度触发；

23. Status
描述：规则组执行状态。
取值：0 - 初始状态，未提交；1 - 已提交；2 - 检测中；3 - 正常；4 - 异常；5 - 下发中；6 - 执行链路异常；7 - 未检测，没有执行结果；

24. TableIds
描述：数据表ID集合。
取值：字符串，支持多个值（OR关系）

25. RuleGroupId
描述：规则组ID。
取值：整数

26. BizCatalogIds
描述：业务目录ID。
取值：整数，支持多个值（OR关系）

27. CatalogName
描述：数据目录名称。
取值：字符串
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取通用排序， 
支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @return OrderFields 通用排序， 
支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * 
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置通用排序， 
支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * @param _orderFields 通用排序， 
支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     * 
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页序号，默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，默认10
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件，支持的过滤条件如下：
1. GroupType
描述：规则组类型，标识规则组所属的分类。
取值：DEFAULT - 默认类型；WORKFLOW_NODE - 编排空间工作流节点类型

2. InstanceId
描述：规则组执行实例ID。
取值：字符串

3. ParentInstanceId
描述：父实例ID。
取值：字符串

4. LifeCycleRunNum
描述：生命周期运行号。
取值：字符串

5. InstanceStatus
描述：实例状态。质量侧的实例状态，一个状态对应调度侧多个状态，具体参考取值说明
取值：
等待运行 - 
["INITIAL", "EVENT_LISTENING", "DEPENDENCE", "ALLOCATED", "LAUNCHED", "BEFORE_ASPECT", "ISSUED"]；
运行中 - ["RUNNING", "AFTER_ASPECT", "WAITING_AFTER_ASPECT"]
失败 - ["FAILED", "EXPIRED", "KILL", "KILLING", "PENDING"]
成功 - ["COMPLETED"]


6. DatasourceId
描述：数据源ID。
取值：字符串

7. DatasourceType
描述：数据源类型。
取值：1 - MYSQL；2 - HIVE；3 - DLC；4 - GBASE；5 - TCHouse-P/CDW；6 - ICEBERG；7 - DORIS；8 - TCHouse-D；9 - EMR_STARROCKS；10 - TBDS_STARROCKS；11 - TCHouse-X

8. DatabaseName
描述：数据库名称。
取值：字符串

9. DatabaseId
描述：数据库ID。
取值：字符串

10. SchemaName
描述：Schema名称。
取值：字符串

11. ReceiverFlag
描述：是否为当前登录用户的订阅。
取值：true - 是；false - 否

12. TableName
描述：数据表名称，支持模糊匹配。
取值：字符串

13. RuleGroupName
描述：规则组名称。
取值：字符串

14. RuleGroupExecId
描述：规则组执行ID。
取值：整数

15. RuleGroupTableId
描述：规则组表ID。
取值：整数

16. Keyword
描述：关键字搜索，支持规则组执行Id、表名称、表负责人模糊搜索。如果keyword是纯数字，默认只匹配规则组执行Id。
取值：字符串

17. StartTime
描述：实际运行时间，开始时间。
取值：Unix时间戳（秒）

18. EndTime
描述：实际运行时间，结束时间。
取值：Unix时间戳（秒）

19. ScheduledStartTime
描述：计划调度时间，开始时间。
取值：Unix时间戳（秒）

20. ScheduledEndTime
描述：计划调度时间，结束时间。
取值：Unix时间戳（秒）

21. DsJobId
描述：数据源任务ID。
取值：字符串

22. TriggerType
描述：触发类型。
取值：1 - 手动触发；2 - 调度事中触发；3 - 周期调度触发；

23. Status
描述：规则组执行状态。
取值：0 - 初始状态，未提交；1 - 已提交；2 - 检测中；3 - 正常；4 - 异常；5 - 下发中；6 - 执行链路异常；7 - 未检测，没有执行结果；

24. TableIds
描述：数据表ID集合。
取值：字符串，支持多个值（OR关系）

25. RuleGroupId
描述：规则组ID。
取值：整数

26. BizCatalogIds
描述：业务目录ID。
取值：整数，支持多个值（OR关系）

27. CatalogName
描述：数据目录名称。
取值：字符串
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 通用排序， 
支持的排序字段：
CreateTime - 按创建时间排序
UpdateTime - 按更新时间排序（默认）
排序方向：
1 - 升序（ASC）
2 - 降序（DESC）
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTQUALITYRULEGROUPEXECRESULTSBYPAGEREQUEST_H_
