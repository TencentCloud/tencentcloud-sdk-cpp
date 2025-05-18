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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFOREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo请求参数结构体
                */
                class DescribeTaskInfoRequest : public AbstractModel
                {
                public:
                    DescribeTaskInfoRequest();
                    ~DescribeTaskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取偏移量。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取按照指定的产品类型查询，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器

未传入或为空时，默认查询全部产品类型。
                     * @return Product 按照指定的产品类型查询，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器

未传入或为空时，默认查询全部产品类型。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置按照指定的产品类型查询，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器

未传入或为空时，默认查询全部产品类型。
                     * @param _product 按照指定的产品类型查询，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器

未传入或为空时，默认查询全部产品类型。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取按照一个或多个任务状态ID进行过滤。
`TaskStatus`（任务状态ID）与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * @return TaskStatus 按照一个或多个任务状态ID进行过滤。
`TaskStatus`（任务状态ID）与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置按照一个或多个任务状态ID进行过滤。
`TaskStatus`（任务状态ID）与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * @param _taskStatus 按照一个或多个任务状态ID进行过滤。
`TaskStatus`（任务状态ID）与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取按照一个或多个任务类型ID进行过滤。

`TaskTypeId`（任务类型ID）与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * @return TaskTypeIds 按照一个或多个任务类型ID进行过滤。

`TaskTypeId`（任务类型ID）与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeIds() const;

                    /**
                     * 设置按照一个或多个任务类型ID进行过滤。

`TaskTypeId`（任务类型ID）与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * @param _taskTypeIds 按照一个或多个任务类型ID进行过滤。

`TaskTypeId`（任务类型ID）与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     * 
                     */
                    void SetTaskTypeIds(const std::vector<int64_t>& _taskTypeIds);

                    /**
                     * 判断参数 TaskTypeIds 是否已赋值
                     * @return TaskTypeIds 是否已赋值
                     * 
                     */
                    bool TaskTypeIdsHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个任务ID查询。任务ID形如：`rep-xxxxxxxx`。
                     * @return TaskIds 按照一个或者多个任务ID查询。任务ID形如：`rep-xxxxxxxx`。
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置按照一个或者多个任务ID查询。任务ID形如：`rep-xxxxxxxx`。
                     * @param _taskIds 按照一个或者多个任务ID查询。任务ID形如：`rep-xxxxxxxx`。
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个实例ID查询。实例ID形如：`ins-xxxxxxxx`，可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @return InstanceIds 按照一个或者多个实例ID查询。实例ID形如：`ins-xxxxxxxx`，可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例ID查询。实例ID形如：`ins-xxxxxxxx`，可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * @param _instanceIds 按照一个或者多个实例ID查询。实例ID形如：`ins-xxxxxxxx`，可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个实例名称查询。
                     * @return Aliases 按照一个或者多个实例名称查询。
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置按照一个或者多个实例名称查询。
                     * @param _aliases 按照一个或者多个实例名称查询。
                     * 
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取时间查询区间的起始位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当天`00:00:00`。
                     * @return StartDate 时间查询区间的起始位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当天`00:00:00`。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置时间查询区间的起始位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当天`00:00:00`。
                     * @param _startDate 时间查询区间的起始位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当天`00:00:00`。
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取时间查询区间的终止位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当前时刻。
                     * @return EndDate 时间查询区间的终止位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当前时刻。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置时间查询区间的终止位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当前时刻。
                     * @param _endDate 时间查询区间的终止位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当前时刻。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取指定返回维修任务列表的排序字段，目前支持：

- `CreateTime`：任务创建时间
- `AuthTime`：任务授权时间
- `EndTime`：任务结束时间

未传入时或为空时，默认按`CreateTime`字段进行排序。
                     * @return OrderField 指定返回维修任务列表的排序字段，目前支持：

- `CreateTime`：任务创建时间
- `AuthTime`：任务授权时间
- `EndTime`：任务结束时间

未传入时或为空时，默认按`CreateTime`字段进行排序。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置指定返回维修任务列表的排序字段，目前支持：

- `CreateTime`：任务创建时间
- `AuthTime`：任务授权时间
- `EndTime`：任务结束时间

未传入时或为空时，默认按`CreateTime`字段进行排序。
                     * @param _orderField 指定返回维修任务列表的排序字段，目前支持：

- `CreateTime`：任务创建时间
- `AuthTime`：任务授权时间
- `EndTime`：任务结束时间

未传入时或为空时，默认按`CreateTime`字段进行排序。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式，目前支持：

- `0`：升序（默认）
- `1`：降序

未传入或为空时，默认按升序排序。

                     * @return Order 排序方式，目前支持：

- `0`：升序（默认）
- `1`：降序

未传入或为空时，默认按升序排序。

                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置排序方式，目前支持：

- `0`：升序（默认）
- `1`：降序

未传入或为空时，默认按升序排序。

                     * @param _order 排序方式，目前支持：

- `0`：升序（默认）
- `1`：降序

未传入或为空时，默认按升序排序。

                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 返回数量，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按照指定的产品类型查询，支持取值：

- `CVM`：云服务器
- `CDH`：专用宿主机
- `CPM2.0`：裸金属云服务器

未传入或为空时，默认查询全部产品类型。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 按照一个或多个任务状态ID进行过滤。
`TaskStatus`（任务状态ID）与任务状态中文名的对应关系如下：

- `1`：待授权
- `2`：处理中
- `3`：已结束
- `4`：已预约
- `5`：已取消
- `6`：已避免

各任务状态的具体含义，可参考 [任务状态](https://cloud.tencent.com/document/product/213/67789#.E4.BB.BB.E5.8A.A1.E7.8A.B6.E6.80.81)。
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 按照一个或多个任务类型ID进行过滤。

`TaskTypeId`（任务类型ID）与任务类型中文名的对应关系如下：

- `101`：实例运行隐患
- `102`：实例运行异常
- `103`：实例硬盘异常
- `104`：实例网络连接异常
- `105`：实例运行预警
- `106`：实例硬盘预警
- `107`：实例维护升级

各任务类型的具体含义，可参考 [维修任务分类](https://cloud.tencent.com/document/product/213/67789#.E7.BB.B4.E4.BF.AE.E4.BB.BB.E5.8A.A1.E5.88.86.E7.B1.BB)。
                     */
                    std::vector<int64_t> m_taskTypeIds;
                    bool m_taskTypeIdsHasBeenSet;

                    /**
                     * 按照一个或者多个任务ID查询。任务ID形如：`rep-xxxxxxxx`。
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 按照一个或者多个实例ID查询。实例ID形如：`ins-xxxxxxxx`，可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 按照一个或者多个实例名称查询。
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 时间查询区间的起始位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当天`00:00:00`。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 时间查询区间的终止位置，会根据任务创建时间`CreateTime`进行过滤，格式为`YYYY-MM-DD hh:mm:ss`。未传入时默认为当前时刻。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 指定返回维修任务列表的排序字段，目前支持：

- `CreateTime`：任务创建时间
- `AuthTime`：任务授权时间
- `EndTime`：任务结束时间

未传入时或为空时，默认按`CreateTime`字段进行排序。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式，目前支持：

- `0`：升序（默认）
- `1`：降序

未传入或为空时，默认按升序排序。

                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFOREQUEST_H_
