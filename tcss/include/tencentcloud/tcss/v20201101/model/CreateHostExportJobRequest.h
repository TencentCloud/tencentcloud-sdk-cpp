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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateHostExportJob请求参数结构体
                */
                class CreateHostExportJobRequest : public AbstractModel
                {
                public:
                    CreateHostExportJobRequest();
                    ~CreateHostExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。<li>Status-String-是否必填：否-agent状态筛选，"ALL": "全部"(或不传该字段), "UNINSTALL"："未安装", "OFFLINE"："离线", "ONLINE"："防护中"</li><li>HostName-String-是否必填：否-主机名筛选</li><li>Group-String-是否必填：否-主机群组搜索</li><li>HostIP-string-是否必填：否-主机ip搜索</li><li>HostID-string-是否必填：否-主机id搜索</li><li>DockerVersion-string-是否必填：否-docker版本搜索</li><li>MachineType-string-是否必填：否-主机来源MachineType搜索，"ALL": "全部"(或不传该字段), 主机来源：[     "CVM",     "ECM",     "LH",     "BM" ]中的之一为腾讯云服务器；[     "Other" ]之一非腾讯云服务器；</li><li>DockerStatus-string-是否必填：否-docker安装状态，"ALL": "全部"(或不传该字段), "INSTALL": "已安装", "UNINSTALL": "未安装"</li><li>ProjectID-string-是否必填：否-所属项目id搜索</li><li>Tag:(tag: key)-string-是否必填：否-标签键值搜索示例Filters":[{"Name":"tag: tke-kind","Values":["service"]}]</li>
                     * @return Filters 过滤条件。<li>Status-String-是否必填：否-agent状态筛选，"ALL": "全部"(或不传该字段), "UNINSTALL"："未安装", "OFFLINE"："离线", "ONLINE"："防护中"</li><li>HostName-String-是否必填：否-主机名筛选</li><li>Group-String-是否必填：否-主机群组搜索</li><li>HostIP-string-是否必填：否-主机ip搜索</li><li>HostID-string-是否必填：否-主机id搜索</li><li>DockerVersion-string-是否必填：否-docker版本搜索</li><li>MachineType-string-是否必填：否-主机来源MachineType搜索，"ALL": "全部"(或不传该字段), 主机来源：[     "CVM",     "ECM",     "LH",     "BM" ]中的之一为腾讯云服务器；[     "Other" ]之一非腾讯云服务器；</li><li>DockerStatus-string-是否必填：否-docker安装状态，"ALL": "全部"(或不传该字段), "INSTALL": "已安装", "UNINSTALL": "未安装"</li><li>ProjectID-string-是否必填：否-所属项目id搜索</li><li>Tag:(tag: key)-string-是否必填：否-标签键值搜索示例Filters":[{"Name":"tag: tke-kind","Values":["service"]}]</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。<li>Status-String-是否必填：否-agent状态筛选，"ALL": "全部"(或不传该字段), "UNINSTALL"："未安装", "OFFLINE"："离线", "ONLINE"："防护中"</li><li>HostName-String-是否必填：否-主机名筛选</li><li>Group-String-是否必填：否-主机群组搜索</li><li>HostIP-string-是否必填：否-主机ip搜索</li><li>HostID-string-是否必填：否-主机id搜索</li><li>DockerVersion-string-是否必填：否-docker版本搜索</li><li>MachineType-string-是否必填：否-主机来源MachineType搜索，"ALL": "全部"(或不传该字段), 主机来源：[     "CVM",     "ECM",     "LH",     "BM" ]中的之一为腾讯云服务器；[     "Other" ]之一非腾讯云服务器；</li><li>DockerStatus-string-是否必填：否-docker安装状态，"ALL": "全部"(或不传该字段), "INSTALL": "已安装", "UNINSTALL": "未安装"</li><li>ProjectID-string-是否必填：否-所属项目id搜索</li><li>Tag:(tag: key)-string-是否必填：否-标签键值搜索示例Filters":[{"Name":"tag: tke-kind","Values":["service"]}]</li>
                     * @param _filters 过滤条件。<li>Status-String-是否必填：否-agent状态筛选，"ALL": "全部"(或不传该字段), "UNINSTALL"："未安装", "OFFLINE"："离线", "ONLINE"："防护中"</li><li>HostName-String-是否必填：否-主机名筛选</li><li>Group-String-是否必填：否-主机群组搜索</li><li>HostIP-string-是否必填：否-主机ip搜索</li><li>HostID-string-是否必填：否-主机id搜索</li><li>DockerVersion-string-是否必填：否-docker版本搜索</li><li>MachineType-string-是否必填：否-主机来源MachineType搜索，"ALL": "全部"(或不传该字段), 主机来源：[     "CVM",     "ECM",     "LH",     "BM" ]中的之一为腾讯云服务器；[     "Other" ]之一非腾讯云服务器；</li><li>DockerStatus-string-是否必填：否-docker安装状态，"ALL": "全部"(或不传该字段), "INSTALL": "已安装", "UNINSTALL": "未安装"</li><li>ProjectID-string-是否必填：否-所属项目id搜索</li><li>Tag:(tag: key)-string-是否必填：否-标签键值搜索示例Filters":[{"Name":"tag: tke-kind","Values":["service"]}]</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Limit 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _limit 偏移量，默认为0。
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
                     * 获取需要返回的数量，默认为10，最大值为10000
                     * @return Offset 需要返回的数量，默认为10，最大值为10000
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为10000
                     * @param _offset 需要返回的数量，默认为10，最大值为10000
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
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
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
                     * 获取升序降序,asc desc
                     * @return Order 升序降序,asc desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升序降序,asc desc
                     * @param _order 升序降序,asc desc
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
                     * 获取导出字段
                     * @return ExportField 导出字段
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置导出字段
                     * @param _exportField 导出字段
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。<li>Status-String-是否必填：否-agent状态筛选，"ALL": "全部"(或不传该字段), "UNINSTALL"："未安装", "OFFLINE"："离线", "ONLINE"："防护中"</li><li>HostName-String-是否必填：否-主机名筛选</li><li>Group-String-是否必填：否-主机群组搜索</li><li>HostIP-string-是否必填：否-主机ip搜索</li><li>HostID-string-是否必填：否-主机id搜索</li><li>DockerVersion-string-是否必填：否-docker版本搜索</li><li>MachineType-string-是否必填：否-主机来源MachineType搜索，"ALL": "全部"(或不传该字段), 主机来源：[     "CVM",     "ECM",     "LH",     "BM" ]中的之一为腾讯云服务器；[     "Other" ]之一非腾讯云服务器；</li><li>DockerStatus-string-是否必填：否-docker安装状态，"ALL": "全部"(或不传该字段), "INSTALL": "已安装", "UNINSTALL": "未安装"</li><li>ProjectID-string-是否必填：否-所属项目id搜索</li><li>Tag:(tag: key)-string-是否必填：否-标签键值搜索示例Filters":[{"Name":"tag: tke-kind","Values":["service"]}]</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为10000
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 升序降序,asc desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEHOSTEXPORTJOBREQUEST_H_
