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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportAssetMachineList请求参数结构体
                */
                class ExportAssetMachineListRequest : public AbstractModel
                {
                public:
                    ExportAssetMachineListRequest();
                    ~ExportAssetMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>OsType - String - 是否必填：否 - windows或linux</li>
<li>CpuLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * @return Filters 过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>OsType - String - 是否必填：否 - windows或linux</li>
<li>CpuLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>OsType - String - 是否必填：否 - windows或linux</li>
<li>CpuLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     * @param _filters 过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>OsType - String - 是否必填：否 - windows或linux</li>
<li>CpuLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
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
                     * 获取排序方式，asc升序 或 desc降序
                     * @return Order 排序方式，asc升序 或 desc降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式，asc升序 或 desc降序
                     * @param _order 排序方式，asc升序 或 desc降序
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
                     * 获取可选排序[FirstTime|PartitionCount]
                     * @return By 可选排序[FirstTime|PartitionCount]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置可选排序[FirstTime|PartitionCount]
                     * @param _by 可选排序[FirstTime|PartitionCount]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>IP - String - 是否必填：否 - 主机ip</li>
<li>MachineName - String - 是否必填：否 - 主机名称</li>
<li>InstanceID - string - 是否必填：否 - 实例ID</li>
<li>OsType - String - 是否必填：否 - windows或linux</li>
<li>CpuLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>DiskLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
<li>MemLoad - Int - 是否必填：否 - 
0: 0%或未知  1: 0%～20%
2: 20%～50%  3: 50%～80%
4: 80%～100%</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式，asc升序 或 desc降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选排序[FirstTime|PartitionCount]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTASSETMACHINELISTREQUEST_H_
