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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULEXPORTJOBREQUEST_H_

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
                * CreateVulExportJob请求参数结构体
                */
                class CreateVulExportJobRequest : public AbstractModel
                {
                public:
                    CreateVulExportJobRequest();
                    ~CreateVulExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

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

                    /**
                     * 获取需要返回的数量，默认为10000，最大值为10000
                     * @return Limit 需要返回的数量，默认为10000，最大值为10000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10000，最大值为10000
                     * @param _limit 需要返回的数量，默认为10000，最大值为10000
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取过滤条件。
<li>ComponentName- String - 是否必填：否 - 镜像组件名称</li><li>ComponentVersion- String - 是否必填：否 - 镜像组件版本</li><li>ComponentType- String - 是否必填：否 - 镜像组件类型</li><li>VulLevel- String - 是否必填：否 - 漏洞威胁等级</li><li>HasVul- String - 是否必填：否 -是否有漏洞；true：是，false，否；不传或ALL ：全部</li>
                     * @return Filters 过滤条件。
<li>ComponentName- String - 是否必填：否 - 镜像组件名称</li><li>ComponentVersion- String - 是否必填：否 - 镜像组件版本</li><li>ComponentType- String - 是否必填：否 - 镜像组件类型</li><li>VulLevel- String - 是否必填：否 - 漏洞威胁等级</li><li>HasVul- String - 是否必填：否 -是否有漏洞；true：是，false，否；不传或ALL ：全部</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>ComponentName- String - 是否必填：否 - 镜像组件名称</li><li>ComponentVersion- String - 是否必填：否 - 镜像组件版本</li><li>ComponentType- String - 是否必填：否 - 镜像组件类型</li><li>VulLevel- String - 是否必填：否 - 漏洞威胁等级</li><li>HasVul- String - 是否必填：否 -是否有漏洞；true：是，false，否；不传或ALL ：全部</li>
                     * @param _filters 过滤条件。
<li>ComponentName- String - 是否必填：否 - 镜像组件名称</li><li>ComponentVersion- String - 是否必填：否 - 镜像组件版本</li><li>ComponentType- String - 是否必填：否 - 镜像组件类型</li><li>VulLevel- String - 是否必填：否 - 漏洞威胁等级</li><li>HasVul- String - 是否必填：否 -是否有漏洞；true：是，false，否；不传或ALL ：全部</li>
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
                     * 获取排序方式desc ，asc
                     * @return Order 排序方式desc ，asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式desc ，asc
                     * @param _order 排序方式desc ，asc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10000，最大值为10000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>ComponentName- String - 是否必填：否 - 镜像组件名称</li><li>ComponentVersion- String - 是否必填：否 - 镜像组件版本</li><li>ComponentType- String - 是否必填：否 - 镜像组件类型</li><li>VulLevel- String - 是否必填：否 - 漏洞威胁等级</li><li>HasVul- String - 是否必填：否 -是否有漏洞；true：是，false，否；不传或ALL ：全部</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式desc ，asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULEXPORTJOBREQUEST_H_
